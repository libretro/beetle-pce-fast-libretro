#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mednafen-types.h"
#include "settings.h"
#include "git.h"
extern MDFNGI MDFNGameInfo;


#include "mednafen-driver.h"
#include "mednafen-endian.h"
#include "mednafen-memory.h"


#ifdef _WIN32
#define strcasecmp _stricmp
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
