#ifndef __MDFN_SIMPLEFIFO_H
#define __MDFN_SIMPLEFIFO_H

#include <stdint.h>
#include <stdlib.h>

class SimpleFIFO
{
 public:

 // Constructor
 SimpleFIFO(uint32 the_size)
 {
    data      = (uint8_t*)malloc(the_size * sizeof(uint8_t));
    size      = the_size;
    read_pos  = 0;
    write_pos = 0;
    in_count  = 0;
 }

 // Destructor
 INLINE ~SimpleFIFO()
 {
    if (data)
       free(data);
 }

 INLINE uint32 CanWrite(void)
 {
    return(size - in_count);
 }

 INLINE uint8_t ReadUnit(bool peek = false)
 {
    uint8_t ret = data[read_pos];

    if(!peek)
    {
       read_pos = (read_pos + 1) & (size - 1);
       in_count--;
    }

    return(ret);
 }

 INLINE uint8_t ReadByte(bool peek = false)
 {
    return(ReadUnit(peek));
 }

 INLINE void Write(const uint8_t *happy_data, uint32 happy_count)
 {
    while(happy_count)
    {
       data[write_pos] = *happy_data;

       write_pos = (write_pos + 1) & (size - 1);
       in_count++;
       happy_data++;
       happy_count--;
    }
 }

 INLINE void WriteUnit(const uint8_t& wr_data)
 {
    Write(&wr_data, 1);
 }

 INLINE void WriteByte(const uint8_t& wr_data)
 {
    Write(&wr_data, 1);
 }


 INLINE void Flush(void)
 {
    read_pos  = 0;
    write_pos = 0;
    in_count  = 0;
 }

 INLINE void SaveStatePostLoad(void)
 {
    read_pos  %= size;
    write_pos %= size;
    in_count  %= (size + 1);
 }

 uint8_t *data;
 uint32 size;
 uint32 read_pos; // Read position
 uint32 write_pos; // Write position
 uint32 in_count; // Number of units in the FIFO
};


#endif
