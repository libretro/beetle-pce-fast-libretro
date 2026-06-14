#ifndef __MDFN_PCE_ARCADE_CARD_H
#define __MDFN_PCE_ARCADE_CARD_H

#include <boolean.h>

#include "../../mednafen-types.h"
#include "../../state.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
 uint32 base;           /* 24 bits */
 uint16 offset;         /* 16 bits */
 uint16 increment;      /* 16 bits */
 uint8 control;         /*  7 bits */
} ACPort_t;

typedef struct
{
 ACPort_t ports[4];
 uint32 shift_latch;    /* 32 bits */
 uint8 shift_bits;      /* signed 4-bit value */
 uint8 rotate_bits;	/* same */
} ArcadeCard_t;

/* Was a C++ class (ArcadeCard); converted to a struct + free functions.
 * The 2 MiB ACRAM buffer makes this large; instances are heap allocated
 * via ArcadeCard_new()/_free() (libretro used new/delete). */
typedef struct
{
 ArcadeCard_t AC;

 bool ACRAMUsed;
 uint8 ACRAM[0x200000];
} ArcadeCard;

ArcadeCard *ArcadeCard_new(void);
void ArcadeCard_free(ArcadeCard *ac);

void ArcadeCard_Power(ArcadeCard *ac);
int  ArcadeCard_StateAction(ArcadeCard *ac, StateMem *sm, int load, int data_only);

uint8 ArcadeCard_Read(ArcadeCard *ac, uint32 A, bool peek);	/* Pass peek as true to avoid read side effects (e.g. in a debugger). */
void  ArcadeCard_Write(ArcadeCard *ac, uint32 A, uint8 V);

static INLINE void ArcadeCard_PhysWrite(ArcadeCard *ac, uint32 A, uint8 V)
{
 ArcadeCard_Write(ac, 0x1a00 | ((A >> 9) & 0x30), V);
}

static INLINE uint8 ArcadeCard_PhysRead(ArcadeCard *ac, uint32 A, bool peek)
{
 return ArcadeCard_Read(ac, 0x1a00 | ((A >> 9) & 0x30), peek);
}

void ArcadeCard_PeekRAM(ArcadeCard *ac, uint32 Address, uint32 Length, uint8 *Buffer);
void ArcadeCard_PokeRAM(ArcadeCard *ac, uint32 Address, uint32 Length, const uint8 *Buffer);

#ifdef __cplusplus
}
#endif

#endif
