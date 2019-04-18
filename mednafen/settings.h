#ifndef MDFN_SETTINGS_H
#define MDFN_SETTINGS_H

#include <string>

extern int setting_pce_initial_scanline;
extern int setting_pce_last_scanline;
extern int setting_pce_nospritelimit;
extern int setting_pce_overclocked;
extern int setting_pce_hoverscan_left;
extern int setting_pce_hoverscan_right;
extern int setting_pce_psgrevision;
extern int setting_pce_cddavolume;
extern int setting_pce_adpcmvolume;
extern int setting_pce_cdpsgvolume;
extern int setting_pce_adpcmextraprec;
extern int setting_pce_multitap;
extern uint32_t setting_pce_cdspeed;
extern std::string setting_pce_cdbios;

// This should assert() or something if the setting isn't found, since it would
// be a totally tubular error!
uint64 MDFN_GetSettingUI(const char *name);
int64 MDFN_GetSettingI(const char *name);
double MDFN_GetSettingF(const char *name);
bool MDFN_GetSettingB(const char *name);
std::string MDFN_GetSettingS(const char *name);
#endif
