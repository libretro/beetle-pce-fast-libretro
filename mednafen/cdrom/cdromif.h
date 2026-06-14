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

#ifndef __MDFN_CDROM_CDROMIF_H
#define __MDFN_CDROM_CDROMIF_H

#include <stdint.h>
#include <boolean.h>

#include "CDUtility.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Previously a C++ class hierarchy (CDIF / CDIF_ST) wrapping a
 * CDAccess*. Now an opaque C struct with a free-function interface,
 * matching the C cdrom layer. */
struct CDIF;
typedef struct CDIF CDIF;

#define CDIF_LBA_Read_Minimum  (-150)
#define CDIF_LBA_Read_Maximum  (449849) /* 100 * 75 * 60 - 150 - 1 */

CDIF *CDIF_Open(const char *path, bool image_memcache);

void CDIF_Close(CDIF *cdif);

void CDIF_ReadTOC(CDIF *cdif, TOC *out);

void CDIF_HintReadSector(CDIF *cdif, int32_t lba);

bool CDIF_ReadRawSector(CDIF *cdif, uint8_t *buf, int32_t lba);

bool CDIF_ReadRawSectorPWOnly(CDIF *cdif, uint8_t *pwbuf, int32_t lba, bool hint_fullread);

int CDIF_ReadSector(CDIF *cdif, uint8_t *buf, int32_t lba, uint32_t sector_count);

#ifdef __cplusplus
}
#endif

#endif
