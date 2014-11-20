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

#include "mednafen.h"
#include <stdarg.h>
#include <string.h>
#include <errno.h>

#include "file.h"
#include "general.h"

// This function should ALWAYS close the system file "descriptor"(gzip library, zip library, or FILE *) it's given,
// even if it errors out.
bool MDFNFILE_MakeMemWrapAndClose(MDFNFILE* this_fp, void *fp)
{
   bool ret = FALSE;

   this_fp->location = 0;

   fseek((FILE *)fp, 0, SEEK_END);
   this_fp->f_size = ftell((FILE *)fp);
   fseek((FILE *)fp, 0, SEEK_SET);

   if (!(this_fp->f_data = (uint8*)MDFN_malloc(this_fp->f_size, ("file read buffer"))))
      goto fail;
   fread(this_fp->f_data, 1, this_fp->f_size, (FILE *)fp);

   ret = TRUE;
fail:
   fclose((FILE*)fp);
   return ret;
}



bool MDFNFILE_Open(MDFNFILE *this_fp, const char *path, const void *known_ext, const char *purpose, const bool suppress_notfound_pe)
{
   FILE *fp;
   (void)known_ext;

   if (!(fp = fopen(path, "rb")))
      return FALSE;

   fseek(fp, 0, SEEK_SET);

   if (!MDFNFILE_MakeMemWrapAndClose(this_fp, fp))
      return FALSE;

   const char *ld = (const char*)strrchr(path, '.');
   this_fp->f_ext = strdup(ld ? ld + 1 : "");

   return(TRUE);
}

bool MDFNFILE_Close(MDFNFILE *fp)
{
   if (fp->f_ext)
      free(fp->f_ext);
   fp->f_ext = 0;

   if (fp->f_data)
      free(fp->f_data);
   fp->f_data = 0;

   return(1);
}

uint64 MDFNFILE_fread(MDFNFILE *fp, void *ptr, size_t element_size, size_t nmemb)
{
   uint32 total = element_size * nmemb;

   if (fp->location >= fp->f_size)
      return 0;

   if ((fp->location + total) > fp->f_size)
   {
      int64 ak = fp->f_size - fp->location;

      memcpy((uint8*)ptr, fp->f_data + fp->location, ak);

      fp->location = fp->f_size;

      return(ak / element_size);
   }
   else
   {
      memcpy((uint8*)ptr, fp->f_data + fp->location, total);

      fp->location += total;

      return nmemb;
   }
}

int MDFNFILE_fseek(MDFNFILE *fp, int64 offset, int whence)
{
   switch(whence)
   {
      case SEEK_SET:
         if (offset >= fp->f_size)
            return -1;

         fp->location = offset;
         break;
      case SEEK_CUR:
         if ((offset + fp->location) > fp->f_size)
            return -1;

         fp->location += offset;
         break;
   }    

   return 0;
}

int MDFNFILE_read16le(MDFNFILE *fp, uint16 *val)
{
   if ((fp->location + 2) > fp->f_size)
      return 0;

   *val = MDFN_de16lsb(fp->f_data + fp->location);

   fp->location += 2;

   return 1;
}

int MDFNFILE_read32le(MDFNFILE *fp, uint32 *val)
{
   if ((fp->location + 4) > fp->f_size)
      return 0;

   *val = MDFN_de32lsb(fp->f_data + fp->location);

   fp->location += 4;

   return 1;
}

char *MDFNFILE_fgets(MDFNFILE *fp, char *s, int buffer_size)
{
   int pos = 0;

   if (!buffer_size)
      return(NULL);

   if (fp->location >= buffer_size)
      return(NULL);

   while(pos < (buffer_size - 1) && fp->location < buffer_size)
   {
      int v = fp->f_data[fp->location];
      s[pos] = v;
      fp->location++;
      pos++;
      if (v == '\n')
         break;
   }

   if (buffer_size)
      s[pos] = 0;

   return s;
}
