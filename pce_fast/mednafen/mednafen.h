#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mednafen-types.h"
#include "math_ops.h"
#include "settings.h"
#include "git.h"
extern MDFNGI MDFNGameInfo;


#include "mednafen-driver.h"
#include "mednafen-endian.h"
#include "mednafen-memory.h"


#ifdef _WIN32
#define strcasecmp _stricmp
#endif

#ifdef __LIBRETRO__
#define GET_FDATA(fp) (fp.f_data)
#define GET_FSIZE(fp) (fp.f_size)
#define GET_FEXTS(fp) (fp.f_ext)
#define GET_FDATA_PTR(fp) (fp->f_data)
#define GET_FSIZE_PTR(fp) (fp->f_size)
#define GET_FEXTS_PTR(fp) (fp->f_ext)
#define gzopen(a, b) fopen(a, b)
#define gzread(a, b, c) fread(b, c, 1, a)
#define gzclose(a) fclose(a)
#define gzgetc(a) fgetc(a)
#define gzseek(a,b,c) fseek(a,b,c)
#else
#define GET_FDATA(fp) (fp.Data())
#define GET_FSIZE(fp) (fp.Size())
#define GET_FDATA_PTR(fp) (fp->data)
#define GET_FSIZE_PTR(fp) (fp->size)
#define GET_FEXTS_PTR(fp) (fp->ext)
#define gzread(a, b, c) gzread(a, b, c)
#define gzclose(a) gzclose(a)
#define gzgetc(a) gzgetc(a)
#define gzseek(a,b,c) gzseek(a,b,c)
#endif

#define MDFN_PrintError printf
#define MDFN_printf printf
#define MDFN_DispMessage printf

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);

void MDFN_MidSync(EmulateSpecStruct *espec);

#ifndef PATH_MAX
#ifdef MAX_PATH
#define PATH_MAX MAX_PATH
#else
#define PATH_MAX  4096
#endif
#endif

#ifdef _WIN32
#define SLASH_CHAR '\\'
#define SLASH_STRING "\\"
#else
#define SLASH_CHAR '/'
#define SLASH_STRING "/"
#endif


#include "pce.h"

#endif
