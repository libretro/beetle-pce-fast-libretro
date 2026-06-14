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

#endif
