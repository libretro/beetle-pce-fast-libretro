/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <compat/posix_string.h>
#include <streams/file_stream.h>

#include "../mednafen-types.h"
#include "../general.h"
#include "../git.h"
#include "../mednafen-endian.h"
#include "../cdstream.h"

#include "CDAccess.h"
#include "CDAccess_Image.h"
#include "audioreader.h"

#include <retro_miscellaneous.h>

enum
{
   CDRF_SUBM_NONE = 0,
   CDRF_SUBM_RW = 1,
   CDRF_SUBM_RW_RAW = 2
};

/* Disk-image(rip) track/sector formats */
enum
{
   DI_FORMAT_AUDIO       = 0x00,
   DI_FORMAT_MODE1       = 0x01,
   DI_FORMAT_MODE1_RAW   = 0x02,
   DI_FORMAT_MODE2       = 0x03,
   DI_FORMAT_MODE2_FORM1 = 0x04,
   DI_FORMAT_MODE2_FORM2 = 0x05,
   DI_FORMAT_MODE2_RAW   = 0x06,
   DI_FORMAT_CDI_RAW     = 0x07,
   _DI_FORMAT_COUNT
};

static const int32_t DI_Size_Table[8] =
{
   2352, 2048, 2352, 2336, 2048, 2324, 2352, 2352
};

static const char *DI_CDRDAO_Strings[8] =
{
   "AUDIO", "MODE1", "MODE1_RAW", "MODE2",
   "MODE2_FORM1", "MODE2_FORM2", "MODE2_RAW", "CDI_RAW"
};

static const char *DI_CUE_Strings[8] =
{
   "AUDIO", "MODE1/2048", "MODE1/2352", "MODE2/2336",
   "MODE2/2048", "MODE2/2324", "MODE2/2352", "CDI/2352"
};

typedef struct CDRFILE_TRACK_INFO
{
   int32_t LBA;
   uint32_t DIFormat;
   uint8_t subq_control;
   int32_t pregap;
   int32_t pregap_dv;
   int32_t postgap;
   int32_t index[100];
   int32_t sectors; /* Not including pregap sectors! */
   cdstream *fp;
   bool FirstFileInstance;
   bool RawAudioMSBFirst;
   long FileOffset;
   unsigned int SubchannelMode;
   uint32_t LastSamplePos;
   AudioReader *AReader;
} CDRFILE_TRACK_INFO;

/* ---- SubQ replacement map (replaces std::map<uint32_t, stl_array<u8,12>>)
 * SBI files are small; a linear-scan array keyed by ABA is plenty. */
#define SUBQ_REPLACE_MAX 16384
typedef struct SubQReplaceEntry
{
   uint32_t aba;
   uint8_t  q[12];
} SubQReplaceEntry;

typedef struct SubQReplaceMap
{
   SubQReplaceEntry *entries;
   size_t n;
   size_t cap;
} SubQReplaceMap;

static void subq_map_init(SubQReplaceMap *m)
{
   m->entries = NULL;
   m->n = 0;
   m->cap = 0;
}

static void subq_map_free(SubQReplaceMap *m)
{
   if(m->entries)
      free(m->entries);
   m->entries = NULL;
   m->n = 0;
   m->cap = 0;
}

static void subq_map_insert(SubQReplaceMap *m, uint32_t aba, const uint8_t *q)
{
   size_t i;
   for(i = 0; i < m->n; i++)
   {
      if(m->entries[i].aba == aba)
      {
         memcpy(m->entries[i].q, q, 12);
         return;
      }
   }
   if(m->n >= m->cap)
   {
      size_t ncap = m->cap ? m->cap * 2 : 256;
      SubQReplaceEntry *ne = (SubQReplaceEntry *)realloc(m->entries, ncap * sizeof(*ne));
      if(!ne)
         return;
      m->entries = ne;
      m->cap = ncap;
   }
   m->entries[m->n].aba = aba;
   memcpy(m->entries[m->n].q, q, 12);
   m->n++;
}

static const uint8_t *subq_map_find(const SubQReplaceMap *m, uint32_t aba)
{
   size_t i;
   for(i = 0; i < m->n; i++)
   {
      if(m->entries[i].aba == aba)
         return m->entries[i].q;
   }
   return NULL;
}

/* ---- toc_streamcache: replaces std::map<std::string, cdstream*> used by
 * the CUE/TOC parser to share one stream across tracks of the same file. */
#define TOC_STREAMCACHE_MAX 100
typedef struct toc_streamcache
{
   char      names[TOC_STREAMCACHE_MAX][4096];
   cdstream *streams[TOC_STREAMCACHE_MAX];
   int       n;
} toc_streamcache;

static void toc_streamcache_init(toc_streamcache *c)
{
   c->n = 0;
}

static cdstream *toc_streamcache_find(const toc_streamcache *c, const char *filename)
{
   int i;
   for(i = 0; i < c->n; i++)
   {
      if(!strcmp(c->names[i], filename))
         return c->streams[i];
   }
   return NULL;
}

static void toc_streamcache_insert(toc_streamcache *c, const char *filename, cdstream *fp)
{
   if(c->n >= TOC_STREAMCACHE_MAX)
      return;
   strncpy(c->names[c->n], filename, 4095);
   c->names[c->n][4095] = '\0';
   c->streams[c->n] = fp;
   c->n++;
}

typedef struct CDAccess_Image
{
   CDAccess base;          /* vtable; must be first member */

   int32_t NumTracks;
   int32_t FirstTrack;
   int32_t LastTrack;
   int32_t total_sectors;
   uint8_t disc_type;
   CDRFILE_TRACK_INFO Tracks[100]; /* Track #0(HMM?) through 99 */
   TOC toc;

   SubQReplaceMap SubQReplaceMap;

   char base_dir[4096];
} CDAccess_Image;

/* in-place ASCII uppercase */
static void img_strtoupper(char *str)
{
   size_t x;
   for(x = 0; str[x]; x++)
   {
      if(str[x] >= 'a' && str[x] <= 'z')
         str[x] = str[x] - 'a' + 'A';
   }
}

/* trim leading/trailing whitespace in place */
static void img_trim(char *s)
{
   size_t len = strlen(s);
   size_t i = 0;
   size_t start;
   while(len > 0)
   {
      char c = s[len - 1];
      if(c == ' ' || c == '\r' || c == '\n' || c == '\t' || c == 0x0b)
         s[--len] = '\0';
      else
         break;
   }
   start = 0;
   while(s[start] == ' ' || s[start] == '\r' || s[start] == '\n' || s[start] == '\t' || s[start] == 0x0b)
      start++;
   if(start > 0)
   {
      for(i = 0; s[start + i]; i++)
         s[i] = s[start + i];
      s[i] = '\0';
   }
}

/* Read one whitespace-separated (optionally quoted) token from src into
 * dest (cap bytes). Returns the offset of the start of the next token.
 * Was static size_t UnQuotify(const std::string&, size_t, std::string&, bool). */
static size_t UnQuotify(const char *src, size_t source_len, size_t source_offset,
      char *dest, size_t dest_cap, bool parse_quotes)
{
   bool in_quote = 0;
   bool already_normal = 0;
   size_t dn = 0;

   if(dest_cap)
      dest[0] = '\0';

   while(source_offset < source_len)
   {
      if(src[source_offset] == ' ' || src[source_offset] == '\t')
      {
         if(!in_quote)
         {
            if(already_normal)
               break;
            else
            {
               source_offset++;
               continue;
            }
         }
      }

      if(src[source_offset] == '"' && parse_quotes)
      {
         if(in_quote)
         {
            source_offset++;
            break;
         }
         else
            in_quote = 1;
      }
      else
      {
         if(dest_cap && dn + 1 < dest_cap)
            dest[dn++] = src[source_offset];
         already_normal = 1;
      }
      source_offset++;
   }

   if(dest_cap)
      dest[dn] = '\0';

   while(source_offset < source_len)
   {
      if(src[source_offset] != ' ' && src[source_offset] != '\t')
         break;
      source_offset++;
   }

   return source_offset;
}

static uint32_t CDAccess_Image_GetSectorCount(CDAccess_Image *self, CDRFILE_TRACK_INFO *track)
{
   if(track->DIFormat == DI_FORMAT_AUDIO)
   {
      if(track->AReader)
         return (uint32_t)(((AR_FrameCount(track->AReader) * 4) - track->FileOffset) / 2352);
      else
      {
         const int64_t size = cdstream_size(track->fp);
         if(track->SubchannelMode)
            return (uint32_t)((size - track->FileOffset) / (2352 + 96));
         return (uint32_t)((size - track->FileOffset) / 2352);
      }
   }
   else
   {
      const int64_t size = cdstream_size(track->fp);
      return (uint32_t)((size - track->FileOffset) / DI_Size_Table[track->DIFormat]);
   }
}

static bool CDAccess_Image_ParseTOCFileLineInfo(CDAccess_Image *self,
      CDRFILE_TRACK_INFO *track, const int tracknum, const char *filename,
      const char *binoffset, const char *msfoffset, const char *length,
      bool image_memcache, toc_streamcache *cache)
{
   long offset = 0;
   long tmp_long;
   int m, s, f;
   uint32_t sector_mult;
   long sectors;
   size_t fnlen = strlen(filename);
   cdstream *cached = toc_streamcache_find(cache, filename);

   if(cached)
   {
      track->FirstFileInstance = 0;
      track->fp = cached;
   }
   else
   {
      char efn[4096];

      track->FirstFileInstance = 1;

      MDFN_EvalFIP(efn, sizeof(efn), self->base_dir, filename);

      if(image_memcache)
         track->fp = cdstream_new_memcached(efn);
      else
         track->fp = cdstream_new(efn);

      toc_streamcache_insert(cache, filename, track->fp);
   }

   if(fnlen >= 4 && !strcasecmp(filename + fnlen - 4, ".wav"))
   {
      track->AReader = AR_Open(track->fp);
      if(!track->AReader)
      {
         log_cb(RETRO_LOG_ERROR, "TODO ERROR\n");
         return false;
      }
   }

   sector_mult = DI_Size_Table[track->DIFormat];

   if(track->SubchannelMode)
      sector_mult += 96;

   if(binoffset && sscanf(binoffset, "%ld", &tmp_long) == 1)
      offset += tmp_long;

   if(msfoffset && sscanf(msfoffset, "%d:%d:%d", &m, &s, &f) == 3)
      offset += ((m * 60 + s) * 75 + f) * sector_mult;

   track->FileOffset = offset;
   sectors = CDAccess_Image_GetSectorCount(self, track);

   if(length)
   {
      tmp_long = sectors;

      if(sscanf(length, "%d:%d:%d", &m, &s, &f) == 3)
         tmp_long = (m * 60 + s) * 75 + f;
      else if(track->DIFormat == DI_FORMAT_AUDIO)
      {
         char *endptr = NULL;
         tmp_long = strtol(length, &endptr, 10);
         if(endptr == length)
            tmp_long = sectors;
         else
            tmp_long /= 588;
      }

      if(tmp_long > sectors)
      {
         log_cb(RETRO_LOG_ERROR, "Length specified in TOC file for track %d is too large by %ld sectors!\n", tracknum, (long)(tmp_long - sectors));
         return false;
      }
      sectors = tmp_long;
   }

   track->sectors = sectors;

   return true;
}

static bool CDAccess_Image_LoadSBI(CDAccess_Image *self, const char *sbi_path)
{
   uint8_t header[4];
   uint8_t ed[4 + 10];
   uint8_t tmpq[12];
   RFILE *sbiFile;

   log_cb(RETRO_LOG_INFO, "Loading SBI file \"%s\"...\n", sbi_path);

   sbiFile = filestream_open(sbi_path, RETRO_VFS_FILE_ACCESS_READ, RETRO_VFS_FILE_ACCESS_HINT_NONE);
   /* SBI file not available, but don't error out. */
   if(!sbiFile)
      return true;

   if(filestream_read(sbiFile, header, 4) != 4 || memcmp(header, "SBI\0", 4))
   {
      log_cb(RETRO_LOG_ERROR, "Not recognized a valid SBI file.");
      filestream_close(sbiFile);
      return false;
   }

   while(filestream_read(sbiFile, ed, sizeof(ed)) == sizeof(ed))
   {
      uint32_t aba;

      if(!BCD_is_valid(ed[0]) || !BCD_is_valid(ed[1]) || !BCD_is_valid(ed[2]))
      {
         log_cb(RETRO_LOG_ERROR, "Bad BCD MSF offset in SBI file: %02x:%02x:%02x\n", ed[0], ed[1], ed[2]);
         filestream_close(sbiFile);
         return false;
      }

      if(ed[3] != 0x01)
      {
         log_cb(RETRO_LOG_ERROR, "Unrecognized boogly oogly in SBI file: %02x\n", ed[3]);
         filestream_close(sbiFile);
         return false;
      }

      memcpy(tmpq, &ed[4], 10);

      subq_generate_checksum(tmpq);
      tmpq[10] ^= 0xFF;
      tmpq[11] ^= 0xFF;

      aba = AMSF_to_ABA(BCD_to_U8(ed[0]), BCD_to_U8(ed[1]), BCD_to_U8(ed[2]));

      subq_map_insert(&self->SubQReplaceMap, aba, tmpq);
   }

   log_cb(RETRO_LOG_INFO, "Loaded Q subchannel replacements for %zu sectors.\n", self->SubQReplaceMap.n);
   filestream_close(sbiFile);
   return true;
}

static bool StringToMSF(const char* str, unsigned* m, unsigned* s, unsigned* f)
{
   if(sscanf(str, "%u:%u:%u", m, s, f) != 3)
   {
      log_cb(RETRO_LOG_ERROR, "M:S:F time \"%s\" is malformed.\n", str);
      return false;
   }

   if(*m > 99 || *s > 59 || *f > 74)
   {
      log_cb(RETRO_LOG_ERROR, "M:S:F time \"%s\" contains component(s) out of range.\n", str);
      return false;
   }

   return true;
}

static void CDAccess_Image_GenerateTOC(CDAccess_Image *self)
{
   int i;
   TOC_Clear(&self->toc);

   self->toc.first_track = self->FirstTrack;
   self->toc.last_track = self->FirstTrack + self->NumTracks - 1;
   self->toc.disc_type = self->disc_type;

   for(i = self->FirstTrack; i < self->FirstTrack + self->NumTracks; i++)
   {
      if(self->Tracks[i].DIFormat == DI_FORMAT_CDI_RAW)
      {
         int ft = (i + 1 < 99) ? (i + 1) : 99;
         self->toc.first_track = ft;
         self->toc.last_track = (ft > self->toc.last_track) ? ft : self->toc.last_track;
      }

      self->toc.tracks[i].lba = self->Tracks[i].LBA;
      self->toc.tracks[i].adr = ADR_CURPOS;
      self->toc.tracks[i].control = self->Tracks[i].subq_control;
      self->toc.tracks[i].valid = true;
   }

   self->toc.tracks[100].lba = self->total_sectors;
   self->toc.tracks[100].adr = ADR_CURPOS;
   self->toc.tracks[100].control = self->Tracks[self->FirstTrack + self->NumTracks - 1].subq_control;
   self->toc.tracks[100].valid = true;
}

static bool CDAccess_Image_ImageOpen(CDAccess_Image *self, const char *path, bool image_memcache)
{
   cdstream fp;
   static const unsigned max_args = 4;
   char linebuf[1024];
   char cmdbuf[256];
   char args[4][256];
   bool IsTOC = false;
   int32_t active_track = -1;
   int32_t AutoTrackInc = 1; /* For TOC */
   CDRFILE_TRACK_INFO TmpTrack;
   char file_base[4096];
   char file_ext[4096];
   toc_streamcache cache;
   int32_t RunningLBA;
   long FileOffset;
   int x;

   toc_streamcache_init(&cache);
   self->disc_type = DISC_TYPE_CDDA_OR_M1;
   memset(&TmpTrack, 0, sizeof(TmpTrack));

   if(image_memcache)
   {
      if(!cdstream_open_memcached(&fp, path))
         return false;
   }
   else
   {
      if(!cdstream_open(&fp, path))
         return false;
   }

   MDFN_GetFilePathComponents(path, self->base_dir, file_base, file_ext, sizeof(self->base_dir));

   if(!strcasecmp(file_ext, ".toc"))
   {
      log_cb(RETRO_LOG_INFO, "TOC file detected.\n");
      IsTOC = true;
   }

   /* Check for annoying UTF-8 BOM. */
   if(!IsTOC)
   {
      uint8_t bom_tmp[3];
      if(cdstream_read(&fp, bom_tmp, 3) == 3 && bom_tmp[0] == 0xEF && bom_tmp[1] == 0xBB && bom_tmp[2] == 0xBF)
         log_cb(RETRO_LOG_WARN, "UTF-8 BOM detected at start of CUE sheet.\n");
      else
         cdstream_seek(&fp, 0, SEEK_SET);
   }

   /* Assign opposite maximum values so our tests will work! */
   self->FirstTrack = 99;
   self->LastTrack = 0;

   while(cdstream_get_line(&fp, linebuf, sizeof(linebuf)) >= 0)
   {
      unsigned argcount = 0;

      if(IsTOC)
      {
         /* Handle TOC format comments */
         char *ss_loc = strstr(linebuf, "//");
         if(ss_loc)
            *ss_loc = '\0';
      }

      img_trim(linebuf);

      if(strlen(linebuf) == 0) /* Skip blank lines. */
         continue;

      /* Grab command and arguments. */
      {
         size_t offs = 0;
         size_t llen = strlen(linebuf);
         unsigned xa;

         offs = UnQuotify(linebuf, llen, offs, cmdbuf, sizeof(cmdbuf), false);
         for(argcount = 0; argcount < max_args && offs < llen; argcount++)
            offs = UnQuotify(linebuf, llen, offs, args[argcount], sizeof(args[0]), true);

         for(xa = argcount; xa < max_args; xa++)
            args[xa][0] = '\0';

         img_strtoupper(cmdbuf);
      }

      if(IsTOC)
      {
         if(!strcmp(cmdbuf, "TRACK"))
         {
            int32_t i;
            int format_lookup;

            if(active_track >= 0)
            {
               memcpy(&self->Tracks[active_track], &TmpTrack, sizeof(TmpTrack));
               memset(&TmpTrack, 0, sizeof(TmpTrack));
               active_track = -1;
            }

            for(i = 2; i < 100; i++)
               TmpTrack.index[i] = -1;

            if(AutoTrackInc > 99)
            {
               log_cb(RETRO_LOG_ERROR, "Invalid track number: %d", AutoTrackInc);
               cdstream_close(&fp);
               return false;
            }

            active_track = AutoTrackInc++;
            if(active_track < self->FirstTrack)
               self->FirstTrack = active_track;
            if(active_track > self->LastTrack)
               self->LastTrack = active_track;

            for(format_lookup = 0; format_lookup < _DI_FORMAT_COUNT; format_lookup++)
            {
               if(!strcasecmp(args[0], DI_CDRDAO_Strings[format_lookup]))
               {
                  TmpTrack.DIFormat = format_lookup;
                  break;
               }
            }

            if(format_lookup == _DI_FORMAT_COUNT)
            {
               log_cb(RETRO_LOG_ERROR, "Invalid track format: %s", args[0]);
               cdstream_close(&fp);
               return false;
            }

            if(TmpTrack.DIFormat == DI_FORMAT_AUDIO)
               TmpTrack.RawAudioMSBFirst = true;

            if(!strcasecmp(args[1], "RW"))
            {
               TmpTrack.SubchannelMode = CDRF_SUBM_RW;
               log_cb(RETRO_LOG_ERROR, "\"RW\" format subchannel data not supported, only \"RW_RAW\" is!");
            }
            else if(!strcasecmp(args[1], "RW_RAW"))
               TmpTrack.SubchannelMode = CDRF_SUBM_RW_RAW;
         }
         else if(!strcmp(cmdbuf, "FIFO"))
         {
            log_cb(RETRO_LOG_INFO, "Unsupported directive: %s\n", cmdbuf);
            cdstream_close(&fp);
            return false;
         }
         else if(!strcmp(cmdbuf, "FILE") || !strcmp(cmdbuf, "AUDIOFILE"))
         {
            const char *binoffset = NULL;
            const char *msfoffset = NULL;
            const char *length = NULL;

            if(args[1][0] == '#')
            {
               binoffset = args[1] + 1;
               msfoffset = args[2];
               length = args[3];
            }
            else
            {
               msfoffset = args[1];
               length = args[2];
            }
            if(!CDAccess_Image_ParseTOCFileLineInfo(self, &TmpTrack, active_track, args[0], binoffset, msfoffset, length, image_memcache, &cache))
            {
               cdstream_close(&fp);
               return false;
            }
         }
         else if(!strcmp(cmdbuf, "DATAFILE"))
         {
            const char *binoffset = NULL;
            const char *length = NULL;

            if(args[1][0] == '#')
            {
               binoffset = args[1] + 1;
               length = args[2];
            }
            else
               length = args[1];

            if(!CDAccess_Image_ParseTOCFileLineInfo(self, &TmpTrack, active_track, args[0], binoffset, NULL, length, image_memcache, &cache))
            {
               cdstream_close(&fp);
               return false;
            }
         }
         else if(!strcmp(cmdbuf, "INDEX"))
         {
            log_cb(RETRO_LOG_ERROR, "Unsupported directive: %s", cmdbuf);
            cdstream_close(&fp);
            return false;
         }
         else if(!strcmp(cmdbuf, "PREGAP"))
         {
            unsigned int m, s, f;
            if(active_track < 0)
            {
               log_cb(RETRO_LOG_ERROR, "Command %s is outside of a TRACK definition!\n", cmdbuf);
               cdstream_close(&fp);
               return false;
            }
            if(!StringToMSF(args[0], &m, &s, &f))
            {
               cdstream_close(&fp);
               return false;
            }
            TmpTrack.pregap = (m * 60 + s) * 75 + f;
         }
         else if(!strcmp(cmdbuf, "START"))
         {
            unsigned int m, s, f;
            if(active_track < 0)
            {
               log_cb(RETRO_LOG_ERROR, "Command %s is outside of a TRACK definition!\n", cmdbuf);
               cdstream_close(&fp);
               return false;
            }
            if(!StringToMSF(args[0], &m, &s, &f))
            {
               cdstream_close(&fp);
               return false;
            }
            TmpTrack.pregap = (m * 60 + s) * 75 + f;
         }
         else if(!strcmp(cmdbuf, "TWO_CHANNEL_AUDIO"))
            TmpTrack.subq_control &= ~SUBQ_CTRLF_4CH;
         else if(!strcmp(cmdbuf, "FOUR_CHANNEL_AUDIO"))
            TmpTrack.subq_control |= SUBQ_CTRLF_4CH;
         else if(!strcmp(cmdbuf, "NO"))
         {
            img_strtoupper(args[0]);

            if(!strcmp(args[0], "COPY"))
               TmpTrack.subq_control &= ~SUBQ_CTRLF_DCP;
            else if(!strcmp(args[0], "PRE_EMPHASIS"))
               TmpTrack.subq_control &= ~SUBQ_CTRLF_PRE;
            else
            {
               log_cb(RETRO_LOG_ERROR, "Unsupported argument to \"NO\" directive: %s", args[0]);
               cdstream_close(&fp);
               return false;
            }
         }
         else if(!strcmp(cmdbuf, "COPY"))
            TmpTrack.subq_control |= SUBQ_CTRLF_DCP;
         else if(!strcmp(cmdbuf, "PRE_EMPHASIS"))
            TmpTrack.subq_control |= SUBQ_CTRLF_PRE;
         else if(!strcmp(cmdbuf, "CD_DA"))
            self->disc_type = DISC_TYPE_CDDA_OR_M1;
         else if(!strcmp(cmdbuf, "CD_ROM"))
            self->disc_type = DISC_TYPE_CDDA_OR_M1;
         else if(!strcmp(cmdbuf, "CD_ROM_XA"))
            self->disc_type = DISC_TYPE_CD_XA;
      }
      else /* CUE sheet handling */
      {
         if(!strcmp(cmdbuf, "FILE"))
         {
            char efn[4096];

            if(active_track >= 0)
            {
               memcpy(&self->Tracks[active_track], &TmpTrack, sizeof(TmpTrack));
               memset(&TmpTrack, 0, sizeof(TmpTrack));
               active_track = -1;
            }

            if(!strstr(args[0], "cdrom://"))
               MDFN_EvalFIP(efn, sizeof(efn), self->base_dir, args[0]);
            else
            {
               strncpy(efn, args[0], sizeof(efn) - 1);
               efn[sizeof(efn) - 1] = '\0';
            }

            TmpTrack.FirstFileInstance = 1;

            if(image_memcache)
               TmpTrack.fp = cdstream_new_memcached(efn);
            else
               TmpTrack.fp = cdstream_new(efn);

            if(!strcasecmp(args[1], "BINARY"))
            {
            }
            else if(!strcasecmp(args[1], "WAVE") || !strcasecmp(args[1], "WAV"))
            {
            }
            else if(!strcasecmp(args[1], "OGG") || !strcasecmp(args[1], "VORBIS") || !strcasecmp(args[1], "PCM")
                  || !strcasecmp(args[1], "MPC") || !strcasecmp(args[1], "MP+"))
            {
               TmpTrack.AReader = AR_Open(TmpTrack.fp);
               if(!TmpTrack.AReader)
               {
                  log_cb(RETRO_LOG_ERROR, "Unsupported audio track file format: %s\n", args[0]);
                  cdstream_close(&fp);
                  return false;
               }
            }
            else
            {
               log_cb(RETRO_LOG_ERROR, "Unsupported track format: %s\n", args[1]);
               cdstream_close(&fp);
               return false;
            }
         }
         else if(!strcmp(cmdbuf, "TRACK"))
         {
            int32_t i;
            int format_lookup;

            if(active_track >= 0)
            {
               memcpy(&self->Tracks[active_track], &TmpTrack, sizeof(TmpTrack));
               TmpTrack.FirstFileInstance = 0;
               TmpTrack.pregap = 0;
               TmpTrack.pregap_dv = 0;
               TmpTrack.postgap = 0;
               TmpTrack.index[0] = -1;
               TmpTrack.index[1] = 0;
            }

            for(i = 2; i < 100; i++)
               TmpTrack.index[i] = -1;

            active_track = atoi(args[0]);

            if(active_track < 1 || active_track > 99)
            {
               log_cb(RETRO_LOG_ERROR, "Invalid track number: %d\n", active_track);
               cdstream_close(&fp);
               return false;
            }

            if(active_track < self->FirstTrack)
               self->FirstTrack = active_track;
            if(active_track > self->LastTrack)
               self->LastTrack = active_track;

            for(format_lookup = 0; format_lookup < _DI_FORMAT_COUNT; format_lookup++)
            {
               if(!strcasecmp(args[1], DI_CUE_Strings[format_lookup]))
               {
                  TmpTrack.DIFormat = format_lookup;
                  break;
               }
            }

            if(format_lookup == _DI_FORMAT_COUNT)
            {
               log_cb(RETRO_LOG_ERROR, "Invalid track format: %s\n", args[1]);
               cdstream_close(&fp);
               return false;
            }
         }
         else if(!strcmp(cmdbuf, "INDEX"))
         {
            if(active_track >= 0)
            {
               unsigned wi;
               unsigned int m, s, f;

               if(!StringToMSF(args[1], &m, &s, &f))
               {
                  cdstream_close(&fp);
                  return false;
               }

               if(sscanf(args[0], "%u", &wi) == 1 && wi < 100)
                  TmpTrack.index[wi] = (m * 60 + s) * 75 + f;
               else
               {
                  log_cb(RETRO_LOG_ERROR, "Malformed \"INDEX\" directive: %s\n", cmdbuf);
                  cdstream_close(&fp);
                  return false;
               }
            }
         }
         else if(!strcmp(cmdbuf, "PREGAP"))
         {
            if(active_track >= 0)
            {
               unsigned int m, s, f;
               if(!StringToMSF(args[0], &m, &s, &f))
               {
                  cdstream_close(&fp);
                  return false;
               }
               TmpTrack.pregap = (m * 60 + s) * 75 + f;
            }
         }
         else if(!strcmp(cmdbuf, "POSTGAP"))
         {
            if(active_track >= 0)
            {
               unsigned int m, s, f;
               if(!StringToMSF(args[0], &m, &s, &f))
               {
                  cdstream_close(&fp);
                  return false;
               }
               TmpTrack.postgap = (m * 60 + s) * 75 + f;
            }
         }
         else if(!strcmp(cmdbuf, "REM"))
         {
         }
         else if(!strcmp(cmdbuf, "FLAGS"))
         {
            unsigned i;
            TmpTrack.subq_control &= ~(SUBQ_CTRLF_PRE | SUBQ_CTRLF_DCP | SUBQ_CTRLF_4CH);
            for(i = 0; i < argcount; i++)
            {
               if(!strcmp(args[i], "DCP"))
                  TmpTrack.subq_control |= SUBQ_CTRLF_DCP;
               else if(!strcmp(args[i], "4CH"))
                  TmpTrack.subq_control |= SUBQ_CTRLF_4CH;
               else if(!strcmp(args[i], "PRE"))
                  TmpTrack.subq_control |= SUBQ_CTRLF_PRE;
               else if(!strcmp(args[i], "SCMS"))
               {
               }
               else
               {
                  log_cb(RETRO_LOG_ERROR, "Unknown CUE sheet \"FLAGS\" directive flag \"%s\".\n", args[i]);
                  cdstream_close(&fp);
                  return false;
               }
            }
         }
         else if(!strcmp(cmdbuf, "CDTEXTFILE") || !strcmp(cmdbuf, "CATALOG") || !strcmp(cmdbuf, "ISRC") ||
               !strcmp(cmdbuf, "TITLE") || !strcmp(cmdbuf, "PERFORMER") || !strcmp(cmdbuf, "SONGWRITER"))
         {
            log_cb(RETRO_LOG_WARN, "Unsupported CUE sheet directive: \"%s\".\n", cmdbuf);
         }
         else
         {
            log_cb(RETRO_LOG_ERROR, "Unknown CUE sheet directive \"%s\".\n", cmdbuf);
            cdstream_close(&fp);
            return false;
         }
      }
   }

   cdstream_close(&fp);

   if(active_track >= 0)
      memcpy(&self->Tracks[active_track], &TmpTrack, sizeof(TmpTrack));

   if(self->FirstTrack > self->LastTrack)
   {
      log_cb(RETRO_LOG_ERROR, "No tracks found!\n");
      return false;
   }

   self->NumTracks = 1 + self->LastTrack - self->FirstTrack;

   RunningLBA = 0;
   FileOffset = 0;

   RunningLBA -= 150;
   self->Tracks[self->FirstTrack].pregap += 150;

   for(x = self->FirstTrack; x < (self->FirstTrack + self->NumTracks); x++)
   {
      if(!self->Tracks[x].fp && !self->Tracks[x].AReader)
      {
         log_cb(RETRO_LOG_ERROR, "Missing track %u.\n", x);
         return false;
      }

      if(self->Tracks[x].DIFormat == DI_FORMAT_AUDIO)
         self->Tracks[x].subq_control &= ~SUBQ_CTRLF_DATA;
      else
         self->Tracks[x].subq_control |= SUBQ_CTRLF_DATA;

      if(!IsTOC)
      {
         if(self->disc_type != DISC_TYPE_CD_I)
         {
            switch(self->Tracks[x].DIFormat)
            {
               default: break;
               case DI_FORMAT_MODE2:
               case DI_FORMAT_MODE2_FORM1:
               case DI_FORMAT_MODE2_FORM2:
               case DI_FORMAT_MODE2_RAW:
                  self->disc_type = DISC_TYPE_CD_XA;
                  break;
               case DI_FORMAT_CDI_RAW:
                  self->disc_type = DISC_TYPE_CD_I;
                  break;
            }
         }
      }

      if(IsTOC)
      {
         RunningLBA += self->Tracks[x].pregap;
         self->Tracks[x].LBA = RunningLBA;
         RunningLBA += self->Tracks[x].sectors;
         RunningLBA += self->Tracks[x].postgap;
      }
      else
      {
         if(self->Tracks[x].FirstFileInstance)
            FileOffset = 0;

         RunningLBA += self->Tracks[x].pregap;

         self->Tracks[x].pregap_dv = 0;

         if(self->Tracks[x].index[0] != -1)
            self->Tracks[x].pregap_dv = self->Tracks[x].index[1] - self->Tracks[x].index[0];

         FileOffset += self->Tracks[x].pregap_dv * DI_Size_Table[self->Tracks[x].DIFormat];

         RunningLBA += self->Tracks[x].pregap_dv;

         self->Tracks[x].LBA = RunningLBA;

         self->Tracks[x].FileOffset = FileOffset;
         self->Tracks[x].sectors = CDAccess_Image_GetSectorCount(self, &self->Tracks[x]);

         if((x + 1) >= (self->FirstTrack + self->NumTracks) || self->Tracks[x+1].FirstFileInstance)
         {
         }
         else
         {
            if(self->Tracks[x + 1].index[0] == -1)
               self->Tracks[x].sectors = self->Tracks[x + 1].index[1] - self->Tracks[x].index[1];
            else
               self->Tracks[x].sectors = self->Tracks[x + 1].index[0] - self->Tracks[x].index[1];
         }

         RunningLBA += self->Tracks[x].sectors;
         RunningLBA += self->Tracks[x].postgap;

         FileOffset += self->Tracks[x].sectors * DI_Size_Table[self->Tracks[x].DIFormat];
      }
   }

   self->total_sectors = RunningLBA;

   /* Adjust indexes for MakeSubPQ() */
   for(x = self->FirstTrack; x < (self->FirstTrack + self->NumTracks); x++)
   {
      const int32_t base = self->Tracks[x].index[1];
      int32_t i;

      for(i = 0; i < 100; i++)
      {
         if(i == 0 || self->Tracks[x].index[i] == -1)
            self->Tracks[x].index[i] = INT32_MAX;
         else
            self->Tracks[x].index[i] = self->Tracks[x].LBA + (self->Tracks[x].index[i] - base);
      }
   }

   /* Load SBI file, if present */
   if(!IsTOC)
   {
      char sbi_ext[4];
      char sbi_path[4096];
      char sbi_rel[4096];
      size_t pl;

      sbi_ext[0] = 's'; sbi_ext[1] = 'b'; sbi_ext[2] = 'i'; sbi_ext[3] = 0;

      if(strlen(file_ext) == 4 && file_ext[0] == '.')
      {
         unsigned i;
         for(i = 0; i < 3; i++)
         {
            if(file_ext[1 + i] >= 'A' && file_ext[1 + i] <= 'Z')
               sbi_ext[i] += 'A' - 'a';
         }
      }

      strncpy(sbi_rel, file_base, sizeof(sbi_rel) - 1);
      sbi_rel[sizeof(sbi_rel) - 1] = '\0';
      pl = strlen(sbi_rel);
      snprintf(sbi_rel + pl, sizeof(sbi_rel) - pl, ".%s", sbi_ext);

      MDFN_EvalFIP(sbi_path, sizeof(sbi_path), self->base_dir, sbi_rel);

      if(!CDAccess_Image_LoadSBI(self, sbi_path))
         return false;
   }

   CDAccess_Image_GenerateTOC(self);

   return true;
}

static void CDAccess_Image_Cleanup(CDAccess_Image *self)
{
   int32_t track;
   for(track = 0; track < 100; track++)
   {
      CDRFILE_TRACK_INFO *this_track = &self->Tracks[track];

      if(this_track->FirstFileInstance)
      {
         if(this_track->AReader)
         {
            AR_Close(this_track->AReader);
            this_track->AReader = NULL;
         }

         if(this_track->fp)
         {
            cdstream_destroy(this_track->fp);
            this_track->fp = NULL;
         }
      }
   }
}

/* Note: this function makes use of the current contents(as in |=) in SubPWBuf. */
static int32_t CDAccess_Image_MakeSubPQ(CDAccess_Image *self, int32_t lba, uint8_t *SubPWBuf)
{
   uint8_t buf[0xC];
   int32_t track;
   uint32_t lba_relative;
   uint32_t ma, sa, fa;
   uint32_t m, s, f;
   uint8_t pause_or = 0x00;
   uint8_t adr;
   uint8_t control;
   const uint8_t *repl;
   int index;
   int32_t i;
   int i2;

   for(track = self->FirstTrack; track < (self->FirstTrack + self->NumTracks); track++)
   {
      if(lba >= (self->Tracks[track].LBA - self->Tracks[track].pregap_dv - self->Tracks[track].pregap) && lba < (self->Tracks[track].LBA + self->Tracks[track].sectors + self->Tracks[track].postgap))
         break;
   }

   if(lba < self->Tracks[track].LBA)
      lba_relative = self->Tracks[track].LBA - 1 - lba;
   else
      lba_relative = lba - self->Tracks[track].LBA;

   f = (lba_relative % 75);
   s = ((lba_relative / 75) % 60);
   m = (lba_relative / 75 / 60);

   fa = (lba + 150) % 75;
   sa = ((lba + 150) / 75) % 60;
   ma = ((lba + 150) / 75 / 60);

   adr = 0x1;
   control = self->Tracks[track].subq_control;

   if((lba < self->Tracks[track].LBA) || (lba >= self->Tracks[track].LBA + self->Tracks[track].sectors))
      pause_or = 0x80;

   {
      int32_t pg_offset = (int32_t)lba - self->Tracks[track].LBA;
      if(pg_offset < -150)
      {
         if((self->Tracks[track].subq_control & SUBQ_CTRLF_DATA) && (self->FirstTrack < track) && !(self->Tracks[track - 1].subq_control & SUBQ_CTRLF_DATA))
            control = self->Tracks[track - 1].subq_control;
      }
   }

   memset(buf, 0, 0xC);
   buf[0] = (adr << 0) | (control << 4);
   buf[1] = U8_to_BCD(track);

   index = 0;
   for(i = 0; i < 100; i++)
   {
      if(lba >= self->Tracks[track].index[i])
         index = i;
   }
   buf[2] = U8_to_BCD(index);

   buf[3] = U8_to_BCD(m);
   buf[4] = U8_to_BCD(s);
   buf[5] = U8_to_BCD(f);

   buf[6] = 0;

   buf[7] = U8_to_BCD(ma);
   buf[8] = U8_to_BCD(sa);
   buf[9] = U8_to_BCD(fa);

   subq_generate_checksum(buf);

   repl = subq_map_find(&self->SubQReplaceMap, LBA_to_ABA(lba));
   if(repl)
      memcpy(buf, repl, 12);

   for(i2 = 0; i2 < 96; i2++)
      SubPWBuf[i2] |= (((buf[i2 >> 3] >> (7 - (i2 & 0x7))) & 1) ? 0x40 : 0x00) | pause_or;

   return track;
}

static bool CDAccess_Image_Read_Raw_Sector(CDAccess *cda, uint8_t *buf, int32_t lba)
{
   CDAccess_Image *self = (CDAccess_Image *)cda;
   uint8_t SimuQ[0xC];
   int32_t track;
   CDRFILE_TRACK_INFO *ct;

   if(lba >= self->total_sectors)
   {
      uint8_t data_synth_mode = (self->disc_type == DISC_TYPE_CD_XA ? 0x02 : 0x01);

      switch(self->Tracks[self->LastTrack].DIFormat)
      {
         case DI_FORMAT_AUDIO: break;
         case DI_FORMAT_MODE1_RAW:
         case DI_FORMAT_MODE1: data_synth_mode = 0x01; break;
         case DI_FORMAT_MODE2_RAW:
         case DI_FORMAT_MODE2_FORM1:
         case DI_FORMAT_MODE2_FORM2:
         case DI_FORMAT_MODE2:
         case DI_FORMAT_CDI_RAW: data_synth_mode = 0x02; break;
      }

      synth_leadout_sector_lba(data_synth_mode, &self->toc, lba, buf);
      return true;
   }

   memset(buf + 2352, 0, 96);
   track = CDAccess_Image_MakeSubPQ(self, lba, buf + 2352);
   subq_deinterleave(buf + 2352, SimuQ);

   ct = &self->Tracks[track];

   if(lba < (ct->LBA - ct->pregap_dv) || lba >= (ct->LBA + ct->sectors))
   {
      int32_t pg_offset = lba - ct->LBA;
      CDRFILE_TRACK_INFO* et = ct;

      if(pg_offset < -150)
      {
         if((self->Tracks[track].subq_control & SUBQ_CTRLF_DATA) && (self->FirstTrack < track) && !(self->Tracks[track - 1].subq_control & SUBQ_CTRLF_DATA))
            et = &self->Tracks[track - 1];
      }

      memset(buf, 0, 2352);
      switch(et->DIFormat)
      {
         case DI_FORMAT_AUDIO: break;
         case DI_FORMAT_MODE1_RAW:
         case DI_FORMAT_MODE1:
            encode_mode1_sector(lba + 150, buf);
            break;
         case DI_FORMAT_MODE2_RAW:
         case DI_FORMAT_MODE2_FORM1:
         case DI_FORMAT_MODE2_FORM2:
         case DI_FORMAT_MODE2:
         case DI_FORMAT_CDI_RAW:
            buf[12 +  6] = 0x20;
            buf[12 + 10] = 0x20;
            encode_mode2_form2_sector(lba + 150, buf);
            break;
      }
   }
   else
   {
      if(ct->AReader)
      {
         int16_t AudioBuf[588 * 2];
         int i;
         uint64_t frames_read = AR_Read(ct->AReader, (ct->FileOffset / 4) + (lba - ct->LBA) * 588, AudioBuf, 588);

         ct->LastSamplePos += frames_read;

         if(frames_read > 588)
            frames_read = 0;

         if(frames_read < 588)
            memset((uint8_t *)AudioBuf + frames_read * 2 * sizeof(int16_t), 0, (588 - frames_read) * 2 * sizeof(int16_t));

         for(i = 0; i < 588 * 2; i++)
            MDFN_en16lsb(buf + i * 2, AudioBuf[i]);
      }
      else
      {
         long SeekPos = ct->FileOffset;
         long LBARelPos = lba - ct->LBA;

         SeekPos += LBARelPos * DI_Size_Table[ct->DIFormat];

         if(ct->SubchannelMode)
            SeekPos += 96 * (lba - ct->LBA);

         cdstream_seek(ct->fp, SeekPos, SEEK_SET);

         switch(ct->DIFormat)
         {
            case DI_FORMAT_AUDIO:
               cdstream_read(ct->fp, buf, 2352);
               if(ct->RawAudioMSBFirst)
                  Endian_A16_Swap(buf, 588 * 2);
               break;
            case DI_FORMAT_MODE1:
               cdstream_read(ct->fp, buf + 12 + 3 + 1, 2048);
               encode_mode1_sector(lba + 150, buf);
               break;
            case DI_FORMAT_MODE1_RAW:
            case DI_FORMAT_MODE2_RAW:
            case DI_FORMAT_CDI_RAW:
               cdstream_read(ct->fp, buf, 2352);
               break;
            case DI_FORMAT_MODE2:
               cdstream_read(ct->fp, buf + 16, 2336);
               encode_mode2_sector(lba + 150, buf);
               break;
            case DI_FORMAT_MODE2_FORM1:
               cdstream_read(ct->fp, buf + 24, 2048);
               break;
            case DI_FORMAT_MODE2_FORM2:
               cdstream_read(ct->fp, buf + 24, 2324);
               break;
         }

         if(ct->SubchannelMode)
            cdstream_read(ct->fp, buf + 2352, 96);
      }
   }

   return true;
}

static bool CDAccess_Image_Fast_Read_Raw_PW_TSRE(CDAccess *cda, uint8_t* pwbuf, int32_t lba)
{
   CDAccess_Image *self = (CDAccess_Image *)cda;
   int32_t track;

   if(lba >= self->total_sectors)
   {
      subpw_synth_leadout_lba(&self->toc, lba, pwbuf);
      return true;
   }

   memset(pwbuf, 0, 96);
   track = CDAccess_Image_MakeSubPQ(self, lba, pwbuf);

   if(self->Tracks[track].SubchannelMode && lba >= (self->Tracks[track].LBA - self->Tracks[track].pregap_dv) && (lba < self->Tracks[track].LBA + self->Tracks[track].sectors))
      return false;

   return true;
}

static bool CDAccess_Image_Read_TOC(CDAccess *cda, TOC *rtoc)
{
   CDAccess_Image *self = (CDAccess_Image *)cda;
   *rtoc = self->toc;
   return true;
}

static void CDAccess_Image_destroy(CDAccess *cda)
{
   CDAccess_Image *self = (CDAccess_Image *)cda;
   if(!self)
      return;
   CDAccess_Image_Cleanup(self);
   subq_map_free(&self->SubQReplaceMap);
   free(self);
}

CDAccess *CDAccess_Image_New(const char *path, bool image_memcache)
{
   CDAccess_Image *self = (CDAccess_Image *)calloc(1, sizeof(*self));
   if(!self)
      return NULL;

   self->base.Read_Raw_Sector       = CDAccess_Image_Read_Raw_Sector;
   self->base.Fast_Read_Raw_PW_TSRE = CDAccess_Image_Fast_Read_Raw_PW_TSRE;
   self->base.Read_TOC              = CDAccess_Image_Read_TOC;
   self->base.destroy               = CDAccess_Image_destroy;

   subq_map_init(&self->SubQReplaceMap);

   CDAccess_Image_ImageOpen(self, path, image_memcache);

   return &self->base;
}
