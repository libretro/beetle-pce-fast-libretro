#ifndef _STATE_H
#define _STATE_H

#include "mednafen.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct
{
   uint8 *data;
   uint32 loc;
   uint32 len;
   uint32 malloced;
   uint32 initial_malloc; // A setting!
} StateMem;

// Eh, we abuse the smem_* in-memory stream code
// in a few other places. :)
int32 smem_read(StateMem *st, void *buffer, uint32 len);
int32 smem_write(StateMem *st, void *buffer, uint32 len);
int32 smem_putc(StateMem *st, int value);
int32 smem_seek(StateMem *st, uint32 offset, int whence);
int smem_write32le(StateMem *st, uint32 b);
int smem_read32le(StateMem *st, uint32 *b);

int MDFNSS_SaveSM(void *st);
int MDFNSS_LoadSM(void *st);

// Flag for a single, >= 1 byte native-endian variable
#define MDFNSTATE_RLSB            0x80000000

// 32-bit native-endian elements
#define MDFNSTATE_RLSB32          0x40000000

// 16-bit native-endian elements
#define MDFNSTATE_RLSB16          0x20000000

// 64-bit native-endian elements
#define MDFNSTATE_RLSB64          0x10000000

#define MDFNSTATE_BOOL		  0x08000000

typedef struct {
   void *v;		// Pointer to the variable/array
   uint32 size;		// Length, in bytes, of the data to be saved EXCEPT:
   //  In the case of MDFNSTATE_BOOL, it is the number of bool elements to save(bool is not always 1-byte).
   // If 0, the subchunk isn't saved.
   uint32 flags;	// Flags
   const char *name;	// Name
} SFORMAT;

#define SFVARN(x, n) { &(x), sizeof(x), MDFNSTATE_RLSB, n }
#define SFVAR(x) SFVARN((x), #x)

#define SFVARN_BOOL(x, n) { &(x), 1, MDFNSTATE_RLSB | MDFNSTATE_BOOL, n }
#define SFVAR_BOOL(x) SFVARN_BOOL((x), #x)

#define SFARRAYN(x, l, n) { (x), (uint32)(l), 0, n }
#define SFARRAY(x, l) SFARRAYN((x), (l), #x)

#define SFARRAYBN(x, l, n) { (x), (uint32)(l), MDFNSTATE_BOOL, n }
#define SFARRAYB(x, l) SFARRAYBN((x), (l), #x)

#define SFARRAY16N(x, l, n) { (x), (uint32)((l) * sizeof(uint16)), MDFNSTATE_RLSB16 , n }
#define SFARRAY16(x, l) SFARRAY16N((x), (l), #x)

#define SFARRAY32N(x, l, n) { (x), (uint32)((l) * sizeof(uint32)), MDFNSTATE_RLSB32 , n }
#define SFARRAY32(x, l) SFARRAY32N((x), (l), #x)

#define SFARRAY64N(x, l, n) { (x), (uint32)((l) * sizeof(uint64)), MDFNSTATE_RLSB64 , n }
#define SFARRAY64(x, l) SFARRAY64N((x), (l), #x)

#define SFARRAYDN(x, l, n) { (x), (uint32)((l) * 8), MDFNSTATE_RLSB64, n }
#define SFARRAYD(x, l) SFARRAYDN((x), (l), #x)

#define SFEND { 0, 0, 0, 0 }

int MDFNSS_StateAction(void *st, int load, SFORMAT *sf, const char *name);

#ifdef __cplusplus
}
#endif

#endif
