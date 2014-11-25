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

#ifndef __MDFN_CDACCESS_CCD_H_
#define __MDFN_CDACCESS_CCD_H_

#include "FileStream.h"
#include "CDAccess.h"

class CDAccess_CCD : public CDAccess
{
public:
   CDAccess_CCD(const char* path);
   virtual ~CDAccess_CCD();

   virtual void Read_Raw_Sector(uint8* buf, int32 lba);

   virtual void Read_TOC(CDUtility_TOC* toc);

   void Load(const char* path);
   void Cleanup(void);

   FSTREAM_ID img_stream;
   FSTREAM_ID sub_stream;
   size_t img_numsectors;
   CDUtility_TOC tocd;
};

#endif
