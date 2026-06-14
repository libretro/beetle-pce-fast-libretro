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

#include <boolean.h>
#include <retro_miscellaneous.h>

#include "cdromif.h"
#include "CDAccess.h"
#include "../mednafen.h"

/* Single concrete CDIF type. The old C++ design had an abstract CDIF
 * base + CDIF_ST single-threaded subclass; there was only ever the one
 * subclass, so the C version is a single struct. */
struct CDIF
{
   bool UnrecoverableError;
   TOC disc_toc;
   CDAccess *disc_cdaccess;
};

static bool CDIF_ValidateRawSector(uint8_t *buf)
{
   int mode = buf[12 + 3];

   if(mode != 0x1 && mode != 0x2)
      return false;

   if(!edc_lec_check_and_correct(buf, mode == 2))
      return false;

   return true;
}

void CDIF_ReadTOC(CDIF *cdif, TOC *out)
{
   *out = cdif->disc_toc;
}

void CDIF_HintReadSector(CDIF *cdif, int32_t lba)
{
   /* TODO: disc_cdaccess seek hint? (probably not, would require
    * asynchronousitycamel) */
   (void)cdif;
   (void)lba;
}

bool CDIF_ReadRawSector(CDIF *cdif, uint8_t *buf, int32_t lba)
{
   if(cdif->UnrecoverableError)
   {
      memset(buf, 0, 2352 + 96);
      return false;
   }

   if(lba < CDIF_LBA_Read_Minimum || lba > CDIF_LBA_Read_Maximum)
   {
      memset(buf, 0, 2352 + 96);
      return false;
   }

   cdif->disc_cdaccess->Read_Raw_Sector(cdif->disc_cdaccess, buf, lba);

   return true;
}

bool CDIF_ReadRawSectorPWOnly(CDIF *cdif, uint8_t *pwbuf, int32_t lba, bool hint_fullread)
{
   if(cdif->UnrecoverableError)
   {
      memset(pwbuf, 0, 96);
      return false;
   }

   if(lba < CDIF_LBA_Read_Minimum || lba > CDIF_LBA_Read_Maximum)
   {
      memset(pwbuf, 0, 96);
      return false;
   }

   if(cdif->disc_cdaccess->Fast_Read_Raw_PW_TSRE(cdif->disc_cdaccess, pwbuf, lba))
      return true;
   else
   {
      uint8_t tmpbuf[2352 + 96];
      bool ret;

      ret = CDIF_ReadRawSector(cdif, tmpbuf, lba);
      memcpy(pwbuf, tmpbuf + 2352, 96);

      return ret;
   }
}

int CDIF_ReadSector(CDIF *cdif, uint8_t* buf, int32_t lba, uint32_t sector_count)
{
   int ret = 0;

   if(cdif->UnrecoverableError)
      return 0;

   while(sector_count--)
   {
      uint8_t tmpbuf[2352 + 96];
      int mode;

      if(!CDIF_ReadRawSector(cdif, tmpbuf, lba))
         return false;

      if(!CDIF_ValidateRawSector(tmpbuf))
      {
         MDFN_DispMessage("Uncorrectable data at sector %d", lba);
         return false;
      }

      mode = tmpbuf[12 + 3];

      if(!ret)
         ret = mode;

      if(mode == 1)
         memcpy(buf, &tmpbuf[12 + 4], 2048);
      else if(mode == 2)
         memcpy(buf, &tmpbuf[12 + 4 + 8], 2048);
      else
         return false;

      buf += 2048;
      lba++;
   }

   return ret;
}

CDIF *CDIF_Open(const char *path, bool image_memcache)
{
   CDIF *cdif = (CDIF *)calloc(1, sizeof(*cdif));
   if(!cdif)
      return NULL;

   cdif->disc_cdaccess = CDAccess_Open(path, image_memcache);
   if(!cdif->disc_cdaccess)
   {
      free(cdif);
      return NULL;
   }

   cdif->UnrecoverableError = false;
   cdif->disc_cdaccess->Read_TOC(cdif->disc_cdaccess, &cdif->disc_toc);

   return cdif;
}

void CDIF_Close(CDIF *cdif)
{
   if(!cdif)
      return;
   if(cdif->disc_cdaccess)
      cdif->disc_cdaccess->destroy(cdif->disc_cdaccess);
   free(cdif);
}
