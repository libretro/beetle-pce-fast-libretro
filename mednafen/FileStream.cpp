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
#include "Stream.h"
#include "FileStream.h"

#include <stdarg.h>
#include <string.h>

#ifdef PSP
#include <pspiofilemgr.h>

FileStream::FileStream(const char *path, const int mode): OpenedMode(mode)
{
 if(mode == FileStream::MODE_WRITE)
  fp = sceIoOpen(path, PSP_O_WRONLY|PSP_O_CREAT, 0777);
 else
  fp = sceIoOpen(path, PSP_O_RDONLY, 0777);

 if(fp < 0)
 {
  ErrnoHolder ene(errno);

  throw(MDFN_Error(ene.Errno(), ("Error opening file %s"), ene.StrError()));
 }

}

FileStream::~FileStream()
{
   if (fp >= 0)
      sceIoClose(fp);
}

uint64 FileStream::attributes(void)
{
   uint64 ret = ATTRIBUTE_SEEKABLE;

   switch(OpenedMode)
   {
      case FileStream::MODE_READ:
         ret |= ATTRIBUTE_READABLE;
         break;
      case FileStream::MODE_WRITE_SAFE:
      case FileStream::MODE_WRITE:
         ret |= ATTRIBUTE_WRITEABLE;
         break;
   }

   return ret;
}

uint64 FileStream::read(void *data, uint64 count, bool error_on_eos)
{
#if 0
   static u8 CD_cache_buffer[2352*50];
   static u8* CD_cache_buffer_pos = CD_cache_buffer;

   static int read_count = 0;
//   static u8* old_buffer = NULL;
//   printf("%6i : read of %u, data : 0x%08X, old_data+%u\n", read_count, (u32)count, (u32)data,(u8*)data-old_buffer);
//   fflush(stdout);
//   old_buffer = (u8*)data;

   if ( read_count == 1)
   {
      sceIoRead(fp, data, count);
      sceIoReadAsync(fp, CD_cache_buffer, 2352*50);
      CD_cache_buffer_pos = CD_cache_buffer;
      read_count++;
      return count;
   }

   if (read_count > 1)
   {
      SceInt64 res;
      sceIoWaitAsync(fp, &res);
      memcpy(data, CD_cache_buffer_pos, count);
      CD_cache_buffer_pos += count;
      read_count++;
      return count;
   }
//   if (read_count > 1)
//      return count;
//   if (read_count == 1)
//   {
//      sceIoRead(fp,data,count*42);
//      return count;
//   }

   read_count++;
#endif

   return sceIoRead(fp,data,count);

}

void FileStream::write(const void *data, uint64 count)
{
   sceIoWrite(fp, data, count);
}

void FileStream::seek(int64 offset, int whence)
{
#if 0
   if (offset!=55415472)
      return;
//   printf("seek to %u \n", (s32)offset);
#endif
   sceIoLseek32(fp, offset, whence);

}

int64 FileStream::tell(void)
{

   return sceIoLseek32(fp, 0, SEEK_CUR);
}

int64 FileStream::size(void)
{
   int current_pos = sceIoLseek32(fp, 0, SEEK_CUR);
   int size = sceIoLseek32(fp, 0, SEEK_END);

   sceIoLseek32(fp, current_pos, SEEK_SET);

   return(size);
}

void FileStream::close(void)
{
   if (fp >= 0)
      sceIoClose(fp);
   fp = -1;
}

#else
#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

#define fseeko fseek
#define ftello ftell

FileStream::FileStream(const char *path, const int mode): OpenedMode(mode)
{
 if(mode == FileStream::MODE_WRITE)
  fp = fopen(path, "wb");
 else
  fp = fopen(path, "rb");

 assert(fp);
//  throw(MDFN_Error(ene.Errno(), ("Error opening file %s"), ene.StrError()));
}

FileStream::~FileStream()
{
}

uint64 FileStream::attributes(void)
{
   uint64 ret = ATTRIBUTE_SEEKABLE;

   switch(OpenedMode)
   {
      case FileStream::MODE_READ:
         ret |= ATTRIBUTE_READABLE;
         break;
      case FileStream::MODE_WRITE_SAFE:
      case FileStream::MODE_WRITE:
         ret |= ATTRIBUTE_WRITEABLE;
         break;
   }

   return ret;
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
#endif
