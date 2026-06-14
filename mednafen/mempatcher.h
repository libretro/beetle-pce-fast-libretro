#ifndef __MDFN_MEMPATCHER_H
#define __MDFN_MEMPATCHER_H

#include <boolean.h>

#include "mednafen-types.h"
#include "mempatcher-driver.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct __SUBCHEAT
{
	uint32 addr;
	uint8 value;
	int compare; /* < 0 on no compare */
} SUBCHEAT;

bool MDFNMP_Init(uint32 ps, uint32 numpages);
void MDFNMP_AddRAM(uint32 size, uint32 address, uint8 *RAM);
void MDFNMP_Kill(void);

void MDFNMP_InstallReadPatches(void);
void MDFNMP_RemoveReadPatches(void);

void MDFNMP_ApplyPeriodicCheats(void);

#ifdef __cplusplus
}
#endif

#endif
