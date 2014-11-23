#ifndef __MDFN_STREAM_H
#define __MDFN_STREAM_H

// TODO/WIP

// TODO?: BufferedStream, no virtual functions, yes inline functions, constructor takes a Stream* argument.

#include "mednafen.h"
#include <errno.h>

#include <stdio.h>	// For SEEK_* defines, which we will use in Stream out of FORCE OF HABIT.
#include <string>

class Stream
{
 public:

 Stream();
 virtual ~Stream();

 enum
 {
  ATTRIBUTE_READABLE = 0,
  ATTRIBUTE_WRITEABLE,
  ATTRIBUTE_SEEKABLE
 };

 virtual uint64 read(void *data, uint64 count, bool error_on_eos = true) = 0;
 virtual void write(const void *data, uint64 count) = 0;

 virtual void seek(int64 offset, int whence) = 0;
 virtual int64 tell(void) = 0;
 virtual int64 size(void) = 0;
 virtual void close(void) = 0;	// Flushes(in the case of writeable streams) and closes the stream.
				// Necessary since this operation can fail(running out of disk space, for instance),
				// and throw an exception in the destructor would be a Bad Idea(TM).
				//
				// Manually calling this function isn't strictly necessary, but recommended when the
				// stream is writeable; it will be called automatically from the destructor, with any
				// exceptions thrown caught and logged.


 // Reads a line into "str", overwriting its contents; returns the line-end char('\n' or '\r' or '\0'), or -1 on EOF.
 // The line-end char won't be added to "str".
 // It's up to the caller to handle extraneous empty lines caused by DOS-format text lines(\r\n).
 // ("str" is passed by reference for the possibility of improved performance by reusing alloced memory for the std::string, though part
 //  of it would be up to the STL implementation).
 // Implemented as virtual so that a higher-performance version can be implemented if possible(IE with MemoryStream)
 virtual int get_line(std::string &str);
};
#endif
