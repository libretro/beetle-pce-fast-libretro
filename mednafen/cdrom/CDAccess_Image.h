#ifndef __MDFN_CDACCESS_IMAGE_H
#define __MDFN_CDACCESS_IMAGE_H

#include "CDAccess.h"

#ifdef __cplusplus
extern "C" {
#endif

CDAccess *CDAccess_Image_New(const char *path, bool image_memcache);

#ifdef __cplusplus
}
#endif

#endif
