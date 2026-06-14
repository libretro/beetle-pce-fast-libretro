/******************************************************************************/
/* Mednafen - Multi-system Emulator                                           */
/******************************************************************************/
/* CDAccess_CHD.c:
**  Copyright (C) 2017 Romain Tisserand
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

#include "../mednafen-types.h"
#include "../mednafen-endian.h"
#include "../git.h"

#include "CDAccess.h"
#include "CDAccess_CHD.h"
#include <libchdr/chd.h>

/* Disk-image(rip) track/sector formats */
enum
{
  DI_FORMAT_AUDIO = 0x00,
  DI_FORMAT_MODE1 = 0x01,
  DI_FORMAT_MODE1_RAW = 0x02,
  DI_FORMAT_MODE2 = 0x03,
  DI_FORMAT_MODE2_FORM1 = 0x04,
  DI_FORMAT_MODE2_FORM2 = 0x05,
  DI_FORMAT_MODE2_RAW = 0x06,
  DI_FORMAT_CDI_RAW = 0x07,
  _DI_FORMAT_COUNT
};

typedef struct CHDFILE_TRACK_INFO
{
   int32_t LBA;
   uint32_t DIFormat;
   uint8_t subq_control;
   int32_t pregap;
   int32_t pregap_dv;
   int32_t postgap;
   int32_t index[100];
   int32_t sectors; /* Not including pregap sectors! */
   bool FirstFileInstance;
   bool RawAudioMSBFirst;
   long FileOffset;
   unsigned int SubchannelMode;
   uint32_t LastSamplePos;
   uint32_t fileOffset;
} CHDFILE_TRACK_INFO;

typedef struct CDAccess_CHD
{
   CDAccess base;            /* vtable; must be first member */

   int32_t NumTracks;
   int32_t FirstTrack;
   int32_t LastTrack;
   int32_t total_sectors;
   uint8_t disc_type;
   TOC toc;
   CHDFILE_TRACK_INFO Tracks[100]; /* Track #0(HMM?) through 99 */

   int num_sessions;
   int num_tracks;

   chd_file *chd;
   uint8_t *hunkmem;         /* hunk data cache */
   int oldhunk;              /* last hunknum read */
} CDAccess_CHD;

static const int32_t DI_Size_Table[8] =
{
   2352, 2048, 2352, 2336, 2048, 2324, 2352, 2352
};

static bool CDAccess_CHD_Load(CDAccess_CHD *self, const char *path, bool image_memcache)
{
   const chd_header *head;
   int plba;
   int numsectors;
   int fileOffset;
   int x;
   chd_error err = chd_open(path, CHD_OPEN_READ, NULL, &self->chd);

   if (err != CHDERR_NONE)
   {
      log_cb(RETRO_LOG_ERROR, "Failed to load CHD image: %s", path);
      return false;
   }

   if (image_memcache)
   {
      err = chd_precache(self->chd);
      if (err != CHDERR_NONE)
      {
         log_cb(RETRO_LOG_ERROR, "Failed to pre-cache CHD image: %s", path);
         return false;
      }
   }

   head = chd_get_header(self->chd);
   self->hunkmem = (uint8_t *)malloc(head->hunkbytes);
   self->oldhunk = -1;

   log_cb(RETRO_LOG_INFO, "chd_load '%s' hunkbytes=%d\n", path, head->hunkbytes);

   plba = -150;
   numsectors = 0;
   fileOffset = 0;
   while (1)
   {
      int tkid = 0, frames = 0, pad = 0, pregap = 0, postgap = 0;
      char type[64], subtype[32], pgtype[32], pgsub[32];
      char tmp[512];
      int32_t i;

      err = chd_get_metadata(self->chd, CDROM_TRACK_METADATA2_TAG, self->NumTracks, tmp, sizeof(tmp), NULL, NULL, NULL);
      if (err == CHDERR_NONE)
         sscanf(tmp, CDROM_TRACK_METADATA2_FORMAT, &tkid, type, subtype, &frames, &pregap, pgtype, pgsub, &postgap);
      else
      {
         err = chd_get_metadata(self->chd, CDROM_TRACK_METADATA_TAG, self->NumTracks, tmp, sizeof(tmp), NULL, NULL, NULL);
         if (err == CHDERR_NONE)
            sscanf(tmp, CDROM_TRACK_METADATA_FORMAT, &tkid, type, subtype, &frames);
         else
            break;
      }

      if (strcmp(type, "MODE1") && strcmp(type, "MODE1_RAW") && strcmp(type, "MODE2_RAW") && strcmp(type, "AUDIO"))
      {
         log_cb(RETRO_LOG_ERROR, "chd_parse track type %s unsupported\n", type);
         return 0;
      }

      if (strcmp(subtype, "NONE"))
      {
         log_cb(RETRO_LOG_ERROR, "chd_parse track subtype %s unsupported\n", subtype);
         return 0;
      }

      self->NumTracks++;
      self->toc.tracks[self->NumTracks].adr = 1;
      self->toc.tracks[self->NumTracks].control = strcmp(type, "AUDIO") == 0 ? 0 : 4;
      self->toc.tracks[self->NumTracks].valid = true;

      self->Tracks[self->NumTracks].pregap = (self->NumTracks == 1) ? 150 : (pgtype[0] == 'V') ? 0 : pregap;
      self->Tracks[self->NumTracks].pregap_dv = (pgtype[0] == 'V') ? pregap : 0;
      plba += self->Tracks[self->NumTracks].pregap + self->Tracks[self->NumTracks].pregap_dv;
      self->Tracks[self->NumTracks].LBA = self->toc.tracks[self->NumTracks].lba = plba;
      self->Tracks[self->NumTracks].postgap = postgap;
      self->Tracks[self->NumTracks].sectors = frames - self->Tracks[self->NumTracks].pregap_dv;
      self->Tracks[self->NumTracks].SubchannelMode = 0;
      self->Tracks[self->NumTracks].index[0] = -1;
      self->Tracks[self->NumTracks].index[1] = 0;
      for (i = 2; i < 100; i++)
         self->Tracks[self->NumTracks].index[i] = -1;

      self->toc.tracks[self->NumTracks].lba = plba;

      fileOffset += self->Tracks[self->NumTracks].pregap_dv;
      self->Tracks[self->NumTracks].fileOffset = fileOffset;
      fileOffset += frames - self->Tracks[self->NumTracks].pregap_dv;
      fileOffset += self->Tracks[self->NumTracks].postgap;
      fileOffset += ((frames + 3) & ~3) - frames;

      if (strcmp(type, "AUDIO") == 0)
      {
         self->Tracks[self->NumTracks].DIFormat = DI_FORMAT_AUDIO;
         self->Tracks[self->NumTracks].RawAudioMSBFirst = 1;
      }
      else if (strcmp(type, "MODE1_RAW") == 0)
         self->Tracks[self->NumTracks].DIFormat = DI_FORMAT_MODE1_RAW;
      else if (strcmp(type, "MODE2_RAW") == 0)
         self->Tracks[self->NumTracks].DIFormat = DI_FORMAT_MODE2_RAW;
      else if (strcmp(type, "MODE1") == 0)
         self->Tracks[self->NumTracks].DIFormat = DI_FORMAT_MODE1;

      self->Tracks[self->NumTracks].subq_control = (strcmp(type, "AUDIO") == 0) ? 0 : 4;

      plba += frames - self->Tracks[self->NumTracks].pregap_dv;
      plba += self->Tracks[self->NumTracks].postgap;

      numsectors += (self->NumTracks == 1) ? frames : frames + self->Tracks[self->NumTracks].pregap;

      self->toc.first_track = 1;
      self->toc.last_track = self->NumTracks;
   }

   self->FirstTrack = 1;
   self->LastTrack = self->NumTracks;
   self->total_sectors = numsectors;

   self->toc.tracks[100].adr = 1;
   self->toc.tracks[100].control = 0;
   self->toc.tracks[100].lba = numsectors; /* HACK */
   self->toc.tracks[100].valid = true;

   for (x = self->FirstTrack; x < (self->FirstTrack + self->NumTracks); x++)
   {
      const int32_t base = self->Tracks[x].index[1];
      int32_t i;
      for (i = 0; i < 100; i++)
      {
         if (i == 0 || self->Tracks[x].index[i] == -1)
            self->Tracks[x].index[i] = INT32_MAX;
         else
            self->Tracks[x].index[i] = self->Tracks[x].LBA + (self->Tracks[x].index[i] - base);
      }
   }

   return true;
}

static bool CDAccess_CHD_Read_CHD_Hunk_RAW(CDAccess_CHD *self, uint8_t *buf, int32_t lba, CHDFILE_TRACK_INFO* track)
{
   const chd_header *head = chd_get_header(self->chd);
   int cad = lba - track->LBA + track->fileOffset;
   int sph = head->hunkbytes / (2352 + 96);
   int hunknum = cad / sph;
   int hunkofs = cad % sph;
   int err = CHDERR_NONE;

   if (hunknum != self->oldhunk)
   {
      err = chd_read(self->chd, hunknum, self->hunkmem);
      if (err != CHDERR_NONE)
         log_cb(RETRO_LOG_ERROR, "chd_read_sector failed lba=%d error=%d\n", lba, err);
      else
         self->oldhunk = hunknum;
   }

   memcpy(buf, self->hunkmem + hunkofs * (2352 + 96), 2352);
   return err;
}

static bool CDAccess_CHD_Read_CHD_Hunk_M1(CDAccess_CHD *self, uint8_t *buf, int32_t lba, CHDFILE_TRACK_INFO* track)
{
   const chd_header *head = chd_get_header(self->chd);
   int cad = lba - track->LBA + track->fileOffset;
   int sph = head->hunkbytes / (2352 + 96);
   int hunknum = cad / sph;
   int hunkofs = cad % sph;
   int err = CHDERR_NONE;

   if (hunknum != self->oldhunk)
   {
      err = chd_read(self->chd, hunknum, self->hunkmem);
      if (err != CHDERR_NONE)
         log_cb(RETRO_LOG_ERROR, "chd_read_sector failed lba=%d error=%d\n", lba, err);
      else
         self->oldhunk = hunknum;
   }

   memcpy(buf + 16, self->hunkmem + hunkofs * (2352 + 96), 2048);
   return err;
}

static bool CDAccess_CHD_Read_CHD_Hunk_M2(CDAccess_CHD *self, uint8_t *buf, int32_t lba, CHDFILE_TRACK_INFO* track)
{
   const chd_header *head = chd_get_header(self->chd);
   int cad = lba - track->LBA + track->fileOffset;
   int sph = head->hunkbytes / (2352 + 96);
   int hunknum = cad / sph;
   int hunkofs = cad % sph;
   int err = CHDERR_NONE;

   if (hunknum != self->oldhunk)
   {
      err = chd_read(self->chd, hunknum, self->hunkmem);
      if (err != CHDERR_NONE)
         log_cb(RETRO_LOG_ERROR, "chd_read_sector failed lba=%d error=%d\n", lba, err);
      else
         self->oldhunk = hunknum;
   }

   memcpy(buf + 16, self->hunkmem + hunkofs * (2352 + 96), 2336);
   return err;
}

/* Note: this function makes use of the current contents(as in |=) in SubPWBuf. */
static int32_t CDAccess_CHD_MakeSubPQ(CDAccess_CHD *self, int32_t lba, uint8_t *SubPWBuf)
{
   uint8_t buf[0xC];
   int32_t track;
   uint32_t lba_relative;
   uint32_t ma, sa, fa;
   uint32_t m, s, f;
   uint8_t pause_or = 0x00;
   uint8_t adr;
   uint8_t control;
   int index;
   int32_t i;
   int i2;

   for (track = self->FirstTrack; track < (self->FirstTrack + self->NumTracks); track++)
   {
      if (lba >= (self->Tracks[track].LBA - self->Tracks[track].pregap_dv - self->Tracks[track].pregap) && lba < (self->Tracks[track].LBA + self->Tracks[track].sectors + self->Tracks[track].postgap))
         break;
   }

   if (lba < self->Tracks[track].LBA)
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

   if ((lba < self->Tracks[track].LBA) || (lba >= self->Tracks[track].LBA + self->Tracks[track].sectors))
      pause_or = 0x80;

   {
      int32_t pg_offset = (int32_t)lba - self->Tracks[track].LBA;
      if (pg_offset < -150)
      {
         if ((self->Tracks[track].subq_control & SUBQ_CTRLF_DATA) && (self->FirstTrack < track) && !(self->Tracks[track - 1].subq_control & SUBQ_CTRLF_DATA))
            control = self->Tracks[track - 1].subq_control;
      }
   }

   memset(buf, 0, 0xC);
   buf[0] = (adr << 0) | (control << 4);
   buf[1] = U8_to_BCD(track);

   index = 0;
   for (i = 0; i < 100; i++)
   {
      if (lba >= self->Tracks[track].index[i])
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

   for (i2 = 0; i2 < 96; i2++)
      SubPWBuf[i2] |= (((buf[i2 >> 3] >> (7 - (i2 & 0x7))) & 1) ? 0x40 : 0x00) | pause_or;

   return track;
}

static bool CDAccess_CHD_Read_Raw_Sector(CDAccess *cda, uint8_t *buf, int32_t lba)
{
   CDAccess_CHD *self = (CDAccess_CHD *)cda;
   uint8_t SimuQ[0xC];
   int32_t track;
   CHDFILE_TRACK_INFO *ct;

   if (lba >= self->total_sectors)
   {
      uint8_t data_synth_mode = 0x01;
      switch (self->Tracks[self->LastTrack].DIFormat)
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
   track = CDAccess_CHD_MakeSubPQ(self, lba, buf + 2352);
   subq_deinterleave(buf + 2352, SimuQ);

   ct = &self->Tracks[track];

   if (lba < (ct->LBA - ct->pregap_dv) || lba >= (ct->LBA + ct->sectors))
   {
      int32_t pg_offset = lba - ct->LBA;
      CHDFILE_TRACK_INFO *et = ct;

      if (pg_offset < -150)
      {
         if ((self->Tracks[track].subq_control & SUBQ_CTRLF_DATA) && (self->FirstTrack < track) && !(self->Tracks[track - 1].subq_control & SUBQ_CTRLF_DATA))
            et = &self->Tracks[track - 1];
      }

      memset(buf, 0, 2352);
      switch (et->DIFormat)
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
            buf[12 + 6] = 0x20;
            buf[12 + 10] = 0x20;
            encode_mode2_form2_sector(lba + 150, buf);
            break;
      }
   }
   else
   {
      switch (ct->DIFormat)
      {
         case DI_FORMAT_AUDIO:
            CDAccess_CHD_Read_CHD_Hunk_RAW(self, buf, lba, ct);
            if (ct->RawAudioMSBFirst)
               Endian_A16_Swap(buf, 588 * 2);
            break;
         case DI_FORMAT_MODE1:
            CDAccess_CHD_Read_CHD_Hunk_M1(self, buf, lba, ct);
            encode_mode1_sector(lba + 150, buf);
            break;
         case DI_FORMAT_MODE1_RAW:
         case DI_FORMAT_MODE2_RAW:
         case DI_FORMAT_CDI_RAW:
            CDAccess_CHD_Read_CHD_Hunk_RAW(self, buf, lba, ct);
            break;
         case DI_FORMAT_MODE2:
            CDAccess_CHD_Read_CHD_Hunk_M2(self, buf, lba, ct);
            encode_mode2_sector(lba + 150, buf);
            break;
         case DI_FORMAT_MODE2_FORM1: break;
         case DI_FORMAT_MODE2_FORM2: break;
      }
   }

   return true;
}

static bool CDAccess_CHD_Fast_Read_Raw_PW_TSRE(CDAccess *cda, uint8_t *pwbuf, int32_t lba)
{
   CDAccess_CHD *self = (CDAccess_CHD *)cda;
   int32_t track;

   if (lba >= self->total_sectors)
   {
      subpw_synth_leadout_lba(&self->toc, lba, pwbuf);
      return true;
   }

   memset(pwbuf, 0, 96);
   track = CDAccess_CHD_MakeSubPQ(self, lba, pwbuf);

   if (self->Tracks[track].SubchannelMode && lba >= (self->Tracks[track].LBA - self->Tracks[track].pregap_dv) && (lba < self->Tracks[track].LBA + self->Tracks[track].sectors))
      return false;

   return true;
}

static bool CDAccess_CHD_Read_TOC(CDAccess *cda, TOC *toc)
{
   CDAccess_CHD *self = (CDAccess_CHD *)cda;
   *toc = self->toc;
   return true;
}

static void CDAccess_CHD_destroy(CDAccess *cda)
{
   CDAccess_CHD *self = (CDAccess_CHD *)cda;
   if (!self)
      return;
   if (self->chd != NULL)
      chd_close(self->chd);
   if (self->hunkmem)
      free(self->hunkmem);
   free(self);
}

CDAccess *CDAccess_CHD_New(const char *path, bool image_memcache)
{
   CDAccess_CHD *self = (CDAccess_CHD *)calloc(1, sizeof(*self));
   if (!self)
      return NULL;

   self->base.Read_Raw_Sector       = CDAccess_CHD_Read_Raw_Sector;
   self->base.Fast_Read_Raw_PW_TSRE = CDAccess_CHD_Fast_Read_Raw_PW_TSRE;
   self->base.Read_TOC              = CDAccess_CHD_Read_TOC;
   self->base.destroy               = CDAccess_CHD_destroy;

   self->NumTracks    = 0;
   self->total_sectors = 0;

   CDAccess_CHD_Load(self, path, image_memcache);

   return &self->base;
}
