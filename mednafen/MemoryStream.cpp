#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "MemoryStream.h"

#ifdef _XBOX
#ifndef SIZE_MAX
#define SIZE_MAX _UI32_MAX
#endif
#endif

#define MSEEK_END	2
#define MSEEK_CUR	1
#define MSEEK_SET	0

// Source: http://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
// Rounds up to the nearest power of 2.
static INLINE uint32 round_up_pow2(uint32 v)
{
   v--;
   v |= v >> 1;
   v |= v >> 2;
   v |= v >> 4;
   v |= v >> 8;
   v |= v >> 16;
   v++;

   v += (v == 0);

   return(v);
}


/*
 TODO:
	Write and Seek expansion that fail should not corrupt the state.

	Copy and assignment constructor fixes.
*/

// TODO 128-bit integers for range checking?

MemoryStream::MemoryStream() : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
 data_buffer_size = 0;
 data_buffer_alloced = 64;
 data_buffer = (uint8*)realloc(data_buffer, data_buffer_alloced);
}

MemoryStream::MemoryStream(uint64 size_hint) : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
 data_buffer_size = 0;
 data_buffer_alloced = (size_hint > SIZE_MAX) ? SIZE_MAX : size_hint;

 data_buffer = (uint8*)realloc(data_buffer, data_buffer_alloced);
}

MemoryStream::MemoryStream(Stream *stream) : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
   if((position = stream->tell()) != 0)
      stream->seek(0, MSEEK_SET);

   data_buffer_size = stream->size();
   data_buffer_alloced = data_buffer_size;
   data_buffer = (uint8*)realloc(data_buffer, data_buffer_alloced);

   stream->read(data_buffer, data_buffer_size);

   stream->close();
   delete stream;
}

MemoryStream::MemoryStream(const MemoryStream &zs)
{
 data_buffer_size = zs.data_buffer_size;
 data_buffer_alloced = zs.data_buffer_alloced;
 data_buffer = (uint8*)malloc(data_buffer_alloced);

 memcpy(data_buffer, zs.data_buffer, data_buffer_size);

 position = zs.position;
}

MemoryStream::~MemoryStream()
{
 if(data_buffer)
 {
  free(data_buffer);
  data_buffer = NULL;
 }
}

uint8 *MemoryStream::map(void)
{
 return data_buffer;
}

void MemoryStream::unmap(void)
{

}


INLINE void MemoryStream::grow_if_necessary(uint64 new_required_size)
{
 if(new_required_size > data_buffer_size)
 {
  if(new_required_size > data_buffer_alloced)
  {
   uint64 new_required_alloced = round_up_pow2(new_required_size);
   uint8 *new_data_buffer;

   // first condition will happen at new_required_size > (1ULL << 63) due to round_up_pow2() "wrapping".
   // second condition can occur when running on a 32-bit system.
   if(new_required_alloced < new_required_size || new_required_alloced > SIZE_MAX)
    new_required_alloced = SIZE_MAX;

   new_data_buffer = (uint8*)realloc(data_buffer, new_required_alloced);

   //
   // Assign all in one go after the realloc() so we don't leave our object in an inconsistent state if the realloc() fails.
   //
   data_buffer = new_data_buffer;
   data_buffer_size = new_required_size;
   data_buffer_alloced = new_required_alloced;
  }
  else
   data_buffer_size = new_required_size;
 }
}

uint64 MemoryStream::read(void *data, uint64 count)
{
   if(count > data_buffer_size)
      count = data_buffer_size;

   if((uint64)position > (data_buffer_size - count))
      count = data_buffer_size - position;

   memmove(data, &data_buffer[position], count);
   position += count;

   return count;
}

void MemoryStream::write(const void *data, uint64 count)
{
 uint64 nrs = position + count;

 grow_if_necessary(nrs);

 memmove(&data_buffer[position], data, count);
 position += count;
}

void MemoryStream::seek(int64 offset, int whence)
{
 int64 new_position;

 switch(whence)
 {
  case MSEEK_SET:
	new_position = offset;
	break;

  case MSEEK_CUR:
	new_position = position + offset;
	break;

  case MSEEK_END:
	new_position = data_buffer_size + offset;
	break;
 }

 if(!(new_position < 0))
  grow_if_necessary(new_position);

 position = new_position;
}

int64 MemoryStream::tell(void)
{
 return position;
}

int64 MemoryStream::size(void)
{
 return data_buffer_size;
}

void MemoryStream::close(void)
{

}


int MemoryStream::get_line(std::string &str)
{
 str.clear();	// or str.resize(0)??

 while(position < data_buffer_size)
 {
  uint8 c = data_buffer[position++];

  if(c == '\r' || c == '\n' || c == 0)
   return(c);

  str.push_back(c);	// Should be faster than str.append(1, c)
 }

 return(-1);
}

