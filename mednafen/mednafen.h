#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H

#include "mednafen-types.h"
#include <stdlib.h>
#include <string.h>

#include "math_ops.h"
#include "git.h"
#include "settings.h"
#include "mednafen-endian.h"

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

#define GET_FDATA(fp) (fp.f_data)
#define GET_FSIZE(fp) (fp.f_size)
#define GET_FEXTS(fp) (fp.f_ext)
#define GET_FDATA_PTR(fp) (fp->data)
#define GET_FSIZE_PTR(fp) (fp->size)
#define GET_FEXTS_PTR(fp) (fp->ext)

extern MDFNGI *MDFNGameInfo;

void MDFN_PrintError(const char *format, ...);
void MDFN_DispMessage(const char *format, ...);

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);

void MDFN_MidSync(EmulateSpecStruct *espec);
void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y);

#endif
