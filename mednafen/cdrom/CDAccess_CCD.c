/******************************************************************************/
/* Mednafen - Multi-system Emulator                                           */
/******************************************************************************/
/* CDAccess_CCD.c:
**  Copyright (C) 2013-2016 Mednafen Team
**
** This program is free software; you can redistribute it and/or
** modify it under the terms of the GNU General Public License
** as published by the Free Software Foundation; either version 2
** of the License, or (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "../mednafen-types.h"
#include "../git.h"
#include "../general.h"
#include "../cdstream.h"

#include "CDAccess.h"
#include "CDAccess_CCD.h"

#include <retro_miscellaneous.h>

typedef struct CDAccess_CCD
{
   CDAccess base;          /* vtable; must be first member */

   cdstream *img_stream;
   uint8_t  *sub_data;

   size_t img_numsectors;
   TOC tocd;
} CDAccess_CCD;

/* -------- INI-style section storage (replaces std::map<string,map>) -------- */

#define CCD_MAX_SECTIONS  256
#define CCD_MAX_KEYS       32
#define CCD_NAME_LEN       64
#define CCD_VAL_LEN        64

typedef struct CCD_Section
{
   char name[CCD_NAME_LEN];
   int  n_keys;
   char keys[CCD_MAX_KEYS][CCD_NAME_LEN];
   char vals[CCD_MAX_KEYS][CCD_VAL_LEN];
} CCD_Section;

typedef struct CCD_File
{
   int n_sections;
   CCD_Section sections[CCD_MAX_SECTIONS];
} CCD_File;

/* In-place ASCII uppercase. Replaces MDFN_strtoupper(std::string&). */
static void ccd_strtoupper(char *str)
{
   size_t x;
   for(x = 0; str[x]; x++)
   {
      if(str[x] >= 'a' && str[x] <= 'z')
         str[x] = str[x] - 'a' + 'A';
   }
}

/* trim leading/trailing whitespace in place (replaces MDFN_ltrim/rtrim). */
static void ccd_trim(char *s)
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

static CCD_Section *ccd_section_lookup(CCD_File *f, const char *name, bool create_if_missing)
{
   int i;
   for(i = 0; i < f->n_sections; i++)
   {
      if(!strcmp(f->sections[i].name, name))
         return &f->sections[i];
   }
   if(!create_if_missing || f->n_sections >= CCD_MAX_SECTIONS)
      return NULL;
   {
      CCD_Section *s = &f->sections[f->n_sections++];
      memset(s, 0, sizeof(*s));
      strncpy(s->name, name, CCD_NAME_LEN - 1);
      s->name[CCD_NAME_LEN - 1] = '\0';
      return s;
   }
}

static void ccd_section_set(CCD_Section *s, const char *key, const char *val)
{
   int i;
   for(i = 0; i < s->n_keys; i++)
   {
      if(!strcmp(s->keys[i], key))
      {
         strncpy(s->vals[i], val, CCD_VAL_LEN - 1);
         s->vals[i][CCD_VAL_LEN - 1] = '\0';
         return;
      }
   }
   if(s->n_keys >= CCD_MAX_KEYS)
      return;
   strncpy(s->keys[s->n_keys], key, CCD_NAME_LEN - 1);
   s->keys[s->n_keys][CCD_NAME_LEN - 1] = '\0';
   strncpy(s->vals[s->n_keys], val, CCD_VAL_LEN - 1);
   s->vals[s->n_keys][CCD_VAL_LEN - 1] = '\0';
   s->n_keys++;
}

static const char *ccd_section_get(const CCD_Section *s, const char *key)
{
   int i;
   if(!s)
      return NULL;
   for(i = 0; i < s->n_keys; i++)
   {
      if(!strcmp(s->keys[i], key))
         return s->vals[i];
   }
   return NULL;
}

/* Replaces the template CCD_ReadInt<T>. Returns 0 when the key is
 * absent (matching the old have_defval=false behaviour). */
static long ccd_read_int(const CCD_Section *s, const char *key, bool is_signed)
{
   const char *v = ccd_section_get(s, key);
   int scan_base = 10;
   size_t scan_offset = 0;
   const char *vp;
   char *ep = NULL;
   long ret = 0;

   if(!v)
      return 0;

   if(strlen(v) >= 3 && v[0] == '0' && v[1] == 'x')
   {
      scan_base = 16;
      scan_offset = 2;
   }

   vp = v + scan_offset;

   if(is_signed)
      ret = strtol(vp, &ep, scan_base);
   else
      ret = (long)strtoul(vp, &ep, scan_base);

   if(!vp[0] || ep[0])
      return 0;

   return ret;
}

static bool CDAccess_CCD_CheckSubQSanity(CDAccess_CCD *self)
{
   size_t s;
   size_t checksum_pass_counter = 0;
   int prev_lba = INT_MAX;
   uint8_t prev_track = 0;

   for(s = 0; s < self->img_numsectors; s++)
   {
      uint8_t qbuf[12];

      memcpy(qbuf, &self->sub_data[s * 96 + 12], 12);

      if(subq_check_checksum(qbuf))
      {
         uint8_t adr = qbuf[0] & 0xF;

         if(adr == 0x01)
         {
            uint8_t track_bcd = qbuf[1];
            uint8_t index_bcd = qbuf[2];
            uint8_t rm_bcd = qbuf[3];
            uint8_t rs_bcd = qbuf[4];
            uint8_t rf_bcd = qbuf[5];
            uint8_t am_bcd = qbuf[7];
            uint8_t as_bcd = qbuf[8];
            uint8_t af_bcd = qbuf[9];

            if(!BCD_is_valid(track_bcd) || !BCD_is_valid(index_bcd) || !BCD_is_valid(rm_bcd) || !BCD_is_valid(rs_bcd) || !BCD_is_valid(rf_bcd) ||
                  !BCD_is_valid(am_bcd) || !BCD_is_valid(as_bcd) || !BCD_is_valid(af_bcd) ||
                  rs_bcd > 0x59 || rf_bcd > 0x74 || as_bcd > 0x59 || af_bcd > 0x74)
            {
               log_cb(RETRO_LOG_ERROR, "Garbage subchannel Q data detected(bad BCD/out of range): %02x:%02x:%02x %02x:%02x:%02x\n", rm_bcd, rs_bcd, rf_bcd, am_bcd, as_bcd, af_bcd);
               return false;
            }
            else
            {
               int lba = ((BCD_to_U8(am_bcd) * 60 + BCD_to_U8(as_bcd)) * 75 + BCD_to_U8(af_bcd)) - 150;
               uint8_t track = BCD_to_U8(track_bcd);

               if(prev_lba != INT_MAX && abs(lba - prev_lba) > 100)
               {
                  log_cb(RETRO_LOG_ERROR, "Garbage subchannel Q data detected(excessively large jump in AMSF)\n");
                  return false;
               }

               if(abs((int)(lba - s)) > 100)
               {
                  log_cb(RETRO_LOG_ERROR, "Garbage subchannel Q data detected(AMSF value is out of tolerance)\n");
                  return false;
               }

               prev_lba = lba;

               if(track < prev_track)
               {
                  log_cb(RETRO_LOG_ERROR, "Garbage subchannel Q data detected(bad track number)\n");
                  return false;
               }

               prev_track = track;
            }
            checksum_pass_counter++;
         }
      }
   }

   return true;
}

static bool CDAccess_CCD_Load(CDAccess_CCD *self, const char *path, bool image_memcache)
{
   cdstream cf;
   CCD_File ccd;
   char linebuf[256];
   char cur_section_name[CCD_NAME_LEN];
   char dir_path[4096];
   char file_base[4096];
   char file_ext[4096];
   char img_extsd[4];
   char sub_extsd[4];
   CCD_Section *ds;
   unsigned toc_entries;
   unsigned num_sessions;
   bool data_tracks_scrambled;
   unsigned te;
   char image_path[4096];
   char sub_path[4096];
   uint64 ss;

   img_extsd[0] = 'i'; img_extsd[1] = 'm'; img_extsd[2] = 'g'; img_extsd[3] = 0;
   sub_extsd[0] = 's'; sub_extsd[1] = 'u'; sub_extsd[2] = 'b'; sub_extsd[3] = 0;

   memset(&ccd, 0, sizeof(ccd));
   cur_section_name[0] = '\0';

   if(!cdstream_open(&cf, path))
      return false;

   MDFN_GetFilePathComponents(path, dir_path, file_base, file_ext, sizeof(dir_path));

   if(strlen(file_ext) == 4 && file_ext[0] == '.')
   {
      signed char extupt[3];
      signed char av = -1;
      int i;

      extupt[0] = extupt[1] = extupt[2] = -1;

      for(i = 1; i < 4; i++)
      {
         if(file_ext[i] >= 'A' && file_ext[i] <= 'Z')
            extupt[i - 1] = 'A' - 'a';
         else if(file_ext[i] >= 'a' && file_ext[i] <= 'z')
            extupt[i - 1] = 0;
      }

      for(i = 0; i < 3; i++)
      {
         if(extupt[i] != -1)
            av = extupt[i];
         else
            extupt[i] = av;
      }

      if(av == -1)
         av = 0;

      for(i = 0; i < 3; i++)
      {
         if(extupt[i] == -1)
            extupt[i] = av;
      }

      for(i = 0; i < 3; i++)
      {
         img_extsd[i] += extupt[i];
         sub_extsd[i] += extupt[i];
      }
   }

   while(cdstream_get_line(&cf, linebuf, sizeof(linebuf)) >= 0)
   {
      size_t llen;
      ccd_trim(linebuf);
      llen = strlen(linebuf);

      if(llen == 0) /* Skip blank lines. */
         continue;

      if(linebuf[0] == '[')
      {
         if(llen < 3 || linebuf[llen - 1] != ']')
         {
            log_cb(RETRO_LOG_ERROR, "Malformed section specifier: %s", linebuf);
            cdstream_close(&cf);
            return false;
         }

         memcpy(cur_section_name, linebuf + 1, llen - 2);
         cur_section_name[llen - 2] = '\0';
         ccd_strtoupper(cur_section_name);
      }
      else
      {
         char *eqp = strchr(linebuf, '=');
         char *eqp2 = strrchr(linebuf, '=');
         char k[CCD_NAME_LEN];
         char v[CCD_VAL_LEN];
         CCD_Section *s;

         if(eqp == NULL || eqp != eqp2)
         {
            log_cb(RETRO_LOG_ERROR, "Malformed value pair specifier: %s\n", linebuf);
            cdstream_close(&cf);
            return false;
         }

         *eqp = '\0';
         strncpy(k, linebuf, CCD_NAME_LEN - 1);
         k[CCD_NAME_LEN - 1] = '\0';
         strncpy(v, eqp + 1, CCD_VAL_LEN - 1);
         v[CCD_VAL_LEN - 1] = '\0';

         ccd_trim(k);
         ccd_trim(v);
         ccd_strtoupper(k);

         s = ccd_section_lookup(&ccd, cur_section_name, true);
         if(s)
            ccd_section_set(s, k, v);
      }
   }

   cdstream_close(&cf);

   ds = ccd_section_lookup(&ccd, "DISC", false);
   toc_entries          = (unsigned)ccd_read_int(ds, "TOCENTRIES", false);
   num_sessions         = (unsigned)ccd_read_int(ds, "SESSIONS", false);
   data_tracks_scrambled = (bool)ccd_read_int(ds, "DATATRACKSSCRAMBLED", false);

   if(num_sessions != 1)
   {
      log_cb(RETRO_LOG_ERROR, "Unsupported number of sessions: %u\n", num_sessions);
      return false;
   }

   if(data_tracks_scrambled)
   {
      log_cb(RETRO_LOG_ERROR, "Scrambled CCD data tracks currently not supported.\n");
      return false;
   }

   for(te = 0; te < toc_entries; te++)
   {
      char tmpbuf[64];
      CCD_Section *ts;
      unsigned session;
      uint8_t point, adr, control, pmin, psec;
      signed plba;

      snprintf(tmpbuf, sizeof(tmpbuf), "ENTRY %u", te);
      ts = ccd_section_lookup(&ccd, tmpbuf, false);

      session = (unsigned)ccd_read_int(ts, "SESSION", false);
      point   = (uint8_t)ccd_read_int(ts, "POINT", false);
      adr     = (uint8_t)ccd_read_int(ts, "ADR", false);
      control = (uint8_t)ccd_read_int(ts, "CONTROL", false);
      pmin    = (uint8_t)ccd_read_int(ts, "PMIN", false);
      psec    = (uint8_t)ccd_read_int(ts, "PSEC", false);
      plba    = (signed)ccd_read_int(ts, "PLBA", true);

      if(session != 1)
      {
         log_cb(RETRO_LOG_ERROR, "Unsupported TOC entry Session value: %u\n", session);
         return false;
      }

      /* Reference: ECMA-394, page 5-14 */
      if(point >= 1 && point <= 99)
      {
         self->tocd.tracks[point].adr = adr;
         self->tocd.tracks[point].control = control;
         self->tocd.tracks[point].lba = plba;
         self->tocd.tracks[point].valid = true;
      }
      else switch(point)
      {
         default:
            log_cb(RETRO_LOG_ERROR, "Unsupported TOC entry Point value: %u\n", point);
            return false;
         case 0xA0:
            self->tocd.first_track = pmin;
            self->tocd.disc_type = psec;
            break;
         case 0xA1:
            self->tocd.last_track = pmin;
            break;
         case 0xA2:
            self->tocd.tracks[100].adr = adr;
            self->tocd.tracks[100].control = control;
            self->tocd.tracks[100].lba = plba;
            self->tocd.tracks[100].valid = true;
            break;
      }
   }

   /* Open image stream. */
   MDFN_EvalFIP(image_path, sizeof(image_path), dir_path, file_base);
   {
      size_t pl = strlen(image_path);
      snprintf(image_path + pl, sizeof(image_path) - pl, ".%s", img_extsd);
   }

   if(image_memcache)
      self->img_stream = cdstream_new_memcached(image_path);
   else
      self->img_stream = cdstream_new(image_path);

   if(!self->img_stream)
   {
      log_cb(RETRO_LOG_ERROR, "Could not open CCD image: %s\n", image_path);
      return false;
   }

   ss = cdstream_size(self->img_stream);

   if(ss % 2352)
   {
      log_cb(RETRO_LOG_ERROR, "CCD image size is not evenly divisible by 2352.\n");
      return false;
   }

   if(ss > 0x7FFFFFFF)
   {
      log_cb(RETRO_LOG_ERROR, "CCD image is too large.\n");
      return false;
   }

   self->img_numsectors = ss / 2352;

   /* Open subchannel stream */
   MDFN_EvalFIP(sub_path, sizeof(sub_path), dir_path, file_base);
   {
      size_t pl = strlen(sub_path);
      snprintf(sub_path + pl, sizeof(sub_path) - pl, ".%s", sub_extsd);
   }
   {
      cdstream sub_stream;
      if(!cdstream_open(&sub_stream, sub_path))
      {
         log_cb(RETRO_LOG_ERROR, "Could not open CCD sub: %s\n", sub_path);
         return false;
      }

      if(cdstream_size(&sub_stream) != (uint64)self->img_numsectors * 96)
      {
         log_cb(RETRO_LOG_ERROR, "CCD SUB file size mismatch.\n");
         cdstream_close(&sub_stream);
         return false;
      }

      self->sub_data = (uint8_t *)malloc((size_t)self->img_numsectors * 96);
      cdstream_read(&sub_stream, self->sub_data, (uint64)self->img_numsectors * 96);
      cdstream_close(&sub_stream);
   }

   CDAccess_CCD_CheckSubQSanity(self);

   return true;
}

static bool CDAccess_CCD_Read_Raw_Sector(CDAccess *cda, uint8_t *buf, int32_t lba)
{
   CDAccess_CCD *self = (CDAccess_CCD *)cda;

   if(lba < 0)
   {
      synth_udapp_sector_lba(0xFF, &self->tocd, lba, 0, buf);
      return true;
   }

   if((size_t)lba >= self->img_numsectors)
   {
      synth_leadout_sector_lba(0xFF, &self->tocd, lba, buf);
      return true;
   }

   cdstream_seek(self->img_stream, lba * 2352, SEEK_SET);
   cdstream_read(self->img_stream, buf, 2352);

   subpw_interleave(&self->sub_data[lba * 96], buf + 2352);

   return true;
}

static bool CDAccess_CCD_Fast_Read_Raw_PW_TSRE(CDAccess *cda, uint8_t* pwbuf, int32_t lba)
{
   CDAccess_CCD *self = (CDAccess_CCD *)cda;

   if(lba < 0)
   {
      subpw_synth_udapp_lba(&self->tocd, lba, 0, pwbuf);
      return true;
   }

   if((size_t)lba >= self->img_numsectors)
   {
      subpw_synth_leadout_lba(&self->tocd, lba, pwbuf);
      return true;
   }

   subpw_interleave(&self->sub_data[lba * 96], pwbuf);

   return true;
}

static bool CDAccess_CCD_Read_TOC(CDAccess *cda, TOC *toc)
{
   CDAccess_CCD *self = (CDAccess_CCD *)cda;
   *toc = self->tocd;
   return true;
}

static void CDAccess_CCD_destroy(CDAccess *cda)
{
   CDAccess_CCD *self = (CDAccess_CCD *)cda;
   if(!self)
      return;
   if(self->img_stream)
      cdstream_destroy(self->img_stream);
   if(self->sub_data)
      free(self->sub_data);
   free(self);
}

CDAccess *CDAccess_CCD_New(const char *path, bool image_memcache)
{
   CDAccess_CCD *self = (CDAccess_CCD *)calloc(1, sizeof(*self));
   if(!self)
      return NULL;

   self->base.Read_Raw_Sector       = CDAccess_CCD_Read_Raw_Sector;
   self->base.Fast_Read_Raw_PW_TSRE = CDAccess_CCD_Fast_Read_Raw_PW_TSRE;
   self->base.Read_TOC              = CDAccess_CCD_Read_TOC;
   self->base.destroy               = CDAccess_CCD_destroy;

   CDAccess_CCD_Load(self, path, image_memcache);

   return &self->base;
}
