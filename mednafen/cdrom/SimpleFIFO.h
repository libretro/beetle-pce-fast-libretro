#ifndef __MDFN_SIMPLEFIFO_H
#define __MDFN_SIMPLEFIFO_H

#include <vector>
#include <stdint.h>
#include <assert.h>

class SimpleFIFO
{
 public:

 // Constructor
 SimpleFIFO(uint32 the_size) // Size should be a power of 2!
 {
  data.resize(round_up_pow2(the_size));
  size = the_size;
  read_pos = 0;
  write_pos = 0;
  in_count = 0;
 }

 // Destructor
 INLINE ~SimpleFIFO()
 {

 }

 INLINE void SaveStatePostLoad(void)
 {
  read_pos %= data.size();
  write_pos %= data.size();
  in_count %= (data.size() + 1);
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
   read_pos = (read_pos + 1) & (data.size() - 1);
   in_count--;
  }

  return(ret);
 }

 INLINE uint8_t ReadByte(bool peek = false)
 {
  assert(sizeof(uint8_t) == 1);

  return(ReadUnit(peek));
 }

 INLINE void Write(const uint8_t *happy_data, uint32 happy_count)
 {
  assert(CanWrite() >= happy_count);

  while(happy_count)
  {
   data[write_pos] = *happy_data;

   write_pos = (write_pos + 1) & (data.size() - 1);
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
  assert(sizeof(uint8_t) == 1);
  Write(&wr_data, 1);
 }


 INLINE void Flush(void)
 {
  read_pos = 0;
  write_pos = 0;
  in_count = 0;
 }

 //private:
 std::vector<uint8_t> data;
 uint32 size;
 uint32 read_pos; // Read position
 uint32 write_pos; // Write position
 uint32 in_count; // Number of units in the FIFO
};


#endif
