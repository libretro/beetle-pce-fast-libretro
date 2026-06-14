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

#include <stdlib.h>
#include <string.h>

#include "CDAccess.h"

/* Backend factories, each implemented in CDAccess_<X>.c. Each allocates
 * its concrete struct (embedding CDAccess as first member) and installs
 * the vtable. */
CDAccess *CDAccess_Image_New(const char *path, bool image_memcache);
CDAccess *CDAccess_CCD_New  (const char *path, bool image_memcache);
#ifdef HAVE_CHD
CDAccess *CDAccess_CHD_New  (const char *path, bool image_memcache);
#endif

/* Case-insensitive match of the path's 3-char extension against a
 * lowercase literal. Avoids strcasecmp (<strings.h> is POSIX-only and
 * absent on MSVC); ext3 is always an ASCII lowercase 3-char literal
 * here, so a local ASCII tolower of the path chars is sufficient and
 * fully portable. */
static int has_ext(const char *path, const char *ext3)
{
   size_t n = strlen(path);
   int i;
   const char *p;
   if (n < 4 || path[n - 4] != '.')
      return 0;
   p = path + n - 3;
   for (i = 0; i < 3; i++)
   {
      char c = p[i];
      if (c >= 'A' && c <= 'Z')
         c = c - 'A' + 'a';
      if (c != ext3[i])
         return 0;
   }
   return 1;
}

CDAccess *CDAccess_Open(const char *path, bool image_memcache)
{
   if (has_ext(path, "ccd"))
      return CDAccess_CCD_New(path, image_memcache);
#ifdef HAVE_CHD
   if (has_ext(path, "chd"))
      return CDAccess_CHD_New(path, image_memcache);
#endif
   return CDAccess_Image_New(path, image_memcache);
}
