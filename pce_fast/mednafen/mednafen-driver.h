#ifndef __MDFN_MEDNAFEN_DRIVER_H
#define __MDFN_MEDNAFEN_DRIVER_H

#include <stdio.h>
//#include <string>

#include "settings-common.h"

#define MDFNI_printf MDFN_printf

uint32 MDFND_GetTime(void);

/* path = path of game/file to load.  returns NULL on failure. */
bool MDFNI_LoadGame(const char *force_module, const char *path);

bool MDFNI_LoadCD(const char *sysname, const char *devicename);

/* Sets the base directory(save states, snapshots, etc. are saved in directories
   below this directory. */
void MDFNI_SetBaseDirectory(const char *dir);

#define MDFNI_DispMessage printf

uint32 MDFNI_CRC32(uint32 crc, uint8 *buf, uint32 len);

// NES hackish function.  Should abstract in the future.
int MDFNI_DatachSet(const uint8 *rcode);

void MDFNI_DumpModulesDef(const char *fn);


#endif
