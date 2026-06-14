#ifndef _GENERAL_H
#define _GENERAL_H

#include <stddef.h>
#include <stdint.h>
#include <boolean.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
 MDFNMKF_STATE = 0,
 MDFNMKF_SNAP,
 MDFNMKF_CHEAT,
 MDFNMKF_PALETTE,
 MDFNMKF_IPS,
 MDFNMKF_MOVIE,
 MDFNMKF_AUX,
 MDFNMKF_SNAP_DAT,
 MDFNMKF_CHEAT_TMP,
 MDFNMKF_FIRMWARE
} MakeFName_Type;

/* Split file_path into directory / base name / extension. Any of the
 * three output buffers may be NULL to skip that component; out_size
 * applies to whichever buffers are non-NULL.
 *
 * Converted from the std::string-based API (which took std::string*
 * out-params) to caller-allocated char buffers, matching the C cdrom
 * layer. */
void MDFN_GetFilePathComponents(const char *file_path,
      char *dir_path_out, char *file_base_out,
      char *file_ext_out, size_t out_size);

/* Resolve rel_path against dir_path into the caller-supplied buffer.
 * Absolute rel_path values are copied through unchanged. */
void MDFN_EvalFIP(char *out, size_t out_size, const char *dir_path, const char *rel_path);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
/* -------------------------------------------------------------------------
 * Transitional C++ convenience wrappers.
 *
 * The canonical implementations above are pure C (general.c). These
 * inline overloads preserve the historical std::string-based signatures
 * so the cdrom backends and libretro.cpp - still C++ for now - keep
 * compiling without call-site churn. They delegate to the C functions
 * and are removed as each consumer is converted to C.
 *
 * MDFN_ltrim/rtrim/trim are std::string-only utilities with no C
 * caller; they stay here as inline helpers rather than in general.c.
 * --------------------------------------------------------------------- */
#include <string>
#include <cstddef>

static inline void MDFN_GetFilePathComponents(const std::string &file_path,
      std::string *dir_path_out, std::string *file_base_out = NULL,
      std::string *file_ext_out = NULL)
{
   char dir[4096];
   char base[4096];
   char ext[4096];
   MDFN_GetFilePathComponents(file_path.c_str(),
         dir_path_out  ? dir  : (char*)NULL,
         file_base_out ? base : (char*)NULL,
         file_ext_out  ? ext  : (char*)NULL,
         4096);
   if(dir_path_out)  *dir_path_out  = dir;
   if(file_base_out) *file_base_out = base;
   if(file_ext_out)  *file_ext_out  = ext;
}

static inline std::string MDFN_EvalFIP(const std::string &dir_path,
      const std::string &rel_path, bool skip_safety_check = false)
{
   char out[4096];
   (void)skip_safety_check;
   MDFN_EvalFIP(out, sizeof(out), dir_path.c_str(), rel_path.c_str());
   return std::string(out);
}

static inline void MDFN_ltrim(std::string &string)
{
   size_t len = string.length();
   size_t di  = 0;
   while(di < len && (string[di] == ' ' || string[di] == '\t'
            || string[di] == '\r' || string[di] == '\n' || string[di] == 0x0b))
      di++;
   if(di)
      string.erase(0, di);
}

static inline void MDFN_rtrim(std::string &string)
{
   size_t len = string.length();
   while(len)
   {
      char c = string[len - 1];
      if(c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == 0x0b)
         len--;
      else
         break;
   }
   string.resize(len);
}

static inline void MDFN_trim(std::string &string)
{
   MDFN_rtrim(string);
   MDFN_ltrim(string);
}
#endif

#endif
