// TODO/WIP

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

#include <sys/stat.h>
#include "mednafen.h"
#include "FileStream.h"

#include <stdarg.h>
#include <string.h>

#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

#define fseeko fseek
#define ftello ftell

FileStream::FileStream(const char *path)
{
  fp = fopen(path, "rb");

 assert(fp);
//  throw(MDFN_Error(ene.Errno(), ("Error opening file %s"), ene.StrError()));
}

FileStream::~FileStream()
{
}

uint64 FileStream::read(void *data, uint64 count, bool error_on_eos)
{
   return fread(data, 1, count, fp);
}

void FileStream::write(const void *data, uint64 count)
{
   fwrite(data, 1, count, fp);
}

void FileStream::seek(int64 offset, int whence)
{
   fseeko(fp, offset, whence);
}

int64 FileStream::tell(void)
{
   return ftello(fp);
}

int64 FileStream::size(void)
{
   struct stat buf;

   fstat(fileno(fp), &buf);

   return(buf.st_size);
}

void FileStream::close(void)
{
   if(!fp)
      return;

   FILE *tmp = fp;
   fp = NULL;
   fclose(tmp);
}
int FileStream::get_line(std::string &str)
{
 uint8 c;

 str.clear();	// or str.resize(0)??

 while(read(&c, sizeof(c), false) > 0)
 {
  if(c == '\r' || c == '\n' || c == 0)
   return(c);

  str.push_back(c);
 }

 return(-1);
}
