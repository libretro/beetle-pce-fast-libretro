#ifndef __MDFN_SIMPLEFIFO_H
#define __MDFN_SIMPLEFIFO_H

#include <stdint.h>
#include <stdlib.h>

#include <retro_inline.h>
/* Was pulled in transitively by C++ consumers; include directly for
 * the uint32 alias now that C TUs include this header. */
#include "../mednafen-types.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Was a C++ class with ctor/dtor; converted to a plain struct + free
 * functions (saturn-style). Capacity (size) must be a power of two:
 * the wrap arithmetic uses & (size - 1). The data buffer is heap
 * allocated by SimpleFIFO_Init() and released by SimpleFIFO_Deinit().
 *
 * State-save layout is unchanged: callers serialize data[0..size),
 * read_pos, write_pos and in_count exactly as before. */
typedef struct
{
   uint8_t *data;
   uint32   size;
   uint32   read_pos;  /* Read position  */
   uint32   write_pos; /* Write position */
   uint32   in_count;  /* Number of units in the FIFO */
} SimpleFIFO;

/* Returns 1 on success, 0 if allocation failed. */
static INLINE int SimpleFIFO_Init(SimpleFIFO *fifo, uint32 the_size)
{
   fifo->data      = (uint8_t *)malloc(the_size * sizeof(uint8_t));
   fifo->size      = the_size;
   fifo->read_pos  = 0;
   fifo->write_pos = 0;
   fifo->in_count  = 0;
   return fifo->data != NULL;
}

static INLINE void SimpleFIFO_Deinit(SimpleFIFO *fifo)
{
   if (fifo->data)
      free(fifo->data);
   fifo->data = NULL;
}

static INLINE uint32 SimpleFIFO_CanWrite(const SimpleFIFO *fifo)
{
   return fifo->size - fifo->in_count;
}

static INLINE uint8_t SimpleFIFO_ReadUnit(SimpleFIFO *fifo)
{
   uint8_t ret    = fifo->data[fifo->read_pos];
   fifo->read_pos = (fifo->read_pos + 1) & (fifo->size - 1);
   fifo->in_count--;
   return ret;
}

static INLINE void SimpleFIFO_Write(SimpleFIFO *fifo, const uint8_t *happy_data, uint32 happy_count)
{
   while (happy_count)
   {
      fifo->data[fifo->write_pos] = *happy_data;

      fifo->write_pos = (fifo->write_pos + 1) & (fifo->size - 1);
      fifo->in_count++;
      happy_data++;
      happy_count--;
   }
}

static INLINE void SimpleFIFO_Flush(SimpleFIFO *fifo)
{
   fifo->read_pos  = 0;
   fifo->write_pos = 0;
   fifo->in_count  = 0;
}

#ifdef __cplusplus
}
#endif

#endif
