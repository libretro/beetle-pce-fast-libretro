#ifndef _GENERAL_H
#define _GENERAL_H

#include <string>

extern uint32 MDFN_RoundUpPow2(uint32);

void GetFileBase(const char *f);

void MDFN_trim(char *string);

void MDFN_trim(std::string &string);


const char * GetFNComponent(const char *str);

void MDFN_GetFilePathComponents(const std::string &file_path, std::string *dir_path_out, std::string *file_base_out = NULL, std::string *file_ext_out = NULL);
std::string MDFN_EvalFIP(const std::string &dir_path, const std::string &rel_path);

static inline void MDFN_strtoupper(char* str)
{
   for (size_t x = 0; str[x]; x++)
   {
      if (str[x] >= 'a' && str[x] <= 'z')
         str[x] = str[x] - 'a' + 'A';
   }
}

static inline void MDFN_strtoupper(std::string &str)
{
   const size_t len = str.length();

   for (size_t x = 0; x < len; x++)
   {
      if (str[x] >= 'a' && str[x] <= 'z')
         str[x] = str[x] - 'a' + 'A';
   }
}

#endif
