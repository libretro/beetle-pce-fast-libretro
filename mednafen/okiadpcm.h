/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __MDFN_OKIADPCM_H
#define __MDFN_OKIADPCM_H

/* PC-FX ADPCM decoder not finished! */

#include "mednafen-types.h"
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
 OKIADPCM_MSM5205 = 0,
 OKIADPCM_MSM5218 = 1,
 OKIADPCM_COUNT
} OKIADPCM_Chip;

extern const int OKIADPCM_StepSizes[49];
extern const int OKIADPCM_StepIndexDeltas[16];
extern const int32 OKIADPCM_DeltaTable[49][16];

/* Was a C++ template (OKIADPCM_Decoder<CHIP_TYPE>); the only
 * instantiation in this core is OKIADPCM_MSM5205, so the decoder is
 * monomorphized here as a plain struct + free functions specialized
 * for the MSM5205 (10-bit D/A, sample masked to 12 bits / 0xFFF). */
typedef struct
{
 int32 CurSample;
 int32 StepSizeIndex;
} OKIADPCM_Decoder;

static INLINE void OKIADPCM_Init(OKIADPCM_Decoder *d)
{
 d->CurSample     = 0x0800;
 d->StepSizeIndex = 0;
}

static INLINE uint16 OKIADPCM_GetSample(const OKIADPCM_Decoder *d)
{
 return (uint16)d->CurSample;
}

static INLINE void OKIADPCM_SetSample(OKIADPCM_Decoder *d, uint16 new_sample)
{
 d->CurSample = new_sample;
}

static INLINE uint8 OKIADPCM_GetSSI(const OKIADPCM_Decoder *d)
{
 return (uint8)d->StepSizeIndex;
}

static INLINE void OKIADPCM_SetSSI(OKIADPCM_Decoder *d, uint8 new_ssi)
{
 d->StepSizeIndex = new_ssi;
}

/* DecodeDelta returns the coded delta for the given nibble and
 * (previous) predictor. It will not wrap nor saturate the returned
 * value, and CurSample is not updated. */
static INLINE int32 OKIADPCM_DecodeDelta(OKIADPCM_Decoder *d, const uint8 nibble)
{
 int32 ret = OKIADPCM_DeltaTable[d->StepSizeIndex][nibble];

 d->StepSizeIndex += OKIADPCM_StepIndexDeltas[nibble];

 if(d->StepSizeIndex < 0)
  d->StepSizeIndex = 0;

 if(d->StepSizeIndex > 48)
  d->StepSizeIndex = 48;

 return ret;
}

/* Returns the full 12 bits (MSM5205 D/A is 10-bit; caller truncates
 * as needed). Sample is masked to 12 bits, matching the MSM5205
 * branch of the original template. */
static INLINE uint16 OKIADPCM_Decode(OKIADPCM_Decoder *d, const uint8 nibble)
{
 d->CurSample += OKIADPCM_DecodeDelta(d, nibble);
 d->CurSample &= 0xFFF;
 return (uint16)d->CurSample;
}

#ifdef __cplusplus
}
#endif

#endif
