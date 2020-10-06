#ifndef __MDFN_ENDIAN_H
#define __MDFN_ENDIAN_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void Endian_A16_Swap(void *src, uint32_t nelements);
void Endian_A32_Swap(void *src, uint32_t nelements);
void Endian_A64_Swap(void *src, uint32_t nelements);

void Endian_A16_NE_to_LE(void *src, uint32_t nelements);
void Endian_A32_NE_to_LE(void *src, uint32_t nelements);
void Endian_A64_NE_to_LE(void *src, uint32_t nelements);

void Endian_A16_LE_to_NE(void *src, uint32_t nelements);
void Endian_A32_LE_to_NE(void *src, uint32_t nelements);
void Endian_A64_LE_to_NE(void *src, uint32_t nelements);

void Endian_V_LE_to_NE(void *src, uint32_t bytesize);
void Endian_V_NE_to_LE(void *src, uint32_t bytesize);

void FlipByteOrder(uint8_t *src, uint32_t count);

// The following functions can encode/decode to unaligned addresses.

static INLINE void MDFN_en16lsb(uint8_t *buf, uint16_t morp)
{
 buf[0]=morp;
 buf[1]=morp>>8;
}

static INLINE void MDFN_en32lsb(uint8_t *buf, uint32_t morp)
{
 buf[0]=morp;
 buf[1]=morp>>8;
 buf[2]=morp>>16;
 buf[3]=morp>>24;
}

static INLINE uint16_t MDFN_de16lsb(const uint8_t *morp)
{
 return(morp[0] | (morp[1] << 8));
}

static INLINE uint32_t MDFN_de32lsb(const uint8_t *morp)
{
 return(morp[0]|(morp[1]<<8)|(morp[2]<<16)|(morp[3]<<24));
}

#ifdef __cplusplus
}
#endif

#endif
