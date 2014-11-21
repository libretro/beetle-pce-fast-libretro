#ifndef MDFN_FILE_H
#define MDFN_FILE_H

#include <string>

#define MDFNFILE_EC_NOTFOUND  1
#define MDFNFILE_EC_OTHER  2

typedef struct
{
   uint8* f_data;
   int64 f_size;
   char* f_ext;
   int64 location;
} MDFNFILE;

bool MDFNFILE_Open(MDFNFILE* fp, const char* path);
bool MDFNFILE_Close(MDFNFILE* fp);
uint64 MDFNFILE_fread(MDFNFILE* fp, void* ptr, size_t size, size_t nmemb);
int MDFNFILE_fseek(MDFNFILE* fp, int64 offset, int whence);
int MDFNFILE_read32le(MDFNFILE* fp, uint32* Bufo);
int MDFNFILE_read16le(MDFNFILE* fp, uint16* Bufo);
char* MDFNFILE_fgets(MDFNFILE *fp, char* s, int size);
bool MDFNFILE_MakeMemWrapAndClose(MDFNFILE *fp, void* tz);

inline uint64 MDFNFILE_ftell(MDFNFILE* fp)
{
   return (fp->location);
}

inline void MDFNFILE_rewind(MDFNFILE* fp)
{
   fp->location = 0;
}

inline int MDFNFILE_fgetc(MDFNFILE* fp)
{
   if (fp->location < fp->f_size)
      return fp->f_data[fp->location++];

   return EOF;
}

inline int MDFNFILE_fisarchive(MDFNFILE* fp)
{
   return (0);
}

#endif
