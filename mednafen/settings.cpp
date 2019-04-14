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
#include <mednafen/hw_sound/pce_psg/pce_psg.h>

int setting_pce_initial_scanline = 0;
int setting_pce_last_scanline = 242;
int setting_pce_hoverscan = 352;
int setting_pce_nospritelimit = 0;
int setting_pce_overclocked = 1;
int setting_pce_cddavolume = 100;
int setting_pce_adpcmvolume = 100;
int setting_pce_cdpsgvolume = 100;
uint32_t setting_pce_cdspeed = 1;
std::string setting_pce_cdbios = "syscard3.pce";
bool OrderOfGriffonFix = false;

uint64 MDFN_GetSettingUI(const char *name)
{
   if (!strcmp("pce.cddavolume", name))
      return setting_pce_cddavolume;
   if (!strcmp("pce.adpcmvolume", name))
      return setting_pce_adpcmvolume;
   if (!strcmp("pce.cdpsgvolume", name))
      return setting_pce_cdpsgvolume;
   if (!strcmp("pce.cdspeed", name))
      return setting_pce_cdspeed;
   if (!strcmp("pce.ocmultiplier", name))
      return setting_pce_overclocked;
   if (!strcmp("pce.slstart", name))
      return setting_pce_initial_scanline;
   if (!strcmp("pce.slend", name))
      return setting_pce_last_scanline; 
   if (!strcmp("pce.hoverscan", name))
      return setting_pce_hoverscan; 
   if (!strcmp("pce.resamp_quality", name))
      return 3;
   if (!strcmp("pce.vramsize", name))
      return 32768;

   fprintf(stderr, "unhandled setting UI: %s\n", name);
   return 0;
}

int64 MDFN_GetSettingI(const char *name)
{
   if (!strcmp("pce.psgrevision", name))
      return PCE_PSG::_REVISION_COUNT;

   fprintf(stderr, "unhandled setting I: %s\n", name);
   return 0;
}

double MDFN_GetSettingF(const char *name)
{
   if (!strcmp("pce.resamp_rate_error", name))
      return 0.0000009;
   if (!strcmp("pce.mouse_sensitivity", name))
      return 1.0;

   fprintf(stderr, "unhandled setting F: %s\n", name);
   return 0;
}

bool MDFN_GetSettingB(const char *name)
{
   if (!strcmp("cheats", name))
      return 0;
   /* LIBRETRO */
   if (!strcmp("libretro.cd_load_into_ram", name))
      return 0;
   if (!strcmp("pce.input.multitap", name))
      return 1;
   if (!strcmp("pce.arcadecard", name))
      return 1;
   if (!strcmp("pce.nospritelimit", name))
      return setting_pce_nospritelimit;
   if (!strcmp("pce.forcemono", name))
      return 0;
   if (!strcmp("pce.disable_softreset", name))
      return 0;
   if (!strcmp("pce.adpcmlp", name))
      return 0;
   if (!strcmp("pce.forcesgx", name))
      return 0;
   if (!strcmp("pce.h_overscan", name))
      return 0;
   if (!strcmp("pce.disable_bram_hucard", name))
      return 0;
   if (!strcmp("pce.disable_bram_cd", name))
      return 0;
   if (!strcmp("pce.adpcmextraprec", name))
      return 0;
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

std::string MDFN_GetSettingS(const char *name)
{
   if (!strcmp("pce.cdbios", name))
      return setting_pce_cdbios;
   /* FILESYS */
   if (!strcmp("filesys.path_firmware", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_palette", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_sav", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_state", name))
      return retro_base_directory;
   if (!strcmp("filesys.path_cheat", name))
      return retro_base_directory;
   fprintf(stderr, "unhandled setting S: %s\n", name);
   return 0;
}

bool MDFNI_SetSetting(const char *name, const char *value, bool NetplayOverride)
{
   return false;
}

bool MDFNI_SetSettingB(const char *name, bool value)
{
   return false;
}

bool MDFNI_SetSettingUI(const char *name, uint64 value)
{
   return false;
}

void MDFNI_DumpSettingsDef(const char *path)
{
}
