#ifndef __MDFN_SIMPLEFIFO_H
#define __MDFN_SIMPLEFIFO_H

#include <assert.h>
#include "mednafen-types.h"

template<typename T>
class SimpleFIFO
{
public:

   // Constructor
   SimpleFIFO(uint32 the_size)
   {
      // Size should be a power of 2!
      assert(the_size && !(the_size & (the_size - 1)));

      data = (T*)malloc(the_size * sizeof(T));
      size = the_size;
      read_pos = 0;
      write_pos = 0;
      in_count = 0;
   }

   // Destructor
   inline ~SimpleFIFO()
   {
      free(data);
   }

   inline uint32 CanRead(void)
   {
      return (in_count);
   }

   inline uint32 CanWrite(void)
   {
      return (size - in_count);
   }

   inline T ReadUnit(bool peek = false)
   {
      T ret;

      assert(in_count > 0);

      ret = data[read_pos];

      if (!peek)
      {
         read_pos = (read_pos + 1) & (size - 1);
         in_count--;
      }

      return (ret);
   }

   inline uint8 ReadByte(bool peek = false)
   {
      assert(sizeof(T) == 1);

      return (ReadUnit(peek));
   }

   inline void Write(const T* happy_data, uint32 happy_count)
   {
      assert(CanWrite() >= happy_count);

      while (happy_count)
      {
         data[write_pos] = *happy_data;

         write_pos = (write_pos + 1) & (size - 1);
         in_count++;
         happy_data++;
         happy_count--;
      }
   }

   inline void WriteUnit(const T &wr_data)
   {
      Write(&wr_data, 1);
   }

   inline void WriteByte(const T &wr_data)
   {
      assert(sizeof(T) == 1);
      Write(&wr_data, 1);
   }


   inline void Flush(void)
   {
      read_pos = 0;
      write_pos = 0;
      in_count = 0;
   }

   //private:
   T* data;
   uint32 size;
   uint32 read_pos; // Read position
   uint32 write_pos; // Write position
   uint32 in_count; // Number of units in the FIFO
};


#endif
