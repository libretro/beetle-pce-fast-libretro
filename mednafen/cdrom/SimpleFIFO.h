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

 INLINE uint8_t ReadUnit(void)
 {
    uint8_t ret = data[read_pos];
    read_pos = (read_pos + 1) & (size - 1);
    in_count--;
    return(ret);
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

 INLINE void Flush(void)
 {
    read_pos  = 0;
    write_pos = 0;
    in_count  = 0;
 }

 uint8_t *data;
 uint32 size;
 uint32 read_pos; // Read position
 uint32 write_pos; // Write position
 uint32 in_count; // Number of units in the FIFO
};


#endif
