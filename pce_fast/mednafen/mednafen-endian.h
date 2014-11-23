#ifndef __MDFN_ENDIAN_H
#define __MDFN_ENDIAN_H

#ifndef htole32
#define htole32 le32toh
#endif

#ifndef htole16
#define htole16 le16toh
#endif

void Endian_A16_Swap(void *src, uint32 nelements);
void Endian_A32_Swap(void *src, uint32 nelements);
void Endian_A64_Swap(void *src, uint32 nelements);

void Endian_A16_NE_to_LE(void *src, uint32 nelements);
void Endian_A32_NE_to_LE(void *src, uint32 nelements);
void Endian_A64_NE_to_LE(void *src, uint32 nelements);

void Endian_A16_LE_to_NE(void *src, uint32 nelements);
void Endian_A32_LE_to_NE(void *src, uint32 nelements);
void Endian_A64_LE_to_NE(void *src, uint32 nelements);

void Endian_V_LE_to_NE(void *src, uint32 bytesize);
void Endian_V_NE_to_LE(void *src, uint32 bytesize);

void FlipByteOrder(uint8 *src, uint32 count);

// The following functions can encode/decode to unaligned addresses.

static inline void MDFN_en32lsb(uint8 *buf, uint32 morp)
{
 buf[0]=morp;
 buf[1]=morp>>8;
 buf[2]=morp>>16;
 buf[3]=morp>>24;
}

static inline uint16 MDFN_de16lsb(const uint8 *morp)
{
 return(morp[0] | (morp[1] << 8));
}

static inline uint32 MDFN_de32lsb(const uint8 *morp)
{
 return(morp[0]|(morp[1]<<8)|(morp[2]<<16)|(morp[3]<<24));
}

#endif
