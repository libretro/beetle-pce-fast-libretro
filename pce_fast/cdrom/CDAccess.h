#ifndef __MDFN_CDROMFILE_H
#define __MDFN_CDROMFILE_H

#include <stdio.h>

#include "CDUtility.h"

class CDAccess
{
public:

   CDAccess();
   virtual ~CDAccess();

   virtual void Read_Raw_Sector(uint8* buf, int32 lba) = 0;

   virtual void Read_TOC(CDUtility_TOC* toc) = 0;
};

CDAccess* cdaccess_open_image(const char* path);

#endif
