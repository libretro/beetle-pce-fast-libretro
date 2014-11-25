#ifndef __MDFN_PCE_ARCADE_CARD_H
#define __MDFN_PCE_ARCADE_CARD_H

#include "mednafen.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct
{
   uint32 base;           // 24 bits
   uint16 offset;         // 16 bits
   uint16 increment;      // 16 bits
   uint8 control;         //  7 bits
} ACPort_t;

typedef struct
{
   ACPort_t ports[4];
   uint32 shift_latch;    // 32 bits
   uint8 shift_bits;      // signed 4-bit value
   uint8 rotate_bits;  // same
} ArcadeCard_t;

typedef struct
{
   ArcadeCard_t AC;
   bool ACRAMUsed;
   uint8 ACRAM[0x200000];
} ArcadeCard;

extern ArcadeCard arcade_card;

void ArcadeCard_init(void);
void ArcadeCard_Power(void);
int ArcadeCard_StateAction(StateMem* sm, int load);
uint8 ArcadeCard_Read(uint32 A);
void ArcadeCard_Write(uint32 A, uint8 V);
inline void ArcadeCard_PhysWrite(uint32 A, uint8 V)
{
   ArcadeCard_Write(0x1a00 | ((A >> 9) & 0x30), V);
}
inline uint8 ArcadeCard_PhysRead(uint32 A)
{
   return (ArcadeCard_Read(0x1a00 | ((A >> 9) & 0x30)));
}
void ArcadeCard_PeekRAM(uint32 Address, uint32 Length, uint8* Buffer);
void ArcadeCard_PokeRAM(uint32 Address, uint32 Length, const uint8* Buffer);

#ifdef __cplusplus
}
#endif

#endif
