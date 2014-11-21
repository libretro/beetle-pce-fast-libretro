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
#include <errno.h>
#include <string.h>
#include <string>
#include "settings.h"

int setting_initial_scanline = 0;
int setting_last_scanline = 242;
int setting_pce_fast_nospritelimit = 0;
int setting_pce_fast_cddavolume = 100;
int setting_pce_fast_adpcmvolume = 100;
int setting_pce_fast_cdpsgvolume = 100;
uint32_t setting_pce_fast_cdspeed = 1;
uint32_t setting_pce_keepaspect = 1;

uint64 MDFN_GetSettingUI(const char* name)
{
   if (!strcmp("pce_fast.cddavolume", name))
      return setting_pce_fast_cddavolume;
   if (!strcmp("pce_fast.adpcmvolume", name))
      return setting_pce_fast_adpcmvolume;
   if (!strcmp("pce_fast.cdpsgvolume", name))
      return setting_pce_fast_cdpsgvolume;
   if (!strcmp("pce_fast.cdspeed", name))
      return setting_pce_fast_cdspeed;
   if (!strcmp("pce_fast.ocmultiplier", name)) /* make configurable */
      return 1;
   if (!strcmp("pce_fast.slstart", name))
      return setting_initial_scanline;
   if (!strcmp("pce_fast.slend", name))
      return setting_last_scanline;

   fprintf(stderr, "unhandled setting UI: %s\n", name);
   return 0;
}

int64 MDFN_GetSettingI(const char* name)
{
   fprintf(stderr, "unhandled setting I: %s\n", name);
   return 0;
}

double MDFN_GetSettingF(const char* name)
{
   fprintf(stderr, "unhandled setting F: %s\n", name);
   return 0;
}

bool MDFN_GetSettingB(const char* name)
{
   if (!strcmp("cheats", name))
      return 0;
   /* LIBRETRO */
   if (!strcmp("libretro.cd_load_into_ram", name))
      return 0;
   if (!strcmp("pce_fast.input.multitap", name))
      return 1;
   if (!strcmp("pce_fast.arcadecard", name))
      return 1;
   if (!strcmp("pce_fast.nospritelimit", name))
      return setting_pce_fast_nospritelimit;
   if (!strcmp("pce_fast.forcemono", name))
      return 0;
   if (!strcmp("pce_fast.disable_softreset", name))
      return 0;
   if (!strcmp("pce_fast.correct_aspect", name))
      return setting_pce_keepaspect;
   /* CDROM */
   if (!strcmp("cdrom.lec_eval", name))
      return 1;
   /* FILESYS */
   if (!strcmp("filesys.untrusted_fip_check", name))
      return 0;
   if (!strcmp("filesys.disablesavegz", name))
      return 1;
   fprintf(stderr, "unhandled setting B: %s\n", name);
   return 0;
}

extern std::string retro_base_directory;
extern std::string retro_base_name;


