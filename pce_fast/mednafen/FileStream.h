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

#ifdef PSP
#include <pspiofilemgr.h>
#endif

class FileStream
{
 public:

 FileStream(const char *path);
 ~FileStream();

 uint64 read(void *data, uint64 count, bool error_on_eos = true);
 void write(const void *data, uint64 count);
 void seek(int64 offset, int whence);
 int64 tell(void);
 int64 size(void);
 void close(void);
 int get_line(std::string &str);

 FILE *fp;
};



#endif
