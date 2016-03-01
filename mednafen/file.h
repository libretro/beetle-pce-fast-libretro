#ifndef MDFN_FILE_H
#define MDFN_FILE_H

#include <string>

#define MDFNFILE_EC_NOTFOUND	1
#define MDFNFILE_EC_OTHER	2

class MDFNFILE
{
	public:

	MDFNFILE();
	// WIP constructors:
	MDFNFILE(const char *path, const void *known_ext, const char *purpose = NULL);

	~MDFNFILE();

	bool Open(const char *path, const void *known_ext, const char *purpose = NULL, const bool suppress_notfound_pe = FALSE);
	INLINE bool Open(const std::string &path, const void *known_ext, const char *purpose = NULL, const bool suppress_notfound_pe = FALSE)
	{
	 return(Open(path.c_str(), known_ext, purpose, suppress_notfound_pe));
	}

   bool ApplyIPS(void*);
	bool Close(void);

	uint64 fread(void *ptr, size_t size, size_t nmemb);
	int fseek(int64 offset, int whence);

	inline uint64 ftell(void)
	{
	 return(location);
	}

	inline void rewind(void)
	{
	 location = 0;
	}

	int read32le(uint32 *Bufo);
	int read16le(uint16 *Bufo);

	inline int _fgetc(void)
	{
	 if(location < f_size)
	  return f_data[location++];

	 return EOF;
	}

	inline int fisarchive(void)
	{
	 return(0);
	}

	char *fgets(char *s, int size);
   uint8 *f_data;
   int64 f_size;
   char *f_ext;

	private:

        int64 location;

	bool MakeMemWrapAndClose(void *tz);
};

#endif
