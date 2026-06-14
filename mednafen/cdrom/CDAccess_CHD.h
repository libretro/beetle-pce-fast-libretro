/* CDAccess_CHD.h -- C conversion */
#ifndef __MDFN_CDACCESS_CHD_H
#define __MDFN_CDACCESS_CHD_H

#include "CDAccess.h"

#ifdef __cplusplus
extern "C" {
#endif

CDAccess *CDAccess_CHD_New(const char *path, bool image_memcache);

#ifdef __cplusplus
}
#endif

#endif
