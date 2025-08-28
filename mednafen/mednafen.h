#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H

#include "mednafen-types.h"
#include <stdlib.h>
#include <string.h>

#include "git.h"
#include "settings.h"

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);

void MDFN_MidSync(EmulateSpecStruct *espec);
void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y);

#ifdef __cplusplus
extern "C" {
#endif

void MDFN_DispMessage(const char *format, ...);

#ifdef __cplusplus
}
#endif

#endif
