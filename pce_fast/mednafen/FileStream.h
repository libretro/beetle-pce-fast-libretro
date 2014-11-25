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

// TODO/WIP

#ifndef __MDFN_FILESTREAM_H
#define __MDFN_FILESTREAM_H

#include <stdio.h>
#include <string>
#include "mednafen-types.h"

typedef FILE* FSTREAM_ID;

static inline long int fsize(FILE* fp)
{
   long int curr_pos, size;
   curr_pos = ftell(fp);
   fseek(fp,0,SEEK_END);
   size = ftell(fp);
   fseek(fp,curr_pos,SEEK_SET);
   return size;
}


#define FSTREAM_OPEN(path)                fopen((path), "rb")
#define FSTREAM_READ(data, count, fp)     fread((data), 1, (count), (fp))
#define FSTREAM_SEEK(fp, offset, whence)  fseek((fp), (offset), (whence))
#define FSTREAM_TELL(fp)                  ftell(fp)
#define FSTREAM_SIZE(fp)                  fsize(fp)
#define FSTREAM_CLOSE(fp)                 fclose(fp)

static inline int get_line(FSTREAM_ID fp, std::string &str)
{
 uint8 c;

 str.clear();	// or str.resize(0)??

 while(FSTREAM_READ(&c, 1, fp) > 0)
 {
  if(c == '\r' || c == '\n' || c == 0)
   return(c);

  str.push_back(c);
 }

 return(-1);
}


#endif
