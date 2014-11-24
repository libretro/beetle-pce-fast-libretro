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

#include "mednafen.h"
#include <string.h>
#include <sys/types.h>
#include "cdromif.h"
#include "CDAccess.h"
#include "general.h"

#include <algorithm>
#include "libretro.h"

extern retro_log_printf_t log_cb;

typedef struct
{
   bool valid;
   bool error;
   uint32 lba;
   uint8 data[2352 + 96];
} CDIF_Sector_Buffer;

class CDIF_ST : public CDIF
{
public:
   CDIF_ST(CDAccess* cda);
   virtual ~CDIF_ST();

   virtual void HintReadSector(uint32 lba);
   virtual bool ReadRawSector(uint8* buf, uint32 lba);

   CDAccess* disc_cdaccess;
};


int CDIF::ReadSector(uint8* pBuf, uint32 lba, uint32 nSectors)
{
   int ret = 0;

   while (nSectors--)
   {
      uint8 tmpbuf[2352 + 96];

      if (!ReadRawSector(tmpbuf, lba))
      {
         puts("CDIF Raw Read error");
         return (FALSE);
      }

      const int mode = tmpbuf[12 + 3];

      if (!ret)
         ret = mode;

      if (mode == 1)
         memcpy(pBuf, &tmpbuf[12 + 4], 2048);
      else if (mode == 2)
         memcpy(pBuf, &tmpbuf[12 + 4 + 8], 2048);
      else
      {
         printf("CDIF_ReadSector() invalid sector type at LBA=%u\n", (unsigned int)lba);
         return (false);
      }

      pBuf += 2048;
      lba++;
   }

   return (ret);
}

//
//
// Single-threaded implementation follows.
//
//

CDIF_ST::CDIF_ST(CDAccess* cda) : disc_cdaccess(cda)
{
   disc_cdaccess->Read_TOC(&disc_toc);

   assert(disc_toc.first_track > 0 && disc_toc.last_track < 100
          && disc_toc.first_track <= disc_toc.last_track);
   //  throw(MDFN_Error(0, ("TOC first(%d)/last(%d) track numbers bad."), disc_toc.first_track, disc_toc.last_track));
}

CDIF_ST::~CDIF_ST()
{
   if (disc_cdaccess)
   {
      delete disc_cdaccess;
      disc_cdaccess = NULL;
   }
}

void CDIF_ST::HintReadSector(uint32 lba)
{
   // TODO: disc_cdaccess seek hint? (probably not, would require asynchronousitycamel)
}

bool CDIF_ST::ReadRawSector(uint8* buf, uint32 lba)
{
   try
   {
      disc_cdaccess->Read_Raw_Sector(buf, lba);
   }
   catch (std::exception &e)
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Sector %u read error: %s\n", lba, e.what());
      memset(buf, 0, 2352 + 96);
      return (false);
   }

   return (true);
}

CDIF* CDIF_Open(const char* path)
{
   CDAccess* cda = cdaccess_open_image(path);

   //single threaded reader :
   return new CDIF_ST(cda);
}
