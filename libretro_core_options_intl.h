#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

#ifdef __cplusplus
extern "C" {
#endif
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR "فيديو"
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR "الإدخال"
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_HACKS_LABEL_AR NULL
#define CATEGORY_HACKS_INFO_0_AR NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_AR NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_AR NULL
#define CATEGORY_CD_LABEL_AR NULL
#define CATEGORY_CD_INFO_0_AR NULL
#define PCE_FAST_PALETTE_LABEL_AR NULL
#define PCE_FAST_PALETTE_INFO_0_AR NULL
#define OPTION_VAL_RGB_AR NULL
#define OPTION_VAL_COMPOSITE_AR NULL
#define PCE_FAST_FRAMESKIP_LABEL_AR NULL
#define PCE_FAST_FRAMESKIP_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_MANUAL_AR "يدوي"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_AR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_AR "عندما يتم تعيين 'Frameskip' إلى 'يدوي'، يحدد عتبة شغل التخزين المؤقت الصوتي (النسبة المئوية) التي سيتم تخطي الأطر أدناه. فارتفاع القيم يقلل من خطر التشويش بالتسبب في انخفاض الأطر بصورة أكثر تواترا."
#define OPTION_VAL_33_AR NULL
#define PCE_FAST_HOVERSCAN_LABEL_AR NULL
#define PCE_FAST_HOVERSCAN_INFO_0_AR NULL
#define OPTION_VAL_352_AR NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_AR NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_3_AR NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_AR NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_AR NULL
#define OPTION_VAL_242_AR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_AR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_AR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_AR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_AR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_AR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_AR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_AR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_AR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_AR NULL
#define OPTION_VAL_0_25_AR NULL
#define OPTION_VAL_0_50_AR NULL
#define OPTION_VAL_0_75_AR NULL
#define OPTION_VAL_1_00_AR NULL
#define OPTION_VAL_1_25_AR NULL
#define OPTION_VAL_1_50_AR NULL
#define OPTION_VAL_1_75_AR NULL
#define OPTION_VAL_2_00_AR NULL
#define OPTION_VAL_2_25_AR NULL
#define OPTION_VAL_2_50_AR NULL
#define OPTION_VAL_2_75_AR NULL
#define OPTION_VAL_3_00_AR NULL
#define OPTION_VAL_3_25_AR NULL
#define OPTION_VAL_3_50_AR NULL
#define OPTION_VAL_3_75_AR NULL
#define OPTION_VAL_4_00_AR NULL
#define OPTION_VAL_4_25_AR NULL
#define OPTION_VAL_4_50_AR NULL
#define OPTION_VAL_4_75_AR NULL
#define OPTION_VAL_5_00_AR NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_AR NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR NULL
#define OPTION_VAL_2_BUTTONS_AR NULL
#define OPTION_VAL_6_BUTTONS_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_AR NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_AR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_AR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_AR NULL
#define PCE_FAST_TURBO_DELAY_LABEL_AR NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_AR NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_AR NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_AR NULL
#define PCE_FAST_CDBIOS_LABEL_AR NULL
#define PCE_FAST_CDBIOS_INFO_0_AR NULL
#define OPTION_VAL_GAMES_EXPRESS_AR NULL
#define OPTION_VAL_SYSTEM_CARD_1_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_AR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AR NULL
#define PCE_FAST_CDSPEED_LABEL_AR NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_AR NULL
#define PCE_FAST_CDSPEED_INFO_0_AR NULL
#define OPTION_VAL_1_AR NULL
#define OPTION_VAL_2_AR NULL
#define OPTION_VAL_4_AR NULL
#define OPTION_VAL_8_AR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_AR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_AR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_AR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_AR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_AR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_AR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_AR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_AR NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_AR NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_AR NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_AR NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AR,
      CATEGORY_HACKS_INFO_0_AR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_AR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_AR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AR,
      CATEGORY_CD_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_AR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_AR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AR },
         { "Composite", OPTION_VAL_COMPOSITE_AR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_AR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_AR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AR },
         { "manual",   OPTION_VAL_MANUAL_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_AR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_AR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_AR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_AR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_AR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_AR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_AR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_AR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_AR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_AR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_AR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_AR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_AR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_AR },
         { "0.50", OPTION_VAL_0_50_AR },
         { "0.75", OPTION_VAL_0_75_AR },
         { "1.00", OPTION_VAL_1_00_AR },
         { "1.25", OPTION_VAL_1_25_AR },
         { "1.50", OPTION_VAL_1_50_AR },
         { "1.75", OPTION_VAL_1_75_AR },
         { "2.00", OPTION_VAL_2_00_AR },
         { "2.25", OPTION_VAL_2_25_AR },
         { "2.50", OPTION_VAL_2_50_AR },
         { "2.75", OPTION_VAL_2_75_AR },
         { "3.00", OPTION_VAL_3_00_AR },
         { "3.25", OPTION_VAL_3_25_AR },
         { "3.50", OPTION_VAL_3_50_AR },
         { "3.75", OPTION_VAL_3_75_AR },
         { "4.00", OPTION_VAL_4_00_AR },
         { "4.25", OPTION_VAL_4_25_AR },
         { "4.50", OPTION_VAL_4_50_AR },
         { "4.75", OPTION_VAL_4_75_AR },
         { "5.00", OPTION_VAL_5_00_AR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_AR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_AR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_AR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_AR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_AR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_AR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_AR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_AR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_AR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_AR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_AR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_AR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_AR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_AR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_AR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_AR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_AR,
      PCE_FAST_CDSPEED_LABEL_CAT_AR,
      PCE_FAST_CDSPEED_INFO_0_AR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_AR },
         { "2", OPTION_VAL_2_AR },
         { "4", OPTION_VAL_4_AR },
         { "8", OPTION_VAL_8_AR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_AR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_AR,
      PCE_FAST_ADPCMVOLUME_INFO_0_AR,
      PCE_FAST_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_AR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_AR,
      PCE_FAST_ADPCMVOLUME_INFO_0_AR,
      PCE_FAST_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_AR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_AR,
      PCE_FAST_ADPCMVOLUME_INFO_0_AR,
      PCE_FAST_ADPCMVOLUME_INFO_1_AR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_AR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_AR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST "Entrada"
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_HACKS_LABEL_AST "Hacks de la emulación"
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_AST "Configuración avanzada del volume de les canales"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_AST NULL
#define CATEGORY_CD_LABEL_AST NULL
#define CATEGORY_CD_INFO_0_AST NULL
#define PCE_FAST_PALETTE_LABEL_AST NULL
#define PCE_FAST_PALETTE_INFO_0_AST NULL
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define PCE_FAST_FRAMESKIP_LABEL_AST NULL
#define PCE_FAST_FRAMESKIP_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_MANUAL_AST NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_AST NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_AST NULL
#define OPTION_VAL_33_AST "33 (Por defeutu)"
#define PCE_FAST_HOVERSCAN_LABEL_AST NULL
#define PCE_FAST_HOVERSCAN_INFO_0_AST NULL
#define OPTION_VAL_352_AST "352 (Por defeutu)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_AST NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_3_AST "3 (Por defeutu)"
#define PCE_FAST_LAST_SCANLINE_LABEL_AST NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_AST NULL
#define OPTION_VAL_242_AST "242 (Por defeutu)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_AST NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_AST NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_AST NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_AST NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_AST NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_AST NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_AST NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_AST "Sensibilidá del mur"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_AST NULL
#define OPTION_VAL_0_25_AST "0,25"
#define OPTION_VAL_0_50_AST "0,50"
#define OPTION_VAL_0_75_AST "0,75"
#define OPTION_VAL_1_00_AST "1,00"
#define OPTION_VAL_1_25_AST "1,25"
#define OPTION_VAL_1_50_AST "1,50"
#define OPTION_VAL_1_75_AST "1,75"
#define OPTION_VAL_2_00_AST "2,00"
#define OPTION_VAL_2_25_AST "2,25"
#define OPTION_VAL_2_50_AST "2,50"
#define OPTION_VAL_2_75_AST "2,75"
#define OPTION_VAL_3_00_AST "3,00"
#define OPTION_VAL_3_25_AST "3,25"
#define OPTION_VAL_3_50_AST "3,50"
#define OPTION_VAL_3_75_AST "3,75"
#define OPTION_VAL_4_00_AST "4,00"
#define OPTION_VAL_4_25_AST "4,25"
#define OPTION_VAL_4_50_AST "4,50"
#define OPTION_VAL_4_75_AST "4,75"
#define OPTION_VAL_5_00_AST "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_AST NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST NULL
#define OPTION_VAL_2_BUTTONS_AST NULL
#define OPTION_VAL_6_BUTTONS_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_AST NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_AST NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_AST NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_AST NULL
#define PCE_FAST_TURBO_DELAY_LABEL_AST NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_AST NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_AST NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_AST NULL
#define PCE_FAST_CDBIOS_LABEL_AST NULL
#define PCE_FAST_CDBIOS_INFO_0_AST NULL
#define OPTION_VAL_GAMES_EXPRESS_AST NULL
#define OPTION_VAL_SYSTEM_CARD_1_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_AST NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_AST NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_AST NULL
#define PCE_FAST_CDSPEED_LABEL_AST NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_AST NULL
#define PCE_FAST_CDSPEED_INFO_0_AST NULL
#define OPTION_VAL_1_AST "x1"
#define OPTION_VAL_2_AST "x2"
#define OPTION_VAL_4_AST "x4"
#define OPTION_VAL_8_AST "x8"
#define PCE_FAST_ADPCMVOLUME_LABEL_AST NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_AST NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_AST NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_AST NULL
#define PCE_FAST_CDDAVOLUME_LABEL_AST NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_AST NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_AST NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_AST NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_AST NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_AST NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_AST NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_AST "Los valores altos puen amenorgar la lentitú nos xuegos. ALVERTENCIA: esta opción pue producir fallos gráficos y casques."

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AST,
      CATEGORY_HACKS_INFO_0_AST
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_AST,
      CATEGORY_CHANNEL_VOLUME_INFO_0_AST
   },
   {
      "cd",
      CATEGORY_CD_LABEL_AST,
      CATEGORY_CD_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_AST,
      NULL,
      PCE_FAST_PALETTE_INFO_0_AST,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_AST },
         { "Composite", OPTION_VAL_COMPOSITE_AST },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_AST,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_AST,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AST },
         { "manual",   OPTION_VAL_MANUAL_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_AST,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_AST,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_AST },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_AST,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_AST,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_AST },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_AST,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_AST },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_AST,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_AST,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_AST },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_AST,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_AST,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_AST,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_AST,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_AST },
         { "0.50", OPTION_VAL_0_50_AST },
         { "0.75", OPTION_VAL_0_75_AST },
         { "1.00", OPTION_VAL_1_00_AST },
         { "1.25", OPTION_VAL_1_25_AST },
         { "1.50", OPTION_VAL_1_50_AST },
         { "1.75", OPTION_VAL_1_75_AST },
         { "2.00", OPTION_VAL_2_00_AST },
         { "2.25", OPTION_VAL_2_25_AST },
         { "2.50", OPTION_VAL_2_50_AST },
         { "2.75", OPTION_VAL_2_75_AST },
         { "3.00", OPTION_VAL_3_00_AST },
         { "3.25", OPTION_VAL_3_25_AST },
         { "3.50", OPTION_VAL_3_50_AST },
         { "3.75", OPTION_VAL_3_75_AST },
         { "4.00", OPTION_VAL_4_00_AST },
         { "4.25", OPTION_VAL_4_25_AST },
         { "4.50", OPTION_VAL_4_50_AST },
         { "4.75", OPTION_VAL_4_75_AST },
         { "5.00", OPTION_VAL_5_00_AST },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_AST,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_AST,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_AST,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_AST,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_AST,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_AST,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_AST,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_AST,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_AST },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_AST },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_AST,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_AST,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_AST,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_AST,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_AST },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_AST,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_AST,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_AST,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_AST,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_AST },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_AST },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_AST },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_AST },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_AST },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_AST },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_AST,
      PCE_FAST_CDSPEED_LABEL_CAT_AST,
      PCE_FAST_CDSPEED_INFO_0_AST,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_AST },
         { "2", OPTION_VAL_2_AST },
         { "4", OPTION_VAL_4_AST },
         { "8", OPTION_VAL_8_AST },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_AST,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_AST,
      PCE_FAST_ADPCMVOLUME_INFO_0_AST,
      PCE_FAST_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_AST,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_AST,
      PCE_FAST_ADPCMVOLUME_INFO_0_AST,
      PCE_FAST_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_AST,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_AST,
      PCE_FAST_ADPCMVOLUME_INFO_0_AST,
      PCE_FAST_ADPCMVOLUME_INFO_1_AST,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_AST,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_AST,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_VIDEO_LABEL_BE "Відэа"
#define CATEGORY_VIDEO_INFO_0_BE NULL
#define CATEGORY_INPUT_LABEL_BE "Увод"
#define CATEGORY_INPUT_INFO_0_BE NULL
#define CATEGORY_HACKS_LABEL_BE NULL
#define CATEGORY_HACKS_INFO_0_BE NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_BE NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_BE NULL
#define CATEGORY_CD_LABEL_BE NULL
#define CATEGORY_CD_INFO_0_BE NULL
#define PCE_FAST_PALETTE_LABEL_BE NULL
#define PCE_FAST_PALETTE_INFO_0_BE NULL
#define OPTION_VAL_RGB_BE NULL
#define OPTION_VAL_COMPOSITE_BE NULL
#define PCE_FAST_FRAMESKIP_LABEL_BE NULL
#define PCE_FAST_FRAMESKIP_INFO_0_BE NULL
#define OPTION_VAL_AUTO_BE "Аўта"
#define OPTION_VAL_MANUAL_BE NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_BE NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_BE NULL
#define OPTION_VAL_33_BE NULL
#define PCE_FAST_HOVERSCAN_LABEL_BE NULL
#define PCE_FAST_HOVERSCAN_INFO_0_BE NULL
#define OPTION_VAL_352_BE NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_BE NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_BE NULL
#define OPTION_VAL_3_BE NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_BE NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_BE NULL
#define OPTION_VAL_242_BE NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_BE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_BE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_BE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_BE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_BE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_BE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_BE NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_BE NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_BE NULL
#define OPTION_VAL_0_25_BE NULL
#define OPTION_VAL_0_50_BE NULL
#define OPTION_VAL_0_75_BE NULL
#define OPTION_VAL_1_00_BE NULL
#define OPTION_VAL_1_25_BE NULL
#define OPTION_VAL_1_50_BE NULL
#define OPTION_VAL_1_75_BE NULL
#define OPTION_VAL_2_00_BE NULL
#define OPTION_VAL_2_25_BE NULL
#define OPTION_VAL_2_50_BE NULL
#define OPTION_VAL_2_75_BE NULL
#define OPTION_VAL_3_00_BE NULL
#define OPTION_VAL_3_25_BE NULL
#define OPTION_VAL_3_50_BE NULL
#define OPTION_VAL_3_75_BE NULL
#define OPTION_VAL_4_00_BE NULL
#define OPTION_VAL_4_25_BE NULL
#define OPTION_VAL_4_50_BE NULL
#define OPTION_VAL_4_75_BE NULL
#define OPTION_VAL_5_00_BE NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_BE NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE NULL
#define OPTION_VAL_2_BUTTONS_BE NULL
#define OPTION_VAL_6_BUTTONS_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_BE NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_BE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_BE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_BE NULL
#define PCE_FAST_TURBO_DELAY_LABEL_BE NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_BE NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_BE NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_BE NULL
#define PCE_FAST_CDBIOS_LABEL_BE NULL
#define PCE_FAST_CDBIOS_INFO_0_BE NULL
#define OPTION_VAL_GAMES_EXPRESS_BE NULL
#define OPTION_VAL_SYSTEM_CARD_1_BE NULL
#define OPTION_VAL_SYSTEM_CARD_2_BE NULL
#define OPTION_VAL_SYSTEM_CARD_3_BE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_BE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_BE NULL
#define PCE_FAST_CDSPEED_LABEL_BE NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_BE NULL
#define PCE_FAST_CDSPEED_INFO_0_BE NULL
#define OPTION_VAL_1_BE NULL
#define OPTION_VAL_2_BE NULL
#define OPTION_VAL_4_BE NULL
#define OPTION_VAL_8_BE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_BE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_BE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_BE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_BE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_BE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_BE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_BE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_BE NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_BE NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_BE NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_BE NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_BE,
      CATEGORY_VIDEO_INFO_0_BE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_BE,
      CATEGORY_INPUT_INFO_0_BE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_BE,
      CATEGORY_HACKS_INFO_0_BE
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_BE,
      CATEGORY_CHANNEL_VOLUME_INFO_0_BE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_BE,
      CATEGORY_CD_INFO_0_BE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_BE,
      NULL,
      PCE_FAST_PALETTE_INFO_0_BE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_BE },
         { "Composite", OPTION_VAL_COMPOSITE_BE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_BE,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_BE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_BE },
         { "manual",   OPTION_VAL_MANUAL_BE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_BE,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_BE,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_BE },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_BE,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_BE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_BE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_BE,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_BE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_BE,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_BE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_BE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_BE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_BE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_BE,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_BE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_BE },
         { "0.50", OPTION_VAL_0_50_BE },
         { "0.75", OPTION_VAL_0_75_BE },
         { "1.00", OPTION_VAL_1_00_BE },
         { "1.25", OPTION_VAL_1_25_BE },
         { "1.50", OPTION_VAL_1_50_BE },
         { "1.75", OPTION_VAL_1_75_BE },
         { "2.00", OPTION_VAL_2_00_BE },
         { "2.25", OPTION_VAL_2_25_BE },
         { "2.50", OPTION_VAL_2_50_BE },
         { "2.75", OPTION_VAL_2_75_BE },
         { "3.00", OPTION_VAL_3_00_BE },
         { "3.25", OPTION_VAL_3_25_BE },
         { "3.50", OPTION_VAL_3_50_BE },
         { "3.75", OPTION_VAL_3_75_BE },
         { "4.00", OPTION_VAL_4_00_BE },
         { "4.25", OPTION_VAL_4_25_BE },
         { "4.50", OPTION_VAL_4_50_BE },
         { "4.75", OPTION_VAL_4_75_BE },
         { "5.00", OPTION_VAL_5_00_BE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_BE,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_BE,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_BE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_BE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_BE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_BE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_BE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_BE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_BE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_BE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_BE,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_BE,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_BE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_BE,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_BE,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_BE },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_BE,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_BE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_BE,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_BE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_BE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_BE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_BE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_BE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_BE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_BE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_BE,
      PCE_FAST_CDSPEED_LABEL_CAT_BE,
      PCE_FAST_CDSPEED_INFO_0_BE,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_BE },
         { "2", OPTION_VAL_2_BE },
         { "4", OPTION_VAL_4_BE },
         { "8", OPTION_VAL_8_BE },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_BE,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_BE,
      PCE_FAST_ADPCMVOLUME_INFO_0_BE,
      PCE_FAST_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_BE,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_BE,
      PCE_FAST_ADPCMVOLUME_INFO_0_BE,
      PCE_FAST_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_BE,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_BE,
      PCE_FAST_ADPCMVOLUME_INFO_0_BE,
      PCE_FAST_ADPCMVOLUME_INFO_1_BE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_BE,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_BE,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_BE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA "Dispositius de joc"
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_HACKS_LABEL_CA NULL
#define CATEGORY_HACKS_INFO_0_CA NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_CA NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CA NULL
#define CATEGORY_CD_LABEL_CA NULL
#define CATEGORY_CD_INFO_0_CA NULL
#define PCE_FAST_PALETTE_LABEL_CA NULL
#define PCE_FAST_PALETTE_INFO_0_CA NULL
#define OPTION_VAL_RGB_CA NULL
#define OPTION_VAL_COMPOSITE_CA NULL
#define PCE_FAST_FRAMESKIP_LABEL_CA NULL
#define PCE_FAST_FRAMESKIP_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA "Automàtic"
#define OPTION_VAL_MANUAL_CA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CA NULL
#define OPTION_VAL_33_CA NULL
#define PCE_FAST_HOVERSCAN_LABEL_CA NULL
#define PCE_FAST_HOVERSCAN_INFO_0_CA NULL
#define OPTION_VAL_352_CA NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CA NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_3_CA NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_CA NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_CA NULL
#define OPTION_VAL_242_CA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CA NULL
#define OPTION_VAL_0_25_CA "0,25"
#define OPTION_VAL_0_50_CA "0,50"
#define OPTION_VAL_0_75_CA "0,75"
#define OPTION_VAL_1_00_CA "1,00"
#define OPTION_VAL_1_25_CA "1,25"
#define OPTION_VAL_1_50_CA "1,50"
#define OPTION_VAL_1_75_CA "1,75"
#define OPTION_VAL_2_00_CA "2,00"
#define OPTION_VAL_2_25_CA "2,25"
#define OPTION_VAL_2_50_CA "2,50"
#define OPTION_VAL_2_75_CA "2,75"
#define OPTION_VAL_3_00_CA "3,00"
#define OPTION_VAL_3_25_CA "3,25"
#define OPTION_VAL_3_50_CA "3,50"
#define OPTION_VAL_3_75_CA "3,75"
#define OPTION_VAL_4_00_CA "4,00"
#define OPTION_VAL_4_25_CA "4,25"
#define OPTION_VAL_4_50_CA "4,50"
#define OPTION_VAL_4_75_CA "4,75"
#define OPTION_VAL_5_00_CA "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CA NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA NULL
#define OPTION_VAL_2_BUTTONS_CA NULL
#define OPTION_VAL_6_BUTTONS_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CA NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CA NULL
#define PCE_FAST_TURBO_DELAY_LABEL_CA NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_CA NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_CA NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_CA NULL
#define PCE_FAST_CDBIOS_LABEL_CA NULL
#define PCE_FAST_CDBIOS_INFO_0_CA NULL
#define OPTION_VAL_GAMES_EXPRESS_CA NULL
#define OPTION_VAL_SYSTEM_CARD_1_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_CA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CA NULL
#define PCE_FAST_CDSPEED_LABEL_CA NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_CA NULL
#define PCE_FAST_CDSPEED_INFO_0_CA NULL
#define OPTION_VAL_1_CA NULL
#define OPTION_VAL_2_CA NULL
#define OPTION_VAL_4_CA NULL
#define OPTION_VAL_8_CA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_CA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_CA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CA NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_CA NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CA NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_CA NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CA,
      CATEGORY_HACKS_INFO_0_CA
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_CA,
      CATEGORY_CHANNEL_VOLUME_INFO_0_CA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CA,
      CATEGORY_CD_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_CA,
      NULL,
      PCE_FAST_PALETTE_INFO_0_CA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CA },
         { "Composite", OPTION_VAL_COMPOSITE_CA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_CA,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_CA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CA },
         { "manual",   OPTION_VAL_MANUAL_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CA,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CA,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_CA },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_CA,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_CA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_CA,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_CA,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_CA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_CA,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CA },
         { "0.50", OPTION_VAL_0_50_CA },
         { "0.75", OPTION_VAL_0_75_CA },
         { "1.00", OPTION_VAL_1_00_CA },
         { "1.25", OPTION_VAL_1_25_CA },
         { "1.50", OPTION_VAL_1_50_CA },
         { "1.75", OPTION_VAL_1_75_CA },
         { "2.00", OPTION_VAL_2_00_CA },
         { "2.25", OPTION_VAL_2_25_CA },
         { "2.50", OPTION_VAL_2_50_CA },
         { "2.75", OPTION_VAL_2_75_CA },
         { "3.00", OPTION_VAL_3_00_CA },
         { "3.25", OPTION_VAL_3_25_CA },
         { "3.50", OPTION_VAL_3_50_CA },
         { "3.75", OPTION_VAL_3_75_CA },
         { "4.00", OPTION_VAL_4_00_CA },
         { "4.25", OPTION_VAL_4_25_CA },
         { "4.50", OPTION_VAL_4_50_CA },
         { "4.75", OPTION_VAL_4_75_CA },
         { "5.00", OPTION_VAL_5_00_CA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_CA,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_CA,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_CA,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CA,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_CA,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_CA,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_CA },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_CA,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_CA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_CA,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_CA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_CA,
      PCE_FAST_CDSPEED_LABEL_CAT_CA,
      PCE_FAST_CDSPEED_INFO_0_CA,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_CA },
         { "2", OPTION_VAL_2_CA },
         { "4", OPTION_VAL_4_CA },
         { "8", OPTION_VAL_8_CA },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_CA,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_CA,
      PCE_FAST_ADPCMVOLUME_INFO_0_CA,
      PCE_FAST_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_CA,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_CA,
      PCE_FAST_ADPCMVOLUME_INFO_0_CA,
      PCE_FAST_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_CA,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_CA,
      PCE_FAST_ADPCMVOLUME_INFO_0_CA,
      PCE_FAST_ADPCMVOLUME_INFO_1_CA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_CA,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_CA,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS "设置显示裁剪、跳帧和其他显示"
#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS "设置光枪、鼠标和Neg手柄"
#define CATEGORY_HACKS_LABEL_CHS "模拟修改"
#define CATEGORY_HACKS_INFO_0_CHS "设置处理器超频和模拟精确性参数，影响低阶性能和兼容性。"
#define CATEGORY_CHANNEL_VOLUME_LABEL_CHS "高级频道音量设置"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CHS "配置各个硬件声道的音量"
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS "配置与PC Engine CD模拟相关的选项"
#define PCE_FAST_PALETTE_LABEL_CHS "色板"
#define PCE_FAST_PALETTE_INFO_0_CHS "使用复合设计模式尝试复现原始的控制台显示，在部分游戏中可以显示更多细节"
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS "合成"
#define PCE_FAST_FRAMESKIP_LABEL_CHS "跳帧"
#define PCE_FAST_FRAMESKIP_INFO_0_CHS "跳过帧以避免运行下的音频缓冲区(崩溃)。提高性能以牺牲视觉性能。 “自动”跳板帧在前端建议时。“手动”使用了“Frameskip 阈值(%)”设置。"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_MANUAL_CHS "手动"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHS "跳帧阈值(%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHS "当“跳帧”功能设置成“手动”，请在下方指定跳帧占音频缓存的比例（百分比）。更高的值可以降低因频繁丢帧而导致的爆音风险。"
#define OPTION_VAL_33_CHS "33 (默认)"
#define PCE_FAST_HOVERSCAN_LABEL_CHS "水平过扫描（仅在352宽度模式下生效）"
#define PCE_FAST_HOVERSCAN_INFO_0_CHS "选择要显示的最大图像宽度，超出设定值的图像将从右侧被裁减（针对宽度为352px的游戏）"
#define OPTION_VAL_352_CHS "352 (默认)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CHS "初始扫描线"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CHS "扫描线渲染的上界，超出设定值的部分将从图像顶部被裁剪"
#define OPTION_VAL_3_CHS "3 (默认)"
#define PCE_FAST_LAST_SCANLINE_LABEL_CHS "终末扫描线"
#define PCE_FAST_LAST_SCANLINE_INFO_0_CHS "扫描线渲染的下界，超出设定值的部分将从图像底部被裁剪"
#define OPTION_VAL_242_CHS "242 (默认)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHS "PSG音频通道0的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHS "设置PSG音频通道0的音量"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHS "PSG音频通道1的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHS "设置PSG音频通道1的音量"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHS "PSG音频通道2的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHS "设置PSG音频通道2的音量"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHS "PSG音频通道3的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHS "设置PSG音频通道3的音量"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHS "PSG音频通道4的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHS "设置PSG音频通道4的音量"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHS "PSG音频通道5的音量百分数"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHS "设置PSG音频通道5的音量"
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHS "更高的值将使鼠标光标移动更快。"
#define OPTION_VAL_0_25_CHS NULL
#define OPTION_VAL_0_50_CHS NULL
#define OPTION_VAL_0_75_CHS NULL
#define OPTION_VAL_1_00_CHS NULL
#define OPTION_VAL_1_25_CHS NULL
#define OPTION_VAL_1_50_CHS NULL
#define OPTION_VAL_1_75_CHS NULL
#define OPTION_VAL_2_00_CHS NULL
#define OPTION_VAL_2_25_CHS NULL
#define OPTION_VAL_2_50_CHS NULL
#define OPTION_VAL_2_75_CHS NULL
#define OPTION_VAL_3_00_CHS NULL
#define OPTION_VAL_3_25_CHS NULL
#define OPTION_VAL_3_50_CHS NULL
#define OPTION_VAL_3_75_CHS NULL
#define OPTION_VAL_4_00_CHS NULL
#define OPTION_VAL_4_25_CHS NULL
#define OPTION_VAL_4_50_CHS NULL
#define OPTION_VAL_4_75_CHS NULL
#define OPTION_VAL_5_00_CHS NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CHS "禁用软重置快捷键（即RUN+SELECT组合键）"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHS "当同时按下 RUN 和 SELECT两个按键时，暂时禁用两个按键而不是触发软重置。"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS "P1 默认Joypad 类型"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS "选择端口 1 手柄默认为 2 键或 6键。 此选项仅在核心启动时应用，如果您想要在内容运行时切换，请使用“模式切换”按钮。 注意：6键手柄在不兼容的游戏中可能会有一些意想不到的行为。"
#define OPTION_VAL_2_BUTTONS_CHS "2键"
#define OPTION_VAL_6_BUTTONS_CHS "6键"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS "P1 默认Joypad 类型"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CHS "连发切换"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CHS "启用连发切换开关（按键III和IV）"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHS "备用连发热键"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHS "将RetroPad虚拟控制器的L3/R3按键指定为连发切换热键，而不是按键III和IV。仅在没有给L3/R3按钮分配任何功能的情况下才起作用。在切换到6键控制器模式时，你可以用它来避免重新设置按钮III和IV。"
#define PCE_FAST_TURBO_DELAY_LABEL_CHS "连发延迟"
#define PCE_FAST_TURBO_DELAY_INFO_0_CHS "设置连发两次触发间的间隔（单位为帧）"
#define PCE_FAST_CDIMAGECACHE_LABEL_CHS "启用CD光盘缓存（重启以生效）"
#define PCE_FAST_CDIMAGECACHE_INFO_0_CHS "在启动时将完整的镜像加载到内存中，以增加启动时间为代价，或许能减少游戏中的加载时间。"
#define PCE_FAST_CDBIOS_LABEL_CHS "设置CD的BIOS（重启以生效）"
#define PCE_FAST_CDBIOS_INFO_0_CHS "大部分的游戏可以在BIOS“System Card 3”上运行，但是一些未经授权的游戏需要“Games Express”"
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHS NULL
#define PCE_FAST_CDSPEED_LABEL_CHS "CD 加载速度"
#define PCE_FAST_CDSPEED_LABEL_CAT_CHS "CD 加载速度"
#define PCE_FAST_CDSPEED_INFO_0_CHS "较高的数值可以加快加载速度，但会使一些游戏出现问题。"
#define OPTION_VAL_1_CHS "1倍"
#define OPTION_VAL_2_CHS "2倍"
#define OPTION_VAL_4_CHS "4倍"
#define OPTION_VAL_8_CHS "8倍"
#define PCE_FAST_ADPCMVOLUME_LABEL_CHS "(CD) ADPCM 音量百分比"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHS "ADPCM 音量百分比"
#define PCE_FAST_ADPCMVOLUME_INFO_0_CHS "仅CD游戏生效。将此音量控制设置得太高可能会导致采样削波。"
#define PCE_FAST_ADPCMVOLUME_INFO_1_CHS "将此音量控制设置得太高可能会导致采样削波。"
#define PCE_FAST_CDDAVOLUME_LABEL_CHS "(CD) CDDA 音量百分比"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CHS "CDDA 音量百分比"
#define PCE_FAST_CDPSGVOLUME_LABEL_CHS "(CD) PSG 音量百分比"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHS "PSG 音量百分比"
#define PCE_FAST_NOSPRITELIMIT_LABEL_CHS "解除符号限制"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CHS "移除每条扫描线16个符号的硬件限制。警告！可能会导致某些游戏的显示问题。"
#define PCE_FAST_OCMULTIPLIER_LABEL_CHS "CPU超频倍率（重启以生效）"
#define PCE_FAST_OCMULTIPLIER_INFO_0_CHS "更高的值可以减少游戏中的降速。注意！可能导致故障和崩溃。"

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHS,
      CATEGORY_HACKS_INFO_0_CHS
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_CHS,
      CATEGORY_CHANNEL_VOLUME_INFO_0_CHS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHS,
      CATEGORY_CD_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_CHS,
      NULL,
      PCE_FAST_PALETTE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHS },
         { "Composite", OPTION_VAL_COMPOSITE_CHS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_CHS,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_CHS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHS },
         { "manual",   OPTION_VAL_MANUAL_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHS,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHS,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_CHS },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_CHS,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_CHS,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CHS },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_CHS,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_CHS,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHS },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHS,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CHS },
         { "0.50", OPTION_VAL_0_50_CHS },
         { "0.75", OPTION_VAL_0_75_CHS },
         { "1.00", OPTION_VAL_1_00_CHS },
         { "1.25", OPTION_VAL_1_25_CHS },
         { "1.50", OPTION_VAL_1_50_CHS },
         { "1.75", OPTION_VAL_1_75_CHS },
         { "2.00", OPTION_VAL_2_00_CHS },
         { "2.25", OPTION_VAL_2_25_CHS },
         { "2.50", OPTION_VAL_2_50_CHS },
         { "2.75", OPTION_VAL_2_75_CHS },
         { "3.00", OPTION_VAL_3_00_CHS },
         { "3.25", OPTION_VAL_3_25_CHS },
         { "3.50", OPTION_VAL_3_50_CHS },
         { "3.75", OPTION_VAL_3_75_CHS },
         { "4.00", OPTION_VAL_4_00_CHS },
         { "4.25", OPTION_VAL_4_25_CHS },
         { "4.50", OPTION_VAL_4_50_CHS },
         { "4.75", OPTION_VAL_4_75_CHS },
         { "5.00", OPTION_VAL_5_00_CHS },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_CHS,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHS,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_CHS,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHS,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_CHS,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_CHS,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_CHS },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_CHS,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_CHS,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHS },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_CHS,
      PCE_FAST_CDSPEED_LABEL_CAT_CHS,
      PCE_FAST_CDSPEED_INFO_0_CHS,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_CHS },
         { "2", OPTION_VAL_2_CHS },
         { "4", OPTION_VAL_4_CHS },
         { "8", OPTION_VAL_8_CHS },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_CHS,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_CHS,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_CHS,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_CHS,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT "顯示"
#define CATEGORY_VIDEO_INFO_0_CHT "變更畫面裁剪、跳幀和影像輸出相關的設定。"
#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT "變更輸入裝置相關的設定。"
#define CATEGORY_HACKS_LABEL_CHT "進階"
#define CATEGORY_HACKS_INFO_0_CHT "變更模擬器進階破解的設定。"
#define CATEGORY_CHANNEL_VOLUME_LABEL_CHT "音效 (PSG音量)"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CHT "設定可程式化聲音產生器(PSG)的六聲道音量。"
#define CATEGORY_CD_LABEL_CHT "光碟機"
#define CATEGORY_CD_INFO_0_CHT "變更光碟機相關的設定。"
#define PCE_FAST_PALETTE_LABEL_CHT "影像配色"
#define PCE_FAST_PALETTE_INFO_0_CHT "設定<合成>時嘗試重建原色影像輸出, 可在部分遊戲中顯示更多細節。"
#define OPTION_VAL_RGB_CHT "原色"
#define OPTION_VAL_COMPOSITE_CHT "合成"
#define PCE_FAST_FRAMESKIP_LABEL_CHT "跳幀"
#define PCE_FAST_FRAMESKIP_INFO_0_CHT "設定跳幀用以避免音訊緩衝區不足(產生破音), 用影像流暢度為代價提高效能。\n設定<自動>由前端系統控制跳幀, 設定<手動>由「跳幀上限(%)」控制跳幀。"
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_MANUAL_CHT "手動"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHT "跳幀上限 (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHT "設定「跳幀」為<手動>時音頻緩衝區使用上限(%)。\n低於上限的影格將被跳過, 設定過高會導致頻繁丟失影格, 過低則是出現破音。"
#define OPTION_VAL_33_CHT "33 (預設)"
#define PCE_FAST_HOVERSCAN_LABEL_CHT "水平過度掃描 (僅限寬度352模式)"
#define PCE_FAST_HOVERSCAN_INFO_0_CHT "設定影像顯示的最大寬度, 過低的值將裁剪影像右側(寬度352像素的遊戲)。"
#define OPTION_VAL_352_CHT "352 (預設)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CHT "初始掃描線"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CHT "設定最初渲染的掃描線, 過高的值將裁剪影像頂部。"
#define OPTION_VAL_3_CHT "3 (預設)"
#define PCE_FAST_LAST_SCANLINE_LABEL_CHT "最後掃描線"
#define PCE_FAST_LAST_SCANLINE_INFO_0_CHT "設定最後渲染的掃描線, 過低的值將裁剪影像底部。"
#define OPTION_VAL_242_CHT "242 (預設)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHT "PSG聲道0 音量 %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHT "設定PSG聲道0的音量。"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHT "PSG聲道1 音量 %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHT "設定PSG聲道1的音量。"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHT "PSG聲道2 音量 %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHT "設定PSG聲道2的音量。"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHT "PSG聲道3 音量 %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHT "設定PSG聲道3的音量。"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHT "PSG聲道4 音量 %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHT "設定PSG聲道4的音量。"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHT "PSG聲道5 音量 %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHT "設定PSG聲道5的音量。"
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHT "滑鼠靈敏度"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHT "數值越高游標移動速度越快。"
#define OPTION_VAL_0_25_CHT NULL
#define OPTION_VAL_0_50_CHT NULL
#define OPTION_VAL_0_75_CHT NULL
#define OPTION_VAL_1_00_CHT NULL
#define OPTION_VAL_1_25_CHT NULL
#define OPTION_VAL_1_50_CHT NULL
#define OPTION_VAL_1_75_CHT NULL
#define OPTION_VAL_2_00_CHT NULL
#define OPTION_VAL_2_25_CHT NULL
#define OPTION_VAL_2_50_CHT NULL
#define OPTION_VAL_2_75_CHT NULL
#define OPTION_VAL_3_00_CHT NULL
#define OPTION_VAL_3_25_CHT NULL
#define OPTION_VAL_3_50_CHT NULL
#define OPTION_VAL_3_75_CHT NULL
#define OPTION_VAL_4_00_CHT NULL
#define OPTION_VAL_4_25_CHT NULL
#define OPTION_VAL_4_50_CHT NULL
#define OPTION_VAL_4_75_CHT NULL
#define OPTION_VAL_5_00_CHT NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CHT "禁用軟體重開 (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHT "禁用按[RUN鍵+SELECT鍵]重新開始遊戲, 此選項僅禁用核心登錄的組合鍵。"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT NULL
#define OPTION_VAL_2_BUTTONS_CHT NULL
#define OPTION_VAL_6_BUTTONS_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CHT "連發開關"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CHT "開啟時[III/IV鍵]作為連發的開關, 提供給[I/II鍵]使用。"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHT "備用連發按鍵"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHT "開啟時[L3/R3鍵]作為連發的開關, 僅限[L3/R3鍵]未設定按鍵時生效, 用於切換為主機的6鍵控制器。"
#define PCE_FAST_TURBO_DELAY_LABEL_CHT "連發間隔"
#define PCE_FAST_TURBO_DELAY_INFO_0_CHT "設定連發的間隔時間(幀數)。"
#define PCE_FAST_CDIMAGECACHE_LABEL_CHT "映像檔快取 (需要重新啟動)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_CHT "將光碟映像檔完整載入到記憶體, 增加啟動時間並減少讀取的時間。"
#define PCE_FAST_CDBIOS_LABEL_CHT "光碟系統卡 (需要重新啟動)"
#define PCE_FAST_CDBIOS_INFO_0_CHT "設定<系統卡3>時支援較多的授權遊戲, 未授權的遊戲需要<遊戲特快卡>來執行。"
#define OPTION_VAL_GAMES_EXPRESS_CHT "遊戲特快卡"
#define OPTION_VAL_SYSTEM_CARD_1_CHT "系統卡 1 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_2_CHT "系統卡 2 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_3_CHT "系統卡 3 (日本版)"
#define OPTION_VAL_SYSTEM_CARD_2_US_CHT "系統卡 2 (美國版)"
#define OPTION_VAL_SYSTEM_CARD_3_US_CHT "系統卡 3 (美國版)"
#define PCE_FAST_CDSPEED_LABEL_CHT "(光碟機) 讀取速度"
#define PCE_FAST_CDSPEED_LABEL_CAT_CHT "讀取速度"
#define PCE_FAST_CDSPEED_INFO_0_CHT "高倍速可加快讀取的時間, 但可能導致遊戲出現問題。"
#define OPTION_VAL_1_CHT "1倍速"
#define OPTION_VAL_2_CHT "2倍速"
#define OPTION_VAL_4_CHT "4倍速"
#define OPTION_VAL_8_CHT "8倍速"
#define PCE_FAST_ADPCMVOLUME_LABEL_CHT "(光碟機) ADPCM 音量 %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHT "ADPCM 音量 %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_CHT "僅限實體或虛擬光碟機載入的遊戲, 音量設定過高可能會導致取樣削波。"
#define PCE_FAST_ADPCMVOLUME_INFO_1_CHT "音量設定過高可能會導致取樣削波。"
#define PCE_FAST_CDDAVOLUME_LABEL_CHT "(光碟機) CDDA 音量 %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CHT "CDDA 音量 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CHT "(光碟機) PSG 音量 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHT "PSG 音量 %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_CHT "沒有物件限制"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CHT "移除每條掃描線16個物件的硬體限制。\n警告: 可能導致某些遊戲出現圖形故障。"
#define PCE_FAST_OCMULTIPLIER_LABEL_CHT "CPU超頻倍頻 (需要重新啟動)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_CHT "較高的值可降低游戲中的延遲。\n警告: 可能導致故障崩潰。"

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHT,
      CATEGORY_HACKS_INFO_0_CHT
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_CHT,
      CATEGORY_CHANNEL_VOLUME_INFO_0_CHT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CHT,
      CATEGORY_CD_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_CHT,
      NULL,
      PCE_FAST_PALETTE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CHT },
         { "Composite", OPTION_VAL_COMPOSITE_CHT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_CHT,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_CHT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHT },
         { "manual",   OPTION_VAL_MANUAL_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHT,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHT,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_CHT },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_CHT,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_CHT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CHT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_CHT,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CHT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_CHT,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CHT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHT,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CHT },
         { "0.50", OPTION_VAL_0_50_CHT },
         { "0.75", OPTION_VAL_0_75_CHT },
         { "1.00", OPTION_VAL_1_00_CHT },
         { "1.25", OPTION_VAL_1_25_CHT },
         { "1.50", OPTION_VAL_1_50_CHT },
         { "1.75", OPTION_VAL_1_75_CHT },
         { "2.00", OPTION_VAL_2_00_CHT },
         { "2.25", OPTION_VAL_2_25_CHT },
         { "2.50", OPTION_VAL_2_50_CHT },
         { "2.75", OPTION_VAL_2_75_CHT },
         { "3.00", OPTION_VAL_3_00_CHT },
         { "3.25", OPTION_VAL_3_25_CHT },
         { "3.50", OPTION_VAL_3_50_CHT },
         { "3.75", OPTION_VAL_3_75_CHT },
         { "4.00", OPTION_VAL_4_00_CHT },
         { "4.25", OPTION_VAL_4_25_CHT },
         { "4.50", OPTION_VAL_4_50_CHT },
         { "4.75", OPTION_VAL_4_75_CHT },
         { "5.00", OPTION_VAL_5_00_CHT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_CHT,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHT,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CHT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CHT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CHT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CHT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CHT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CHT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CHT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_CHT,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHT,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_CHT,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_CHT,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_CHT },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_CHT,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_CHT,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CHT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CHT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CHT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CHT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CHT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CHT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_CHT,
      PCE_FAST_CDSPEED_LABEL_CAT_CHT,
      PCE_FAST_CDSPEED_INFO_0_CHT,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_CHT },
         { "2", OPTION_VAL_2_CHT },
         { "4", OPTION_VAL_4_CHT },
         { "8", OPTION_VAL_8_CHT },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_CHT,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_CHT,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_CHT,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_0_CHT,
      PCE_FAST_ADPCMVOLUME_INFO_1_CHT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_CHT,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS "Konfigurace ořezu zobrazení, přeskočení snímku a dalších parametrů výstupu obrazu."
#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS "Konfigurace světelné pistole, myši a vstupu NegCon."
#define CATEGORY_HACKS_LABEL_CS NULL
#define CATEGORY_HACKS_INFO_0_CS "Konfigurace parametrů přetaktování procesoru a přesnosti emulace ovlivňujících výkon a kompatibilitu na nízké úrovni."
#define CATEGORY_CHANNEL_VOLUME_LABEL_CS "Rozšířené Nastavení Hlasitosti Kanálů"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CS "Konfigurace hlasitosti jednotlivých hardwarových zvukových kanálů."
#define CATEGORY_CD_LABEL_CS "PC Motor CD"
#define CATEGORY_CD_INFO_0_CS "Konfigurace nastavení týkajících se emulace disku CD PC Engine."
#define PCE_FAST_PALETTE_LABEL_CS "Paleta barev"
#define PCE_FAST_PALETTE_INFO_0_CS "Kompozitně se snaží obnovit původní výstup z konzole a v některých hrách může zobrazit více detailů."
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS "Kompozitní"
#define PCE_FAST_FRAMESKIP_LABEL_CS NULL
#define PCE_FAST_FRAMESKIP_INFO_0_CS "Přeskočení snímků, aby se zabránilo nedostatečnému využití vyrovnávací paměti zvuku (praskání). Zlepšuje výkon na úkor vizuální plynulosti. Funkce 'Auto' přeskakuje snímky, pokud to doporučí frontend. 'Ruční' využívá nastavení 'Práh přeskakování snímků (%)'."
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_MANUAL_CS "Ruční"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CS "Hraniční Hodnota Frameskip (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CS "Pokud je položka 'Frameskip' nastavena na hodnotu 'Ruční', určuje práh obsazení vyrovnávací paměti zvuku (v procentech), pod kterým budou snímky přeskočeny. Vyšší hodnoty snižují riziko praskání tím, že způsobují častější vynechávání snímků."
#define OPTION_VAL_33_CS "33 (Výchozí)"
#define PCE_FAST_HOVERSCAN_LABEL_CS "Horizontální Overscan (Pouze Režim Šířky 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_CS "Zvolte maximální šířku obrázku, který se má zobrazit. Nižší hodnoty oříznou pravou stranu obrázku (pro hry o šířce 352 px)."
#define OPTION_VAL_352_CS "352 (Výchozí)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CS "Počáteční Linie Skenování"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CS "První vykreslená skenovací linie. Vyšší hodnoty oříznou horní část obrázku."
#define OPTION_VAL_3_CS "3 (Výchozí)"
#define PCE_FAST_LAST_SCANLINE_LABEL_CS "Poslední Skenovací Linie"
#define PCE_FAST_LAST_SCANLINE_INFO_0_CS "Poslední vykreslená skenovací linie. Nižší hodnoty oříznou spodní část obrázku."
#define OPTION_VAL_242_CS "242 (Výchozí)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CS "Zvukový kanál PSG 0 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CS "Upravte hlasitost zvukového kanálu PSG 0."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CS "Zvukový Kanál PSG 1 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CS "Upravte hlasitost zvukového kanálu PSG 1."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CS "Zvukový Kanál PSG 2 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CS "Upravte hlasitost zvukového kanálu PSG 2."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CS "Zvukový Kanál PSG 3 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CS "Upravte hlasitost zvukového kanálu PSG 3."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CS "PSG Sound Channel 4 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CS "Upravte hlasitost zvukového kanálu PSG 4."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CS "Zvukový kanál PSG 5 Hlasitost %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CS "Úprava hlasitosti zvukového kanálu PSG 5."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CS "Citlivost Myši"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CS "Při vyšších hodnotách se kurzor myši pohybuje rychleji."
#define OPTION_VAL_0_25_CS NULL
#define OPTION_VAL_0_50_CS NULL
#define OPTION_VAL_0_75_CS NULL
#define OPTION_VAL_1_00_CS NULL
#define OPTION_VAL_1_25_CS NULL
#define OPTION_VAL_1_50_CS NULL
#define OPTION_VAL_1_75_CS NULL
#define OPTION_VAL_2_00_CS NULL
#define OPTION_VAL_2_25_CS NULL
#define OPTION_VAL_2_50_CS NULL
#define OPTION_VAL_2_75_CS NULL
#define OPTION_VAL_3_00_CS NULL
#define OPTION_VAL_3_25_CS NULL
#define OPTION_VAL_3_50_CS NULL
#define OPTION_VAL_3_75_CS NULL
#define OPTION_VAL_4_00_CS NULL
#define OPTION_VAL_4_25_CS NULL
#define OPTION_VAL_4_50_CS NULL
#define OPTION_VAL_4_75_CS NULL
#define OPTION_VAL_5_00_CS "2.50"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CS "Zakázat Soft. Reset (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CS "Při současném stisknutí tlačítek RUN a SELECT se místo resetování dočasně vypnou obě tlačítka."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS "P1 Výchozí typ joypadu"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS "Zvolte, zda má mít joypad port 1 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define OPTION_VAL_2_BUTTONS_CS "2 Tlačítka"
#define OPTION_VAL_6_BUTTONS_CS "6 Tlačítek"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS "P2 Výchozí typ joypadu"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS "Vyberte, zda má mít joypad port 2 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS "P3 Výchozí typ joypadu"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS "Zvolte, zda má mít joypad port 3 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS "P4 Výchozí typ joypadu"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS "Zvolte, zda má mít joypad port 4 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS "P5 Výchozí typ joypadu"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS "Zvolte, zda má mít joypad portu 5 ve výchozím nastavení 2 nebo 6 tlačítek. Tato volba se použije pouze při spuštění jádra, pokud chcete přepínat za běhu obsahu, použijte tlačítko \"Přepínač režimů\". POZNÁMKA: 6tlačítkový joypad může mít v nekompatibilních hrách podivné chování."
#define PCE_FAST_TURBO_TOGGLING_LABEL_CS "Přepínač Turba"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CS "Povolit hotkeys přepínat turbo (tlačítka III a IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CS "Alternativní Hotkey Turbo"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CS "Přiřaďte tlačítkům L3/R3 zařízení RetroPad rychlé přepínání turba hotkeys místo tlačítek III a IV. Funguje pouze v případě, že tlačítkům L3/R3 není nic přiřazeno. Díky tomu se můžete vyhnout přemapování tlačítek III a IV při přepnutí do režimu šestitlačítkového ovladače."
#define PCE_FAST_TURBO_DELAY_LABEL_CS "Zpoždění Turba"
#define PCE_FAST_TURBO_DELAY_INFO_0_CS "Nastavení doby mezi nástupem turba (ve snímcích)."
#define PCE_FAST_CDIMAGECACHE_LABEL_CS "Vyrovnávací Paměť Obrazu CD (Nutný Restart)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_CS "Načíst kompletní obraz do paměti při spuštění. Může potenciálně zkrátit dobu načítání za cenu prodloužení doby spouštění."
#define PCE_FAST_CDBIOS_LABEL_CS "CD BIOS (Nutný Restart)"
#define PCE_FAST_CDBIOS_INFO_0_CS "Většinu her lze spustit na systémové kartě 3. Pro některé nelicencované hry je zapotřebí 'Games Express'."
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS "Systémová Karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_CS "Systémová Karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_CS "Systémová Karta 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_CS "Systémová Karta 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_CS "Systémová Karta 3 US"
#define PCE_FAST_CDSPEED_LABEL_CS "(CD) Rychlost CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_CS "Rychlost CD"
#define PCE_FAST_CDSPEED_INFO_0_CS "Vyšší hodnoty umožňují rychlejší načítání, ale u několika her mohou způsobit problémy."
#define OPTION_VAL_1_CS NULL
#define OPTION_VAL_2_CS NULL
#define OPTION_VAL_4_CS NULL
#define OPTION_VAL_8_CS NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CS "(CD) ADPCM Hlasitost %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CS "ADPCM Hlasitost %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_CS "Pouze hra na CD. Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define PCE_FAST_ADPCMVOLUME_INFO_1_CS "Příliš vysoké nastavení tohoto ovladače hlasitosti může způsobit oříznutí vzorku."
#define PCE_FAST_CDDAVOLUME_LABEL_CS "(CD) CDDA Hlasitost %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CS "CDDA Hlasitost %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CS "(CD) PSG Hlasitost %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CS "CD PSG Hlasitost %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_CS "Žádný Limit Spritu"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CS "Odstranění hardwarového limitu 16 bodů na řádek. UPOZORNĚNÍ: V některých hrách může způsobovat grafické závady."
#define PCE_FAST_OCMULTIPLIER_LABEL_CS "Násobitel Přetaktování CPU (Nutný Restart)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_CS "Vyšší hodnoty mohou snížit zpomalení ve hrách. VAROVÁNÍ: Může způsobit závady a pády."

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CS,
      CATEGORY_HACKS_INFO_0_CS
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_CS,
      CATEGORY_CHANNEL_VOLUME_INFO_0_CS
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CS,
      CATEGORY_CD_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_CS,
      NULL,
      PCE_FAST_PALETTE_INFO_0_CS,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CS },
         { "Composite", OPTION_VAL_COMPOSITE_CS },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_CS,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_CS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CS },
         { "manual",   OPTION_VAL_MANUAL_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CS,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CS,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_CS },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_CS,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_CS,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CS },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_CS,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CS },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_CS,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_CS,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CS },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CS,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CS,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_CS,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CS,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CS },
         { "0.50", OPTION_VAL_0_50_CS },
         { "0.75", OPTION_VAL_0_75_CS },
         { "1.00", OPTION_VAL_1_00_CS },
         { "1.25", OPTION_VAL_1_25_CS },
         { "1.50", OPTION_VAL_1_50_CS },
         { "1.75", OPTION_VAL_1_75_CS },
         { "2.00", OPTION_VAL_2_00_CS },
         { "2.25", OPTION_VAL_2_25_CS },
         { "2.50", OPTION_VAL_2_50_CS },
         { "2.75", OPTION_VAL_2_75_CS },
         { "3.00", OPTION_VAL_3_00_CS },
         { "3.25", OPTION_VAL_3_25_CS },
         { "3.50", OPTION_VAL_3_50_CS },
         { "3.75", OPTION_VAL_3_75_CS },
         { "4.00", OPTION_VAL_4_00_CS },
         { "4.25", OPTION_VAL_4_25_CS },
         { "4.50", OPTION_VAL_4_50_CS },
         { "4.75", OPTION_VAL_4_75_CS },
         { "5.00", OPTION_VAL_5_00_CS },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_CS,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_CS,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CS,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CS,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CS },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CS },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_CS,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CS,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_CS,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_CS,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_CS },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_CS,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_CS,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_CS,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_CS,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CS },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CS },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CS },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CS },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CS },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CS },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_CS,
      PCE_FAST_CDSPEED_LABEL_CAT_CS,
      PCE_FAST_CDSPEED_INFO_0_CS,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_CS },
         { "2", OPTION_VAL_2_CS },
         { "4", OPTION_VAL_4_CS },
         { "8", OPTION_VAL_8_CS },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_CS,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_CS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_CS,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_CS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_CS,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_CS,
      PCE_FAST_ADPCMVOLUME_INFO_0_CS,
      PCE_FAST_ADPCMVOLUME_INFO_1_CS,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_CS,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_CS,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY "Mewnbwn"
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_HACKS_LABEL_CY NULL
#define CATEGORY_HACKS_INFO_0_CY NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_CY NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CY NULL
#define CATEGORY_CD_LABEL_CY NULL
#define CATEGORY_CD_INFO_0_CY NULL
#define PCE_FAST_PALETTE_LABEL_CY NULL
#define PCE_FAST_PALETTE_INFO_0_CY NULL
#define OPTION_VAL_RGB_CY NULL
#define OPTION_VAL_COMPOSITE_CY NULL
#define PCE_FAST_FRAMESKIP_LABEL_CY NULL
#define PCE_FAST_FRAMESKIP_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_MANUAL_CY NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CY NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CY "Pan fydd 'Frameskip' yn cael ei osod i 'Manual', yn pennu'r trothwy meddiannaeth byffer sain (canran) islaw y bydd fframiau yn cael eu hepgor. Mae gwerthoedd uwch yn lleihau'r risg o graclo trwy achosi i fframiau ostwng yn amlach."
#define OPTION_VAL_33_CY NULL
#define PCE_FAST_HOVERSCAN_LABEL_CY NULL
#define PCE_FAST_HOVERSCAN_INFO_0_CY NULL
#define OPTION_VAL_352_CY NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CY NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_3_CY NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_CY NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_CY NULL
#define OPTION_VAL_242_CY NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CY NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CY NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CY NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CY NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CY NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CY NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CY NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CY NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CY NULL
#define OPTION_VAL_0_25_CY NULL
#define OPTION_VAL_0_50_CY NULL
#define OPTION_VAL_0_75_CY NULL
#define OPTION_VAL_1_00_CY NULL
#define OPTION_VAL_1_25_CY NULL
#define OPTION_VAL_1_50_CY NULL
#define OPTION_VAL_1_75_CY NULL
#define OPTION_VAL_2_00_CY NULL
#define OPTION_VAL_2_25_CY NULL
#define OPTION_VAL_2_50_CY NULL
#define OPTION_VAL_2_75_CY NULL
#define OPTION_VAL_3_00_CY NULL
#define OPTION_VAL_3_25_CY NULL
#define OPTION_VAL_3_50_CY NULL
#define OPTION_VAL_3_75_CY NULL
#define OPTION_VAL_4_00_CY NULL
#define OPTION_VAL_4_25_CY NULL
#define OPTION_VAL_4_50_CY NULL
#define OPTION_VAL_4_75_CY NULL
#define OPTION_VAL_5_00_CY NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CY NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY NULL
#define OPTION_VAL_2_BUTTONS_CY NULL
#define OPTION_VAL_6_BUTTONS_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CY NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CY NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CY NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CY NULL
#define PCE_FAST_TURBO_DELAY_LABEL_CY NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_CY NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_CY NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_CY NULL
#define PCE_FAST_CDBIOS_LABEL_CY NULL
#define PCE_FAST_CDBIOS_INFO_0_CY NULL
#define OPTION_VAL_GAMES_EXPRESS_CY NULL
#define OPTION_VAL_SYSTEM_CARD_1_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_CY NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CY NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CY NULL
#define PCE_FAST_CDSPEED_LABEL_CY NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_CY NULL
#define PCE_FAST_CDSPEED_INFO_0_CY NULL
#define OPTION_VAL_1_CY NULL
#define OPTION_VAL_2_CY NULL
#define OPTION_VAL_4_CY NULL
#define OPTION_VAL_8_CY NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CY NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CY NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_CY NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_CY NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CY NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CY NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CY NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CY NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_CY NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CY NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_CY NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CY,
      CATEGORY_HACKS_INFO_0_CY
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_CY,
      CATEGORY_CHANNEL_VOLUME_INFO_0_CY
   },
   {
      "cd",
      CATEGORY_CD_LABEL_CY,
      CATEGORY_CD_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_CY,
      NULL,
      PCE_FAST_PALETTE_INFO_0_CY,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_CY },
         { "Composite", OPTION_VAL_COMPOSITE_CY },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_CY,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_CY,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CY },
         { "manual",   OPTION_VAL_MANUAL_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CY,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CY,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_CY },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_CY,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_CY,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_CY },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_CY,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_CY },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_CY,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_CY,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_CY },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CY,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CY,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_CY,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CY,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_CY },
         { "0.50", OPTION_VAL_0_50_CY },
         { "0.75", OPTION_VAL_0_75_CY },
         { "1.00", OPTION_VAL_1_00_CY },
         { "1.25", OPTION_VAL_1_25_CY },
         { "1.50", OPTION_VAL_1_50_CY },
         { "1.75", OPTION_VAL_1_75_CY },
         { "2.00", OPTION_VAL_2_00_CY },
         { "2.25", OPTION_VAL_2_25_CY },
         { "2.50", OPTION_VAL_2_50_CY },
         { "2.75", OPTION_VAL_2_75_CY },
         { "3.00", OPTION_VAL_3_00_CY },
         { "3.25", OPTION_VAL_3_25_CY },
         { "3.50", OPTION_VAL_3_50_CY },
         { "3.75", OPTION_VAL_3_75_CY },
         { "4.00", OPTION_VAL_4_00_CY },
         { "4.25", OPTION_VAL_4_25_CY },
         { "4.50", OPTION_VAL_4_50_CY },
         { "4.75", OPTION_VAL_4_75_CY },
         { "5.00", OPTION_VAL_5_00_CY },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_CY,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_CY,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_CY,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_CY,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_CY,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_CY,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_CY,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_CY,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_CY },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_CY },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_CY,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CY,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_CY,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_CY,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_CY },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_CY,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_CY,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_CY,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_CY,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_CY },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_CY },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_CY },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_CY },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_CY },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_CY },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_CY,
      PCE_FAST_CDSPEED_LABEL_CAT_CY,
      PCE_FAST_CDSPEED_INFO_0_CY,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_CY },
         { "2", OPTION_VAL_2_CY },
         { "4", OPTION_VAL_4_CY },
         { "8", OPTION_VAL_8_CY },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_CY,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_CY,
      PCE_FAST_ADPCMVOLUME_INFO_0_CY,
      PCE_FAST_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_CY,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_CY,
      PCE_FAST_ADPCMVOLUME_INFO_0_CY,
      PCE_FAST_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_CY,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_CY,
      PCE_FAST_ADPCMVOLUME_INFO_0_CY,
      PCE_FAST_ADPCMVOLUME_INFO_1_CY,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_CY,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_CY,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_HACKS_LABEL_DA NULL
#define CATEGORY_HACKS_INFO_0_DA NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_DA NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_DA NULL
#define CATEGORY_CD_LABEL_DA NULL
#define CATEGORY_CD_INFO_0_DA NULL
#define PCE_FAST_PALETTE_LABEL_DA NULL
#define PCE_FAST_PALETTE_INFO_0_DA NULL
#define OPTION_VAL_RGB_DA NULL
#define OPTION_VAL_COMPOSITE_DA NULL
#define PCE_FAST_FRAMESKIP_LABEL_DA NULL
#define PCE_FAST_FRAMESKIP_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_MANUAL_DA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_DA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_DA "Når 'Frameskip' er sat til 'Manual', angiver den lydbufferbelægningstærsklen (procentdel), under hvilken frames overspringes. Højere værdier reducerer risikoen for crackling ved at foranledige hyppigere drop af frames."
#define OPTION_VAL_33_DA NULL
#define PCE_FAST_HOVERSCAN_LABEL_DA NULL
#define PCE_FAST_HOVERSCAN_INFO_0_DA NULL
#define OPTION_VAL_352_DA NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_DA NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_3_DA NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_DA NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_DA NULL
#define OPTION_VAL_242_DA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_DA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_DA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_DA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_DA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_DA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_DA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_DA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_DA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_DA NULL
#define OPTION_VAL_0_25_DA NULL
#define OPTION_VAL_0_50_DA NULL
#define OPTION_VAL_0_75_DA NULL
#define OPTION_VAL_1_00_DA NULL
#define OPTION_VAL_1_25_DA NULL
#define OPTION_VAL_1_50_DA NULL
#define OPTION_VAL_1_75_DA NULL
#define OPTION_VAL_2_00_DA NULL
#define OPTION_VAL_2_25_DA NULL
#define OPTION_VAL_2_50_DA NULL
#define OPTION_VAL_2_75_DA NULL
#define OPTION_VAL_3_00_DA NULL
#define OPTION_VAL_3_25_DA NULL
#define OPTION_VAL_3_50_DA NULL
#define OPTION_VAL_3_75_DA NULL
#define OPTION_VAL_4_00_DA NULL
#define OPTION_VAL_4_25_DA NULL
#define OPTION_VAL_4_50_DA NULL
#define OPTION_VAL_4_75_DA NULL
#define OPTION_VAL_5_00_DA NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_DA NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA NULL
#define OPTION_VAL_2_BUTTONS_DA NULL
#define OPTION_VAL_6_BUTTONS_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_DA NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_DA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_DA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_DA NULL
#define PCE_FAST_TURBO_DELAY_LABEL_DA NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_DA NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_DA NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_DA NULL
#define PCE_FAST_CDBIOS_LABEL_DA NULL
#define PCE_FAST_CDBIOS_INFO_0_DA NULL
#define OPTION_VAL_GAMES_EXPRESS_DA NULL
#define OPTION_VAL_SYSTEM_CARD_1_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_DA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DA NULL
#define PCE_FAST_CDSPEED_LABEL_DA NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_DA NULL
#define PCE_FAST_CDSPEED_INFO_0_DA NULL
#define OPTION_VAL_1_DA NULL
#define OPTION_VAL_2_DA NULL
#define OPTION_VAL_4_DA NULL
#define OPTION_VAL_8_DA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_DA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_DA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_DA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_DA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_DA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_DA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_DA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_DA NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_DA NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_DA NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_DA NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DA,
      CATEGORY_HACKS_INFO_0_DA
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_DA,
      CATEGORY_CHANNEL_VOLUME_INFO_0_DA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DA,
      CATEGORY_CD_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_DA,
      NULL,
      PCE_FAST_PALETTE_INFO_0_DA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DA },
         { "Composite", OPTION_VAL_COMPOSITE_DA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_DA,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_DA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DA },
         { "manual",   OPTION_VAL_MANUAL_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_DA,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_DA,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_DA },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_DA,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_DA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_DA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_DA,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_DA,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_DA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_DA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_DA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_DA,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_DA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_DA },
         { "0.50", OPTION_VAL_0_50_DA },
         { "0.75", OPTION_VAL_0_75_DA },
         { "1.00", OPTION_VAL_1_00_DA },
         { "1.25", OPTION_VAL_1_25_DA },
         { "1.50", OPTION_VAL_1_50_DA },
         { "1.75", OPTION_VAL_1_75_DA },
         { "2.00", OPTION_VAL_2_00_DA },
         { "2.25", OPTION_VAL_2_25_DA },
         { "2.50", OPTION_VAL_2_50_DA },
         { "2.75", OPTION_VAL_2_75_DA },
         { "3.00", OPTION_VAL_3_00_DA },
         { "3.25", OPTION_VAL_3_25_DA },
         { "3.50", OPTION_VAL_3_50_DA },
         { "3.75", OPTION_VAL_3_75_DA },
         { "4.00", OPTION_VAL_4_00_DA },
         { "4.25", OPTION_VAL_4_25_DA },
         { "4.50", OPTION_VAL_4_50_DA },
         { "4.75", OPTION_VAL_4_75_DA },
         { "5.00", OPTION_VAL_5_00_DA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_DA,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_DA,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_DA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_DA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_DA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_DA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_DA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_DA,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_DA,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_DA,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_DA,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_DA },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_DA,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_DA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_DA,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_DA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_DA,
      PCE_FAST_CDSPEED_LABEL_CAT_DA,
      PCE_FAST_CDSPEED_INFO_0_DA,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_DA },
         { "2", OPTION_VAL_2_DA },
         { "4", OPTION_VAL_4_DA },
         { "8", OPTION_VAL_8_DA },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_DA,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_DA,
      PCE_FAST_ADPCMVOLUME_INFO_0_DA,
      PCE_FAST_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_DA,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_DA,
      PCE_FAST_ADPCMVOLUME_INFO_0_DA,
      PCE_FAST_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_DA,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_DA,
      PCE_FAST_ADPCMVOLUME_INFO_0_DA,
      PCE_FAST_ADPCMVOLUME_INFO_1_DA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_DA,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_DA,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "Bildausschnitt, Frameskipping und andere Parameter für die Bildausgabe anpassen."
#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE "Lightgun-, Maus- und NegCon-Eingabe anpassen."
#define CATEGORY_HACKS_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACKS_INFO_0_DE "Parameter für Prozessorübertaktung und Emulationsgenauigkeit, die sich auf die Low-Level-Leistung und Kompatibilität auswirken, anpassen."
#define CATEGORY_CHANNEL_VOLUME_LABEL_DE "Erweiterte Lautstärkeeinstellungen"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_DE "Die Lautstärke der einzelnen Hardware-Audiokanäle anpassen."
#define CATEGORY_CD_LABEL_DE "PC-Engine-CD"
#define CATEGORY_CD_INFO_0_DE "Einstellungen der PC-Engine-CD-Emulation anpassen."
#define PCE_FAST_PALETTE_LABEL_DE "Farbpalette"
#define PCE_FAST_PALETTE_INFO_0_DE "\"Composite\" versucht, die Originalausgabe der Konsole nachzubilden und kann in einigen Spielen mehr Details darstellen."
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define PCE_FAST_FRAMESKIP_LABEL_DE NULL
#define PCE_FAST_FRAMESKIP_INFO_0_DE "Frames überspringen, um ein Unterlaufen des Audiopuffers (Knistern) zu vermeiden. Verbessert die Leistung auf Kosten der visuellen Glätte. 'Auto' überspringt Frames, wenn vom Frontend empfohlen. 'Manual' verwendet die Einstellung 'Frameskip Grenzwert (%)'."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_MANUAL_DE "Manuell"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_DE "Frameskip-Grenzwert (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_DE "Gibt den Audiopuffer-Belegungsschwellenwert (Prozent) an, unter dem Frames übersprungen werden, wenn 'Frameskip' auf \"Manuell\" eingestellt ist. Höhere Werte verringern das Risiko von Knistern, da Frames häufiger weggelassen werden."
#define OPTION_VAL_33_DE "33 (Standard)"
#define PCE_FAST_HOVERSCAN_LABEL_DE "Horizontaler Overscan (nur 352 Breitbildmodus)"
#define PCE_FAST_HOVERSCAN_INFO_0_DE "Die maximale Bildbreite, die angezeigt werden soll. Bei niedrigeren Werten wird die rechte Seite des Bildes abgeschnitten (bei Spielen mit 352 px Bildbreite)."
#define OPTION_VAL_352_DE "352 (Standard)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_DE "Erste Scanline"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_DE "Erste gerenderte Scanline. Höhere Werte schneiden den oberen Teil des Bildes ab."
#define OPTION_VAL_3_DE "3 (Standard)"
#define PCE_FAST_LAST_SCANLINE_LABEL_DE "Letzte Scanline"
#define PCE_FAST_LAST_SCANLINE_INFO_0_DE "Letzte gerenderte Scanline. Niedrigere Werte schneiden den unteren Teil des Bildes ab."
#define OPTION_VAL_242_DE "242 (Standard)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_DE "PSG-Audiokanal 0 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 0 anpassen."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_DE "PSG-Audiokanal 1 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 1 anpassen."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_DE "PSG-Audiokanal 2 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 2 anpassen."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_DE "PSG-Audiokanal 3 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 3 anpassen."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_DE "PSG-Audiokanal 4 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 4 anpassen."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_DE "PSG-Audiokanal 5 Lautstärke %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_DE "Die Lautstärke des PSG-Audiokanals 5 anpassen."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_DE "Mausempfindlichkeit"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_DE "Höhere Werte erhöhen die Geschwindigkeit des Mauszeigers."
#define OPTION_VAL_0_25_DE "0,25"
#define OPTION_VAL_0_50_DE "0,50"
#define OPTION_VAL_0_75_DE "0,75"
#define OPTION_VAL_1_00_DE "1,00"
#define OPTION_VAL_1_25_DE "1,25"
#define OPTION_VAL_1_50_DE "1,50"
#define OPTION_VAL_1_75_DE "1,75"
#define OPTION_VAL_2_00_DE "2,00"
#define OPTION_VAL_2_25_DE "2,25"
#define OPTION_VAL_2_50_DE "2,50"
#define OPTION_VAL_2_75_DE "2,75"
#define OPTION_VAL_3_00_DE "3,00"
#define OPTION_VAL_3_25_DE "3,25"
#define OPTION_VAL_3_50_DE "3,50"
#define OPTION_VAL_3_75_DE "3,75"
#define OPTION_VAL_4_00_DE "4,00"
#define OPTION_VAL_4_25_DE "4,25"
#define OPTION_VAL_4_50_DE "4,50"
#define OPTION_VAL_4_75_DE "4,75"
#define OPTION_VAL_5_00_DE "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_DE "Neustart-Kombination (RUN+SELECT) deaktivieren"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_DE "Wenn RUN und SELECT gleichzeitig gedrückt werden, werden beide Tasten vorübergehend deaktiviert, anstatt den Inhalt neu zu starten."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE "P1 Standard-Joypad-Typ"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE "Hier wählen, ob Joypad von Port 1 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define OPTION_VAL_2_BUTTONS_DE "2 Tasten"
#define OPTION_VAL_6_BUTTONS_DE "6 Tasten"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE "P2 Standard-Joypad-Typ"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE "Hier wählen, ob Joypad von Port 2 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE "P3 Standard-Joypad-Typ"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE "Hier wählen, ob Joypad von Port 3 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE "P4 Standard-Joypad-Typ"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE "Hier wählen, ob Joypad von Port 4 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE "P5 Standard-Joypad-Typ"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE "Hier wählen, ob Joypad von Port 5 standardmäßig 2 oder 6 Tasten besitzen soll. Diese Option wird nur beim Start des Cores ausgeführt. Wenn umgeschaltet werden soll, während der Inhalt läuft, bitte den „Moduswechsel“ verwenden. HINWEIS: Ein 6-Tasten-Joypad kann sich in nicht kompatiblen Spielen seltsam verhalten."
#define PCE_FAST_TURBO_TOGGLING_LABEL_DE "Turbo-Umschalter"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_DE "Turbo-Umschalt-Hotkeys (Tasten III und IV) aktivieren."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_DE "Alternative Turbo-Hotkeys"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_DE "Die L3/R3-Tasten des RetroPads als Turbo-Umschalt-Hotkeys anstelle der Tasten III und IV verwenden. Funktioniert nur, solange den L3/R3-Tasten nichts zugewiesen wird. Hiermit kann die Umbelegung der Tasten III und IV vermieden werden, wenn zum 6-Tasten-Controller-Modus gewechselt wird."
#define PCE_FAST_TURBO_DELAY_LABEL_DE "Turbo-Verzögerung"
#define PCE_FAST_TURBO_DELAY_INFO_0_DE "Die Zeit zwischen den Turbo-Signalen (in Frames) einstellen."
#define PCE_FAST_CDIMAGECACHE_LABEL_DE "CD-Abbild-Cache (Neustart erforderlich)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_DE "Das komplette Abbild beim Start in den Arbeitsspeicher laden. Kann die Ladezeiten auf Kosten einer längeren Startzeit verkürzen."
#define PCE_FAST_CDBIOS_LABEL_DE "CD-BIOS (Neustart erforderlich)"
#define PCE_FAST_CDBIOS_INFO_0_DE "Die meisten Spiele können auf \"System Card 3\" laufen. \"Games Express\" wird für einige nicht lizenzierte Spiele benötigt."
#define OPTION_VAL_GAMES_EXPRESS_DE NULL
#define OPTION_VAL_SYSTEM_CARD_1_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DE NULL
#define PCE_FAST_CDSPEED_LABEL_DE "(CD) CD-Geschwindigkeit"
#define PCE_FAST_CDSPEED_LABEL_CAT_DE "CD-Geschwindigkeit"
#define PCE_FAST_CDSPEED_INFO_0_DE "Höhere Werte ermöglichen schnellere Ladezeiten, können aber Probleme mit einigen Spielen verursachen."
#define OPTION_VAL_1_DE NULL
#define OPTION_VAL_2_DE NULL
#define OPTION_VAL_4_DE NULL
#define OPTION_VAL_8_DE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_DE "(CD) ADPCM Lautstärke %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_DE "ADPCM Lautstärke %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_DE "Nur für CD-Spiele. Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define PCE_FAST_ADPCMVOLUME_INFO_1_DE "Diese Lautstärke zu hoch einzustellen kann zu Übersteuerung führen."
#define PCE_FAST_CDDAVOLUME_LABEL_DE "(CD) CDDA Lautstärke %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_DE "CDDA Lautstärke %"
#define PCE_FAST_CDPSGVOLUME_LABEL_DE "(CD) PSG Lautstärke %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_DE "CD-PSG-Lautstärke %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_DE "Kein Sprite-Limit"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_DE "Die Hardware-Beschränkung von 16 Sprites pro Scanline entfernen. WARNUNG: Kann bei einigen Spielen zu Grafikfehlern führen."
#define PCE_FAST_OCMULTIPLIER_LABEL_DE "CPU-Übertaktungsmultiplikator (Neustart erforderlich)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_DE "Höhere Werte können Slowdowns in Spielen reduzieren. WARNUNG: Kann Grafikfehler und Abstürze verursachen."

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DE,
      CATEGORY_HACKS_INFO_0_DE
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_DE,
      CATEGORY_CHANNEL_VOLUME_INFO_0_DE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_DE,
      CATEGORY_CD_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_DE,
      NULL,
      PCE_FAST_PALETTE_INFO_0_DE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_DE },
         { "Composite", OPTION_VAL_COMPOSITE_DE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_DE,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_DE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DE },
         { "manual",   OPTION_VAL_MANUAL_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_DE,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_DE,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_DE },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_DE,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_DE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_DE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_DE,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_DE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_DE,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_DE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_DE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_DE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_DE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_DE,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_DE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_DE },
         { "0.50", OPTION_VAL_0_50_DE },
         { "0.75", OPTION_VAL_0_75_DE },
         { "1.00", OPTION_VAL_1_00_DE },
         { "1.25", OPTION_VAL_1_25_DE },
         { "1.50", OPTION_VAL_1_50_DE },
         { "1.75", OPTION_VAL_1_75_DE },
         { "2.00", OPTION_VAL_2_00_DE },
         { "2.25", OPTION_VAL_2_25_DE },
         { "2.50", OPTION_VAL_2_50_DE },
         { "2.75", OPTION_VAL_2_75_DE },
         { "3.00", OPTION_VAL_3_00_DE },
         { "3.25", OPTION_VAL_3_25_DE },
         { "3.50", OPTION_VAL_3_50_DE },
         { "3.75", OPTION_VAL_3_75_DE },
         { "4.00", OPTION_VAL_4_00_DE },
         { "4.25", OPTION_VAL_4_25_DE },
         { "4.50", OPTION_VAL_4_50_DE },
         { "4.75", OPTION_VAL_4_75_DE },
         { "5.00", OPTION_VAL_5_00_DE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_DE,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_DE,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_DE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_DE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_DE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_DE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_DE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_DE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_DE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_DE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_DE,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_DE,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_DE,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_DE,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_DE },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_DE,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_DE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_DE,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_DE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_DE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_DE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_DE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_DE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_DE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_DE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_DE,
      PCE_FAST_CDSPEED_LABEL_CAT_DE,
      PCE_FAST_CDSPEED_INFO_0_DE,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_DE },
         { "2", OPTION_VAL_2_DE },
         { "4", OPTION_VAL_4_DE },
         { "8", OPTION_VAL_8_DE },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_DE,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_DE,
      PCE_FAST_ADPCMVOLUME_INFO_0_DE,
      PCE_FAST_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_DE,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_DE,
      PCE_FAST_ADPCMVOLUME_INFO_0_DE,
      PCE_FAST_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_DE,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_DE,
      PCE_FAST_ADPCMVOLUME_INFO_0_DE,
      PCE_FAST_ADPCMVOLUME_INFO_1_DE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_DE,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_DE,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL "Οδηγός Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_INPUT_LABEL_EL "Οδηγός Εισαγωγής"
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_HACKS_LABEL_EL NULL
#define CATEGORY_HACKS_INFO_0_EL NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_EL NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_EL NULL
#define CATEGORY_CD_LABEL_EL NULL
#define CATEGORY_CD_INFO_0_EL NULL
#define PCE_FAST_PALETTE_LABEL_EL "Παλέτα Χρωμάτων"
#define PCE_FAST_PALETTE_INFO_0_EL NULL
#define OPTION_VAL_RGB_EL NULL
#define OPTION_VAL_COMPOSITE_EL NULL
#define PCE_FAST_FRAMESKIP_LABEL_EL NULL
#define PCE_FAST_FRAMESKIP_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_MANUAL_EL "Χειροκίνητο"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EL NULL
#define OPTION_VAL_33_EL "33 (Προεπιλογή)"
#define PCE_FAST_HOVERSCAN_LABEL_EL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_EL NULL
#define OPTION_VAL_352_EL "352 (Προεπιλογή)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_EL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_3_EL "3 (Προεπιλογή)"
#define PCE_FAST_LAST_SCANLINE_LABEL_EL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_242_EL "242 (Προεπιλογή)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_EL "Ευαισθησία Ποντικιού"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EL NULL
#define OPTION_VAL_0_25_EL NULL
#define OPTION_VAL_0_50_EL NULL
#define OPTION_VAL_0_75_EL NULL
#define OPTION_VAL_1_00_EL NULL
#define OPTION_VAL_1_25_EL NULL
#define OPTION_VAL_1_50_EL NULL
#define OPTION_VAL_1_75_EL NULL
#define OPTION_VAL_2_00_EL NULL
#define OPTION_VAL_2_25_EL NULL
#define OPTION_VAL_2_50_EL NULL
#define OPTION_VAL_2_75_EL NULL
#define OPTION_VAL_3_00_EL NULL
#define OPTION_VAL_3_25_EL NULL
#define OPTION_VAL_3_50_EL NULL
#define OPTION_VAL_3_75_EL NULL
#define OPTION_VAL_4_00_EL NULL
#define OPTION_VAL_4_25_EL NULL
#define OPTION_VAL_4_50_EL NULL
#define OPTION_VAL_4_75_EL NULL
#define OPTION_VAL_5_00_EL NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_EL NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL NULL
#define OPTION_VAL_2_BUTTONS_EL NULL
#define OPTION_VAL_6_BUTTONS_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_EL NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_EL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_EL "Καθυστέρηση Τούρμπο"
#define PCE_FAST_TURBO_DELAY_INFO_0_EL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_EL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_EL NULL
#define PCE_FAST_CDBIOS_LABEL_EL NULL
#define PCE_FAST_CDBIOS_INFO_0_EL NULL
#define OPTION_VAL_GAMES_EXPRESS_EL NULL
#define OPTION_VAL_SYSTEM_CARD_1_EL "Κάρτα Συστήματος 1"
#define OPTION_VAL_SYSTEM_CARD_2_EL "Κάρτα Συστήματος 2"
#define OPTION_VAL_SYSTEM_CARD_3_EL "Κάρτα Συστήματος 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_EL "Κάρτα Συστήματος 2 ΗΠΑ"
#define OPTION_VAL_SYSTEM_CARD_3_US_EL "Κάρτα Συστήματος 3 ΗΠΑ"
#define PCE_FAST_CDSPEED_LABEL_EL NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_EL NULL
#define PCE_FAST_CDSPEED_INFO_0_EL NULL
#define OPTION_VAL_1_EL NULL
#define OPTION_VAL_2_EL NULL
#define OPTION_VAL_4_EL NULL
#define OPTION_VAL_8_EL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_EL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_EL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_EL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_EL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_EL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_EL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_EL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_EL NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_EL NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_EL NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_EL NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EL,
      CATEGORY_HACKS_INFO_0_EL
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_EL,
      CATEGORY_CHANNEL_VOLUME_INFO_0_EL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EL,
      CATEGORY_CD_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_EL,
      NULL,
      PCE_FAST_PALETTE_INFO_0_EL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EL },
         { "Composite", OPTION_VAL_COMPOSITE_EL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_EL,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_EL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EL },
         { "manual",   OPTION_VAL_MANUAL_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EL,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EL,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_EL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_EL,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_EL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_EL,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_EL,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_EL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_EL,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EL },
         { "0.50", OPTION_VAL_0_50_EL },
         { "0.75", OPTION_VAL_0_75_EL },
         { "1.00", OPTION_VAL_1_00_EL },
         { "1.25", OPTION_VAL_1_25_EL },
         { "1.50", OPTION_VAL_1_50_EL },
         { "1.75", OPTION_VAL_1_75_EL },
         { "2.00", OPTION_VAL_2_00_EL },
         { "2.25", OPTION_VAL_2_25_EL },
         { "2.50", OPTION_VAL_2_50_EL },
         { "2.75", OPTION_VAL_2_75_EL },
         { "3.00", OPTION_VAL_3_00_EL },
         { "3.25", OPTION_VAL_3_25_EL },
         { "3.50", OPTION_VAL_3_50_EL },
         { "3.75", OPTION_VAL_3_75_EL },
         { "4.00", OPTION_VAL_4_00_EL },
         { "4.25", OPTION_VAL_4_25_EL },
         { "4.50", OPTION_VAL_4_50_EL },
         { "4.75", OPTION_VAL_4_75_EL },
         { "5.00", OPTION_VAL_5_00_EL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_EL,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_EL,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_EL,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EL,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_EL,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_EL,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_EL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_EL,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_EL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_EL,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_EL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_EL,
      PCE_FAST_CDSPEED_LABEL_CAT_EL,
      PCE_FAST_CDSPEED_INFO_0_EL,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_EL },
         { "2", OPTION_VAL_2_EL },
         { "4", OPTION_VAL_4_EL },
         { "8", OPTION_VAL_8_EL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_EL,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_EL,
      PCE_FAST_ADPCMVOLUME_INFO_0_EL,
      PCE_FAST_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_EL,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_EL,
      PCE_FAST_ADPCMVOLUME_INFO_0_EL,
      PCE_FAST_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_EL,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_EL,
      PCE_FAST_ADPCMVOLUME_INFO_0_EL,
      PCE_FAST_ADPCMVOLUME_INFO_1_EL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_EL,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_EL,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_VIDEO_LABEL_EN NULL
#define CATEGORY_VIDEO_INFO_0_EN NULL
#define CATEGORY_INPUT_LABEL_EN NULL
#define CATEGORY_INPUT_INFO_0_EN NULL
#define CATEGORY_HACKS_LABEL_EN NULL
#define CATEGORY_HACKS_INFO_0_EN "Configure processor over-clocking and emulation accuracy parameters affecting low-level performance and compatibility."
#define CATEGORY_CHANNEL_VOLUME_LABEL_EN NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_EN NULL
#define CATEGORY_CD_LABEL_EN NULL
#define CATEGORY_CD_INFO_0_EN NULL
#define PCE_FAST_PALETTE_LABEL_EN "Colour Palette"
#define PCE_FAST_PALETTE_INFO_0_EN NULL
#define OPTION_VAL_RGB_EN NULL
#define OPTION_VAL_COMPOSITE_EN NULL
#define PCE_FAST_FRAMESKIP_LABEL_EN "Frame-skip"
#define PCE_FAST_FRAMESKIP_INFO_0_EN "Skip frames to avoid audio buffer under-run (crackling). Improves performance at the expense of visual smoothness. 'Auto' skips frames when advised by the front-end. 'Manual' utilizes the 'Frame-skip Threshold (%)' setting."
#define OPTION_VAL_AUTO_EN NULL
#define OPTION_VAL_MANUAL_EN NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EN "Frame-skip Threshold (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EN "When 'Frame-skip' is set to 'Manual', this specifies the audio buffer occupancy threshold (percentage) below which frames will be skipped. Higher values reduce the risk of crackling by causing frames to be dropped more frequently."
#define OPTION_VAL_33_EN NULL
#define PCE_FAST_HOVERSCAN_LABEL_EN NULL
#define PCE_FAST_HOVERSCAN_INFO_0_EN "Choose the maximum image width to be displayed. Lower values will crop the right side of the image (for 352-pixel width games)."
#define OPTION_VAL_352_EN NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_EN "Initial Scan-line"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_EN "First rendered scan-line. Higher values will crop the top of the image."
#define OPTION_VAL_3_EN NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_EN "Last Scan-line"
#define PCE_FAST_LAST_SCANLINE_INFO_0_EN "Last rendered scan-line. Lower values will crop the bottom of the image."
#define OPTION_VAL_242_EN NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EN NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EN NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EN NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EN NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EN NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EN NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EN NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_EN NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EN NULL
#define OPTION_VAL_0_25_EN NULL
#define OPTION_VAL_0_50_EN NULL
#define OPTION_VAL_0_75_EN NULL
#define OPTION_VAL_1_00_EN NULL
#define OPTION_VAL_1_25_EN NULL
#define OPTION_VAL_1_50_EN NULL
#define OPTION_VAL_1_75_EN NULL
#define OPTION_VAL_2_00_EN NULL
#define OPTION_VAL_2_25_EN NULL
#define OPTION_VAL_2_50_EN NULL
#define OPTION_VAL_2_75_EN NULL
#define OPTION_VAL_3_00_EN NULL
#define OPTION_VAL_3_25_EN NULL
#define OPTION_VAL_3_50_EN NULL
#define OPTION_VAL_3_75_EN NULL
#define OPTION_VAL_4_00_EN NULL
#define OPTION_VAL_4_25_EN NULL
#define OPTION_VAL_4_50_EN NULL
#define OPTION_VAL_4_75_EN NULL
#define OPTION_VAL_5_00_EN NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_EN NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN "Choose if port 1 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define OPTION_VAL_2_BUTTONS_EN NULL
#define OPTION_VAL_6_BUTTONS_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN "Choose if port 2 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN "Choose if port 3 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN "Choose if port 4 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN "Choose if port 5 joypad should be 2 or 6 buttons by default. This option is only applied when the core starts, if you want to switch while content is running, use the 'Mode Switch' button. NOTE: 6 buttons joypad can have weird behaviours in non-compatible games."
#define PCE_FAST_TURBO_TOGGLING_LABEL_EN NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_EN NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EN NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EN NULL
#define PCE_FAST_TURBO_DELAY_LABEL_EN NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_EN NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_EN NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_EN "Load the complete image into memory at start-up. Can potentially decrease loading times at the cost of an increased start-up time."
#define PCE_FAST_CDBIOS_LABEL_EN NULL
#define PCE_FAST_CDBIOS_INFO_0_EN NULL
#define OPTION_VAL_GAMES_EXPRESS_EN NULL
#define OPTION_VAL_SYSTEM_CARD_1_EN NULL
#define OPTION_VAL_SYSTEM_CARD_2_EN NULL
#define OPTION_VAL_SYSTEM_CARD_3_EN NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EN NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EN NULL
#define PCE_FAST_CDSPEED_LABEL_EN NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_EN NULL
#define PCE_FAST_CDSPEED_INFO_0_EN NULL
#define OPTION_VAL_1_EN NULL
#define OPTION_VAL_2_EN NULL
#define OPTION_VAL_4_EN NULL
#define OPTION_VAL_8_EN NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_EN NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_EN NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_EN NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_EN NULL
#define PCE_FAST_CDDAVOLUME_LABEL_EN NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_EN NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_EN NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_EN NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_EN NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_EN "Remove 16-sprites-per-scan-line hardware limit. WARNING: May cause graphics glitching on some games."
#define PCE_FAST_OCMULTIPLIER_LABEL_EN "CPU Over-clock Multiplier (Restart Required)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EN,
      CATEGORY_VIDEO_INFO_0_EN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EN,
      CATEGORY_INPUT_INFO_0_EN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EN,
      CATEGORY_HACKS_INFO_0_EN
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_EN,
      CATEGORY_CHANNEL_VOLUME_INFO_0_EN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EN,
      CATEGORY_CD_INFO_0_EN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_EN,
      NULL,
      PCE_FAST_PALETTE_INFO_0_EN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EN },
         { "Composite", OPTION_VAL_COMPOSITE_EN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_EN,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_EN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EN },
         { "manual",   OPTION_VAL_MANUAL_EN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EN,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EN,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_EN },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_EN,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_EN,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EN },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_EN,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_EN,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_EN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EN },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_EN,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EN,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EN },
         { "0.50", OPTION_VAL_0_50_EN },
         { "0.75", OPTION_VAL_0_75_EN },
         { "1.00", OPTION_VAL_1_00_EN },
         { "1.25", OPTION_VAL_1_25_EN },
         { "1.50", OPTION_VAL_1_50_EN },
         { "1.75", OPTION_VAL_1_75_EN },
         { "2.00", OPTION_VAL_2_00_EN },
         { "2.25", OPTION_VAL_2_25_EN },
         { "2.50", OPTION_VAL_2_50_EN },
         { "2.75", OPTION_VAL_2_75_EN },
         { "3.00", OPTION_VAL_3_00_EN },
         { "3.25", OPTION_VAL_3_25_EN },
         { "3.50", OPTION_VAL_3_50_EN },
         { "3.75", OPTION_VAL_3_75_EN },
         { "4.00", OPTION_VAL_4_00_EN },
         { "4.25", OPTION_VAL_4_25_EN },
         { "4.50", OPTION_VAL_4_50_EN },
         { "4.75", OPTION_VAL_4_75_EN },
         { "5.00", OPTION_VAL_5_00_EN },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_EN,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_EN,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_EN,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EN,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_EN,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_EN,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_EN },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_EN,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_EN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_EN,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_EN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EN },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EN },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EN },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_EN,
      PCE_FAST_CDSPEED_LABEL_CAT_EN,
      PCE_FAST_CDSPEED_INFO_0_EN,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_EN },
         { "2", OPTION_VAL_2_EN },
         { "4", OPTION_VAL_4_EN },
         { "8", OPTION_VAL_8_EN },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_EN,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_EN,
      PCE_FAST_ADPCMVOLUME_INFO_0_EN,
      PCE_FAST_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_EN,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_EN,
      PCE_FAST_ADPCMVOLUME_INFO_0_EN,
      PCE_FAST_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_EN,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_EN,
      PCE_FAST_ADPCMVOLUME_INFO_0_EN,
      PCE_FAST_ADPCMVOLUME_INFO_1_EN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_EN,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_EN,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_EN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO "Video Driver"
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO "Input Driver"
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_HACKS_LABEL_EO NULL
#define CATEGORY_HACKS_INFO_0_EO NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_EO NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_EO NULL
#define CATEGORY_CD_LABEL_EO NULL
#define CATEGORY_CD_INFO_0_EO NULL
#define PCE_FAST_PALETTE_LABEL_EO NULL
#define PCE_FAST_PALETTE_INFO_0_EO NULL
#define OPTION_VAL_RGB_EO NULL
#define OPTION_VAL_COMPOSITE_EO NULL
#define PCE_FAST_FRAMESKIP_LABEL_EO NULL
#define PCE_FAST_FRAMESKIP_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_MANUAL_EO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EO NULL
#define OPTION_VAL_33_EO NULL
#define PCE_FAST_HOVERSCAN_LABEL_EO NULL
#define PCE_FAST_HOVERSCAN_INFO_0_EO NULL
#define OPTION_VAL_352_EO NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_EO NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_3_EO NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_EO NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_EO NULL
#define OPTION_VAL_242_EO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_EO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EO NULL
#define OPTION_VAL_0_25_EO NULL
#define OPTION_VAL_0_50_EO NULL
#define OPTION_VAL_0_75_EO NULL
#define OPTION_VAL_1_00_EO NULL
#define OPTION_VAL_1_25_EO NULL
#define OPTION_VAL_1_50_EO NULL
#define OPTION_VAL_1_75_EO NULL
#define OPTION_VAL_2_00_EO NULL
#define OPTION_VAL_2_25_EO NULL
#define OPTION_VAL_2_50_EO NULL
#define OPTION_VAL_2_75_EO NULL
#define OPTION_VAL_3_00_EO NULL
#define OPTION_VAL_3_25_EO NULL
#define OPTION_VAL_3_50_EO NULL
#define OPTION_VAL_3_75_EO NULL
#define OPTION_VAL_4_00_EO NULL
#define OPTION_VAL_4_25_EO NULL
#define OPTION_VAL_4_50_EO NULL
#define OPTION_VAL_4_75_EO NULL
#define OPTION_VAL_5_00_EO NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_EO NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO NULL
#define OPTION_VAL_2_BUTTONS_EO NULL
#define OPTION_VAL_6_BUTTONS_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_EO NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_EO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EO NULL
#define PCE_FAST_TURBO_DELAY_LABEL_EO NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_EO NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_EO NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_EO NULL
#define PCE_FAST_CDBIOS_LABEL_EO NULL
#define PCE_FAST_CDBIOS_INFO_0_EO NULL
#define OPTION_VAL_GAMES_EXPRESS_EO NULL
#define OPTION_VAL_SYSTEM_CARD_1_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_EO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EO NULL
#define PCE_FAST_CDSPEED_LABEL_EO NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_EO NULL
#define PCE_FAST_CDSPEED_INFO_0_EO NULL
#define OPTION_VAL_1_EO NULL
#define OPTION_VAL_2_EO NULL
#define OPTION_VAL_4_EO NULL
#define OPTION_VAL_8_EO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_EO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_EO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_EO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_EO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_EO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_EO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_EO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_EO NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_EO NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_EO NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_EO NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EO,
      CATEGORY_HACKS_INFO_0_EO
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_EO,
      CATEGORY_CHANNEL_VOLUME_INFO_0_EO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_EO,
      CATEGORY_CD_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_EO,
      NULL,
      PCE_FAST_PALETTE_INFO_0_EO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_EO },
         { "Composite", OPTION_VAL_COMPOSITE_EO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_EO,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_EO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EO },
         { "manual",   OPTION_VAL_MANUAL_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_EO,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_EO,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_EO },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_EO,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_EO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_EO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_EO,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_EO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_EO,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_EO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_EO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_EO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_EO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_EO,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_EO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_EO },
         { "0.50", OPTION_VAL_0_50_EO },
         { "0.75", OPTION_VAL_0_75_EO },
         { "1.00", OPTION_VAL_1_00_EO },
         { "1.25", OPTION_VAL_1_25_EO },
         { "1.50", OPTION_VAL_1_50_EO },
         { "1.75", OPTION_VAL_1_75_EO },
         { "2.00", OPTION_VAL_2_00_EO },
         { "2.25", OPTION_VAL_2_25_EO },
         { "2.50", OPTION_VAL_2_50_EO },
         { "2.75", OPTION_VAL_2_75_EO },
         { "3.00", OPTION_VAL_3_00_EO },
         { "3.25", OPTION_VAL_3_25_EO },
         { "3.50", OPTION_VAL_3_50_EO },
         { "3.75", OPTION_VAL_3_75_EO },
         { "4.00", OPTION_VAL_4_00_EO },
         { "4.25", OPTION_VAL_4_25_EO },
         { "4.50", OPTION_VAL_4_50_EO },
         { "4.75", OPTION_VAL_4_75_EO },
         { "5.00", OPTION_VAL_5_00_EO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_EO,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_EO,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_EO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_EO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_EO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_EO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_EO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_EO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_EO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_EO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_EO,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EO,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_EO,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_EO,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_EO },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_EO,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_EO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_EO,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_EO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_EO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_EO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_EO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_EO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_EO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_EO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_EO,
      PCE_FAST_CDSPEED_LABEL_CAT_EO,
      PCE_FAST_CDSPEED_INFO_0_EO,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_EO },
         { "2", OPTION_VAL_2_EO },
         { "4", OPTION_VAL_4_EO },
         { "8", OPTION_VAL_8_EO },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_EO,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_EO,
      PCE_FAST_ADPCMVOLUME_INFO_0_EO,
      PCE_FAST_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_EO,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_EO,
      PCE_FAST_ADPCMVOLUME_INFO_0_EO,
      PCE_FAST_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_EO,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_EO,
      PCE_FAST_ADPCMVOLUME_INFO_0_EO,
      PCE_FAST_ADPCMVOLUME_INFO_1_EO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_EO,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_EO,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Cambia las opciones de relación de aspecto, omisión de fotogramas y otros ajustes de la salida de imagen."
#define CATEGORY_INPUT_LABEL_ES "Entrada"
#define CATEGORY_INPUT_INFO_0_ES "Configura la entrada de las pistolas de luz, el ratón o el NegCon."
#define CATEGORY_HACKS_LABEL_ES "Arreglos de emulación"
#define CATEGORY_HACKS_INFO_0_ES "Cambia las opciones de velocidad del procesador y de precisión de la emulación que afectan al rendimiento a bajo nivel y a la compatibilidad."
#define CATEGORY_CHANNEL_VOLUME_LABEL_ES "Ajustes avanzados del volumen de los canales"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_ES "Cambia el volumen de los canales individuales de audio del hardware."
#define CATEGORY_CD_LABEL_ES "CD para PC Engine"
#define CATEGORY_CD_INFO_0_ES "Cambia los ajustes relacionados con la emulación de la unidad de CD para PC Engine."
#define PCE_FAST_PALETTE_LABEL_ES "Paleta de colores"
#define PCE_FAST_PALETTE_INFO_0_ES "«Vídeo compuesto» intentará recrear la salida de vídeo original de la consola, mostrando más detalles en algunos juegos."
#define OPTION_VAL_RGB_ES NULL
#define OPTION_VAL_COMPOSITE_ES "Vídeo compuesto"
#define PCE_FAST_FRAMESKIP_LABEL_ES "Omisión de fotogramas"
#define PCE_FAST_FRAMESKIP_INFO_0_ES "Omite fotogramas para no saturar el búfer de audio (chasquidos en el sonido). Mejora el rendimiento a costa de perder fluidez visual. Selección automática omite fotogramas según lo aconseje el front-end. El valor Manual utiliza el ajuste Umbral de omisión de fotogramas (%)."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define OPTION_VAL_MANUAL_ES "Selección manual"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_ES "Umbral de omisión de fotogramas (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_ES "Cuando la omisión de fotogramas esté configurada como Manual, este ajuste especifica el umbral de ocupación del búfer de audio (en porcentaje) por debajo del cual se omitirán fotogramas si el valor. Un valor más elevado reduce el riesgo de chasquidos omitiendo fotogramas con una mayor frecuencia."
#define OPTION_VAL_33_ES "33 (por defecto)"
#define PCE_FAST_HOVERSCAN_LABEL_ES "Sobrebarrido horizontal (solo para el modo de 352 px de ancho)"
#define PCE_FAST_HOVERSCAN_INFO_0_ES "Selecciona el ancho máximo de la imagen que se mostrará. Un valor bajo recortará la parte derecha (para los juegos con un ancho de 352 px)."
#define OPTION_VAL_352_ES "352 (por defecto)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_ES "Línea de barrido inicial"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_ES "Indica la primera línea de barrido que se renderizará. Un valor muy alto recortará la parte superior de la imagen."
#define OPTION_VAL_3_ES "3 (por defecto)"
#define PCE_FAST_LAST_SCANLINE_LABEL_ES "Línea de barrido final"
#define PCE_FAST_LAST_SCANLINE_INFO_0_ES "Indica la última línea de barrido que se renderizará. Un valor muy bajo recortará la parte inferior de la imagen."
#define OPTION_VAL_242_ES "242 (por defecto)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_ES "Volumen del canal de sonido 0 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 0 del PSG."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_ES "Volumen del canal de sonido 1 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 1 del PSG."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_ES "Volumen del canal de sonido 2 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 2 del PSG."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_ES "Volumen del canal de sonido 3 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 3 del PSG."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_ES "Volumen del canal de sonido 4 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 4 del PSG."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_ES "Volumen del canal de sonido 5 del PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_ES "Modifica el volumen del canal de sonido 5 del PSG."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_ES "Sensibilidad del ratón"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_ES "Un valor más alto hará que el cursor del ratón se desplace más rápido."
#define OPTION_VAL_0_25_ES "0,25"
#define OPTION_VAL_0_50_ES "0,50"
#define OPTION_VAL_0_75_ES "0,75"
#define OPTION_VAL_1_00_ES "1,00"
#define OPTION_VAL_1_25_ES "1,25"
#define OPTION_VAL_1_50_ES "1,50"
#define OPTION_VAL_1_75_ES "1,75"
#define OPTION_VAL_2_00_ES "2,00"
#define OPTION_VAL_2_25_ES "2,25"
#define OPTION_VAL_2_50_ES "2,50"
#define OPTION_VAL_2_75_ES "2,75"
#define OPTION_VAL_3_00_ES "3,00"
#define OPTION_VAL_3_25_ES "3,25"
#define OPTION_VAL_3_50_ES "3,50"
#define OPTION_VAL_3_75_ES "3,75"
#define OPTION_VAL_4_00_ES "4,00"
#define OPTION_VAL_4_25_ES "4,25"
#define OPTION_VAL_4_50_ES "4,50"
#define OPTION_VAL_4_75_ES "4,75"
#define OPTION_VAL_5_00_ES "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_ES "Desactivar reinicio por software (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_ES "Cuando se pulsen a la vez los botones RUN y SELECT, esta opción desactivará los dos botones temporalmente en vez de provocar un reinicio del sistema."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES "Tipo de mando predeterminado del J1"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES "Indica si el mando del puerto 1 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define OPTION_VAL_2_BUTTONS_ES "Dos botones"
#define OPTION_VAL_6_BUTTONS_ES "Seis botones"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES "Tipo de mando predeterminado del J2"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES "Indica si el mando del puerto 2 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES "Tipo de mando predeterminado del J3"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES "Indica si el mando del puerto 3 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES "Tipo de mando predeterminado del J4"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES "Indica si el mando del puerto 4 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES "Tipo de mando predeterminado del J5"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES "Indica si el mando del puerto 5 debería ser uno de 2 o 6 botones por defecto. Esta opción se aplica únicamente al iniciar el núcleo: si deseas cambiar el tipo de mando mientras se esté ejecutando un contenido, debes usar el botón de cambio de modo. NOTA: los mandos de 6 botones pueden producir comportamientos extraños en juegos que no sean compatibles con este mando."
#define PCE_FAST_TURBO_TOGGLING_LABEL_ES "Activación manual del turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_ES "Activa las teclas rápidas para activar o desactivar el turbo (los botones III y IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_ES "Teclas rápidas alternativas para el turbo"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_ES "Asigna los botones L3/R3 del RetroPad como teclas rápidas para activar o desactivar turbo en vez de usar los botones III y IV. Solo funciona mientras no haya otra acción asignada a los botones L3/R3. Con esta opción no tendrás que reasignar los botones III y IV cuando cambies al modo de mando de 6 botones."
#define PCE_FAST_TURBO_DELAY_LABEL_ES "Retraso del turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_ES "Ajusta el tiempo que pasará entre cada pulsación del turbo (en fotogramas)."
#define PCE_FAST_CDIMAGECACHE_LABEL_ES "Cachear imagen de CD (es necesario reiniciar)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_ES "Carga la imagen de CD entera en la memoria al arrancar. Podría reducir los tiempos de carga a costa de aumentar el tiempo de arranque."
#define PCE_FAST_CDBIOS_LABEL_ES "BIOS para CD (es necesario reiniciar)"
#define PCE_FAST_CDBIOS_INFO_0_ES "La mayoría de juegos pueden ejecutarse con «System Card 3». «Games Express» es necesario para varios juegos sin licencia."
#define OPTION_VAL_GAMES_EXPRESS_ES NULL
#define OPTION_VAL_SYSTEM_CARD_1_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_ES NULL
#define OPTION_VAL_SYSTEM_CARD_3_ES NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ES "System Card 2 (EE. UU.)"
#define OPTION_VAL_SYSTEM_CARD_3_US_ES "System Card 3 (EE. UU.)"
#define PCE_FAST_CDSPEED_LABEL_ES "(CD) Velocidad del CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_ES "Velocidad del CD"
#define PCE_FAST_CDSPEED_INFO_0_ES "Un valor alto acelerará los tiempos de carga, pero dará problemas con un par de juegos."
#define OPTION_VAL_1_ES NULL
#define OPTION_VAL_2_ES NULL
#define OPTION_VAL_4_ES NULL
#define OPTION_VAL_8_ES NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_ES "(CD) Volumen de ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_ES "Volumen de ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_INFO_0_ES "Solo para juegos en CD. Un volumen muy elevado podría saturar las muestras de audio."
#define PCE_FAST_ADPCMVOLUME_INFO_1_ES "Un volumen muy elevado podría saturar las muestras de audio."
#define PCE_FAST_CDDAVOLUME_LABEL_ES "(CD) Volumen de CDDA (%)"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_ES "Volumen de CDDA (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_ES "(CD) Volumen del PSG (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_ES "Volumen del PSG de CD (%)"
#define PCE_FAST_NOSPRITELIMIT_LABEL_ES "Desactivar límite de sprites"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_ES "Elimina el límite de 16 sprites por línea de barrido que tenía el hardware original. ADVERTENCIA: puede provocar fallos gráficos en algunos juegos."
#define PCE_FAST_OCMULTIPLIER_LABEL_ES "Multiplicador de velocidad de la CPU (es necesario reiniciar)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_ES "Un valor alto puede evitar las ralentizaciones de los juegos. ADVERTENCIA: puede producir fallos gráficos y cuelgues."

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ES,
      CATEGORY_HACKS_INFO_0_ES
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_ES,
      CATEGORY_CHANNEL_VOLUME_INFO_0_ES
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ES,
      CATEGORY_CD_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_ES,
      NULL,
      PCE_FAST_PALETTE_INFO_0_ES,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ES },
         { "Composite", OPTION_VAL_COMPOSITE_ES },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_ES,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_ES,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ES },
         { "manual",   OPTION_VAL_MANUAL_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_ES,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_ES,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_ES },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_ES,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_ES,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_ES },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_ES,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ES },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_ES,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_ES,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ES },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_ES,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_ES,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_ES,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_ES,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_ES },
         { "0.50", OPTION_VAL_0_50_ES },
         { "0.75", OPTION_VAL_0_75_ES },
         { "1.00", OPTION_VAL_1_00_ES },
         { "1.25", OPTION_VAL_1_25_ES },
         { "1.50", OPTION_VAL_1_50_ES },
         { "1.75", OPTION_VAL_1_75_ES },
         { "2.00", OPTION_VAL_2_00_ES },
         { "2.25", OPTION_VAL_2_25_ES },
         { "2.50", OPTION_VAL_2_50_ES },
         { "2.75", OPTION_VAL_2_75_ES },
         { "3.00", OPTION_VAL_3_00_ES },
         { "3.25", OPTION_VAL_3_25_ES },
         { "3.50", OPTION_VAL_3_50_ES },
         { "3.75", OPTION_VAL_3_75_ES },
         { "4.00", OPTION_VAL_4_00_ES },
         { "4.25", OPTION_VAL_4_25_ES },
         { "4.50", OPTION_VAL_4_50_ES },
         { "4.75", OPTION_VAL_4_75_ES },
         { "5.00", OPTION_VAL_5_00_ES },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_ES,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_ES,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_ES,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_ES,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_ES,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_ES,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_ES,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ES,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ES },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ES },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_ES,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_ES,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_ES,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_ES,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_ES },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_ES,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_ES,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_ES,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_ES,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ES },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ES },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ES },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ES },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ES },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ES },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_ES,
      PCE_FAST_CDSPEED_LABEL_CAT_ES,
      PCE_FAST_CDSPEED_INFO_0_ES,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_ES },
         { "2", OPTION_VAL_2_ES },
         { "4", OPTION_VAL_4_ES },
         { "8", OPTION_VAL_8_ES },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_ES,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_ES,
      PCE_FAST_ADPCMVOLUME_INFO_0_ES,
      PCE_FAST_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_ES,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_ES,
      PCE_FAST_ADPCMVOLUME_INFO_0_ES,
      PCE_FAST_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_ES,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_ES,
      PCE_FAST_ADPCMVOLUME_INFO_0_ES,
      PCE_FAST_ADPCMVOLUME_INFO_1_ES,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_ES,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_ES,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA "ورودی"
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_HACKS_LABEL_FA NULL
#define CATEGORY_HACKS_INFO_0_FA NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_FA NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_FA NULL
#define CATEGORY_CD_LABEL_FA NULL
#define CATEGORY_CD_INFO_0_FA NULL
#define PCE_FAST_PALETTE_LABEL_FA NULL
#define PCE_FAST_PALETTE_INFO_0_FA NULL
#define OPTION_VAL_RGB_FA NULL
#define OPTION_VAL_COMPOSITE_FA NULL
#define PCE_FAST_FRAMESKIP_LABEL_FA "پرش فریم"
#define PCE_FAST_FRAMESKIP_INFO_0_FA "برای جلوگیری از اجرا شدن بافر صوتی (ترق زدن) از فریم‌ها پرش کنید. عملکرد را در ازای صاف‌بودن تصویر بهبود می‌بخشد. حالت «خودکار»هنگام توصیهٔ پیشانه از روی فریم‌ها می‌پرد. حالت «دستی» تنظیم «آستانهٔ پرش فریم (٪)» را فعال می‌کند."
#define OPTION_VAL_AUTO_FA "خودکار"
#define OPTION_VAL_MANUAL_FA "دستی"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FA "آستانهٔ پرش فریم (٪)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FA "زمانی که «پرش فریم» روی «دستی» تنظیم شده باشد، آستانهٔ (درصد) اشغال بافر صوتی را برای پرش از روی فریم‌ها تنظیم می‌کند. مقادیر بالاتر احتمال ترق خوردن صدا را با رها کردن فریم‌های بیشتر، کاهش می‌دهد."
#define OPTION_VAL_33_FA NULL
#define PCE_FAST_HOVERSCAN_LABEL_FA NULL
#define PCE_FAST_HOVERSCAN_INFO_0_FA NULL
#define OPTION_VAL_352_FA NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_FA NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_3_FA NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_FA NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_FA NULL
#define OPTION_VAL_242_FA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_FA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FA NULL
#define OPTION_VAL_0_25_FA NULL
#define OPTION_VAL_0_50_FA NULL
#define OPTION_VAL_0_75_FA NULL
#define OPTION_VAL_1_00_FA NULL
#define OPTION_VAL_1_25_FA NULL
#define OPTION_VAL_1_50_FA NULL
#define OPTION_VAL_1_75_FA NULL
#define OPTION_VAL_2_00_FA NULL
#define OPTION_VAL_2_25_FA NULL
#define OPTION_VAL_2_50_FA NULL
#define OPTION_VAL_2_75_FA NULL
#define OPTION_VAL_3_00_FA NULL
#define OPTION_VAL_3_25_FA NULL
#define OPTION_VAL_3_50_FA NULL
#define OPTION_VAL_3_75_FA NULL
#define OPTION_VAL_4_00_FA NULL
#define OPTION_VAL_4_25_FA NULL
#define OPTION_VAL_4_50_FA NULL
#define OPTION_VAL_4_75_FA NULL
#define OPTION_VAL_5_00_FA NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_FA NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA NULL
#define OPTION_VAL_2_BUTTONS_FA NULL
#define OPTION_VAL_6_BUTTONS_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_FA NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_FA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FA NULL
#define PCE_FAST_TURBO_DELAY_LABEL_FA NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_FA NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_FA NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_FA NULL
#define PCE_FAST_CDBIOS_LABEL_FA NULL
#define PCE_FAST_CDBIOS_INFO_0_FA NULL
#define OPTION_VAL_GAMES_EXPRESS_FA NULL
#define OPTION_VAL_SYSTEM_CARD_1_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_FA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FA NULL
#define PCE_FAST_CDSPEED_LABEL_FA NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_FA NULL
#define PCE_FAST_CDSPEED_INFO_0_FA NULL
#define OPTION_VAL_1_FA NULL
#define OPTION_VAL_2_FA NULL
#define OPTION_VAL_4_FA NULL
#define OPTION_VAL_8_FA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_FA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_FA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_FA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_FA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_FA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_FA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_FA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_FA NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_FA NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_FA NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_FA NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FA,
      CATEGORY_HACKS_INFO_0_FA
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_FA,
      CATEGORY_CHANNEL_VOLUME_INFO_0_FA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FA,
      CATEGORY_CD_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_FA,
      NULL,
      PCE_FAST_PALETTE_INFO_0_FA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FA },
         { "Composite", OPTION_VAL_COMPOSITE_FA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_FA,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_FA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FA },
         { "manual",   OPTION_VAL_MANUAL_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FA,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FA,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_FA },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_FA,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_FA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_FA,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_FA,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_FA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_FA,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FA },
         { "0.50", OPTION_VAL_0_50_FA },
         { "0.75", OPTION_VAL_0_75_FA },
         { "1.00", OPTION_VAL_1_00_FA },
         { "1.25", OPTION_VAL_1_25_FA },
         { "1.50", OPTION_VAL_1_50_FA },
         { "1.75", OPTION_VAL_1_75_FA },
         { "2.00", OPTION_VAL_2_00_FA },
         { "2.25", OPTION_VAL_2_25_FA },
         { "2.50", OPTION_VAL_2_50_FA },
         { "2.75", OPTION_VAL_2_75_FA },
         { "3.00", OPTION_VAL_3_00_FA },
         { "3.25", OPTION_VAL_3_25_FA },
         { "3.50", OPTION_VAL_3_50_FA },
         { "3.75", OPTION_VAL_3_75_FA },
         { "4.00", OPTION_VAL_4_00_FA },
         { "4.25", OPTION_VAL_4_25_FA },
         { "4.50", OPTION_VAL_4_50_FA },
         { "4.75", OPTION_VAL_4_75_FA },
         { "5.00", OPTION_VAL_5_00_FA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_FA,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_FA,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_FA,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FA,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_FA,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_FA,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_FA },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_FA,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_FA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_FA,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_FA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_FA,
      PCE_FAST_CDSPEED_LABEL_CAT_FA,
      PCE_FAST_CDSPEED_INFO_0_FA,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_FA },
         { "2", OPTION_VAL_2_FA },
         { "4", OPTION_VAL_4_FA },
         { "8", OPTION_VAL_8_FA },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_FA,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_FA,
      PCE_FAST_ADPCMVOLUME_INFO_0_FA,
      PCE_FAST_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_FA,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_FA,
      PCE_FAST_ADPCMVOLUME_INFO_0_FA,
      PCE_FAST_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_FA,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_FA,
      PCE_FAST_ADPCMVOLUME_INFO_0_FA,
      PCE_FAST_ADPCMVOLUME_INFO_1_FA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_FA,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_FA,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI "Määritä näytön rajaus, kuvanohitus ja muut kuvan ulostuloparametrit."
#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI "Määritä valoaseen, hiiren ja NegCon:in syöte."
#define CATEGORY_HACKS_LABEL_FI "Emulointikikat"
#define CATEGORY_HACKS_INFO_0_FI "Määritä prosessorin ylikellotus- ja emuloinnin tarkkuuden asetukset, jotka vaikuttavat matalan tason suorituskykyyn ja yhteensopivuuteen."
#define CATEGORY_CHANNEL_VOLUME_LABEL_FI "Kanavan äänenvoimakkuuden lisäasetukset"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_FI "Määritä yksittäisten laitteistojen äänikanavien äänenvoimakkuus."
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI "Määritä PC Engine CD -emulointiin liittyvät asetukset."
#define PCE_FAST_PALETTE_LABEL_FI "Väripaletti"
#define PCE_FAST_PALETTE_INFO_0_FI "Komposiitti yrittää uudelleen luoda alkuperäisen konsolin ulostuloa ja saattaa näyttää enemmän yksityiskohtia joissakin peleissä."
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI "Komposiitti"
#define PCE_FAST_FRAMESKIP_LABEL_FI "Kuvanohitus"
#define PCE_FAST_FRAMESKIP_INFO_0_FI "Ohita kuvia välttääksesi äänipuskurin ali ajon (säröily). Parantaa suorituskykyä visuaalisen tasaisuuden kustannuksella. \"Automaatti\" ohittaa kehykset käyttöliittymän asetusten mukaan. \"Manuaalinen\" käyttää \"Kuvienohituksen arvo (%)\" -asetusta."
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_MANUAL_FI "Manuaalinen"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FI "Kuvienohituksen arvo (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FI "Kun \"kehyksen ohitus\" on asetettu \"manuaaliksi\", määrittää äänipuskuri käyttökynnyksen (prosentteina), jonka alapuolella kehykset ohitetaan. Korkeammat arvot vähentävät särkymisen riskiä siten, että kehykset putoavat useammin."
#define OPTION_VAL_33_FI "33 (Oletus)"
#define PCE_FAST_HOVERSCAN_LABEL_FI "Vaakasuuntainen yliskannaus (Vain 352-leveystila)"
#define PCE_FAST_HOVERSCAN_INFO_0_FI "Valitse kuvan maksimileveys, joka näytetään. Alemmat arvot rajaavat kuvan oikeaa puolta (352 px leveyden peleille)."
#define OPTION_VAL_352_FI "352 (Oletus)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_FI "Ensimmäinen juova"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_FI "Ensimmäinen renderöity juova. Suuremmat arvot rajaavat kuvan yläreunan."
#define OPTION_VAL_3_FI "3 (Oletus)"
#define PCE_FAST_LAST_SCANLINE_LABEL_FI "Viimeinen juova"
#define PCE_FAST_LAST_SCANLINE_INFO_0_FI "Viimeinen renderöity juova. pienemmät arvot rajaavat kuvan alareunan."
#define OPTION_VAL_242_FI "242 (Oletus)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FI "PSG Sound Channel 0 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 0 äänenvoimakkuutta."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FI "PSG Sound Channel 1 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 1 äänenvoimakkuutta."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FI "PSG Sound Channel 2 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 2 äänenvoimakkuutta."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FI "PSG Sound Channel 3 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 3 äänenvoimakkuutta."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FI "PSG Sound Channel 4 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 4 äänenvoimakkuutta."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FI "PSG Sound Channel 5 äänenvoimakkuus %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FI "Muokkaa PSG Sound Channel 5 äänenvoimakkuutta."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FI "Korkeammat arvot saavat hiiren kursorin liikkumaan nopeammin."
#define OPTION_VAL_0_25_FI NULL
#define OPTION_VAL_0_50_FI NULL
#define OPTION_VAL_0_75_FI NULL
#define OPTION_VAL_1_00_FI NULL
#define OPTION_VAL_1_25_FI NULL
#define OPTION_VAL_1_50_FI NULL
#define OPTION_VAL_1_75_FI NULL
#define OPTION_VAL_2_00_FI NULL
#define OPTION_VAL_2_25_FI NULL
#define OPTION_VAL_2_50_FI NULL
#define OPTION_VAL_2_75_FI NULL
#define OPTION_VAL_3_00_FI NULL
#define OPTION_VAL_3_25_FI NULL
#define OPTION_VAL_3_50_FI NULL
#define OPTION_VAL_3_75_FI NULL
#define OPTION_VAL_4_00_FI NULL
#define OPTION_VAL_4_25_FI NULL
#define OPTION_VAL_4_50_FI NULL
#define OPTION_VAL_4_75_FI NULL
#define OPTION_VAL_5_00_FI NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_FI "Poista soft reset käytöstä (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_FI "Kun RUN ja SELECT painetaan samanaikaisesti, poistetaan tilapäisesti molemmat painikkeet käytöstä soft resettaamisen sijaan."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI NULL
#define OPTION_VAL_2_BUTTONS_FI NULL
#define OPTION_VAL_6_BUTTONS_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_FI "Vaihda turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_FI NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FI "Vaihtoehtoinen turbo-pikanäppäin"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FI NULL
#define PCE_FAST_TURBO_DELAY_LABEL_FI "Turbon viive"
#define PCE_FAST_TURBO_DELAY_INFO_0_FI "Säädä turbo-tulituksen välistä aikaa (kuvissa)."
#define PCE_FAST_CDIMAGECACHE_LABEL_FI "CD-levykuvan välimuisti (Uudelleenkäynnistys vaaditaan)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_FI "Lataa koko levykuva muistiin käynnistyksen yhteydessä. Voi mahdollisesti lyhentää latausaikoja kasvavan käynnistysajan kustannuksella."
#define PCE_FAST_CDBIOS_LABEL_FI "CD BIOS (Uudelleenkäynnistys vaaditaan)"
#define PCE_FAST_CDBIOS_INFO_0_FI "Useimmat pelit voidaan ajaa \"System Card 3\". \"Games Express\" tarvitaan useille lisensoimattomille peleille."
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FI NULL
#define PCE_FAST_CDSPEED_LABEL_FI "(CD) CD-nopeus"
#define PCE_FAST_CDSPEED_LABEL_CAT_FI "CD-nopeus"
#define PCE_FAST_CDSPEED_INFO_0_FI "Korkeammat arvot mahdollistavat nopeammat latausajat, mutta voivat aiheuttaa ongelmia muutaman pelin kanssa."
#define OPTION_VAL_1_FI NULL
#define OPTION_VAL_2_FI NULL
#define OPTION_VAL_4_FI NULL
#define OPTION_VAL_8_FI NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_FI "(CD) ADPCM äänenvoimakkuus %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_FI "ADPCM äänenvoimakkuus %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_FI "Vain CD-peleille. Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define PCE_FAST_ADPCMVOLUME_INFO_1_FI "Tämän äänenvoimakkuuden säädön asettaminen liian korkeaksi voi aiheuttaa näytteen pätkimistä."
#define PCE_FAST_CDDAVOLUME_LABEL_FI "(CD) CDDA äänenvoimakkuus %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_FI "CDDA äänenvoimakkuus %"
#define PCE_FAST_CDPSGVOLUME_LABEL_FI "(CD) PSG äänenvoimakkuus %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_FI "CD PSG äänenvoimakkuus %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_FI "Poista sprite-rajoitus"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_FI "Poista laitteiston 16-spriten-per-juova raja. VAROITUS: Saattaa aiheuttaa grafiikkaa virheitä joissakin peleissä."
#define PCE_FAST_OCMULTIPLIER_LABEL_FI "Prosessorin ylikellotuksen kerroin (Uudelleenkäynnistys vaaditaan)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_FI "Suuremmat arvot voivat vähentää pelien hidastumista. VAROITUS: Voi aiheuttaa virheitä ja kaatumisia."

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FI,
      CATEGORY_HACKS_INFO_0_FI
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_FI,
      CATEGORY_CHANNEL_VOLUME_INFO_0_FI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FI,
      CATEGORY_CD_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_FI,
      NULL,
      PCE_FAST_PALETTE_INFO_0_FI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FI },
         { "Composite", OPTION_VAL_COMPOSITE_FI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_FI,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_FI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FI },
         { "manual",   OPTION_VAL_MANUAL_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FI,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FI,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_FI },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_FI,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_FI,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FI },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_FI,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FI },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_FI,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_FI,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FI },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FI,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_FI,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FI,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FI },
         { "0.50", OPTION_VAL_0_50_FI },
         { "0.75", OPTION_VAL_0_75_FI },
         { "1.00", OPTION_VAL_1_00_FI },
         { "1.25", OPTION_VAL_1_25_FI },
         { "1.50", OPTION_VAL_1_50_FI },
         { "1.75", OPTION_VAL_1_75_FI },
         { "2.00", OPTION_VAL_2_00_FI },
         { "2.25", OPTION_VAL_2_25_FI },
         { "2.50", OPTION_VAL_2_50_FI },
         { "2.75", OPTION_VAL_2_75_FI },
         { "3.00", OPTION_VAL_3_00_FI },
         { "3.25", OPTION_VAL_3_25_FI },
         { "3.50", OPTION_VAL_3_50_FI },
         { "3.75", OPTION_VAL_3_75_FI },
         { "4.00", OPTION_VAL_4_00_FI },
         { "4.25", OPTION_VAL_4_25_FI },
         { "4.50", OPTION_VAL_4_50_FI },
         { "4.75", OPTION_VAL_4_75_FI },
         { "5.00", OPTION_VAL_5_00_FI },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_FI,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_FI,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FI,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FI,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FI,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FI,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FI,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FI,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FI },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FI },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_FI,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FI,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_FI,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_FI,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_FI },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_FI,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_FI,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_FI,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_FI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FI },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FI },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FI },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_FI,
      PCE_FAST_CDSPEED_LABEL_CAT_FI,
      PCE_FAST_CDSPEED_INFO_0_FI,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_FI },
         { "2", OPTION_VAL_2_FI },
         { "4", OPTION_VAL_4_FI },
         { "8", OPTION_VAL_8_FI },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_FI,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_FI,
      PCE_FAST_ADPCMVOLUME_INFO_0_FI,
      PCE_FAST_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_FI,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_FI,
      PCE_FAST_ADPCMVOLUME_INFO_0_FI,
      PCE_FAST_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_FI,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_FI,
      PCE_FAST_ADPCMVOLUME_INFO_0_FI,
      PCE_FAST_ADPCMVOLUME_INFO_1_FI,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_FI,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_FI,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Configurer les paramètres du rognage de l'affichage, du saut d'images et autres pour la sortie vidéo."
#define CATEGORY_INPUT_LABEL_FR "Entrées"
#define CATEGORY_INPUT_INFO_0_FR "Configurer les entrées du pistolet, de la souris et du negCon."
#define CATEGORY_HACKS_LABEL_FR "Hacks d'émulation"
#define CATEGORY_HACKS_INFO_0_FR "Configurer les paramètres d'overclocking du processeur et de la précision d'émulation qui affectent les performances de bas niveau et la compatibilité."
#define CATEGORY_CHANNEL_VOLUME_LABEL_FR "Réglages avancés du volume des canaux"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_FR "Configurer le volume des canaux audio matériels individuels."
#define CATEGORY_CD_LABEL_FR "CD PC-Engine"
#define CATEGORY_CD_INFO_0_FR "Configurer les réglages relatifs à l'émulation CD de la PC-Engine."
#define PCE_FAST_PALETTE_LABEL_FR "Palette de couleurs"
#define PCE_FAST_PALETTE_INFO_0_FR "Composite tente de recréer la sortie de la console originale et peut afficher plus de détails dans certains jeux."
#define OPTION_VAL_RGB_FR "RVB"
#define OPTION_VAL_COMPOSITE_FR NULL
#define PCE_FAST_FRAMESKIP_LABEL_FR "Saut d'images"
#define PCE_FAST_FRAMESKIP_INFO_0_FR "Sauter des images pour éviter que le tampon audio ne soit sous-exécuté (crépitements). Améliore les performances au détriment de la fluidité visuelle. 'Auto' saute des images lorsque l'interface le conseille. 'Manuel' utilise le paramètre 'Seuil de saut d'images (%)'."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_MANUAL_FR "Manuel"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FR "Seuil de saut d'images (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FR "Lorsque 'Saut d'images' est réglé sur 'Manuel', spécifie le seuil d'occupation du tampon audio (pourcentage) en dessous duquel des images seront sautées. Des valeurs plus élevées réduisent le risque de crépitements en faisant sauter des images plus fréquemment."
#define OPTION_VAL_33_FR "33 (par défaut)"
#define PCE_FAST_HOVERSCAN_LABEL_FR "Surbalayage horizontal (Mode largeur 352 uniquement)"
#define PCE_FAST_HOVERSCAN_INFO_0_FR "Choisir la largeur d'image maximale à afficher. Les valeurs inférieures recadreront le côté droit de l'image (pour les jeux de 352 px de largeur)."
#define OPTION_VAL_352_FR "352 (par défaut)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_FR "Ligne de balayage initiale"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_FR "Première ligne de balayage rendue. Des valeurs plus élevées recadreront le haut de l'image."
#define OPTION_VAL_3_FR "3 (par défaut)"
#define PCE_FAST_LAST_SCANLINE_LABEL_FR "Dernière ligne de balayage"
#define PCE_FAST_LAST_SCANLINE_INFO_0_FR "Dernière ligne de balayage rendue. Des valeurs moins élevées recadreront le bas de l'image."
#define OPTION_VAL_242_FR "242 (par défaut)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FR "Volume du canal audio PSG 0 (%)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 0."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FR "Volume du canal audio PSG 1 (%)"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 1."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FR "Volume du canal audio PSG 2 (%)"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 2."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FR "Volume du canal audio PSG 3 (%)"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 3."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FR "Volume du canal audio PSG 4 (%)"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 4."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FR "Volume du canal audio PSG 5 (%)"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FR "Modifier le volume du canal audio PSG 5."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_FR "Sensibilité de la souris"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FR "Des valeurs plus élevées rendront le curseur de la souris plus rapide."
#define OPTION_VAL_0_25_FR "0,25"
#define OPTION_VAL_0_50_FR "0,50"
#define OPTION_VAL_0_75_FR "0,75"
#define OPTION_VAL_1_00_FR "1,00"
#define OPTION_VAL_1_25_FR "1,25"
#define OPTION_VAL_1_50_FR "1,50"
#define OPTION_VAL_1_75_FR "1,75"
#define OPTION_VAL_2_00_FR "2,00"
#define OPTION_VAL_2_25_FR "2,25"
#define OPTION_VAL_2_50_FR "2,50"
#define OPTION_VAL_2_75_FR "2,75"
#define OPTION_VAL_3_00_FR "3,00"
#define OPTION_VAL_3_25_FR "3,25"
#define OPTION_VAL_3_50_FR "3,50"
#define OPTION_VAL_3_75_FR "3,75"
#define OPTION_VAL_4_00_FR "4,00"
#define OPTION_VAL_4_25_FR "4,25"
#define OPTION_VAL_4_50_FR "4,50"
#define OPTION_VAL_4_75_FR "4,75"
#define OPTION_VAL_5_00_FR "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_FR "Désactiver la réinitialisation logicielle (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_FR "Lorsque RUN et SELECT sont appuyés simultanément, désactiver temporairement les deux touches au lieu de réinitialiser."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR "Type de manette par défaut pour le joueur 1"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR "Choisissez si la manette du port 1 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define OPTION_VAL_2_BUTTONS_FR "2 touches"
#define OPTION_VAL_6_BUTTONS_FR "6 touches"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR "Type de manette par défaut pour le joueur 2"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR "Choisissez si la manette du port 2 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR "Type de manette par défaut pour le joueur 3"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR "Choisissez si la manette du port 3 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR "Type de manette par défaut pour le joueur 4"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR "Choisissez si la manette du port 4 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR "Type de manette par défaut pour le joueur 5"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR "Choisissez si la manette du port 5 doit avoir 2 ou 6 touches par défaut. Cette option n'est appliquée qu'au démarrage du cœur, si vous voulez changer de contenu lorsque du contenu est en cours d'exécution, utilisez la touche 'Mode Switch'. REMARQUE : Les manettes à 6 touches peuvent avoir des comportements bizarres dans des jeux non compatibles."
#define PCE_FAST_TURBO_TOGGLING_LABEL_FR "Activer/désactiver le turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_FR "Activer les touches de raccourci d'activation/désactivation du turbo (touches III et IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FR "Touche de raccourci turbo alternative"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FR "Affecter les touches L3/R3 de la RetroManette comme raccourcis d'activation/désactivation du turbo au lieu des touches III et IV. Fonctionne uniquement tant que rien n'est assigné aux touches L3/R3. Vous pouvez éviter de remapper les touches III et IV lorsque vous passez en mode manette à 6 boutons avec cette option."
#define PCE_FAST_TURBO_DELAY_LABEL_FR "Délai du turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_FR "Ajuster le temps entre les tirs turbo (en images)."
#define PCE_FAST_CDIMAGECACHE_LABEL_FR "Mise en cache des images CD (Redémarrage requis)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_FR "Charger l'image disque complète dans la mémoire au démarrage. Peut potentiellement diminuer le temps de chargement au prix d'une augmentation du temps de démarrage."
#define PCE_FAST_CDBIOS_LABEL_FR "BIOS CD (Redémarrage requis)"
#define PCE_FAST_CDBIOS_INFO_0_FR "La plupart des jeux peuvent s'exécuter sur 'System Card 3'. 'Games Express' est nécessaire pour plusieurs jeux sans licence."
#define OPTION_VAL_GAMES_EXPRESS_FR NULL
#define OPTION_VAL_SYSTEM_CARD_1_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_FR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FR NULL
#define PCE_FAST_CDSPEED_LABEL_FR "(CD) Vitesse du CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_FR "Vitesse du CD"
#define PCE_FAST_CDSPEED_INFO_0_FR "Des valeurs plus élevées permettent des temps de chargement plus rapides, mais peuvent causer des problèmes avec certains jeux."
#define OPTION_VAL_1_FR "x1"
#define OPTION_VAL_2_FR "x2"
#define OPTION_VAL_4_FR "x4"
#define OPTION_VAL_8_FR "x8"
#define PCE_FAST_ADPCMVOLUME_LABEL_FR "(CD) Volume ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_FR "Volume ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_INFO_0_FR "Jeux CD uniquement. Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) de signal."
#define PCE_FAST_ADPCMVOLUME_INFO_1_FR "Définir ce contrôle de volume trop élevé peut causer un écrêtement (clipping) de signal."
#define PCE_FAST_CDDAVOLUME_LABEL_FR "(CD) Volume CDDA (%)"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_FR "Volume CDDA (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_FR "(CD) Volume PSG (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_FR "Volume PSG CD %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_FR "Aucune limite de sprites"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_FR "Supprimer la limite matérielle de 16 sprites par ligne de balayage. ATTENTION : peut causer des problèmes graphiques sur certains jeux."
#define PCE_FAST_OCMULTIPLIER_LABEL_FR "Multiplicateur d'overclocking du processeur (Redémarrage requis)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_FR "Des valeurs plus élevées peuvent réduire les ralentissements dans les jeux. ATTENTION : peut causer des bugs et des plantages."

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FR,
      CATEGORY_HACKS_INFO_0_FR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_FR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_FR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_FR,
      CATEGORY_CD_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_FR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_FR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_FR },
         { "Composite", OPTION_VAL_COMPOSITE_FR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_FR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_FR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FR },
         { "manual",   OPTION_VAL_MANUAL_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_FR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_FR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_FR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_FR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_FR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_FR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_FR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_FR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_FR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_FR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_FR },
         { "0.50", OPTION_VAL_0_50_FR },
         { "0.75", OPTION_VAL_0_75_FR },
         { "1.00", OPTION_VAL_1_00_FR },
         { "1.25", OPTION_VAL_1_25_FR },
         { "1.50", OPTION_VAL_1_50_FR },
         { "1.75", OPTION_VAL_1_75_FR },
         { "2.00", OPTION_VAL_2_00_FR },
         { "2.25", OPTION_VAL_2_25_FR },
         { "2.50", OPTION_VAL_2_50_FR },
         { "2.75", OPTION_VAL_2_75_FR },
         { "3.00", OPTION_VAL_3_00_FR },
         { "3.25", OPTION_VAL_3_25_FR },
         { "3.50", OPTION_VAL_3_50_FR },
         { "3.75", OPTION_VAL_3_75_FR },
         { "4.00", OPTION_VAL_4_00_FR },
         { "4.25", OPTION_VAL_4_25_FR },
         { "4.50", OPTION_VAL_4_50_FR },
         { "4.75", OPTION_VAL_4_75_FR },
         { "5.00", OPTION_VAL_5_00_FR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_FR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_FR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_FR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_FR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_FR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_FR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_FR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_FR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_FR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_FR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_FR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_FR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_FR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_FR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_FR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_FR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_FR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_FR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_FR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_FR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_FR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_FR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_FR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_FR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_FR,
      PCE_FAST_CDSPEED_LABEL_CAT_FR,
      PCE_FAST_CDSPEED_INFO_0_FR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_FR },
         { "2", OPTION_VAL_2_FR },
         { "4", OPTION_VAL_4_FR },
         { "8", OPTION_VAL_8_FR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_FR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_FR,
      PCE_FAST_ADPCMVOLUME_INFO_0_FR,
      PCE_FAST_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_FR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_FR,
      PCE_FAST_ADPCMVOLUME_INFO_0_FR,
      PCE_FAST_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_FR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_FR,
      PCE_FAST_ADPCMVOLUME_INFO_0_FR,
      PCE_FAST_ADPCMVOLUME_INFO_1_FR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_FR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_FR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL "Entrada"
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_HACKS_LABEL_GL "Hacks de emulación"
#define CATEGORY_HACKS_INFO_0_GL "Configurar os parámetros do overclocking e a precisión da emulación do procesador que afecten ó rendemento e á compatibilidade de baixo nivel."
#define CATEGORY_CHANNEL_VOLUME_LABEL_GL NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_GL NULL
#define CATEGORY_CD_LABEL_GL NULL
#define CATEGORY_CD_INFO_0_GL NULL
#define PCE_FAST_PALETTE_LABEL_GL NULL
#define PCE_FAST_PALETTE_INFO_0_GL NULL
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_COMPOSITE_GL NULL
#define PCE_FAST_FRAMESKIP_LABEL_GL NULL
#define PCE_FAST_FRAMESKIP_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_MANUAL_GL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_GL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_GL "Cando a omisión de fotogramas sexa configurada en 'Manual', este axuste especifíca o umbral de ocupación do búfer de audio (en porcentaxe). Os valores altos reducen o risco de aparición de chasquidos omitindo fotogramas de forma máis frecuente."
#define OPTION_VAL_33_GL NULL
#define PCE_FAST_HOVERSCAN_LABEL_GL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_GL NULL
#define OPTION_VAL_352_GL NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_GL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_3_GL NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_GL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_GL NULL
#define OPTION_VAL_242_GL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_GL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_GL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_GL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_GL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_GL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_GL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_GL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_GL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_GL NULL
#define OPTION_VAL_0_25_GL NULL
#define OPTION_VAL_0_50_GL NULL
#define OPTION_VAL_0_75_GL NULL
#define OPTION_VAL_1_00_GL NULL
#define OPTION_VAL_1_25_GL NULL
#define OPTION_VAL_1_50_GL NULL
#define OPTION_VAL_1_75_GL NULL
#define OPTION_VAL_2_00_GL NULL
#define OPTION_VAL_2_25_GL NULL
#define OPTION_VAL_2_50_GL NULL
#define OPTION_VAL_2_75_GL NULL
#define OPTION_VAL_3_00_GL NULL
#define OPTION_VAL_3_25_GL NULL
#define OPTION_VAL_3_50_GL NULL
#define OPTION_VAL_3_75_GL NULL
#define OPTION_VAL_4_00_GL NULL
#define OPTION_VAL_4_25_GL NULL
#define OPTION_VAL_4_50_GL NULL
#define OPTION_VAL_4_75_GL NULL
#define OPTION_VAL_5_00_GL NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_GL NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL NULL
#define OPTION_VAL_2_BUTTONS_GL NULL
#define OPTION_VAL_6_BUTTONS_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_GL NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_GL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_GL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_GL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_GL NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_GL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_GL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_GL NULL
#define PCE_FAST_CDBIOS_LABEL_GL NULL
#define PCE_FAST_CDBIOS_INFO_0_GL NULL
#define OPTION_VAL_GAMES_EXPRESS_GL NULL
#define OPTION_VAL_SYSTEM_CARD_1_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_GL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_GL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_GL NULL
#define PCE_FAST_CDSPEED_LABEL_GL NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_GL NULL
#define PCE_FAST_CDSPEED_INFO_0_GL NULL
#define OPTION_VAL_1_GL NULL
#define OPTION_VAL_2_GL NULL
#define OPTION_VAL_4_GL NULL
#define OPTION_VAL_8_GL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_GL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_GL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_GL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_GL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_GL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_GL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_GL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_GL NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_GL NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_GL NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_GL NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_GL,
      CATEGORY_HACKS_INFO_0_GL
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_GL,
      CATEGORY_CHANNEL_VOLUME_INFO_0_GL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_GL,
      CATEGORY_CD_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_GL,
      NULL,
      PCE_FAST_PALETTE_INFO_0_GL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_GL },
         { "Composite", OPTION_VAL_COMPOSITE_GL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_GL,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_GL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_GL },
         { "manual",   OPTION_VAL_MANUAL_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_GL,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_GL,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_GL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_GL,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_GL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_GL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_GL,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_GL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_GL,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_GL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_GL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_GL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_GL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_GL,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_GL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_GL },
         { "0.50", OPTION_VAL_0_50_GL },
         { "0.75", OPTION_VAL_0_75_GL },
         { "1.00", OPTION_VAL_1_00_GL },
         { "1.25", OPTION_VAL_1_25_GL },
         { "1.50", OPTION_VAL_1_50_GL },
         { "1.75", OPTION_VAL_1_75_GL },
         { "2.00", OPTION_VAL_2_00_GL },
         { "2.25", OPTION_VAL_2_25_GL },
         { "2.50", OPTION_VAL_2_50_GL },
         { "2.75", OPTION_VAL_2_75_GL },
         { "3.00", OPTION_VAL_3_00_GL },
         { "3.25", OPTION_VAL_3_25_GL },
         { "3.50", OPTION_VAL_3_50_GL },
         { "3.75", OPTION_VAL_3_75_GL },
         { "4.00", OPTION_VAL_4_00_GL },
         { "4.25", OPTION_VAL_4_25_GL },
         { "4.50", OPTION_VAL_4_50_GL },
         { "4.75", OPTION_VAL_4_75_GL },
         { "5.00", OPTION_VAL_5_00_GL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_GL,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_GL,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_GL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_GL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_GL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_GL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_GL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_GL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_GL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_GL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_GL,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_GL,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_GL,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_GL,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_GL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_GL,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_GL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_GL,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_GL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_GL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_GL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_GL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_GL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_GL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_GL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_GL,
      PCE_FAST_CDSPEED_LABEL_CAT_GL,
      PCE_FAST_CDSPEED_INFO_0_GL,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_GL },
         { "2", OPTION_VAL_2_GL },
         { "4", OPTION_VAL_4_GL },
         { "8", OPTION_VAL_8_GL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_GL,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_GL,
      PCE_FAST_ADPCMVOLUME_INFO_0_GL,
      PCE_FAST_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_GL,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_GL,
      PCE_FAST_ADPCMVOLUME_INFO_0_GL,
      PCE_FAST_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_GL,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_GL,
      PCE_FAST_ADPCMVOLUME_INFO_0_GL,
      PCE_FAST_ADPCMVOLUME_INFO_1_GL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_GL,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_GL,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE "קלט"
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_HACKS_LABEL_HE NULL
#define CATEGORY_HACKS_INFO_0_HE NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_HE NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_HE NULL
#define CATEGORY_CD_LABEL_HE NULL
#define CATEGORY_CD_INFO_0_HE NULL
#define PCE_FAST_PALETTE_LABEL_HE NULL
#define PCE_FAST_PALETTE_INFO_0_HE NULL
#define OPTION_VAL_RGB_HE NULL
#define OPTION_VAL_COMPOSITE_HE NULL
#define PCE_FAST_FRAMESKIP_LABEL_HE NULL
#define PCE_FAST_FRAMESKIP_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_MANUAL_HE NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HE NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HE NULL
#define OPTION_VAL_33_HE NULL
#define PCE_FAST_HOVERSCAN_LABEL_HE NULL
#define PCE_FAST_HOVERSCAN_INFO_0_HE NULL
#define OPTION_VAL_352_HE NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_HE NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_3_HE NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_HE NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_HE NULL
#define OPTION_VAL_242_HE NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HE NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_HE NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HE NULL
#define OPTION_VAL_0_25_HE NULL
#define OPTION_VAL_0_50_HE NULL
#define OPTION_VAL_0_75_HE NULL
#define OPTION_VAL_1_00_HE NULL
#define OPTION_VAL_1_25_HE NULL
#define OPTION_VAL_1_50_HE NULL
#define OPTION_VAL_1_75_HE NULL
#define OPTION_VAL_2_00_HE NULL
#define OPTION_VAL_2_25_HE NULL
#define OPTION_VAL_2_50_HE NULL
#define OPTION_VAL_2_75_HE NULL
#define OPTION_VAL_3_00_HE NULL
#define OPTION_VAL_3_25_HE NULL
#define OPTION_VAL_3_50_HE NULL
#define OPTION_VAL_3_75_HE NULL
#define OPTION_VAL_4_00_HE NULL
#define OPTION_VAL_4_25_HE NULL
#define OPTION_VAL_4_50_HE NULL
#define OPTION_VAL_4_75_HE NULL
#define OPTION_VAL_5_00_HE NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_HE NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE NULL
#define OPTION_VAL_2_BUTTONS_HE NULL
#define OPTION_VAL_6_BUTTONS_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_HE NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_HE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HE NULL
#define PCE_FAST_TURBO_DELAY_LABEL_HE NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_HE NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_HE NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_HE NULL
#define PCE_FAST_CDBIOS_LABEL_HE NULL
#define PCE_FAST_CDBIOS_INFO_0_HE NULL
#define OPTION_VAL_GAMES_EXPRESS_HE NULL
#define OPTION_VAL_SYSTEM_CARD_1_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_HE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HE NULL
#define PCE_FAST_CDSPEED_LABEL_HE NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_HE NULL
#define PCE_FAST_CDSPEED_INFO_0_HE NULL
#define OPTION_VAL_1_HE NULL
#define OPTION_VAL_2_HE NULL
#define OPTION_VAL_4_HE NULL
#define OPTION_VAL_8_HE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_HE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_HE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_HE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_HE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_HE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_HE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_HE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_HE NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_HE NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_HE NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_HE NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HE,
      CATEGORY_HACKS_INFO_0_HE
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_HE,
      CATEGORY_CHANNEL_VOLUME_INFO_0_HE
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HE,
      CATEGORY_CD_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_HE,
      NULL,
      PCE_FAST_PALETTE_INFO_0_HE,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HE },
         { "Composite", OPTION_VAL_COMPOSITE_HE },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_HE,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_HE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HE },
         { "manual",   OPTION_VAL_MANUAL_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HE,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HE,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_HE },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_HE,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_HE,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HE },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_HE,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HE },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_HE,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_HE,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HE },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HE,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HE,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_HE,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HE,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HE },
         { "0.50", OPTION_VAL_0_50_HE },
         { "0.75", OPTION_VAL_0_75_HE },
         { "1.00", OPTION_VAL_1_00_HE },
         { "1.25", OPTION_VAL_1_25_HE },
         { "1.50", OPTION_VAL_1_50_HE },
         { "1.75", OPTION_VAL_1_75_HE },
         { "2.00", OPTION_VAL_2_00_HE },
         { "2.25", OPTION_VAL_2_25_HE },
         { "2.50", OPTION_VAL_2_50_HE },
         { "2.75", OPTION_VAL_2_75_HE },
         { "3.00", OPTION_VAL_3_00_HE },
         { "3.25", OPTION_VAL_3_25_HE },
         { "3.50", OPTION_VAL_3_50_HE },
         { "3.75", OPTION_VAL_3_75_HE },
         { "4.00", OPTION_VAL_4_00_HE },
         { "4.25", OPTION_VAL_4_25_HE },
         { "4.50", OPTION_VAL_4_50_HE },
         { "4.75", OPTION_VAL_4_75_HE },
         { "5.00", OPTION_VAL_5_00_HE },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_HE,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_HE,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HE,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HE,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HE },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HE },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_HE,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HE,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_HE,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_HE,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_HE },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_HE,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_HE,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_HE,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_HE,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HE },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HE },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HE },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HE },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HE },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HE },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_HE,
      PCE_FAST_CDSPEED_LABEL_CAT_HE,
      PCE_FAST_CDSPEED_INFO_0_HE,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_HE },
         { "2", OPTION_VAL_2_HE },
         { "4", OPTION_VAL_4_HE },
         { "8", OPTION_VAL_8_HE },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_HE,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_HE,
      PCE_FAST_ADPCMVOLUME_INFO_0_HE,
      PCE_FAST_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_HE,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_HE,
      PCE_FAST_ADPCMVOLUME_INFO_0_HE,
      PCE_FAST_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_HE,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_HE,
      PCE_FAST_ADPCMVOLUME_INFO_0_HE,
      PCE_FAST_ADPCMVOLUME_INFO_1_HE,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_HE,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_HE,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_VIDEO_LABEL_HR NULL
#define CATEGORY_VIDEO_INFO_0_HR NULL
#define CATEGORY_INPUT_LABEL_HR NULL
#define CATEGORY_INPUT_INFO_0_HR NULL
#define CATEGORY_HACKS_LABEL_HR NULL
#define CATEGORY_HACKS_INFO_0_HR NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_HR NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_HR NULL
#define CATEGORY_CD_LABEL_HR NULL
#define CATEGORY_CD_INFO_0_HR NULL
#define PCE_FAST_PALETTE_LABEL_HR NULL
#define PCE_FAST_PALETTE_INFO_0_HR NULL
#define OPTION_VAL_RGB_HR NULL
#define OPTION_VAL_COMPOSITE_HR NULL
#define PCE_FAST_FRAMESKIP_LABEL_HR NULL
#define PCE_FAST_FRAMESKIP_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define OPTION_VAL_MANUAL_HR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HR NULL
#define OPTION_VAL_33_HR NULL
#define PCE_FAST_HOVERSCAN_LABEL_HR NULL
#define PCE_FAST_HOVERSCAN_INFO_0_HR NULL
#define OPTION_VAL_352_HR NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_HR NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_3_HR NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_HR NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_HR NULL
#define OPTION_VAL_242_HR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_HR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HR NULL
#define OPTION_VAL_0_25_HR NULL
#define OPTION_VAL_0_50_HR NULL
#define OPTION_VAL_0_75_HR NULL
#define OPTION_VAL_1_00_HR NULL
#define OPTION_VAL_1_25_HR NULL
#define OPTION_VAL_1_50_HR NULL
#define OPTION_VAL_1_75_HR NULL
#define OPTION_VAL_2_00_HR NULL
#define OPTION_VAL_2_25_HR NULL
#define OPTION_VAL_2_50_HR NULL
#define OPTION_VAL_2_75_HR NULL
#define OPTION_VAL_3_00_HR NULL
#define OPTION_VAL_3_25_HR NULL
#define OPTION_VAL_3_50_HR NULL
#define OPTION_VAL_3_75_HR NULL
#define OPTION_VAL_4_00_HR NULL
#define OPTION_VAL_4_25_HR NULL
#define OPTION_VAL_4_50_HR NULL
#define OPTION_VAL_4_75_HR NULL
#define OPTION_VAL_5_00_HR NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_HR NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR NULL
#define OPTION_VAL_2_BUTTONS_HR NULL
#define OPTION_VAL_6_BUTTONS_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_HR NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_HR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HR NULL
#define PCE_FAST_TURBO_DELAY_LABEL_HR NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_HR NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_HR NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_HR NULL
#define PCE_FAST_CDBIOS_LABEL_HR NULL
#define PCE_FAST_CDBIOS_INFO_0_HR NULL
#define OPTION_VAL_GAMES_EXPRESS_HR NULL
#define OPTION_VAL_SYSTEM_CARD_1_HR NULL
#define OPTION_VAL_SYSTEM_CARD_2_HR NULL
#define OPTION_VAL_SYSTEM_CARD_3_HR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HR NULL
#define PCE_FAST_CDSPEED_LABEL_HR NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_HR NULL
#define PCE_FAST_CDSPEED_INFO_0_HR NULL
#define OPTION_VAL_1_HR NULL
#define OPTION_VAL_2_HR NULL
#define OPTION_VAL_4_HR NULL
#define OPTION_VAL_8_HR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_HR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_HR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_HR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_HR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_HR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_HR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_HR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_HR NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_HR NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_HR NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_HR NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HR,
      CATEGORY_VIDEO_INFO_0_HR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HR,
      CATEGORY_INPUT_INFO_0_HR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HR,
      CATEGORY_HACKS_INFO_0_HR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_HR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_HR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HR,
      CATEGORY_CD_INFO_0_HR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_HR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_HR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HR },
         { "Composite", OPTION_VAL_COMPOSITE_HR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_HR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_HR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HR },
         { "manual",   OPTION_VAL_MANUAL_HR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_HR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_HR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_HR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_HR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_HR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_HR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_HR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HR },
         { "0.50", OPTION_VAL_0_50_HR },
         { "0.75", OPTION_VAL_0_75_HR },
         { "1.00", OPTION_VAL_1_00_HR },
         { "1.25", OPTION_VAL_1_25_HR },
         { "1.50", OPTION_VAL_1_50_HR },
         { "1.75", OPTION_VAL_1_75_HR },
         { "2.00", OPTION_VAL_2_00_HR },
         { "2.25", OPTION_VAL_2_25_HR },
         { "2.50", OPTION_VAL_2_50_HR },
         { "2.75", OPTION_VAL_2_75_HR },
         { "3.00", OPTION_VAL_3_00_HR },
         { "3.25", OPTION_VAL_3_25_HR },
         { "3.50", OPTION_VAL_3_50_HR },
         { "3.75", OPTION_VAL_3_75_HR },
         { "4.00", OPTION_VAL_4_00_HR },
         { "4.25", OPTION_VAL_4_25_HR },
         { "4.50", OPTION_VAL_4_50_HR },
         { "4.75", OPTION_VAL_4_75_HR },
         { "5.00", OPTION_VAL_5_00_HR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_HR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_HR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_HR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_HR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_HR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_HR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_HR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_HR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_HR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_HR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_HR,
      PCE_FAST_CDSPEED_LABEL_CAT_HR,
      PCE_FAST_CDSPEED_INFO_0_HR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_HR },
         { "2", OPTION_VAL_2_HR },
         { "4", OPTION_VAL_4_HR },
         { "8", OPTION_VAL_8_HR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_HR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_HR,
      PCE_FAST_ADPCMVOLUME_INFO_0_HR,
      PCE_FAST_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_HR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_HR,
      PCE_FAST_ADPCMVOLUME_INFO_0_HR,
      PCE_FAST_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_HR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_HR,
      PCE_FAST_ADPCMVOLUME_INFO_0_HR,
      PCE_FAST_ADPCMVOLUME_INFO_1_HR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_HR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_HR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_HR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Videó"
#define CATEGORY_VIDEO_INFO_0_HU "Képarány, képvágás, és más képkimeneti paraméterek."
#define CATEGORY_INPUT_LABEL_HU "Bemenet"
#define CATEGORY_INPUT_INFO_0_HU "A fénypisztoly, az egér és a NegCon bemeneti beállításai."
#define CATEGORY_HACKS_LABEL_HU "Emulációs trükkök"
#define CATEGORY_HACKS_INFO_0_HU "A processzor túlhajtás és az emuláció pontosságának beállításai, amelyek befolyásolják az alacsonyszintű teljesítményt és a kompatibilitást."
#define CATEGORY_CHANNEL_VOLUME_LABEL_HU "Csatorna hangerő haladó beállításai"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_HU "A hardver hangcsatornáinak egymástól független beállításai."
#define CATEGORY_CD_LABEL_HU "A PC Engine CD meghajtója"
#define CATEGORY_CD_INFO_0_HU "A PC Engine CD emulációs beállításai."
#define PCE_FAST_PALETTE_LABEL_HU "Színpaletta"
#define PCE_FAST_PALETTE_INFO_0_HU "A kompozit az eredeti konzol kimenetét kísérli meg utánozni, és néhány játékban több részletet mutathat meg."
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU "Kompozit"
#define PCE_FAST_FRAMESKIP_LABEL_HU "Képkocka kihagyás"
#define PCE_FAST_FRAMESKIP_INFO_0_HU "A hangbuffer kiürülése (recsegés) elkerülésére képkockák eldobása. Javít a teljesítményen a vizuális folyamatosság kárára. Az \"Automatikus\" beállítás akkor dob képkockát, ha a frontend azt javasolja. A \"Kézi\" a \"Képkocka kihagyás határértéke (%)\" beállítást használja."
#define OPTION_VAL_AUTO_HU "Automatikus"
#define OPTION_VAL_MANUAL_HU "Kézi"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HU "Képkocka kihagyás határértéke (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HU "Ha a \"Képkocka kihagyás\" \"Kézi\" értékre van állítva, ez határozza meg a hangpuffer telítettségi határát (százalékban), amely alatt képkockákat dob el. Nagyobb érték csökkenti a recsegés kockázatát azáltal, hogy gyakrabban dob el képkockát."
#define OPTION_VAL_33_HU "33 (alapértelmezett)"
#define PCE_FAST_HOVERSCAN_LABEL_HU "Vízszintes overscan (csak 352 széles módban)"
#define PCE_FAST_HOVERSCAN_INFO_0_HU "A maximális megjelenő képszélesség. Alacsonyabb értékeknél a kép jobb szélét vágja le (a 352 pixel széles játékoknál)."
#define OPTION_VAL_352_HU "352 (alapértelmezett)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_HU "Kezdő scanline"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_HU "Az első megjelenített scanline. Nagyobb érték vágja a kép tetejét."
#define OPTION_VAL_3_HU "3 (alapértelmezett)"
#define PCE_FAST_LAST_SCANLINE_LABEL_HU "Utolsó scanline"
#define PCE_FAST_LAST_SCANLINE_INFO_0_HU "Az utolsó megjelenített scanline. Nagyobb érték vágja a kép alját."
#define OPTION_VAL_242_HU "242 (alapértelmezett)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HU "PSG 0. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HU "A PSG 0. hangcsatorna hangereje."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HU "PSG 1. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HU "A PSG 1. hangcsatorna hangereje."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HU "PSG 2. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HU "A PSG 2. hangcsatorna hangereje."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HU "PSG 3. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HU "A PSG 3. hangcsatorna hangereje."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HU "PSG 4. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HU "A PSG 4. hangcsatorna hangereje."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HU "PSG 5. hangcsatorna hangerő %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HU "A PSG 5. hangcsatorna hangereje."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_HU "Egér érzékenysége"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HU "Magasabb értékek az egérkurzor gyorsabb mozgását eredményezik."
#define OPTION_VAL_0_25_HU NULL
#define OPTION_VAL_0_50_HU NULL
#define OPTION_VAL_0_75_HU NULL
#define OPTION_VAL_1_00_HU NULL
#define OPTION_VAL_1_25_HU NULL
#define OPTION_VAL_1_50_HU NULL
#define OPTION_VAL_1_75_HU NULL
#define OPTION_VAL_2_00_HU NULL
#define OPTION_VAL_2_25_HU NULL
#define OPTION_VAL_2_50_HU NULL
#define OPTION_VAL_2_75_HU NULL
#define OPTION_VAL_3_00_HU NULL
#define OPTION_VAL_3_25_HU NULL
#define OPTION_VAL_3_50_HU NULL
#define OPTION_VAL_3_75_HU NULL
#define OPTION_VAL_4_00_HU NULL
#define OPTION_VAL_4_25_HU NULL
#define OPTION_VAL_4_50_HU NULL
#define OPTION_VAL_4_75_HU NULL
#define OPTION_VAL_5_00_HU NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_HU "Soft reset letiltása (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_HU "A RUN és SELECT gombok egyidejű megnyomásakor mindkét gomb ideiglenes letiltása, reset helyett."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU "1. joypad alapértelmezett típusa"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU "Az 1. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define OPTION_VAL_2_BUTTONS_HU "2 gomb"
#define OPTION_VAL_6_BUTTONS_HU "6 gomb"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU "2. joypad alapértelmezett típusa"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU "A 2. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU "3. joypad alapértelmezett típusa"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU "A 3. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU "4. joypad alapértelmezett típusa"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU "A 4. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU "5. joypad alapértelmezett típusa"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU "Az 5. csatlakozó induláskor 2 vagy 6 gombos-e. Ez a beállítás csak a mag elindításakor jut érvényre, tartalom futtatása közben a \"Módváltás\" gomb használható. Figyelem: a 6 gombos joypadnak furcsa hatása lehet az azzal nem kompatibilis játékokra."
#define PCE_FAST_TURBO_TOGGLING_LABEL_HU "Turbo átkapcsoló"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_HU "Engedélyezi a turbo átkapcsoló gyorsgombokat (III és IV gomb)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HU "Alternatív Turbo gyorsgomb"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HU "A III és IV gomb helyett a RetroPad L3/R3 gombjait rendeli a turbo átkapcsoláshoz. Akkor működik, ha nincs semmi az L3/R3 gombhoz rendelve. Ezzel elkerülhető a III és IV gomb átirányítása a 6-gombos kontroller módba kapcsoláskor."
#define PCE_FAST_TURBO_DELAY_LABEL_HU "Turbo késleltetés"
#define PCE_FAST_TURBO_DELAY_INFO_0_HU "A turbo tűz ismétlései közti idő (képkockákban)."
#define PCE_FAST_CDIMAGECACHE_LABEL_HU "Gyorsítótár a CD képfájlhoz (újraindítás szükséges)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_HU "Indításkor beolvassa a teljes képfájlt a memóriába. Csökkentheti a töltési időket a lassabb indulásért cserébe."
#define PCE_FAST_CDBIOS_LABEL_HU "CD BIOS (újraindítás szükséges)"
#define PCE_FAST_CDBIOS_INFO_0_HU "A legtöbb játék képes futni a \"System Card 3\"-mal. Számos nem licenszelt játékhoz szükség van a \"Games Express\"-re."
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HU NULL
#define PCE_FAST_CDSPEED_LABEL_HU "(CD) CD sebesség"
#define PCE_FAST_CDSPEED_LABEL_CAT_HU "CD sebesség"
#define PCE_FAST_CDSPEED_INFO_0_HU "A nagyobb értékek segítik a gyorsabb töltést, de gondot okozhatnak pár játéknál."
#define OPTION_VAL_1_HU NULL
#define OPTION_VAL_2_HU NULL
#define OPTION_VAL_4_HU NULL
#define OPTION_VAL_8_HU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_HU "(CD) ADPCM hangerő %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_HU "ADPCM hangerő %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_HU "Csak CD játékoknál. Ezen hangerő túl magas értéke torzítást okozhat."
#define PCE_FAST_ADPCMVOLUME_INFO_1_HU "Ezen hangerő túl magas értéke torzítást okozhat."
#define PCE_FAST_CDDAVOLUME_LABEL_HU "(CD) CDDA hangerő %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_HU "CDDA hangerő %"
#define PCE_FAST_CDPSGVOLUME_LABEL_HU "(CD) PSG hangerő %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_HU "CD PSG hangerő %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_HU "Nincs sprite korlátozás"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_HU "Megszünteti a hardver soronként legfeljebb 16 sprite-os korlátozását. Figyelem: grafikus hibákat okozhat néhány játéknál."
#define PCE_FAST_OCMULTIPLIER_LABEL_HU "CPU túlhajtás szorzó (újraindítás szükséges)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_HU "Nagyobb értékek csökkenthetik a lassulást a játékokban. Figyelem: hibákat és összeomlást okozhat."

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HU,
      CATEGORY_HACKS_INFO_0_HU
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_HU,
      CATEGORY_CHANNEL_VOLUME_INFO_0_HU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_HU,
      CATEGORY_CD_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_HU,
      NULL,
      PCE_FAST_PALETTE_INFO_0_HU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_HU },
         { "Composite", OPTION_VAL_COMPOSITE_HU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_HU,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_HU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HU },
         { "manual",   OPTION_VAL_MANUAL_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HU,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HU,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_HU },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_HU,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_HU,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_HU },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_HU,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_HU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_HU,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_HU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_HU },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_HU,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HU,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_HU },
         { "0.50", OPTION_VAL_0_50_HU },
         { "0.75", OPTION_VAL_0_75_HU },
         { "1.00", OPTION_VAL_1_00_HU },
         { "1.25", OPTION_VAL_1_25_HU },
         { "1.50", OPTION_VAL_1_50_HU },
         { "1.75", OPTION_VAL_1_75_HU },
         { "2.00", OPTION_VAL_2_00_HU },
         { "2.25", OPTION_VAL_2_25_HU },
         { "2.50", OPTION_VAL_2_50_HU },
         { "2.75", OPTION_VAL_2_75_HU },
         { "3.00", OPTION_VAL_3_00_HU },
         { "3.25", OPTION_VAL_3_25_HU },
         { "3.50", OPTION_VAL_3_50_HU },
         { "3.75", OPTION_VAL_3_75_HU },
         { "4.00", OPTION_VAL_4_00_HU },
         { "4.25", OPTION_VAL_4_25_HU },
         { "4.50", OPTION_VAL_4_50_HU },
         { "4.75", OPTION_VAL_4_75_HU },
         { "5.00", OPTION_VAL_5_00_HU },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_HU,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_HU,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_HU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_HU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_HU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_HU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_HU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_HU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_HU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_HU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_HU,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HU,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_HU,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_HU,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_HU },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_HU,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_HU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_HU,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_HU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_HU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_HU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_HU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_HU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_HU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_HU },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_HU,
      PCE_FAST_CDSPEED_LABEL_CAT_HU,
      PCE_FAST_CDSPEED_INFO_0_HU,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_HU },
         { "2", OPTION_VAL_2_HU },
         { "4", OPTION_VAL_4_HU },
         { "8", OPTION_VAL_8_HU },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_HU,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_HU,
      PCE_FAST_ADPCMVOLUME_INFO_0_HU,
      PCE_FAST_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_HU,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_HU,
      PCE_FAST_ADPCMVOLUME_INFO_0_HU,
      PCE_FAST_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_HU,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_HU,
      PCE_FAST_ADPCMVOLUME_INFO_0_HU,
      PCE_FAST_ADPCMVOLUME_INFO_1_HU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_HU,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_HU,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID "Masukan"
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_HACKS_LABEL_ID "Peretasan Emulasi"
#define CATEGORY_HACKS_INFO_0_ID NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_ID NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_ID NULL
#define CATEGORY_CD_LABEL_ID NULL
#define CATEGORY_CD_INFO_0_ID NULL
#define PCE_FAST_PALETTE_LABEL_ID NULL
#define PCE_FAST_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define PCE_FAST_FRAMESKIP_LABEL_ID NULL
#define PCE_FAST_FRAMESKIP_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define OPTION_VAL_MANUAL_ID NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_ID NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_ID "Saat 'Lewati Bingkai' diatur ke 'Manual', tentukan (persentase) ambang batas hunian penyangga audio di bawah untuk bingkai mana yang dilewati. Nilai yang lebih tinggi mengurangi risiko keretakan dengan cara membuat laju bingkai sering anjlok."
#define OPTION_VAL_33_ID NULL
#define PCE_FAST_HOVERSCAN_LABEL_ID NULL
#define PCE_FAST_HOVERSCAN_INFO_0_ID NULL
#define OPTION_VAL_352_ID NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_ID NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_3_ID NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_ID NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_ID NULL
#define OPTION_VAL_242_ID NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_ID NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_ID NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_ID NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_ID NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_ID NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_ID NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_ID NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_ID "Sensitivitas Mouse"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_ID "Nilai yang lebih tinggi akan membuat kursor mouse bergerak lebih cepat."
#define OPTION_VAL_0_25_ID NULL
#define OPTION_VAL_0_50_ID NULL
#define OPTION_VAL_0_75_ID NULL
#define OPTION_VAL_1_00_ID NULL
#define OPTION_VAL_1_25_ID NULL
#define OPTION_VAL_1_50_ID NULL
#define OPTION_VAL_1_75_ID NULL
#define OPTION_VAL_2_00_ID NULL
#define OPTION_VAL_2_25_ID NULL
#define OPTION_VAL_2_50_ID NULL
#define OPTION_VAL_2_75_ID NULL
#define OPTION_VAL_3_00_ID NULL
#define OPTION_VAL_3_25_ID NULL
#define OPTION_VAL_3_50_ID NULL
#define OPTION_VAL_3_75_ID NULL
#define OPTION_VAL_4_00_ID NULL
#define OPTION_VAL_4_25_ID NULL
#define OPTION_VAL_4_50_ID NULL
#define OPTION_VAL_4_75_ID NULL
#define OPTION_VAL_5_00_ID NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_ID NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID NULL
#define OPTION_VAL_2_BUTTONS_ID NULL
#define OPTION_VAL_6_BUTTONS_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_ID NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_ID NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_ID NULL
#define PCE_FAST_TURBO_DELAY_LABEL_ID "Tundaan Bertubi"
#define PCE_FAST_TURBO_DELAY_INFO_0_ID "Menyesuaikan waktu antara tekan bertubi (berjumlah bingkai)."
#define PCE_FAST_CDIMAGECACHE_LABEL_ID NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_ID NULL
#define PCE_FAST_CDBIOS_LABEL_ID NULL
#define PCE_FAST_CDBIOS_INFO_0_ID NULL
#define OPTION_VAL_GAMES_EXPRESS_ID NULL
#define OPTION_VAL_SYSTEM_CARD_1_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_ID NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_ID NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_ID NULL
#define PCE_FAST_CDSPEED_LABEL_ID NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_ID NULL
#define PCE_FAST_CDSPEED_INFO_0_ID NULL
#define OPTION_VAL_1_ID NULL
#define OPTION_VAL_2_ID NULL
#define OPTION_VAL_4_ID NULL
#define OPTION_VAL_8_ID NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_ID NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_ID NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_ID NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_ID NULL
#define PCE_FAST_CDDAVOLUME_LABEL_ID NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_ID NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_ID NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_ID NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_ID NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_ID NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_ID NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ID,
      CATEGORY_HACKS_INFO_0_ID
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_ID,
      CATEGORY_CHANNEL_VOLUME_INFO_0_ID
   },
   {
      "cd",
      CATEGORY_CD_LABEL_ID,
      CATEGORY_CD_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_ID,
      NULL,
      PCE_FAST_PALETTE_INFO_0_ID,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_ID },
         { "Composite", OPTION_VAL_COMPOSITE_ID },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_ID,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_ID,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ID },
         { "manual",   OPTION_VAL_MANUAL_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_ID,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_ID,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_ID },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_ID,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_ID,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_ID },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_ID,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_ID },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_ID,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_ID,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_ID },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_ID,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_ID,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_ID,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_ID,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_ID },
         { "0.50", OPTION_VAL_0_50_ID },
         { "0.75", OPTION_VAL_0_75_ID },
         { "1.00", OPTION_VAL_1_00_ID },
         { "1.25", OPTION_VAL_1_25_ID },
         { "1.50", OPTION_VAL_1_50_ID },
         { "1.75", OPTION_VAL_1_75_ID },
         { "2.00", OPTION_VAL_2_00_ID },
         { "2.25", OPTION_VAL_2_25_ID },
         { "2.50", OPTION_VAL_2_50_ID },
         { "2.75", OPTION_VAL_2_75_ID },
         { "3.00", OPTION_VAL_3_00_ID },
         { "3.25", OPTION_VAL_3_25_ID },
         { "3.50", OPTION_VAL_3_50_ID },
         { "3.75", OPTION_VAL_3_75_ID },
         { "4.00", OPTION_VAL_4_00_ID },
         { "4.25", OPTION_VAL_4_25_ID },
         { "4.50", OPTION_VAL_4_50_ID },
         { "4.75", OPTION_VAL_4_75_ID },
         { "5.00", OPTION_VAL_5_00_ID },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_ID,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_ID,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_ID,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_ID,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_ID,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_ID,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_ID,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_ID,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_ID },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_ID },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_ID,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_ID,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_ID,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_ID,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_ID },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_ID,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_ID,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_ID,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_ID,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_ID },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_ID },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_ID },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_ID },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_ID },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_ID },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_ID,
      PCE_FAST_CDSPEED_LABEL_CAT_ID,
      PCE_FAST_CDSPEED_INFO_0_ID,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_ID },
         { "2", OPTION_VAL_2_ID },
         { "4", OPTION_VAL_4_ID },
         { "8", OPTION_VAL_8_ID },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_ID,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_ID,
      PCE_FAST_ADPCMVOLUME_INFO_0_ID,
      PCE_FAST_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_ID,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_ID,
      PCE_FAST_ADPCMVOLUME_INFO_0_ID,
      PCE_FAST_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_ID,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_ID,
      PCE_FAST_ADPCMVOLUME_INFO_0_ID,
      PCE_FAST_ADPCMVOLUME_INFO_1_ID,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_ID,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_ID,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT "Configurare il ritaglio dello schermo, il salto dei fotogrammi e altri parametri di output dell'immagine."
#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT "Configura la pistola ottica, il mouse e l'ingresso Negcon."
#define CATEGORY_HACKS_LABEL_IT "Hack di Emulazione"
#define CATEGORY_HACKS_INFO_0_IT "Configura i parametri di precisione di overclocking e emulazione del processore che influenzano prestazioni e compatibilità di basso livello."
#define CATEGORY_CHANNEL_VOLUME_LABEL_IT "Impostazioni Avanzate Del Volume Dei Canali"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_IT "Configura il volume dei singoli canali audio hardware."
#define CATEGORY_CD_LABEL_IT NULL
#define CATEGORY_CD_INFO_0_IT "Configurare le impostazioni relative all'emulazione del CD del motore del PC."
#define PCE_FAST_PALETTE_LABEL_IT "Tavolozza Colore"
#define PCE_FAST_PALETTE_INFO_0_IT "Composito cerca di ricreare l'output originale della console e può mostrare maggiori dettagli in alcuni giochi."
#define OPTION_VAL_RGB_IT NULL
#define OPTION_VAL_COMPOSITE_IT "Composito"
#define PCE_FAST_FRAMESKIP_LABEL_IT "Salta fotogramma"
#define PCE_FAST_FRAMESKIP_INFO_0_IT "Salta i fotogrammi per evitare la sottoesecuzione del buffer audio (crackling). Migliora le prestazioni a scapito della fluidità visiva. 'Auto' salta i quadri quando consigliato dal frontend. 'Manuale' utilizza l'impostazione 'Frameskip Threshold (%)'."
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_MANUAL_IT "Manuale"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_IT "Soglia Frameskip (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_IT "Quando 'Frameskip' è impostato a 'Manuale', specifica la soglia di occupazione del buffer audio (percentuale) al di sotto della quale i frame verranno saltati. Valori più elevati riducono il rischio di crepitii audio saltando i frame più frequentemente."
#define OPTION_VAL_33_IT "33 (Predefinito)"
#define PCE_FAST_HOVERSCAN_LABEL_IT "Overscan Orizzontale (Solo Modalità Larghezza 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_IT "Scegli la larghezza massima dell'immagine da visualizzare. Valori inferiori ritaglieranno il lato destro dell'immagine (per i giochi a larghezza di 352 px)."
#define OPTION_VAL_352_IT "352 (Predefinito)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_IT "Scanline Iniziale"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_IT "Prima scanline renderizzata. Valori più alti ritaglieranno la parte superiore dell'immagine."
#define OPTION_VAL_3_IT "3 (Predefinito)"
#define PCE_FAST_LAST_SCANLINE_LABEL_IT "Ultima Scanline"
#define PCE_FAST_LAST_SCANLINE_INFO_0_IT "Ultima scanline renderizzata. I valori più bassi ritaglieranno la parte inferiore dell'immagine."
#define OPTION_VAL_242_IT "242 (Predefinito)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_IT "Modifica il volume di PSG Sound Channel 0."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_IT "Modificare il volume di PSG Sound Channel 1."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_IT "Modificare il volume di PSG Sound Channel 2."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_IT "Modificare il volume di PSG Sound Channel 3."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_IT "Modificare il volume di PSG Sound Channel 4."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_IT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_IT "Modificare il volume di PSG Sound Channel 5."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_IT "Sensibilità Mouse"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_IT "Valori più alti renderanno il cursore del mouse più veloce."
#define OPTION_VAL_0_25_IT NULL
#define OPTION_VAL_0_50_IT NULL
#define OPTION_VAL_0_75_IT NULL
#define OPTION_VAL_1_00_IT NULL
#define OPTION_VAL_1_25_IT NULL
#define OPTION_VAL_1_50_IT NULL
#define OPTION_VAL_1_75_IT NULL
#define OPTION_VAL_2_00_IT NULL
#define OPTION_VAL_2_25_IT NULL
#define OPTION_VAL_2_50_IT NULL
#define OPTION_VAL_2_75_IT NULL
#define OPTION_VAL_3_00_IT NULL
#define OPTION_VAL_3_25_IT NULL
#define OPTION_VAL_3_50_IT NULL
#define OPTION_VAL_3_75_IT NULL
#define OPTION_VAL_4_00_IT NULL
#define OPTION_VAL_4_25_IT NULL
#define OPTION_VAL_4_50_IT NULL
#define OPTION_VAL_4_75_IT NULL
#define OPTION_VAL_5_00_IT NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_IT "Disabilita Soft Reset (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_IT "Quando RUN e SELECT vengono premuti contemporaneamente, disabilitare temporaneamente entrambi i pulsanti invece di reimpostare."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT "Tipo Joypad Predefinito P1"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT "Scegli se la porta 1 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define OPTION_VAL_2_BUTTONS_IT "2 Bottoni"
#define OPTION_VAL_6_BUTTONS_IT "6 Bottoni"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT "Tipo Joypad Predefinito P2"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT "Scegli se la porta 2 joypad deve essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT "Tipo Joypad Predefinito P3"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT "Scegli se la porta 3 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT "Tipo Joypad Predefinito P4"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT "Scegli se la porta 4 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT "Tipo Joypad Predefinito P5"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT "Scegli se la porta 5 joypad dovrebbe essere 2 o 6 pulsanti per impostazione predefinita. Questa opzione viene applicata solo quando il core si avvia, se si desidera passare mentre il contenuto è in esecuzione, utilizzare il pulsante 'Commutatore di modalità'. NOTA: 6 pulsanti joypad possono avere comportamenti strani in giochi non compatibili."
#define PCE_FAST_TURBO_TOGGLING_LABEL_IT "Attiva/Disattiva Turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_IT "Abilita i tasti turbo (tasti III e IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_IT "Scorciatoia Turbo Alternativa"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_IT "Assegnare i pulsanti RetroPad's L3/R3 come turbo toggle tasti di scelta rapida invece dei pulsanti III e IV. Funziona solo finché non viene assegnato nulla ai pulsanti L3/R3. È possibile evitare di remapping i pulsanti III e IV quando si passa alla modalità controller a 6 pulsanti con questo."
#define PCE_FAST_TURBO_DELAY_LABEL_IT "Ritardo Turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_IT "Regolare il tempo tra gli input del turbo (in fotogrammi)."
#define PCE_FAST_CDIMAGECACHE_LABEL_IT "Cache Immagine CD (Riavvio Richiesto)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_IT "Carica l'immagine completa in memoria all'avvio. Può potenzialmente diminuire i tempi di caricamento al costo di un aumento del tempo di avvio."
#define PCE_FAST_CDBIOS_LABEL_IT "BIOS CD (Riavvio Richiesto)"
#define PCE_FAST_CDBIOS_INFO_0_IT "La maggior parte dei giochi può essere eseguita su 'System Card 3'. 'Games Express' è necessario per diversi giochi senza licenza."
#define OPTION_VAL_GAMES_EXPRESS_IT NULL
#define OPTION_VAL_SYSTEM_CARD_1_IT "Scheda Di Sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_IT "Scheda Di Sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_IT "Scheda Di Sistema 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_IT "Scheda Di Sistema 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_IT "Scheda Di Sistema 3 US"
#define PCE_FAST_CDSPEED_LABEL_IT "(CD) Velocità CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_IT "Velocità CD"
#define PCE_FAST_CDSPEED_INFO_0_IT "Valori più elevati consentono tempi di caricamento più rapidi, ma possono causare problemi con un paio di giochi."
#define OPTION_VAL_1_IT NULL
#define OPTION_VAL_2_IT NULL
#define OPTION_VAL_4_IT NULL
#define OPTION_VAL_8_IT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_IT "(CD) Volume ADPCM %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_IT "Volume ADPCM %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_IT "Solo gioco di CD. Impostare questo controllo del volume troppo alto può causare ritaglio di campione."
#define PCE_FAST_ADPCMVOLUME_INFO_1_IT "Impostare questo controllo del volume troppo alto può causare clip di campione."
#define PCE_FAST_CDDAVOLUME_LABEL_IT "(CD) Volume CDDA %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_IT "Volume CDDA %"
#define PCE_FAST_CDPSGVOLUME_LABEL_IT "(CD) Volume PSG %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_IT NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_IT "Nessun Limite Sprite"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_IT "Rimuovere 16-sprites-per-scanline limite hardware. ATTENZIONE: Può causare problemi grafici su alcuni giochi."
#define PCE_FAST_OCMULTIPLIER_LABEL_IT "Moltiplicatore Overclock Della CPU (Riavvio Richiesto)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_IT "Valori più alti possono ridurre i rallentamenti dei giochi. ATTENZIONE: può causare problemi e crash."

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_IT,
      CATEGORY_HACKS_INFO_0_IT
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_IT,
      CATEGORY_CHANNEL_VOLUME_INFO_0_IT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_IT,
      CATEGORY_CD_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_IT,
      NULL,
      PCE_FAST_PALETTE_INFO_0_IT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_IT },
         { "Composite", OPTION_VAL_COMPOSITE_IT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_IT,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_IT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_IT },
         { "manual",   OPTION_VAL_MANUAL_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_IT,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_IT,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_IT },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_IT,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_IT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_IT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_IT,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_IT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_IT,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_IT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_IT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_IT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_IT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_IT,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_IT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_IT },
         { "0.50", OPTION_VAL_0_50_IT },
         { "0.75", OPTION_VAL_0_75_IT },
         { "1.00", OPTION_VAL_1_00_IT },
         { "1.25", OPTION_VAL_1_25_IT },
         { "1.50", OPTION_VAL_1_50_IT },
         { "1.75", OPTION_VAL_1_75_IT },
         { "2.00", OPTION_VAL_2_00_IT },
         { "2.25", OPTION_VAL_2_25_IT },
         { "2.50", OPTION_VAL_2_50_IT },
         { "2.75", OPTION_VAL_2_75_IT },
         { "3.00", OPTION_VAL_3_00_IT },
         { "3.25", OPTION_VAL_3_25_IT },
         { "3.50", OPTION_VAL_3_50_IT },
         { "3.75", OPTION_VAL_3_75_IT },
         { "4.00", OPTION_VAL_4_00_IT },
         { "4.25", OPTION_VAL_4_25_IT },
         { "4.50", OPTION_VAL_4_50_IT },
         { "4.75", OPTION_VAL_4_75_IT },
         { "5.00", OPTION_VAL_5_00_IT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_IT,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_IT,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_IT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_IT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_IT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_IT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_IT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_IT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_IT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_IT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_IT,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_IT,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_IT,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_IT,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_IT },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_IT,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_IT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_IT,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_IT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_IT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_IT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_IT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_IT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_IT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_IT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_IT,
      PCE_FAST_CDSPEED_LABEL_CAT_IT,
      PCE_FAST_CDSPEED_INFO_0_IT,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_IT },
         { "2", OPTION_VAL_2_IT },
         { "4", OPTION_VAL_4_IT },
         { "8", OPTION_VAL_8_IT },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_IT,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_IT,
      PCE_FAST_ADPCMVOLUME_INFO_0_IT,
      PCE_FAST_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_IT,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_IT,
      PCE_FAST_ADPCMVOLUME_INFO_0_IT,
      PCE_FAST_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_IT,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_IT,
      PCE_FAST_ADPCMVOLUME_INFO_0_IT,
      PCE_FAST_ADPCMVOLUME_INFO_1_IT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_IT,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_IT,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA "ビデオ"
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_HACKS_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACKS_INFO_0_JA NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_JA "高度なチャンネル音量設定"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_JA "個々のハードウェアオーディオチャンネルのボリュームを設定します。"
#define CATEGORY_CD_LABEL_JA "PCエンジン CD"
#define CATEGORY_CD_INFO_0_JA "PC Engine CD エミュレーションに関連する設定を行います。"
#define PCE_FAST_PALETTE_LABEL_JA "カラーパレット"
#define PCE_FAST_PALETTE_INFO_0_JA NULL
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA "コンポジット"
#define PCE_FAST_FRAMESKIP_LABEL_JA "フレームスキップ"
#define PCE_FAST_FRAMESKIP_INFO_0_JA "フレームをスキップしてオーディオバッファアンダーラン (音割れ) を回避します。視覚的な滑らかさを犠牲にしてパフォーマンスを向上させます。 「自動」は、フロントエンドにアドバイスされたときにフレームをスキップします。「マニュアル」は、「フレームスキップ閾値 (%)」設定を使用します。"
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_MANUAL_JA "手動"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_JA "フレームスキップ閾値 (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_JA "'フレームスキップ' が '手動' に設定されている場合, フレームがスキップされるオーディオバッファ占有しきい値 (%) を指定します. 値を大きくすると, フレームを頻繁に落とすことでクラッキングが発生するリスクが低下します."
#define OPTION_VAL_33_JA "33 (デフォルト)"
#define PCE_FAST_HOVERSCAN_LABEL_JA NULL
#define PCE_FAST_HOVERSCAN_INFO_0_JA NULL
#define OPTION_VAL_352_JA "352 (デフォルト)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_JA NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_JA "描画開始スキャンライン。大きい値ほど画面上部の表示が欠けます。"
#define OPTION_VAL_3_JA "3 (デフォルト)"
#define PCE_FAST_LAST_SCANLINE_LABEL_JA NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_JA "最終描画スキャンライン。小さい値ほど画面下部の表示が欠けます。"
#define OPTION_VAL_242_JA "242 (デフォルト)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_JA "PSG サウンドチャンネル0音量 %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_JA "PSG サウンドチャンネル0の音量を変更する"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_JA "PSG サウンドチャンネル1音量 %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_JA "PSG サウンドチャンネル1の音量を変更する"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_JA "PSG サウンドチャンネル2音量 %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_JA "PSG サウンドチャンネル2の音量を変更する"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_JA "PSG サウンドチャンネル3音量 %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_JA "PSG サウンドチャンネル3の音量を変更する"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_JA "PSG サウンドチャンネル4音量 %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_JA "PSG サウンドチャンネル4の音量を変更する"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_JA "PSG サウンドチャンネル5音量 %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_JA "PSG サウンドチャンネル5の音量を変更する"
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_JA "マウス感度"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_JA "値を大きくすると、マウスカーソルがより速く移動します。"
#define OPTION_VAL_0_25_JA NULL
#define OPTION_VAL_0_50_JA NULL
#define OPTION_VAL_0_75_JA NULL
#define OPTION_VAL_1_00_JA NULL
#define OPTION_VAL_1_25_JA NULL
#define OPTION_VAL_1_50_JA NULL
#define OPTION_VAL_1_75_JA NULL
#define OPTION_VAL_2_00_JA NULL
#define OPTION_VAL_2_25_JA NULL
#define OPTION_VAL_2_50_JA NULL
#define OPTION_VAL_2_75_JA NULL
#define OPTION_VAL_3_00_JA NULL
#define OPTION_VAL_3_25_JA NULL
#define OPTION_VAL_3_50_JA NULL
#define OPTION_VAL_3_75_JA NULL
#define OPTION_VAL_4_00_JA NULL
#define OPTION_VAL_4_25_JA NULL
#define OPTION_VAL_4_50_JA NULL
#define OPTION_VAL_4_75_JA NULL
#define OPTION_VAL_5_00_JA NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_JA "ソフトリセットを無効にする (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_JA "RUN と SELECT が同時に押された時に、リセットの代わりに一時的に両方のボタンを無効にします。"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA NULL
#define OPTION_VAL_2_BUTTONS_JA NULL
#define OPTION_VAL_6_BUTTONS_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_JA NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_JA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_JA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_JA NULL
#define PCE_FAST_TURBO_DELAY_LABEL_JA NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_JA "連射間隔の時間を調整します(フレーム単位)。"
#define PCE_FAST_CDIMAGECACHE_LABEL_JA "CD イメージキャッシュ (再起動が必要)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_JA "起動時に完全なイメージをメモリにロードします。起動時間が増す代わりにロード時間が短縮される可能性があります。"
#define PCE_FAST_CDBIOS_LABEL_JA "CD BIOS (再起動が必要)"
#define PCE_FAST_CDBIOS_INFO_0_JA NULL
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_JA NULL
#define PCE_FAST_CDSPEED_LABEL_JA NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_JA NULL
#define PCE_FAST_CDSPEED_INFO_0_JA "値が高いほど読み込み時間が速くなりますが、いくつかのゲームで問題が発生する可能性があります。"
#define OPTION_VAL_1_JA NULL
#define OPTION_VAL_2_JA NULL
#define OPTION_VAL_4_JA NULL
#define OPTION_VAL_8_JA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_JA "(CD) ADPCM 音量 %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_JA "ADPCM 音量 %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_JA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_JA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_JA "(CD) CDDA 音量 %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_JA "CD-DA 音量 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_JA "(CD) PSG 音量 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_JA "CD PSG 音量 %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_JA "スプライト制限なし"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_JA "スキャンラインあたりの16スプライトのハードウェア制限を削除します。警告: ゲームによってはグラフィックが乱れる可能性があります。"
#define PCE_FAST_OCMULTIPLIER_LABEL_JA "CPUオーバークロック倍率 (再起動が必要)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_JA "値を大きくするとゲームのスローダウンが減ります。警告：不具合やクラッシュを引き起こす可能性があります。"

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_JA,
      CATEGORY_HACKS_INFO_0_JA
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_JA,
      CATEGORY_CHANNEL_VOLUME_INFO_0_JA
   },
   {
      "cd",
      CATEGORY_CD_LABEL_JA,
      CATEGORY_CD_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_JA,
      NULL,
      PCE_FAST_PALETTE_INFO_0_JA,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_JA },
         { "Composite", OPTION_VAL_COMPOSITE_JA },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_JA,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_JA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_JA },
         { "manual",   OPTION_VAL_MANUAL_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_JA,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_JA,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_JA },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_JA,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_JA,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_JA },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_JA,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_JA },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_JA,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_JA,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_JA },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_JA,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_JA,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_JA,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_JA,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_JA },
         { "0.50", OPTION_VAL_0_50_JA },
         { "0.75", OPTION_VAL_0_75_JA },
         { "1.00", OPTION_VAL_1_00_JA },
         { "1.25", OPTION_VAL_1_25_JA },
         { "1.50", OPTION_VAL_1_50_JA },
         { "1.75", OPTION_VAL_1_75_JA },
         { "2.00", OPTION_VAL_2_00_JA },
         { "2.25", OPTION_VAL_2_25_JA },
         { "2.50", OPTION_VAL_2_50_JA },
         { "2.75", OPTION_VAL_2_75_JA },
         { "3.00", OPTION_VAL_3_00_JA },
         { "3.25", OPTION_VAL_3_25_JA },
         { "3.50", OPTION_VAL_3_50_JA },
         { "3.75", OPTION_VAL_3_75_JA },
         { "4.00", OPTION_VAL_4_00_JA },
         { "4.25", OPTION_VAL_4_25_JA },
         { "4.50", OPTION_VAL_4_50_JA },
         { "4.75", OPTION_VAL_4_75_JA },
         { "5.00", OPTION_VAL_5_00_JA },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_JA,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_JA,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_JA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_JA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_JA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_JA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_JA,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_JA,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_JA },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_JA },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_JA,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_JA,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_JA,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_JA,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_JA },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_JA,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_JA,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_JA,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_JA,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_JA },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_JA },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_JA },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_JA },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_JA },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_JA },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_JA,
      PCE_FAST_CDSPEED_LABEL_CAT_JA,
      PCE_FAST_CDSPEED_INFO_0_JA,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_JA },
         { "2", OPTION_VAL_2_JA },
         { "4", OPTION_VAL_4_JA },
         { "8", OPTION_VAL_8_JA },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_JA,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_JA,
      PCE_FAST_ADPCMVOLUME_INFO_0_JA,
      PCE_FAST_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_JA,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_JA,
      PCE_FAST_ADPCMVOLUME_INFO_0_JA,
      PCE_FAST_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_JA,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_JA,
      PCE_FAST_ADPCMVOLUME_INFO_0_JA,
      PCE_FAST_ADPCMVOLUME_INFO_1_JA,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_JA,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_JA,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "화면 자르기, 프레임 건너뛰기 등 기타 이미지 출력 매개변수를 구성합니다."
#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO "라이트 건, 마우스, 네지콘 입력 등을 설정합니다."
#define CATEGORY_HACKS_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACKS_INFO_0_KO "성능과 호환성에 영향을 끼치는 프로세서 오버클러킹 및 에뮬레이션 정확도 옵션 등을 설정합니다."
#define CATEGORY_CHANNEL_VOLUME_LABEL_KO "고급 채널 볼륨 설정"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_KO "개별 하드웨어 오디오 채널의 볼륨을 설정합니다."
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO "PC Engine CD 에뮬레이션과 관련된 설정을 구성합니다."
#define PCE_FAST_PALETTE_LABEL_KO "색상 팔레트"
#define PCE_FAST_PALETTE_INFO_0_KO "컴포지트는 원본 콘솔 출력을 재현하며 일부 게임에서 더 디테일하게 표시될 수 있습니다."
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO "컴포지트"
#define PCE_FAST_FRAMESKIP_LABEL_KO "프레임 스킵"
#define PCE_FAST_FRAMESKIP_INFO_0_KO "오디오 버퍼 언더런(소리깨짐) 을 줄이기 위해 프레임 건너뛰기를 합니다. 시각적인 부드러움을 포기하는 대신 성능이 향상됩니다. '자동'은 프론트엔드의 추천값으로 실행되고 '사용자 설정'은 '프레임 스킵 임계값(%)' 설정을 이용해 실행됩니다."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_MANUAL_KO "수동"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_KO "프레임 스킵 임계값 (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_KO "'프레임 건너뛰기'가 '사용자 설정'일 경우 건너뛸 프레임에 대한 오디오 버퍼 점유 임계점 (퍼센트) 을 설정하게됩니다. 값이 높을 수록 프레임은 떨어지고 그 대신 소리 깨짐 현상은 줄어들게 됩니다."
#define OPTION_VAL_33_KO "33 (기본)"
#define PCE_FAST_HOVERSCAN_LABEL_KO "수평 오버스캔 (352 너비 모드만 해당)"
#define PCE_FAST_HOVERSCAN_INFO_0_KO "표시할 최대 이미지 너비를 선택합니다. 값이 낮으면 이미지의 오른쪽이 잘립니다 (너비가 352픽셀인 게임의 경우)."
#define OPTION_VAL_352_KO "352 (기본)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_KO "최초 스캔라인"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_KO "첫 번째 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 상단이 잘립니다."
#define OPTION_VAL_3_KO "3 (기본)"
#define PCE_FAST_LAST_SCANLINE_LABEL_KO "마지막 스캔라인"
#define PCE_FAST_LAST_SCANLINE_INFO_0_KO "마지막으로 렌더링 되는 스캔라인입니다. 값이 높으면 이미지 하단이 잘립니다."
#define OPTION_VAL_242_KO "242 (기본)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_KO "PSG 사운드 채널 0 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_KO "PSG 사운드 채널 0의 볼륨을 변경합니다."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_KO "PSG 사운드 채널 1 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_KO "PSG 사운드 채널 1의 볼륨을 변경합니다."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_KO "PSG 사운드 채널 2 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_KO "PSG 사운드 채널 2의 볼륨을 변경합니다."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_KO "PSG 사운드 채널 3 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_KO "PSG 사운드 채널 3의 볼륨을 변경합니다."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_KO "PSG 사운드 채널 4 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_KO "PSG 사운드 채널 4의 볼륨을 변경합니다."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_KO "PSG 사운드 채널 5 볼륨 %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_KO "PSG 사운드 채널 5의 볼륨을 변경합니다."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_KO "값이 높을수록 마우스 커서가 더 빠르게 움직입니다."
#define OPTION_VAL_0_25_KO NULL
#define OPTION_VAL_0_50_KO NULL
#define OPTION_VAL_0_75_KO NULL
#define OPTION_VAL_1_00_KO NULL
#define OPTION_VAL_1_25_KO NULL
#define OPTION_VAL_1_50_KO NULL
#define OPTION_VAL_1_75_KO NULL
#define OPTION_VAL_2_00_KO NULL
#define OPTION_VAL_2_25_KO NULL
#define OPTION_VAL_2_50_KO NULL
#define OPTION_VAL_2_75_KO NULL
#define OPTION_VAL_3_00_KO NULL
#define OPTION_VAL_3_25_KO NULL
#define OPTION_VAL_3_50_KO NULL
#define OPTION_VAL_3_75_KO NULL
#define OPTION_VAL_4_00_KO NULL
#define OPTION_VAL_4_25_KO NULL
#define OPTION_VAL_4_50_KO NULL
#define OPTION_VAL_4_75_KO NULL
#define OPTION_VAL_5_00_KO NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_KO "소프트 리셋 비활성화 (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_KO "RUN과 SELECT를 동시에 누르면 리셋하는 대신 두 버튼을 일시적으로 비활성화합니다."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO "P1 기본 조이패드 유형"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO "포트 1 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define OPTION_VAL_2_BUTTONS_KO "2 버튼"
#define OPTION_VAL_6_BUTTONS_KO "6 버튼"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO "P2 기본 조이패드 유형"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO "포트 2 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO "P3 기본 조이패드 유형"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO "포트 3 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO "P4 기본 조이패드 유형"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO "포트 4 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO "P5 기본 조이패드 유형"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO "포트 5 조이패드를 기본적으로 2개 또는 6개 버튼으로 할지 선택합니다. 이 옵션은 코어가 시작될 때만 적용되며, 콘텐츠가 실행 중일 때 전환하려면 '모드 전환' 버튼을 사용하세요. 참고: 6버튼 조이패드는 호환되지 않는 게임에서 이상한 동작을 일으킬 수 있습니다."
#define PCE_FAST_TURBO_TOGGLING_LABEL_KO "터보 토글"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_KO "터보 토글 핫키(버튼 III 및 IV) 를 활성화합니다."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_KO "대체 터보 핫키"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_KO "레트로 패드의 L3/R3 버튼을 버튼 III 및 IV 대신 터보 핫키로 할당합니다. L3/R3 버튼에 아무 것도 할당되지 않은 경우에만 작동합니다. 이를 통해 6버튼 컨트롤러 모드로 전환할 때 버튼 III 및 IV를 다시 설정해야하는 것을 방지할 수 있습니다."
#define PCE_FAST_TURBO_DELAY_LABEL_KO "터보 지연"
#define PCE_FAST_TURBO_DELAY_INFO_0_KO "터보 사이의 시간을 조정합니다 (프레임 단위)."
#define PCE_FAST_CDIMAGECACHE_LABEL_KO "CD 이미지 캐시 (재시작 필요)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_KO "시작할 때 전체 이미지를 메모리에 불러옵니다. 시작 시간이 늘어나는 대신 로딩 시간을 잠재적으로 줄일 수 있습니다."
#define PCE_FAST_CDBIOS_LABEL_KO "CD BIOS (재시작 필요)"
#define PCE_FAST_CDBIOS_INFO_0_KO "대부분의 게임은 'System Card 3'에서 실행할 수 있습니다. 'Games Express'는 라이선스가 없는 게임에서 필요합니다."
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_KO NULL
#define PCE_FAST_CDSPEED_LABEL_KO "(CD) CD 속도"
#define PCE_FAST_CDSPEED_LABEL_CAT_KO "CD 속도"
#define PCE_FAST_CDSPEED_INFO_0_KO "값이 높을수록 로딩 시간이 빨라지지만 몇 가지 게임에서 문제가 발생할 수 있습니다."
#define OPTION_VAL_1_KO NULL
#define OPTION_VAL_2_KO NULL
#define OPTION_VAL_4_KO NULL
#define OPTION_VAL_8_KO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_KO "(CD) ADPCM 볼륨 %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_KO "ADPCM 볼륨 %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_KO "CD 게임에 해당합니다. 볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define PCE_FAST_ADPCMVOLUME_INFO_1_KO "볼륨을 너무 높게 설정하면 샘플 클리핑이 발생할 수 있습니다."
#define PCE_FAST_CDDAVOLUME_LABEL_KO "(CD) CDDA 음량 %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_KO "CDDA 음량 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_KO "(CD) PSG 볼륨 %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_KO "CD PSG 볼륨 %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_KO "스캔라인 당 16개의 스프라이트 하드웨어 제한을 제거합니다. 경고: 일부 게임에서 그래픽 결함이 발생할 수 있습니다."
#define PCE_FAST_OCMULTIPLIER_LABEL_KO "CPU 오버클럭 배율 (재시작 필요)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_KO "값이 높을수록 게임의 속도 저하를 줄일 수 있습니다. 경고: 결함 및 충돌이 발생할 수 있습니다."

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_KO,
      CATEGORY_HACKS_INFO_0_KO
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_KO,
      CATEGORY_CHANNEL_VOLUME_INFO_0_KO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_KO,
      CATEGORY_CD_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_KO,
      NULL,
      PCE_FAST_PALETTE_INFO_0_KO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_KO },
         { "Composite", OPTION_VAL_COMPOSITE_KO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_KO,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_KO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_KO },
         { "manual",   OPTION_VAL_MANUAL_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_KO,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_KO,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_KO },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_KO,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_KO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_KO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_KO,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_KO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_KO,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_KO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_KO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_KO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_KO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_KO,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_KO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_KO },
         { "0.50", OPTION_VAL_0_50_KO },
         { "0.75", OPTION_VAL_0_75_KO },
         { "1.00", OPTION_VAL_1_00_KO },
         { "1.25", OPTION_VAL_1_25_KO },
         { "1.50", OPTION_VAL_1_50_KO },
         { "1.75", OPTION_VAL_1_75_KO },
         { "2.00", OPTION_VAL_2_00_KO },
         { "2.25", OPTION_VAL_2_25_KO },
         { "2.50", OPTION_VAL_2_50_KO },
         { "2.75", OPTION_VAL_2_75_KO },
         { "3.00", OPTION_VAL_3_00_KO },
         { "3.25", OPTION_VAL_3_25_KO },
         { "3.50", OPTION_VAL_3_50_KO },
         { "3.75", OPTION_VAL_3_75_KO },
         { "4.00", OPTION_VAL_4_00_KO },
         { "4.25", OPTION_VAL_4_25_KO },
         { "4.50", OPTION_VAL_4_50_KO },
         { "4.75", OPTION_VAL_4_75_KO },
         { "5.00", OPTION_VAL_5_00_KO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_KO,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_KO,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_KO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_KO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_KO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_KO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_KO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_KO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_KO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_KO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_KO,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_KO,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_KO,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_KO,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_KO },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_KO,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_KO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_KO,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_KO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_KO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_KO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_KO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_KO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_KO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_KO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_KO,
      PCE_FAST_CDSPEED_LABEL_CAT_KO,
      PCE_FAST_CDSPEED_INFO_0_KO,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_KO },
         { "2", OPTION_VAL_2_KO },
         { "4", OPTION_VAL_4_KO },
         { "8", OPTION_VAL_8_KO },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_KO,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_KO,
      PCE_FAST_ADPCMVOLUME_INFO_0_KO,
      PCE_FAST_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_KO,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_KO,
      PCE_FAST_ADPCMVOLUME_INFO_0_KO,
      PCE_FAST_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_KO,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_KO,
      PCE_FAST_ADPCMVOLUME_INFO_0_KO,
      PCE_FAST_ADPCMVOLUME_INFO_1_KO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_KO,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_KO,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL "Invoer"
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_HACKS_LABEL_NL NULL
#define CATEGORY_HACKS_INFO_0_NL NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_NL NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_NL NULL
#define CATEGORY_CD_LABEL_NL NULL
#define CATEGORY_CD_INFO_0_NL NULL
#define PCE_FAST_PALETTE_LABEL_NL NULL
#define PCE_FAST_PALETTE_INFO_0_NL NULL
#define OPTION_VAL_RGB_NL NULL
#define OPTION_VAL_COMPOSITE_NL NULL
#define PCE_FAST_FRAMESKIP_LABEL_NL NULL
#define PCE_FAST_FRAMESKIP_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_MANUAL_NL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_NL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_NL NULL
#define OPTION_VAL_33_NL NULL
#define PCE_FAST_HOVERSCAN_LABEL_NL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_NL NULL
#define OPTION_VAL_352_NL NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_NL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_3_NL NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_NL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_NL NULL
#define OPTION_VAL_242_NL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_NL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_NL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_NL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_NL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_NL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_NL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_NL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_NL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_NL NULL
#define OPTION_VAL_0_25_NL NULL
#define OPTION_VAL_0_50_NL NULL
#define OPTION_VAL_0_75_NL NULL
#define OPTION_VAL_1_00_NL NULL
#define OPTION_VAL_1_25_NL NULL
#define OPTION_VAL_1_50_NL NULL
#define OPTION_VAL_1_75_NL NULL
#define OPTION_VAL_2_00_NL NULL
#define OPTION_VAL_2_25_NL NULL
#define OPTION_VAL_2_50_NL NULL
#define OPTION_VAL_2_75_NL NULL
#define OPTION_VAL_3_00_NL NULL
#define OPTION_VAL_3_25_NL NULL
#define OPTION_VAL_3_50_NL NULL
#define OPTION_VAL_3_75_NL NULL
#define OPTION_VAL_4_00_NL NULL
#define OPTION_VAL_4_25_NL NULL
#define OPTION_VAL_4_50_NL NULL
#define OPTION_VAL_4_75_NL NULL
#define OPTION_VAL_5_00_NL NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_NL NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL NULL
#define OPTION_VAL_2_BUTTONS_NL NULL
#define OPTION_VAL_6_BUTTONS_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_NL NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_NL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_NL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_NL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_NL NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_NL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_NL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_NL NULL
#define PCE_FAST_CDBIOS_LABEL_NL NULL
#define PCE_FAST_CDBIOS_INFO_0_NL NULL
#define OPTION_VAL_GAMES_EXPRESS_NL NULL
#define OPTION_VAL_SYSTEM_CARD_1_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_NL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_NL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_NL NULL
#define PCE_FAST_CDSPEED_LABEL_NL NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_NL NULL
#define PCE_FAST_CDSPEED_INFO_0_NL NULL
#define OPTION_VAL_1_NL NULL
#define OPTION_VAL_2_NL NULL
#define OPTION_VAL_4_NL NULL
#define OPTION_VAL_8_NL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_NL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_NL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_NL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_NL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_NL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_NL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_NL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_NL NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_NL NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_NL NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_NL NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NL,
      CATEGORY_HACKS_INFO_0_NL
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_NL,
      CATEGORY_CHANNEL_VOLUME_INFO_0_NL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NL,
      CATEGORY_CD_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_NL,
      NULL,
      PCE_FAST_PALETTE_INFO_0_NL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NL },
         { "Composite", OPTION_VAL_COMPOSITE_NL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_NL,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_NL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_NL },
         { "manual",   OPTION_VAL_MANUAL_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_NL,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_NL,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_NL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_NL,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_NL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_NL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_NL,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_NL,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_NL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_NL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_NL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_NL,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_NL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_NL },
         { "0.50", OPTION_VAL_0_50_NL },
         { "0.75", OPTION_VAL_0_75_NL },
         { "1.00", OPTION_VAL_1_00_NL },
         { "1.25", OPTION_VAL_1_25_NL },
         { "1.50", OPTION_VAL_1_50_NL },
         { "1.75", OPTION_VAL_1_75_NL },
         { "2.00", OPTION_VAL_2_00_NL },
         { "2.25", OPTION_VAL_2_25_NL },
         { "2.50", OPTION_VAL_2_50_NL },
         { "2.75", OPTION_VAL_2_75_NL },
         { "3.00", OPTION_VAL_3_00_NL },
         { "3.25", OPTION_VAL_3_25_NL },
         { "3.50", OPTION_VAL_3_50_NL },
         { "3.75", OPTION_VAL_3_75_NL },
         { "4.00", OPTION_VAL_4_00_NL },
         { "4.25", OPTION_VAL_4_25_NL },
         { "4.50", OPTION_VAL_4_50_NL },
         { "4.75", OPTION_VAL_4_75_NL },
         { "5.00", OPTION_VAL_5_00_NL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_NL,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_NL,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_NL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_NL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_NL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_NL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_NL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_NL,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_NL,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_NL,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_NL,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_NL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_NL,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_NL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_NL,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_NL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_NL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_NL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_NL,
      PCE_FAST_CDSPEED_LABEL_CAT_NL,
      PCE_FAST_CDSPEED_INFO_0_NL,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_NL },
         { "2", OPTION_VAL_2_NL },
         { "4", OPTION_VAL_4_NL },
         { "8", OPTION_VAL_8_NL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_NL,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_NL,
      PCE_FAST_ADPCMVOLUME_INFO_0_NL,
      PCE_FAST_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_NL,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_NL,
      PCE_FAST_ADPCMVOLUME_INFO_0_NL,
      PCE_FAST_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_NL,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_NL,
      PCE_FAST_ADPCMVOLUME_INFO_0_NL,
      PCE_FAST_ADPCMVOLUME_INFO_1_NL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_NL,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_NL,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO NULL
#define CATEGORY_INPUT_LABEL_NO "Inndata"
#define CATEGORY_INPUT_INFO_0_NO NULL
#define CATEGORY_HACKS_LABEL_NO NULL
#define CATEGORY_HACKS_INFO_0_NO NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_NO NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_NO NULL
#define CATEGORY_CD_LABEL_NO NULL
#define CATEGORY_CD_INFO_0_NO NULL
#define PCE_FAST_PALETTE_LABEL_NO NULL
#define PCE_FAST_PALETTE_INFO_0_NO NULL
#define OPTION_VAL_RGB_NO NULL
#define OPTION_VAL_COMPOSITE_NO NULL
#define PCE_FAST_FRAMESKIP_LABEL_NO NULL
#define PCE_FAST_FRAMESKIP_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_MANUAL_NO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_NO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_NO NULL
#define OPTION_VAL_33_NO NULL
#define PCE_FAST_HOVERSCAN_LABEL_NO NULL
#define PCE_FAST_HOVERSCAN_INFO_0_NO NULL
#define OPTION_VAL_352_NO NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_NO NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_3_NO NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_NO NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_NO NULL
#define OPTION_VAL_242_NO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_NO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_NO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_NO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_NO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_NO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_NO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_NO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_NO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_NO NULL
#define OPTION_VAL_0_25_NO NULL
#define OPTION_VAL_0_50_NO NULL
#define OPTION_VAL_0_75_NO NULL
#define OPTION_VAL_1_00_NO NULL
#define OPTION_VAL_1_25_NO NULL
#define OPTION_VAL_1_50_NO NULL
#define OPTION_VAL_1_75_NO NULL
#define OPTION_VAL_2_00_NO NULL
#define OPTION_VAL_2_25_NO NULL
#define OPTION_VAL_2_50_NO NULL
#define OPTION_VAL_2_75_NO NULL
#define OPTION_VAL_3_00_NO NULL
#define OPTION_VAL_3_25_NO NULL
#define OPTION_VAL_3_50_NO NULL
#define OPTION_VAL_3_75_NO NULL
#define OPTION_VAL_4_00_NO NULL
#define OPTION_VAL_4_25_NO NULL
#define OPTION_VAL_4_50_NO NULL
#define OPTION_VAL_4_75_NO NULL
#define OPTION_VAL_5_00_NO NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_NO NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO NULL
#define OPTION_VAL_2_BUTTONS_NO NULL
#define OPTION_VAL_6_BUTTONS_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_NO NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_NO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_NO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_NO NULL
#define PCE_FAST_TURBO_DELAY_LABEL_NO NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_NO NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_NO NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_NO NULL
#define PCE_FAST_CDBIOS_LABEL_NO NULL
#define PCE_FAST_CDBIOS_INFO_0_NO NULL
#define OPTION_VAL_GAMES_EXPRESS_NO NULL
#define OPTION_VAL_SYSTEM_CARD_1_NO NULL
#define OPTION_VAL_SYSTEM_CARD_2_NO NULL
#define OPTION_VAL_SYSTEM_CARD_3_NO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_NO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_NO NULL
#define PCE_FAST_CDSPEED_LABEL_NO NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_NO NULL
#define PCE_FAST_CDSPEED_INFO_0_NO NULL
#define OPTION_VAL_1_NO NULL
#define OPTION_VAL_2_NO NULL
#define OPTION_VAL_4_NO NULL
#define OPTION_VAL_8_NO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_NO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_NO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_NO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_NO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_NO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_NO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_NO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_NO NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_NO NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_NO NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_NO NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NO,
      CATEGORY_VIDEO_INFO_0_NO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NO,
      CATEGORY_INPUT_INFO_0_NO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NO,
      CATEGORY_HACKS_INFO_0_NO
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_NO,
      CATEGORY_CHANNEL_VOLUME_INFO_0_NO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_NO,
      CATEGORY_CD_INFO_0_NO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_NO,
      NULL,
      PCE_FAST_PALETTE_INFO_0_NO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_NO },
         { "Composite", OPTION_VAL_COMPOSITE_NO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_NO,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_NO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_NO },
         { "manual",   OPTION_VAL_MANUAL_NO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_NO,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_NO,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_NO },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_NO,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_NO,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_NO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_NO,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_NO },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_NO,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_NO,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_NO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_NO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_NO,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_NO,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_NO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_NO },
         { "0.50", OPTION_VAL_0_50_NO },
         { "0.75", OPTION_VAL_0_75_NO },
         { "1.00", OPTION_VAL_1_00_NO },
         { "1.25", OPTION_VAL_1_25_NO },
         { "1.50", OPTION_VAL_1_50_NO },
         { "1.75", OPTION_VAL_1_75_NO },
         { "2.00", OPTION_VAL_2_00_NO },
         { "2.25", OPTION_VAL_2_25_NO },
         { "2.50", OPTION_VAL_2_50_NO },
         { "2.75", OPTION_VAL_2_75_NO },
         { "3.00", OPTION_VAL_3_00_NO },
         { "3.25", OPTION_VAL_3_25_NO },
         { "3.50", OPTION_VAL_3_50_NO },
         { "3.75", OPTION_VAL_3_75_NO },
         { "4.00", OPTION_VAL_4_00_NO },
         { "4.25", OPTION_VAL_4_25_NO },
         { "4.50", OPTION_VAL_4_50_NO },
         { "4.75", OPTION_VAL_4_75_NO },
         { "5.00", OPTION_VAL_5_00_NO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_NO,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_NO,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_NO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_NO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_NO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_NO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_NO,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_NO,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_NO },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_NO },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_NO,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_NO,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_NO,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_NO,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_NO,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_NO },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_NO,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_NO,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_NO,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_NO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_NO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_NO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_NO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_NO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_NO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_NO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_NO,
      PCE_FAST_CDSPEED_LABEL_CAT_NO,
      PCE_FAST_CDSPEED_INFO_0_NO,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_NO },
         { "2", OPTION_VAL_2_NO },
         { "4", OPTION_VAL_4_NO },
         { "8", OPTION_VAL_8_NO },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_NO,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_NO,
      PCE_FAST_ADPCMVOLUME_INFO_0_NO,
      PCE_FAST_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_NO,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_NO,
      PCE_FAST_ADPCMVOLUME_INFO_0_NO,
      PCE_FAST_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_NO,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_NO,
      PCE_FAST_ADPCMVOLUME_INFO_0_NO,
      PCE_FAST_ADPCMVOLUME_INFO_1_NO,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_NO,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_NO,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_NO,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_VIDEO_LABEL_OR "ଵିଡ଼ିଓ"
#define CATEGORY_VIDEO_INFO_0_OR NULL
#define CATEGORY_INPUT_LABEL_OR NULL
#define CATEGORY_INPUT_INFO_0_OR NULL
#define CATEGORY_HACKS_LABEL_OR NULL
#define CATEGORY_HACKS_INFO_0_OR NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_OR NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_OR NULL
#define CATEGORY_CD_LABEL_OR NULL
#define CATEGORY_CD_INFO_0_OR NULL
#define PCE_FAST_PALETTE_LABEL_OR NULL
#define PCE_FAST_PALETTE_INFO_0_OR NULL
#define OPTION_VAL_RGB_OR NULL
#define OPTION_VAL_COMPOSITE_OR NULL
#define PCE_FAST_FRAMESKIP_LABEL_OR NULL
#define PCE_FAST_FRAMESKIP_INFO_0_OR NULL
#define OPTION_VAL_AUTO_OR NULL
#define OPTION_VAL_MANUAL_OR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_OR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_OR NULL
#define OPTION_VAL_33_OR NULL
#define PCE_FAST_HOVERSCAN_LABEL_OR NULL
#define PCE_FAST_HOVERSCAN_INFO_0_OR NULL
#define OPTION_VAL_352_OR NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_OR NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_3_OR NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_OR NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_OR NULL
#define OPTION_VAL_242_OR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_OR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_OR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_OR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_OR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_OR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_OR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_OR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_OR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_OR NULL
#define OPTION_VAL_0_25_OR NULL
#define OPTION_VAL_0_50_OR NULL
#define OPTION_VAL_0_75_OR NULL
#define OPTION_VAL_1_00_OR NULL
#define OPTION_VAL_1_25_OR NULL
#define OPTION_VAL_1_50_OR NULL
#define OPTION_VAL_1_75_OR NULL
#define OPTION_VAL_2_00_OR NULL
#define OPTION_VAL_2_25_OR NULL
#define OPTION_VAL_2_50_OR NULL
#define OPTION_VAL_2_75_OR NULL
#define OPTION_VAL_3_00_OR NULL
#define OPTION_VAL_3_25_OR NULL
#define OPTION_VAL_3_50_OR NULL
#define OPTION_VAL_3_75_OR NULL
#define OPTION_VAL_4_00_OR NULL
#define OPTION_VAL_4_25_OR NULL
#define OPTION_VAL_4_50_OR NULL
#define OPTION_VAL_4_75_OR NULL
#define OPTION_VAL_5_00_OR NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_OR NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR NULL
#define OPTION_VAL_2_BUTTONS_OR NULL
#define OPTION_VAL_6_BUTTONS_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_OR NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_OR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_OR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_OR NULL
#define PCE_FAST_TURBO_DELAY_LABEL_OR NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_OR NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_OR NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_OR NULL
#define PCE_FAST_CDBIOS_LABEL_OR NULL
#define PCE_FAST_CDBIOS_INFO_0_OR NULL
#define OPTION_VAL_GAMES_EXPRESS_OR NULL
#define OPTION_VAL_SYSTEM_CARD_1_OR NULL
#define OPTION_VAL_SYSTEM_CARD_2_OR NULL
#define OPTION_VAL_SYSTEM_CARD_3_OR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_OR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_OR NULL
#define PCE_FAST_CDSPEED_LABEL_OR NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_OR NULL
#define PCE_FAST_CDSPEED_INFO_0_OR NULL
#define OPTION_VAL_1_OR NULL
#define OPTION_VAL_2_OR NULL
#define OPTION_VAL_4_OR NULL
#define OPTION_VAL_8_OR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_OR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_OR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_OR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_OR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_OR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_OR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_OR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_OR NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_OR NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_OR NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_OR NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OR,
      CATEGORY_VIDEO_INFO_0_OR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OR,
      CATEGORY_INPUT_INFO_0_OR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OR,
      CATEGORY_HACKS_INFO_0_OR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_OR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_OR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OR,
      CATEGORY_CD_INFO_0_OR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_OR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_OR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OR },
         { "Composite", OPTION_VAL_COMPOSITE_OR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_OR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_OR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_OR },
         { "manual",   OPTION_VAL_MANUAL_OR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_OR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_OR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_OR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_OR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_OR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_OR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_OR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_OR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_OR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_OR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_OR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_OR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_OR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_OR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_OR },
         { "0.50", OPTION_VAL_0_50_OR },
         { "0.75", OPTION_VAL_0_75_OR },
         { "1.00", OPTION_VAL_1_00_OR },
         { "1.25", OPTION_VAL_1_25_OR },
         { "1.50", OPTION_VAL_1_50_OR },
         { "1.75", OPTION_VAL_1_75_OR },
         { "2.00", OPTION_VAL_2_00_OR },
         { "2.25", OPTION_VAL_2_25_OR },
         { "2.50", OPTION_VAL_2_50_OR },
         { "2.75", OPTION_VAL_2_75_OR },
         { "3.00", OPTION_VAL_3_00_OR },
         { "3.25", OPTION_VAL_3_25_OR },
         { "3.50", OPTION_VAL_3_50_OR },
         { "3.75", OPTION_VAL_3_75_OR },
         { "4.00", OPTION_VAL_4_00_OR },
         { "4.25", OPTION_VAL_4_25_OR },
         { "4.50", OPTION_VAL_4_50_OR },
         { "4.75", OPTION_VAL_4_75_OR },
         { "5.00", OPTION_VAL_5_00_OR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_OR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_OR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_OR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_OR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_OR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_OR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_OR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_OR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_OR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_OR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_OR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_OR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_OR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_OR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_OR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_OR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_OR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_OR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_OR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_OR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_OR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_OR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_OR,
      PCE_FAST_CDSPEED_LABEL_CAT_OR,
      PCE_FAST_CDSPEED_INFO_0_OR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_OR },
         { "2", OPTION_VAL_2_OR },
         { "4", OPTION_VAL_4_OR },
         { "8", OPTION_VAL_8_OR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_OR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_OR,
      PCE_FAST_ADPCMVOLUME_INFO_0_OR,
      PCE_FAST_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_OR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_OR,
      PCE_FAST_ADPCMVOLUME_INFO_0_OR,
      PCE_FAST_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_OR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_OR,
      PCE_FAST_ADPCMVOLUME_INFO_0_OR,
      PCE_FAST_ADPCMVOLUME_INFO_1_OR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_OR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_OR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_OR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL "Skonfiguruj przycinanie wyświetlania, pominięcie ramki i inne parametry wyjściowe obrazu."
#define CATEGORY_INPUT_LABEL_PL "Wejście"
#define CATEGORY_INPUT_INFO_0_PL NULL
#define CATEGORY_HACKS_LABEL_PL "Hacki emulacyjne"
#define CATEGORY_HACKS_INFO_0_PL "Skonfiguruj przetaktowanie procesora i dokładność emulacji wpływające na niską wydajność i kompatybilność."
#define CATEGORY_CHANNEL_VOLUME_LABEL_PL "Zaawansowane ustawienia głośności kanału"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_PL NULL
#define CATEGORY_CD_LABEL_PL NULL
#define CATEGORY_CD_INFO_0_PL "Skonfiguruj ustawienia związane z emulacją PC Engine CD."
#define PCE_FAST_PALETTE_LABEL_PL "Paleta kolorów"
#define PCE_FAST_PALETTE_INFO_0_PL NULL
#define OPTION_VAL_RGB_PL NULL
#define OPTION_VAL_COMPOSITE_PL "Kompozytowy"
#define PCE_FAST_FRAMESKIP_LABEL_PL "Pomijanie klatek"
#define PCE_FAST_FRAMESKIP_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_MANUAL_PL "Ręcznie"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PL "Próg pominięcia ramki (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PL "Gdy 'Frameskip' jest ustawiony na 'Manual', określa próg zajęcia bufora audio (procent) poniżej którego ramki zostaną pominięte. Wyższe wartości zmniejszają ryzyko trzasków poprzez częstsze opuszczanie ramek."
#define OPTION_VAL_33_PL "33 (domyślnie)"
#define PCE_FAST_HOVERSCAN_LABEL_PL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_PL "Wybierz maksymalną szerokość obrazu, która ma być wyświetlana. Niższe wartości będą przycinać prawą stronę obrazu (dla gier 352 px szerokości)."
#define OPTION_VAL_352_PL "352 (domyślnie)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_PL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_3_PL "3 (domyślnie)"
#define PCE_FAST_LAST_SCANLINE_LABEL_PL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_PL NULL
#define OPTION_VAL_242_PL "242 (domyślnie)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_PL "Czułość myszy"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PL "Wyższe wartości sprawią, że kursor myszy będzie się szybszy."
#define OPTION_VAL_0_25_PL NULL
#define OPTION_VAL_0_50_PL NULL
#define OPTION_VAL_0_75_PL NULL
#define OPTION_VAL_1_00_PL NULL
#define OPTION_VAL_1_25_PL NULL
#define OPTION_VAL_1_50_PL NULL
#define OPTION_VAL_1_75_PL NULL
#define OPTION_VAL_2_00_PL NULL
#define OPTION_VAL_2_25_PL NULL
#define OPTION_VAL_2_50_PL NULL
#define OPTION_VAL_2_75_PL NULL
#define OPTION_VAL_3_00_PL NULL
#define OPTION_VAL_3_25_PL NULL
#define OPTION_VAL_3_50_PL NULL
#define OPTION_VAL_3_75_PL NULL
#define OPTION_VAL_4_00_PL NULL
#define OPTION_VAL_4_25_PL NULL
#define OPTION_VAL_4_50_PL NULL
#define OPTION_VAL_4_75_PL NULL
#define OPTION_VAL_5_00_PL NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_PL "Wyłącz resetowanie systemu (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_PL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL "Domyślny typ Joypad P1"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL NULL
#define OPTION_VAL_2_BUTTONS_PL "2 przyciski"
#define OPTION_VAL_6_BUTTONS_PL "6 przycisków"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL "Domyślny typ Joypad P2"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL "Domyślny typ Joypad P3"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL "P4 Domyślny typ Joypad"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_PL "Przełącz Turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_PL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PL "Alternatywny skrót Turbo"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_PL "Opóźnienie Turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_PL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_PL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_PL NULL
#define PCE_FAST_CDBIOS_LABEL_PL "CD BIOS (wymagany restart)"
#define PCE_FAST_CDBIOS_INFO_0_PL NULL
#define OPTION_VAL_GAMES_EXPRESS_PL NULL
#define OPTION_VAL_SYSTEM_CARD_1_PL "Karta systemowa 1"
#define OPTION_VAL_SYSTEM_CARD_2_PL "Karta systemowa 2"
#define OPTION_VAL_SYSTEM_CARD_3_PL "Karta systemowa 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_PL "Karta systemowa 2 USA"
#define OPTION_VAL_SYSTEM_CARD_3_US_PL "Karta systemowa 3 USA"
#define PCE_FAST_CDSPEED_LABEL_PL "(CD) Prędkość CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_PL "Prędkość CD"
#define PCE_FAST_CDSPEED_INFO_0_PL "Wyższe wartości umożliwiają szybsze ładowanie, ale mogą powodować problemy z kilkoma grami."
#define OPTION_VAL_1_PL NULL
#define OPTION_VAL_2_PL NULL
#define OPTION_VAL_4_PL NULL
#define OPTION_VAL_8_PL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_PL "(CD) Głośność ADPCM %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_PL "Głośność ADPCM %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_PL "Tylko gra CD. Ustawienie tej kontroli głośności może spowodować przycinanie próbki."
#define PCE_FAST_ADPCMVOLUME_INFO_1_PL "Ustawienie zbyt dużej regulacji głośności może spowodować przycinanie próbki."
#define PCE_FAST_CDDAVOLUME_LABEL_PL "(CD) Głośność CDDA %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_PL "Głośność CDDA %"
#define PCE_FAST_CDPSGVOLUME_LABEL_PL "(CD) Głośność PSG %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_PL "Głośność CD PSG %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_PL "Bez limitu Sprite'ów"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_PL NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_PL "Mnożnik podkręcania CPU (wymagany restart)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PL,
      CATEGORY_HACKS_INFO_0_PL
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_PL,
      CATEGORY_CHANNEL_VOLUME_INFO_0_PL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PL,
      CATEGORY_CD_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_PL,
      NULL,
      PCE_FAST_PALETTE_INFO_0_PL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PL },
         { "Composite", OPTION_VAL_COMPOSITE_PL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_PL,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_PL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PL },
         { "manual",   OPTION_VAL_MANUAL_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PL,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PL,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_PL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_PL,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_PL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_PL,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_PL,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_PL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_PL,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PL },
         { "0.50", OPTION_VAL_0_50_PL },
         { "0.75", OPTION_VAL_0_75_PL },
         { "1.00", OPTION_VAL_1_00_PL },
         { "1.25", OPTION_VAL_1_25_PL },
         { "1.50", OPTION_VAL_1_50_PL },
         { "1.75", OPTION_VAL_1_75_PL },
         { "2.00", OPTION_VAL_2_00_PL },
         { "2.25", OPTION_VAL_2_25_PL },
         { "2.50", OPTION_VAL_2_50_PL },
         { "2.75", OPTION_VAL_2_75_PL },
         { "3.00", OPTION_VAL_3_00_PL },
         { "3.25", OPTION_VAL_3_25_PL },
         { "3.50", OPTION_VAL_3_50_PL },
         { "3.75", OPTION_VAL_3_75_PL },
         { "4.00", OPTION_VAL_4_00_PL },
         { "4.25", OPTION_VAL_4_25_PL },
         { "4.50", OPTION_VAL_4_50_PL },
         { "4.75", OPTION_VAL_4_75_PL },
         { "5.00", OPTION_VAL_5_00_PL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_PL,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_PL,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_PL,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PL,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_PL,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_PL,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_PL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_PL,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_PL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_PL,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_PL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_PL,
      PCE_FAST_CDSPEED_LABEL_CAT_PL,
      PCE_FAST_CDSPEED_INFO_0_PL,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_PL },
         { "2", OPTION_VAL_2_PL },
         { "4", OPTION_VAL_4_PL },
         { "8", OPTION_VAL_8_PL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_PL,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_PL,
      PCE_FAST_ADPCMVOLUME_INFO_0_PL,
      PCE_FAST_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_PL,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_PL,
      PCE_FAST_ADPCMVOLUME_INFO_0_PL,
      PCE_FAST_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_PL,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_PL,
      PCE_FAST_ADPCMVOLUME_INFO_0_PL,
      PCE_FAST_ADPCMVOLUME_INFO_1_PL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_PL,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_PL,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR "Configura os parâmetros do recorte de exibição, pulo de quadros e outras saídas de imagem."
#define CATEGORY_INPUT_LABEL_PT_BR "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_BR "Configura a entrada da pistola de luz, mouse e NegCon."
#define CATEGORY_HACKS_LABEL_PT_BR "Hacks de emulação"
#define CATEGORY_HACKS_INFO_0_PT_BR "Configure os parâmetros de precisão de overclock e emulação do processador que afetam o baixo desempenho e a compatibilidade."
#define CATEGORY_CHANNEL_VOLUME_LABEL_PT_BR "Configurações avançadas de volume de canais"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_PT_BR "Configure o volume dos canais individuais de áudio do hardware."
#define CATEGORY_CD_LABEL_PT_BR "CD do PC Engine"
#define CATEGORY_CD_INFO_0_PT_BR "Altera as configurações relacionadas à emulação de CD do PC Engine."
#define PCE_FAST_PALETTE_LABEL_PT_BR "Paleta de cores"
#define PCE_FAST_PALETTE_INFO_0_PT_BR "Vídeo composto tenta recriar a saída original do console e pode exibir mais detalhes em alguns jogos."
#define OPTION_VAL_RGB_PT_BR NULL
#define OPTION_VAL_COMPOSITE_PT_BR "Vídeo composto"
#define PCE_FAST_FRAMESKIP_LABEL_PT_BR "Pulo de quadro"
#define PCE_FAST_FRAMESKIP_INFO_0_PT_BR "Ignora quadros para evitar o esvaziamento do buffer do áudio (pipocos no áudio). Melhora o desempenho ao custo da suavidade visual. A opção 'Auto' ignora os quadros quando for aconselhado pela interface. Já 'Manual' utiliza a configuração 'Limite do salto de quadros (%)'."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_MANUAL_PT_BR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PT_BR "Limite de pulo de quadro (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PT_BR "Quando o 'Frameskip' for definido como 'Manual', especifica o limite de ocupação do buffer de áudio (em porcentagem) abaixo do qual os quadros serão pulados. Valores maiores reduzem o risco de engasgos pois farão que os quadros sejam descartados com mais frequência."
#define OPTION_VAL_33_PT_BR "33 (padrão)"
#define PCE_FAST_HOVERSCAN_LABEL_PT_BR "Overscan horizontal (somente no modo 352 de largura)"
#define PCE_FAST_HOVERSCAN_INFO_0_PT_BR "Seleciona a largura máxima da imagem que será exibida. Valores menores cortam o lado direito da imagem (em jogos com largura de 352px)."
#define OPTION_VAL_352_PT_BR "352 (padrão)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_PT_BR "Linha de verificação inicial"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_PT_BR "Primeira linha de verificação renderizada. Valores maiores cortarão a parte superior da imagem."
#define OPTION_VAL_3_PT_BR "3 (padrão)"
#define PCE_FAST_LAST_SCANLINE_LABEL_PT_BR "Linha de verificação final"
#define PCE_FAST_LAST_SCANLINE_INFO_0_PT_BR "Última linha de verificação renderizada. Valores menores cortarão a parte inferior da imagem."
#define OPTION_VAL_242_PT_BR "242 (padrão)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PT_BR "Volume do canal de som 0 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 0 do PSG."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PT_BR "Volume do canal de som 1 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 1 do PSG."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PT_BR "Volume do canal de som 2 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 2 do PSG."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PT_BR "Volume do canal de som 3 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 3 do PSG."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PT_BR "Volume do canal de som 4 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 4 do PSG."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PT_BR "Volume do canal de som 5 do PSG (%)"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PT_BR "Modifica o volume do canal de som 5 do PSG."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_PT_BR "Sensibilidade do mouse"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PT_BR "Valores maiores tornarão a movimentação do cursor do mouse mais rápida."
#define OPTION_VAL_0_25_PT_BR "0,25"
#define OPTION_VAL_0_50_PT_BR "0,50"
#define OPTION_VAL_0_75_PT_BR "0,75"
#define OPTION_VAL_1_00_PT_BR "1,00"
#define OPTION_VAL_1_25_PT_BR "1,25"
#define OPTION_VAL_1_50_PT_BR "1,50"
#define OPTION_VAL_1_75_PT_BR "1,75"
#define OPTION_VAL_2_00_PT_BR "2,00"
#define OPTION_VAL_2_25_PT_BR "2,25"
#define OPTION_VAL_2_50_PT_BR "2,50"
#define OPTION_VAL_2_75_PT_BR "2,75"
#define OPTION_VAL_3_00_PT_BR "3,00"
#define OPTION_VAL_3_25_PT_BR "3,25"
#define OPTION_VAL_3_50_PT_BR "3,50"
#define OPTION_VAL_3_75_PT_BR "3,75"
#define OPTION_VAL_4_00_PT_BR "4,00"
#define OPTION_VAL_4_25_PT_BR "4,25"
#define OPTION_VAL_4_50_PT_BR "4,50"
#define OPTION_VAL_4_75_PT_BR "4,75"
#define OPTION_VAL_5_00_PT_BR "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_PT_BR "Desativar a reinicialização suave (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_PT_BR "Ao pressionar RUN e SELECT simultaneamente, desativa ambos os botões temporariamente em vez de reinicializar."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR NULL
#define OPTION_VAL_2_BUTTONS_PT_BR NULL
#define OPTION_VAL_6_BUTTONS_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_PT_BR "Ativar e desativar o turbo"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_PT_BR "Ativa os atalhos de ligar e desligar o turbo (botões III e IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR "Atalho alternativo do turbo"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR "Atribui os botões L3 e R3 do RetroPad como atalhos de ativação e desativação do turbo, em vez dos botões III e IV. Você pode evitar o remapeamento dos botões III e IV ao alterar para o modo de controle de 6 botões com isso."
#define PCE_FAST_TURBO_DELAY_LABEL_PT_BR "Atraso do turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_PT_BR "Ajusta o intervalo entre as ativações do turbo (em quadros)."
#define PCE_FAST_CDIMAGECACHE_LABEL_PT_BR "Cache de imagens do CD (requer reinício)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_PT_BR "Carrega a imagem completa na memória na inicialização. Eventualmente, pode diminuir o tempo de carregamento ao custo de um tempo de inicialização maior."
#define PCE_FAST_CDBIOS_LABEL_PT_BR "BIOS de CD (requer reinício)"
#define PCE_FAST_CDBIOS_INFO_0_PT_BR "A maioria dos jogos podem rodar em \"System Card 3\". \"Games Express\" é necessário para vários jogos não licenciados."
#define OPTION_VAL_GAMES_EXPRESS_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_BR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_BR "System Card 2 — EUA"
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_BR "System Card 3 — EUA"
#define PCE_FAST_CDSPEED_LABEL_PT_BR "(CD) Velocidade do CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_PT_BR "Velocidade do CD"
#define PCE_FAST_CDSPEED_INFO_0_PT_BR "Valores maiores permitem carregar mais rápido, mas podem causar problemas em alguns jogos."
#define OPTION_VAL_1_PT_BR NULL
#define OPTION_VAL_2_PT_BR NULL
#define OPTION_VAL_4_PT_BR NULL
#define OPTION_VAL_8_PT_BR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_PT_BR "(CD) Volume do ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_PT_BR "Volume do ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_INFO_0_PT_BR "Somente em CD. Definir o controle de volume muito alto pode causar cortes de amostra."
#define PCE_FAST_ADPCMVOLUME_INFO_1_PT_BR "Definir o controle de volume muito alto pode causar cortes de amostra."
#define PCE_FAST_CDDAVOLUME_LABEL_PT_BR "(CD) Volume do CDDA (%)"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_PT_BR "Volume do CDDA (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_PT_BR "(CD) Volume do PSG (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_PT_BR "Volume do PSG de CD (%)"
#define PCE_FAST_NOSPRITELIMIT_LABEL_PT_BR "Sem limite de sprite"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_PT_BR "Remove o limite de hardware de 16 sprites por linha de verificação. ATENÇÃO: pode causar falhas gráficas em alguns jogos."
#define PCE_FAST_OCMULTIPLIER_LABEL_PT_BR "Multiplicador do Overclock de CPU (requer reinício)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_PT_BR "Valores maiores podem reduzir a lentidão em jogos. ATENÇÃO: podem causar falhas e fechar o jogo."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_BR,
      CATEGORY_HACKS_INFO_0_PT_BR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_PT_BR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_PT_BR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_BR,
      CATEGORY_CD_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_PT_BR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_BR },
         { "Composite", OPTION_VAL_COMPOSITE_PT_BR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_PT_BR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_BR },
         { "manual",   OPTION_VAL_MANUAL_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PT_BR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_PT_BR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_PT_BR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PT_BR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_BR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_PT_BR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_BR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PT_BR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PT_BR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_PT_BR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PT_BR },
         { "0.50", OPTION_VAL_0_50_PT_BR },
         { "0.75", OPTION_VAL_0_75_PT_BR },
         { "1.00", OPTION_VAL_1_00_PT_BR },
         { "1.25", OPTION_VAL_1_25_PT_BR },
         { "1.50", OPTION_VAL_1_50_PT_BR },
         { "1.75", OPTION_VAL_1_75_PT_BR },
         { "2.00", OPTION_VAL_2_00_PT_BR },
         { "2.25", OPTION_VAL_2_25_PT_BR },
         { "2.50", OPTION_VAL_2_50_PT_BR },
         { "2.75", OPTION_VAL_2_75_PT_BR },
         { "3.00", OPTION_VAL_3_00_PT_BR },
         { "3.25", OPTION_VAL_3_25_PT_BR },
         { "3.50", OPTION_VAL_3_50_PT_BR },
         { "3.75", OPTION_VAL_3_75_PT_BR },
         { "4.00", OPTION_VAL_4_00_PT_BR },
         { "4.25", OPTION_VAL_4_25_PT_BR },
         { "4.50", OPTION_VAL_4_50_PT_BR },
         { "4.75", OPTION_VAL_4_75_PT_BR },
         { "5.00", OPTION_VAL_5_00_PT_BR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_PT_BR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_PT_BR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_BR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_BR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_BR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_BR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_BR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_BR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_BR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_PT_BR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PT_BR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_PT_BR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_PT_BR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_PT_BR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_PT_BR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_BR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_BR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_BR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_BR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_BR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_BR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_PT_BR,
      PCE_FAST_CDSPEED_LABEL_CAT_PT_BR,
      PCE_FAST_CDSPEED_INFO_0_PT_BR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_PT_BR },
         { "2", OPTION_VAL_2_PT_BR },
         { "4", OPTION_VAL_4_PT_BR },
         { "8", OPTION_VAL_8_PT_BR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_PT_BR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_PT_BR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_PT_BR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_BR,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_BR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_PT_BR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT "Entrada"
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_HACKS_LABEL_PT_PT NULL
#define CATEGORY_HACKS_INFO_0_PT_PT NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_PT_PT NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_PT_PT NULL
#define CATEGORY_CD_LABEL_PT_PT NULL
#define CATEGORY_CD_INFO_0_PT_PT NULL
#define PCE_FAST_PALETTE_LABEL_PT_PT NULL
#define PCE_FAST_PALETTE_INFO_0_PT_PT NULL
#define OPTION_VAL_RGB_PT_PT NULL
#define OPTION_VAL_COMPOSITE_PT_PT NULL
#define PCE_FAST_FRAMESKIP_LABEL_PT_PT NULL
#define PCE_FAST_FRAMESKIP_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define OPTION_VAL_MANUAL_PT_PT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PT_PT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PT_PT NULL
#define OPTION_VAL_33_PT_PT "33 (Padrão)"
#define PCE_FAST_HOVERSCAN_LABEL_PT_PT NULL
#define PCE_FAST_HOVERSCAN_INFO_0_PT_PT NULL
#define OPTION_VAL_352_PT_PT "352 (Padrão)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT "3 (Padrão)"
#define PCE_FAST_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT "242 (Padrão)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PT_PT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_PT_PT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PT_PT NULL
#define OPTION_VAL_0_25_PT_PT NULL
#define OPTION_VAL_0_50_PT_PT NULL
#define OPTION_VAL_0_75_PT_PT NULL
#define OPTION_VAL_1_00_PT_PT NULL
#define OPTION_VAL_1_25_PT_PT NULL
#define OPTION_VAL_1_50_PT_PT NULL
#define OPTION_VAL_1_75_PT_PT NULL
#define OPTION_VAL_2_00_PT_PT NULL
#define OPTION_VAL_2_25_PT_PT NULL
#define OPTION_VAL_2_50_PT_PT NULL
#define OPTION_VAL_2_75_PT_PT NULL
#define OPTION_VAL_3_00_PT_PT NULL
#define OPTION_VAL_3_25_PT_PT NULL
#define OPTION_VAL_3_50_PT_PT NULL
#define OPTION_VAL_3_75_PT_PT NULL
#define OPTION_VAL_4_00_PT_PT NULL
#define OPTION_VAL_4_25_PT_PT NULL
#define OPTION_VAL_4_50_PT_PT NULL
#define OPTION_VAL_4_75_PT_PT NULL
#define OPTION_VAL_5_00_PT_PT NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_PT_PT NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT NULL
#define OPTION_VAL_2_BUTTONS_PT_PT NULL
#define OPTION_VAL_6_BUTTONS_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT NULL
#define PCE_FAST_TURBO_DELAY_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_PT_PT NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_PT_PT "Cache da Imagem do CD (Reinicialização necessária)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_PT_PT NULL
#define PCE_FAST_CDBIOS_LABEL_PT_PT "BIOS do CD (Reinicialização necessária)"
#define PCE_FAST_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT "Cartão de Sistema 1"
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT "Cartão de Sistema 2"
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT "Cartão de Sistema 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_PT "Cartão de Sistema 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_PT "Cartão de Sistema 3 US"
#define PCE_FAST_CDSPEED_LABEL_PT_PT "(CD) Velocidade do CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_PT_PT "Velocidade do CD"
#define PCE_FAST_CDSPEED_INFO_0_PT_PT NULL
#define OPTION_VAL_1_PT_PT NULL
#define OPTION_VAL_2_PT_PT NULL
#define OPTION_VAL_4_PT_PT NULL
#define OPTION_VAL_8_PT_PT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_PT_PT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_PT_PT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_PT_PT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_PT_PT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_PT_PT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_PT_PT NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_PT_PT NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_PT_PT NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_PT,
      CATEGORY_HACKS_INFO_0_PT_PT
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_PT_PT,
      CATEGORY_CHANNEL_VOLUME_INFO_0_PT_PT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_PT_PT,
      CATEGORY_CD_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_PT_PT,
      NULL,
      PCE_FAST_PALETTE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_PT_PT },
         { "Composite", OPTION_VAL_COMPOSITE_PT_PT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_PT_PT,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_PT },
         { "manual",   OPTION_VAL_MANUAL_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PT_PT,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_PT_PT },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_PT_PT,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_PT_PT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_PT_PT },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_PT_PT,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_PT_PT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_PT_PT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_PT_PT,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_PT_PT,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_PT_PT },
         { "0.50", OPTION_VAL_0_50_PT_PT },
         { "0.75", OPTION_VAL_0_75_PT_PT },
         { "1.00", OPTION_VAL_1_00_PT_PT },
         { "1.25", OPTION_VAL_1_25_PT_PT },
         { "1.50", OPTION_VAL_1_50_PT_PT },
         { "1.75", OPTION_VAL_1_75_PT_PT },
         { "2.00", OPTION_VAL_2_00_PT_PT },
         { "2.25", OPTION_VAL_2_25_PT_PT },
         { "2.50", OPTION_VAL_2_50_PT_PT },
         { "2.75", OPTION_VAL_2_75_PT_PT },
         { "3.00", OPTION_VAL_3_00_PT_PT },
         { "3.25", OPTION_VAL_3_25_PT_PT },
         { "3.50", OPTION_VAL_3_50_PT_PT },
         { "3.75", OPTION_VAL_3_75_PT_PT },
         { "4.00", OPTION_VAL_4_00_PT_PT },
         { "4.25", OPTION_VAL_4_25_PT_PT },
         { "4.50", OPTION_VAL_4_50_PT_PT },
         { "4.75", OPTION_VAL_4_75_PT_PT },
         { "5.00", OPTION_VAL_5_00_PT_PT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_PT_PT,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_PT_PT,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_PT_PT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_PT_PT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_PT_PT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_PT_PT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_PT_PT,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_PT_PT },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_PT_PT },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_PT_PT,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_PT_PT,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_PT_PT },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_PT_PT,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_PT_PT,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_PT_PT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_PT_PT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_PT_PT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_PT_PT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_PT_PT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_PT_PT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_PT_PT,
      PCE_FAST_CDSPEED_LABEL_CAT_PT_PT,
      PCE_FAST_CDSPEED_INFO_0_PT_PT,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_PT_PT },
         { "2", OPTION_VAL_2_PT_PT },
         { "4", OPTION_VAL_4_PT_PT },
         { "8", OPTION_VAL_8_PT_PT },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_PT_PT,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_PT_PT,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_PT_PT,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_0_PT_PT,
      PCE_FAST_ADPCMVOLUME_INFO_1_PT_PT,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_PT_PT,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU "Настройки кадрирования, пропуска кадров и других параметров изображения."
#define CATEGORY_INPUT_LABEL_RU "Ввод"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для светового пистолета, мыши и NegCon."
#define CATEGORY_HACKS_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACKS_INFO_0_RU "Настройка разгона процессора и параметров точности эмуляции, влияющих на производительность и совместимость."
#define CATEGORY_CHANNEL_VOLUME_LABEL_RU "Расширенные настройки громкости"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_RU "Индивидуальная настройка громкости аудиоканалов."
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU "Настройка параметров, относящихся к эмуляции PC Engine CD."
#define PCE_FAST_PALETTE_LABEL_RU "Цветовая палитра"
#define PCE_FAST_PALETTE_INFO_0_RU "Композитный режим имитирует оригинальное изображение с консоли и повышает детализацию для некоторых игр."
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU "Композит"
#define PCE_FAST_FRAMESKIP_LABEL_RU "Пропуск кадров"
#define PCE_FAST_FRAMESKIP_INFO_0_RU "Пропускать кадры, чтобы избежать появления треска при опустошении аудиобуфера. Улучшает производительность, но снижает плавность изображения. В режиме 'Авто' пропуск кадров регулируется фронтендом. В режиме 'Вручную' используется значение опции 'Граница пропуска кадров (%)'."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_MANUAL_RU "Вручную"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_RU "Граница пропуска кадров (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_RU "Устанавливает порог заполнения аудиобуфера (в процентах), ниже которого будет включаться пропуск кадров, если для параметра 'Пропуск кадров' выбран режим 'Вручную'. Большие значения снижают вероятность появления треска за счёт более частого пропуска кадров."
#define OPTION_VAL_33_RU "33 (по умолчанию)"
#define PCE_FAST_HOVERSCAN_LABEL_RU "Горизонт. вылеты развёртки (только для режима ширины 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_RU "Установка максимальной ширины изображения. Уменьшение значения обрезает правый край картинки (для игр с шириной в 352 пикселя)."
#define OPTION_VAL_352_RU "352 (по умолчанию)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_RU "Первая строка развёртки"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая первой. Повышение значения обрезает верхний край картинки."
#define OPTION_VAL_3_RU "3 (по умолчанию)"
#define PCE_FAST_LAST_SCANLINE_LABEL_RU "Последняя строка развёртки"
#define PCE_FAST_LAST_SCANLINE_INFO_0_RU "Строка развёртки, отображаемая последней. Уменьшение значения обрезает нижний край картинки."
#define OPTION_VAL_242_RU "242 (по умолчанию)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_RU "Громкость звукового канала PSG 0 (%)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 0."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_RU "Громкость звукового канала PSG 1 (%)"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 1."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_RU "Громкость звукового канала PSG 2 (%)"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 2."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_RU "Громкость звукового канала PSG 3 (%)"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 3."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_RU "Громкость звукового канала PSG 4 (%)"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 4."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_RU "Громкость звукового канала PSG 5 (%)"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_RU "Изменение громкости звукового канала PSG 5."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_RU "Более высокие значения повышают скорость перемещения курсора мыши."
#define OPTION_VAL_0_25_RU NULL
#define OPTION_VAL_0_50_RU NULL
#define OPTION_VAL_0_75_RU "CONTEXTREQUEST"
#define OPTION_VAL_1_00_RU NULL
#define OPTION_VAL_1_25_RU NULL
#define OPTION_VAL_1_50_RU NULL
#define OPTION_VAL_1_75_RU NULL
#define OPTION_VAL_2_00_RU NULL
#define OPTION_VAL_2_25_RU NULL
#define OPTION_VAL_2_50_RU NULL
#define OPTION_VAL_2_75_RU NULL
#define OPTION_VAL_3_00_RU NULL
#define OPTION_VAL_3_25_RU NULL
#define OPTION_VAL_3_50_RU NULL
#define OPTION_VAL_3_75_RU NULL
#define OPTION_VAL_4_00_RU NULL
#define OPTION_VAL_4_25_RU NULL
#define OPTION_VAL_4_50_RU NULL
#define OPTION_VAL_4_75_RU NULL
#define OPTION_VAL_5_00_RU NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_RU "Отключить мягкий сброс (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_RU "Одновременное нажатие RUN и SELECT вместо сброса будет временно отключать обе кнопки."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU "Тип джойстика Игрока 1"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 1. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define OPTION_VAL_2_BUTTONS_RU "2-кнопочный"
#define OPTION_VAL_6_BUTTONS_RU "6-кнопочный"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU "Тип джойстика Игрока 2"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 2. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU "Тип джойстика Игрока 3"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 3. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU "Тип джойстика Игрока 4"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 4. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU "Тип джойстика Игрока 5"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU "Выбор 2- или 6-ти кнопочного контроллера по умолчанию для порта 5. Данная опция применяется только при запуске ядра. Для переключения на лету используйте кнопку 'Сменить режим'. ВНИМАНИЕ: в несовместимых играх 6-кнопочный геймпад может вызывать баги управления."
#define PCE_FAST_TURBO_TOGGLING_LABEL_RU "Переключатель турбо"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_RU "Активирует горячие клавиши для включения турбо (кнопки III и IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_RU "Альтернативное включение турбо"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_RU "Назначает кнопки RetroPad'а L3/R3 в качестве горячих клавиш для включения турбо вместо кнопок III и IV. Работает только при отсутствии привязок к кнопкам L3/R3. Позволяет избежать переназначения кнопок III и IV в режиме 6-кнопочного контроллера."
#define PCE_FAST_TURBO_DELAY_LABEL_RU "Задержка турбо"
#define PCE_FAST_TURBO_DELAY_INFO_0_RU "Настраивает промежуток между повторами нажатий (в кадрах)."
#define PCE_FAST_CDIMAGECACHE_LABEL_RU "Кэшировать образ CD (требуется перезапуск)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_RU "При запуске образ диска полностью загружается в память. Ускоряет загрузки, но увеличивает время запуска."
#define PCE_FAST_CDBIOS_LABEL_RU "BIOS CD (требуется перезапуск)"
#define PCE_FAST_CDBIOS_INFO_0_RU "Большинство игр запускаются с 'System Card 3'. 'Games Express' требуется для некоторых нелицензированных игр."
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RU NULL
#define PCE_FAST_CDSPEED_LABEL_RU "(CD) Скорость CD"
#define PCE_FAST_CDSPEED_LABEL_CAT_RU "Cкорость CD"
#define PCE_FAST_CDSPEED_INFO_0_RU "Более высокие значения ускоряют загрузки, но могут вызывать проблемы в отдельных играх."
#define OPTION_VAL_1_RU NULL
#define OPTION_VAL_2_RU NULL
#define OPTION_VAL_4_RU NULL
#define OPTION_VAL_8_RU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_RU "(CD) Громкость ADPCM"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_RU "Громкость ADPCM (%)"
#define PCE_FAST_ADPCMVOLUME_INFO_0_RU "Только для CD-игр. Слишком высокие значения могут приводить к искажениям звука."
#define PCE_FAST_ADPCMVOLUME_INFO_1_RU "Слишком высокие значения могут приводить к искажениям звука."
#define PCE_FAST_CDDAVOLUME_LABEL_RU "(CD) Громкость CDDA"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_RU "Громкость CDDA (%)"
#define PCE_FAST_CDPSGVOLUME_LABEL_RU "(CD) Громкость PSG"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_RU "Громкость PSG (%)"
#define PCE_FAST_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_RU "Снимает аппаратное ограничение в 16 спрайтов на линии развёртки. ВНИМАНИЕ: в некоторых играх может вызывать графические баги."
#define PCE_FAST_OCMULTIPLIER_LABEL_RU "Множитель разгона CPU (требуется перезапуск)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_RU "Более высокие значения уменьшают замедления в играх. ВНИМАНИЕ: может приводить к багам и вылетам."

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RU,
      CATEGORY_HACKS_INFO_0_RU
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_RU,
      CATEGORY_CHANNEL_VOLUME_INFO_0_RU
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RU,
      CATEGORY_CD_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_RU,
      NULL,
      PCE_FAST_PALETTE_INFO_0_RU,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RU },
         { "Composite", OPTION_VAL_COMPOSITE_RU },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_RU,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_RU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RU },
         { "manual",   OPTION_VAL_MANUAL_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_RU,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_RU,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_RU },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_RU,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_RU,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_RU },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_RU,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RU },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_RU,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_RU,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_RU },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_RU,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_RU,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_RU,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_RU,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_RU },
         { "0.50", OPTION_VAL_0_50_RU },
         { "0.75", OPTION_VAL_0_75_RU },
         { "1.00", OPTION_VAL_1_00_RU },
         { "1.25", OPTION_VAL_1_25_RU },
         { "1.50", OPTION_VAL_1_50_RU },
         { "1.75", OPTION_VAL_1_75_RU },
         { "2.00", OPTION_VAL_2_00_RU },
         { "2.25", OPTION_VAL_2_25_RU },
         { "2.50", OPTION_VAL_2_50_RU },
         { "2.75", OPTION_VAL_2_75_RU },
         { "3.00", OPTION_VAL_3_00_RU },
         { "3.25", OPTION_VAL_3_25_RU },
         { "3.50", OPTION_VAL_3_50_RU },
         { "3.75", OPTION_VAL_3_75_RU },
         { "4.00", OPTION_VAL_4_00_RU },
         { "4.25", OPTION_VAL_4_25_RU },
         { "4.50", OPTION_VAL_4_50_RU },
         { "4.75", OPTION_VAL_4_75_RU },
         { "5.00", OPTION_VAL_5_00_RU },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_RU,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_RU,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_RU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_RU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_RU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_RU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_RU,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_RU,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_RU },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_RU },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_RU,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_RU,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_RU,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_RU,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_RU },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_RU,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_RU,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_RU,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_RU,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RU },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RU },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RU },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RU },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_RU },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_RU },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_RU,
      PCE_FAST_CDSPEED_LABEL_CAT_RU,
      PCE_FAST_CDSPEED_INFO_0_RU,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_RU },
         { "2", OPTION_VAL_2_RU },
         { "4", OPTION_VAL_4_RU },
         { "8", OPTION_VAL_8_RU },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_RU,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_RU,
      PCE_FAST_ADPCMVOLUME_INFO_0_RU,
      PCE_FAST_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_RU,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_RU,
      PCE_FAST_ADPCMVOLUME_INFO_0_RU,
      PCE_FAST_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_RU,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_RU,
      PCE_FAST_ADPCMVOLUME_INFO_0_RU,
      PCE_FAST_ADPCMVOLUME_INFO_1_RU,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_RU,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_RU,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK "Emulačné hacky"
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_SK NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define PCE_FAST_PALETTE_LABEL_SK "Farebná paleta"
#define PCE_FAST_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK "Kompozit"
#define PCE_FAST_FRAMESKIP_LABEL_SK "Preskočenie snímky"
#define PCE_FAST_FRAMESKIP_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_MANUAL_SK "Ručne"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SK "Prah preskočenia snímky (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SK "Ak je 'Preskočenie snímkov' nastavené na 'Ručne', určuje obsadenosť zvukového zásobníka (v percentách) pod ktorou budú snímky preskočené. Vyššie hodnoty znižujú riziko praskania za cenu zahodenia snímkov častejšie."
#define OPTION_VAL_33_SK "33 (predvolené)"
#define PCE_FAST_HOVERSCAN_LABEL_SK NULL
#define PCE_FAST_HOVERSCAN_INFO_0_SK NULL
#define OPTION_VAL_352_SK "352 (predvolené)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SK NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK "3 (predvolené)"
#define PCE_FAST_LAST_SCANLINE_LABEL_SK NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK "242 (predvolené)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SK NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SK NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SK NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SK NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SK NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SK NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SK NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SK "Citlivosť myši"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SK NULL
#define OPTION_VAL_0_25_SK NULL
#define OPTION_VAL_0_50_SK NULL
#define OPTION_VAL_0_75_SK NULL
#define OPTION_VAL_1_00_SK NULL
#define OPTION_VAL_1_25_SK NULL
#define OPTION_VAL_1_50_SK NULL
#define OPTION_VAL_1_75_SK NULL
#define OPTION_VAL_2_00_SK NULL
#define OPTION_VAL_2_25_SK NULL
#define OPTION_VAL_2_50_SK NULL
#define OPTION_VAL_2_75_SK NULL
#define OPTION_VAL_3_00_SK NULL
#define OPTION_VAL_3_25_SK NULL
#define OPTION_VAL_3_50_SK NULL
#define OPTION_VAL_3_75_SK NULL
#define OPTION_VAL_4_00_SK NULL
#define OPTION_VAL_4_25_SK NULL
#define OPTION_VAL_4_50_SK NULL
#define OPTION_VAL_4_75_SK NULL
#define OPTION_VAL_5_00_SK NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_SK NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK NULL
#define OPTION_VAL_2_BUTTONS_SK "2 tlačidlá"
#define OPTION_VAL_6_BUTTONS_SK "6 tlačidiel"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_SK NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SK NULL
#define PCE_FAST_TURBO_DELAY_LABEL_SK "Trvanie Turbo"
#define PCE_FAST_TURBO_DELAY_INFO_0_SK NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_SK NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_SK NULL
#define PCE_FAST_CDBIOS_LABEL_SK NULL
#define PCE_FAST_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK "Systémová karta 1"
#define OPTION_VAL_SYSTEM_CARD_2_SK "Systémová karta 2"
#define OPTION_VAL_SYSTEM_CARD_3_SK "Systémová karta 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_SK "Systémová karta 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_SK "Systémová karta 3 US"
#define PCE_FAST_CDSPEED_LABEL_SK "(CD) CD rýchlosť"
#define PCE_FAST_CDSPEED_LABEL_CAT_SK "CD rýchlosť"
#define PCE_FAST_CDSPEED_INFO_0_SK NULL
#define OPTION_VAL_1_SK NULL
#define OPTION_VAL_2_SK NULL
#define OPTION_VAL_4_SK NULL
#define OPTION_VAL_8_SK NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SK "(CD) ADPCM hlasitosť %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SK "ADPCM hlasitosť %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_SK NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_SK NULL
#define PCE_FAST_CDDAVOLUME_LABEL_SK "(CD) CDDA hlasitosť %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SK "CDDA hlasitosť %"
#define PCE_FAST_CDPSGVOLUME_LABEL_SK "(CD) PSG hlasitosť %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SK "CD PSG hlasitosť %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_SK NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_SK NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_SK NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SK,
      CATEGORY_HACKS_INFO_0_SK
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_SK,
      CATEGORY_CHANNEL_VOLUME_INFO_0_SK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SK,
      CATEGORY_CD_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_SK,
      NULL,
      PCE_FAST_PALETTE_INFO_0_SK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SK },
         { "Composite", OPTION_VAL_COMPOSITE_SK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_SK,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_SK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SK },
         { "manual",   OPTION_VAL_MANUAL_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SK,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SK,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_SK },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_SK,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_SK,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SK },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_SK,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_SK,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_SK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SK },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_SK,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SK,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SK },
         { "0.50", OPTION_VAL_0_50_SK },
         { "0.75", OPTION_VAL_0_75_SK },
         { "1.00", OPTION_VAL_1_00_SK },
         { "1.25", OPTION_VAL_1_25_SK },
         { "1.50", OPTION_VAL_1_50_SK },
         { "1.75", OPTION_VAL_1_75_SK },
         { "2.00", OPTION_VAL_2_00_SK },
         { "2.25", OPTION_VAL_2_25_SK },
         { "2.50", OPTION_VAL_2_50_SK },
         { "2.75", OPTION_VAL_2_75_SK },
         { "3.00", OPTION_VAL_3_00_SK },
         { "3.25", OPTION_VAL_3_25_SK },
         { "3.50", OPTION_VAL_3_50_SK },
         { "3.75", OPTION_VAL_3_75_SK },
         { "4.00", OPTION_VAL_4_00_SK },
         { "4.25", OPTION_VAL_4_25_SK },
         { "4.50", OPTION_VAL_4_50_SK },
         { "4.75", OPTION_VAL_4_75_SK },
         { "5.00", OPTION_VAL_5_00_SK },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_SK,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_SK,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_SK,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SK,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_SK,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_SK,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_SK },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_SK,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_SK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_SK,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_SK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SK },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_SK,
      PCE_FAST_CDSPEED_LABEL_CAT_SK,
      PCE_FAST_CDSPEED_INFO_0_SK,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_SK },
         { "2", OPTION_VAL_2_SK },
         { "4", OPTION_VAL_4_SK },
         { "8", OPTION_VAL_8_SK },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_SK,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_SK,
      PCE_FAST_ADPCMVOLUME_INFO_0_SK,
      PCE_FAST_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_SK,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_SK,
      PCE_FAST_ADPCMVOLUME_INFO_0_SK,
      PCE_FAST_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_SK,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_SK,
      PCE_FAST_ADPCMVOLUME_INFO_0_SK,
      PCE_FAST_ADPCMVOLUME_INFO_1_SK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_SK,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_SK,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR "Ulaz"
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_HACKS_LABEL_SR NULL
#define CATEGORY_HACKS_INFO_0_SR NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_SR NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SR NULL
#define CATEGORY_CD_LABEL_SR NULL
#define CATEGORY_CD_INFO_0_SR NULL
#define PCE_FAST_PALETTE_LABEL_SR NULL
#define PCE_FAST_PALETTE_INFO_0_SR NULL
#define OPTION_VAL_RGB_SR NULL
#define OPTION_VAL_COMPOSITE_SR NULL
#define PCE_FAST_FRAMESKIP_LABEL_SR NULL
#define PCE_FAST_FRAMESKIP_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_MANUAL_SR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SR NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SR NULL
#define OPTION_VAL_33_SR NULL
#define PCE_FAST_HOVERSCAN_LABEL_SR NULL
#define PCE_FAST_HOVERSCAN_INFO_0_SR NULL
#define OPTION_VAL_352_SR NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SR NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_3_SR NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_SR NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_SR NULL
#define OPTION_VAL_242_SR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SR NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SR NULL
#define OPTION_VAL_0_25_SR NULL
#define OPTION_VAL_0_50_SR NULL
#define OPTION_VAL_0_75_SR NULL
#define OPTION_VAL_1_00_SR NULL
#define OPTION_VAL_1_25_SR NULL
#define OPTION_VAL_1_50_SR NULL
#define OPTION_VAL_1_75_SR NULL
#define OPTION_VAL_2_00_SR NULL
#define OPTION_VAL_2_25_SR NULL
#define OPTION_VAL_2_50_SR NULL
#define OPTION_VAL_2_75_SR NULL
#define OPTION_VAL_3_00_SR NULL
#define OPTION_VAL_3_25_SR NULL
#define OPTION_VAL_3_50_SR NULL
#define OPTION_VAL_3_75_SR NULL
#define OPTION_VAL_4_00_SR NULL
#define OPTION_VAL_4_25_SR NULL
#define OPTION_VAL_4_50_SR NULL
#define OPTION_VAL_4_75_SR NULL
#define OPTION_VAL_5_00_SR NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_SR NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR NULL
#define OPTION_VAL_2_BUTTONS_SR NULL
#define OPTION_VAL_6_BUTTONS_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_SR NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SR NULL
#define PCE_FAST_TURBO_DELAY_LABEL_SR NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_SR NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_SR NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_SR NULL
#define PCE_FAST_CDBIOS_LABEL_SR NULL
#define PCE_FAST_CDBIOS_INFO_0_SR NULL
#define OPTION_VAL_GAMES_EXPRESS_SR NULL
#define OPTION_VAL_SYSTEM_CARD_1_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_SR NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SR NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SR NULL
#define PCE_FAST_CDSPEED_LABEL_SR NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_SR NULL
#define PCE_FAST_CDSPEED_INFO_0_SR NULL
#define OPTION_VAL_1_SR NULL
#define OPTION_VAL_2_SR NULL
#define OPTION_VAL_4_SR NULL
#define OPTION_VAL_8_SR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_SR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_SR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_SR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_SR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SR NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_SR NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_SR NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_SR NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SR,
      CATEGORY_HACKS_INFO_0_SR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_SR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_SR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SR,
      CATEGORY_CD_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_SR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_SR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SR },
         { "Composite", OPTION_VAL_COMPOSITE_SR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_SR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_SR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SR },
         { "manual",   OPTION_VAL_MANUAL_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_SR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_SR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_SR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_SR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_SR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_SR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_SR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SR },
         { "0.50", OPTION_VAL_0_50_SR },
         { "0.75", OPTION_VAL_0_75_SR },
         { "1.00", OPTION_VAL_1_00_SR },
         { "1.25", OPTION_VAL_1_25_SR },
         { "1.50", OPTION_VAL_1_50_SR },
         { "1.75", OPTION_VAL_1_75_SR },
         { "2.00", OPTION_VAL_2_00_SR },
         { "2.25", OPTION_VAL_2_25_SR },
         { "2.50", OPTION_VAL_2_50_SR },
         { "2.75", OPTION_VAL_2_75_SR },
         { "3.00", OPTION_VAL_3_00_SR },
         { "3.25", OPTION_VAL_3_25_SR },
         { "3.50", OPTION_VAL_3_50_SR },
         { "3.75", OPTION_VAL_3_75_SR },
         { "4.00", OPTION_VAL_4_00_SR },
         { "4.25", OPTION_VAL_4_25_SR },
         { "4.50", OPTION_VAL_4_50_SR },
         { "4.75", OPTION_VAL_4_75_SR },
         { "5.00", OPTION_VAL_5_00_SR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_SR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_SR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_SR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_SR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_SR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_SR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_SR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_SR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_SR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_SR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_SR,
      PCE_FAST_CDSPEED_LABEL_CAT_SR,
      PCE_FAST_CDSPEED_INFO_0_SR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_SR },
         { "2", OPTION_VAL_2_SR },
         { "4", OPTION_VAL_4_SR },
         { "8", OPTION_VAL_8_SR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_SR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_SR,
      PCE_FAST_ADPCMVOLUME_INFO_0_SR,
      PCE_FAST_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_SR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_SR,
      PCE_FAST_ADPCMVOLUME_INFO_0_SR,
      PCE_FAST_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_SR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_SR,
      PCE_FAST_ADPCMVOLUME_INFO_0_SR,
      PCE_FAST_ADPCMVOLUME_INFO_1_SR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_SR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_SR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV "Konfigurera skärmbeskärning, bildrutehopp och andra bildutdata-parametrar."
#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV "Konfigurera ljuspistol, mus och NegCon inmatning."
#define CATEGORY_HACKS_LABEL_SV "Emuleringshackning"
#define CATEGORY_HACKS_INFO_0_SV "Konfigurera processorns överklockning och emuleringsnoggrannhetsparametrar som påverkar prestanda och kompatibilitet på låg nivå."
#define CATEGORY_CHANNEL_VOLUME_LABEL_SV "Avancerade inställningar för kanalvolym"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SV "Konfigurera volymen för enskilda hårdvaru-ljudkanaler."
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV "Konfigurera inställningar relaterade till PC Engine CD-emulering."
#define PCE_FAST_PALETTE_LABEL_SV "Färgpalett"
#define PCE_FAST_PALETTE_INFO_0_SV "Composite försöker återskapa den ursprungliga konsolens utmatning och kan visa fler detaljer i vissa spel."
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV "Komposit"
#define PCE_FAST_FRAMESKIP_LABEL_SV NULL
#define PCE_FAST_FRAMESKIP_INFO_0_SV "Hoppa över bildrutor för att undvika ljudbuffertbrist (crackling-ljud). Förbättrar prestanda på bekostnad av visuell jämnhet. \"Automatiserat\" hoppar över bildrutor när frontend råder. \"Manuell\" använder inställningen \"Tröskel för bildrutehopp (%)\"."
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_MANUAL_SV "Manuell"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SV "Frameskip Tröskelvärde (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SV "När 'Frameskip' är satt till 'Manuell', ange ljudbuffertens tröskel (i procent) under vilka ramar som kommer att hoppas över. Högre värden minskar risken för hackigt ljud genom att bildrutor tappas oftare."
#define OPTION_VAL_33_SV "33 (Standard)"
#define PCE_FAST_HOVERSCAN_LABEL_SV "Horisontell överskanning (endast i breddläget 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_SV "Välj den maximala bildbredden som ska visas. Lägre värden kommer att beskära högersidan av bilden (för spel med 352 px bredd)."
#define OPTION_VAL_352_SV "352 (Standard)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SV "Initiell skanlinje"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SV "Första renderade skanlinjen. Högre värden kommer att beskära toppen av bilden."
#define OPTION_VAL_3_SV "3 (Standard)"
#define PCE_FAST_LAST_SCANLINE_LABEL_SV "Sista skanlinje"
#define PCE_FAST_LAST_SCANLINE_INFO_0_SV "Sista renderade skanlinjen. Lägre värden kommer att beskära botten av bilden."
#define OPTION_VAL_242_SV "242 (Standard)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SV "PSG Ljudkanal 0 volym %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SV "Justera volymen för PSG-ljudkanal 0."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SV "PSG Ljudkanal 1 volym %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SV "Justera volymen för PSG Ljudkanal 1."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SV "PSG Ljudkanal 2 volym %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SV "Justera volymen för PSG Ljudkanal 2."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SV "PSG Ljudkanal 3 volym %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SV "Justera volymen för PSG Ljudkanal 3."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SV "PSG Ljudkanal 4 volym %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SV "Justera volymen för PSG Ljudkanal 4."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SV "PSG Ljudkanal 5 volym %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SV "Justera volymen för PSG Ljudkanal 5."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SV "Muskänslighet"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SV "Högre värden kommer få muspekaren att röra sig snabbare."
#define OPTION_VAL_0_25_SV NULL
#define OPTION_VAL_0_50_SV NULL
#define OPTION_VAL_0_75_SV NULL
#define OPTION_VAL_1_00_SV NULL
#define OPTION_VAL_1_25_SV NULL
#define OPTION_VAL_1_50_SV NULL
#define OPTION_VAL_1_75_SV NULL
#define OPTION_VAL_2_00_SV NULL
#define OPTION_VAL_2_25_SV NULL
#define OPTION_VAL_2_50_SV NULL
#define OPTION_VAL_2_75_SV NULL
#define OPTION_VAL_3_00_SV NULL
#define OPTION_VAL_3_25_SV NULL
#define OPTION_VAL_3_50_SV NULL
#define OPTION_VAL_3_75_SV NULL
#define OPTION_VAL_4_00_SV NULL
#define OPTION_VAL_4_25_SV NULL
#define OPTION_VAL_4_50_SV NULL
#define OPTION_VAL_4_75_SV NULL
#define OPTION_VAL_5_00_SV NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_SV "Inaktivera mjukåterställning (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_SV "När både RUN och SELECT trycks ned samtidigt, inaktiveras båda knapparna tillfälligt istället för att återställa dem."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV "Standard joypad-typ för spelare 1 (P1)"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV "Välj detta ifall port 1-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd 'Lägesväxlings'-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define OPTION_VAL_2_BUTTONS_SV "2 knappar"
#define OPTION_VAL_6_BUTTONS_SV "6 knappar"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV "Standard joypad-typ för spelare 2 (P2)"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV "Välj detta ifall port 2-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd 'Lägesväxlings'-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV "Standard joypad-typ för spelare 3 (P3)"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV "Välj detta ifall port 3-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd 'Lägesväxlings'-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV "Standard joypad-typ för spelare 4 (P4)"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV "Välj detta ifall port 4-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd 'Lägesväxlings'-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV "Standard joypad-typ för spelare 5 (P5)"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV "Välj detta ifall port 5-joypaden ska vara 2-knappars eller 6-knappars som standard. Denna inställning tillämpas endast när kärnan startar. Om du vill byta under tiden innehållet körs, använd 'Lägesväxlings'-knappen. OBS!: 6-knappars joypaden kan visa konstigt beteende i inkompatibla spel."
#define PCE_FAST_TURBO_TOGGLING_LABEL_SV "Växla till turbo-läge"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SV "Aktivera snabbtangenterna för turboväxeln (knappar III och IV)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SV "Alternativ snabbtangent för turbo"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SV "Tilldela RetroPads L3/R3-knapparna som snabbtangenter för turbo-läge istället för knappar III och IV. Fungerar endast så länge inget är tilldelat L3/R3-knapparna. Du kan undvika att omkartlägga knappar III och IV när du växlar till 6-knappskontrollläge med detta."
#define PCE_FAST_TURBO_DELAY_LABEL_SV "Turbofördröjning"
#define PCE_FAST_TURBO_DELAY_INFO_0_SV "Justera tiden mellan turboeld (i bildrutor)."
#define PCE_FAST_CDIMAGECACHE_LABEL_SV "Skivavbildningscache (omstart krävs)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_SV "Ladda in hela avbilden i minnet vid start. Kan potentiellt minska laddningstiderna till förmån för en ökad starttid."
#define PCE_FAST_CDBIOS_LABEL_SV "CD-BIOS (omstart krävs)"
#define PCE_FAST_CDBIOS_INFO_0_SV "De flesta spel kan köras på 'Systemkort 3'. 'Games Express' krävs för flera olicensierade spel."
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SV NULL
#define PCE_FAST_CDSPEED_LABEL_SV "(CD) CD-hastighet"
#define PCE_FAST_CDSPEED_LABEL_CAT_SV "CD-hastighet"
#define PCE_FAST_CDSPEED_INFO_0_SV "Högre värden möjliggör snabbare laddningstider men kan orsaka problem med ett par spel."
#define OPTION_VAL_1_SV NULL
#define OPTION_VAL_2_SV NULL
#define OPTION_VAL_4_SV NULL
#define OPTION_VAL_8_SV NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SV "(CD) ADPCM Volym %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SV "ADPCM volym %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_SV "Endast CD-spel. Ifall du ställer in volymen för högt kan ljudkvaliteten försämras och leda till samplingsklippning."
#define PCE_FAST_ADPCMVOLUME_INFO_1_SV "Ifall du ställer in volymen för högt kan ljudkvaliteten försämras och leda till samplingsklippning."
#define PCE_FAST_CDDAVOLUME_LABEL_SV "(CD) CDDA volym %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SV "CDDA volym %"
#define PCE_FAST_CDPSGVOLUME_LABEL_SV "(CD) PSG volym %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SV "CD PSG volym%"
#define PCE_FAST_NOSPRITELIMIT_LABEL_SV "Ingen sprit-begränsning"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_SV "Ta bort hårdvarubegränsningen på 16 sprites per skanlinje. VARNING!: Kan orsaka grafikfel i vissa spel."
#define PCE_FAST_OCMULTIPLIER_LABEL_SV "CPU-överklockningsmultiplikator (Omstart krävs)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_SV "Högre värden kan minska inbromsningar i spel. VARNING!: Kan orsaka grafikfel och krascher."

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SV,
      CATEGORY_HACKS_INFO_0_SV
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_SV,
      CATEGORY_CHANNEL_VOLUME_INFO_0_SV
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SV,
      CATEGORY_CD_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_SV,
      NULL,
      PCE_FAST_PALETTE_INFO_0_SV,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SV },
         { "Composite", OPTION_VAL_COMPOSITE_SV },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_SV,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_SV,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SV },
         { "manual",   OPTION_VAL_MANUAL_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SV,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SV,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_SV },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_SV,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_SV,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_SV },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_SV,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SV },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_SV,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_SV,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_SV },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SV,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SV,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_SV,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SV,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SV },
         { "0.50", OPTION_VAL_0_50_SV },
         { "0.75", OPTION_VAL_0_75_SV },
         { "1.00", OPTION_VAL_1_00_SV },
         { "1.25", OPTION_VAL_1_25_SV },
         { "1.50", OPTION_VAL_1_50_SV },
         { "1.75", OPTION_VAL_1_75_SV },
         { "2.00", OPTION_VAL_2_00_SV },
         { "2.25", OPTION_VAL_2_25_SV },
         { "2.50", OPTION_VAL_2_50_SV },
         { "2.75", OPTION_VAL_2_75_SV },
         { "3.00", OPTION_VAL_3_00_SV },
         { "3.25", OPTION_VAL_3_25_SV },
         { "3.50", OPTION_VAL_3_50_SV },
         { "3.75", OPTION_VAL_3_75_SV },
         { "4.00", OPTION_VAL_4_00_SV },
         { "4.25", OPTION_VAL_4_25_SV },
         { "4.50", OPTION_VAL_4_50_SV },
         { "4.75", OPTION_VAL_4_75_SV },
         { "5.00", OPTION_VAL_5_00_SV },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_SV,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_SV,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_SV,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_SV,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_SV,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_SV,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_SV,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_SV,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_SV },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_SV },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_SV,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SV,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_SV,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_SV,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_SV },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_SV,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_SV,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_SV,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_SV,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SV },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SV },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SV },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SV },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SV },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SV },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_SV,
      PCE_FAST_CDSPEED_LABEL_CAT_SV,
      PCE_FAST_CDSPEED_INFO_0_SV,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_SV },
         { "2", OPTION_VAL_2_SV },
         { "4", OPTION_VAL_4_SV },
         { "8", OPTION_VAL_8_SV },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_SV,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_SV,
      PCE_FAST_ADPCMVOLUME_INFO_0_SV,
      PCE_FAST_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_SV,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_SV,
      PCE_FAST_ADPCMVOLUME_INFO_0_SV,
      PCE_FAST_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_SV,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_SV,
      PCE_FAST_ADPCMVOLUME_INFO_0_SV,
      PCE_FAST_ADPCMVOLUME_INFO_1_SV,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_SV,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_SV,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR "Görüntü kırpma, kare atlama ve diğer görüntü çıktı parametrelerini yapılandırın."
#define CATEGORY_INPUT_LABEL_TR "Giriş"
#define CATEGORY_INPUT_INFO_0_TR "Light gun, fare ve NegCon girişini yapılandırın."
#define CATEGORY_HACKS_LABEL_TR "Emülatör Geliştirmeleri"
#define CATEGORY_HACKS_INFO_0_TR "Düşük seviyeli performans ve uyumluluğu etkileyen işlemci hız aşırtma ve emulatör doğruluğu parametrelerini yapılandırın."
#define CATEGORY_CHANNEL_VOLUME_LABEL_TR "Gelişmiş Ses Kanalı Ayarları"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_TR "Farklı donanım ses kanallarının ses düzeyini yapılandırın."
#define CATEGORY_CD_LABEL_TR NULL
#define CATEGORY_CD_INFO_0_TR "PC Engine CD emulatörü ilgili ayarları yapılandırın."
#define PCE_FAST_PALETTE_LABEL_TR "Renk Paleti"
#define PCE_FAST_PALETTE_INFO_0_TR "Kompozit video ayarı orjinal konsolun video çıkışını taklit etmeye çalışır ve bazı oyunlarda daha fazla ayrıntı sunabilir."
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_COMPOSITE_TR NULL
#define PCE_FAST_FRAMESKIP_LABEL_TR "Kare Atlama"
#define PCE_FAST_FRAMESKIP_INFO_0_TR "Ses ara belleğinin yetersiz çalışmasını (çatırtı) önlemek için kareleri atlayın. Görsel pürüzsüzlük pahasına performansı artırır. 'Otomatik', ön uç tarafından önerildiğinde çerçeveleri atlar. 'El ile', 'Kare Atlama Eşiği (%)' ayarını kullanır."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_MANUAL_TR "El İle"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_TR "Kare Atlama Eşiği (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_TR "'Kare Atlama', 'El ile' olarak ayarlandığında, altındaki karelerin atlanacağı ses arabelleği doluluk eşiğini (yüzde) belirtir. Daha yüksek değerler, çerçevelerin daha sık düşmesine neden olarak çatlama riskini azaltır."
#define OPTION_VAL_33_TR "33 (Varsayılan)"
#define PCE_FAST_HOVERSCAN_LABEL_TR "Yatay Aşırı Tarama (Yalnızca 352 Genişlik Kipi)"
#define PCE_FAST_HOVERSCAN_INFO_0_TR "Gösterilecek azami görüntü genişliği. Düşürülen değerler görüntünün sağ tarafını kırpacaktır. (352 pk genişliğindeki oyunlar)."
#define OPTION_VAL_352_TR "352 (Varsayılan)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_TR "İlk işlenen tarama çizgisi. Yükseltilen değerler görüntünün üstünü kırpacaktır."
#define OPTION_VAL_3_TR "3 (Varsayılan)"
#define PCE_FAST_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define PCE_FAST_LAST_SCANLINE_INFO_0_TR "Son işlenen tarama çizgisi. Düşürülen değerler görüntünün alt kısmını kırpacaktır."
#define OPTION_VAL_242_TR "242 (Varsayılan)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_TR "PSG Ses Kanalı 0 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_TR "PSG Ses Kanalı 0'ın ses seviyesini değiştirir."
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_TR "PSG Ses Kanalı 1 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_TR "PSG Ses Kanalı 1'in ses seviyesini değiştirir."
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_TR "PSG Ses Kanalı 2 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_TR "PSG Ses Kanalı 2'nin ses seviyesini değiştirir."
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_TR "PSG Ses Kanalı 3 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_TR "PSG Ses Kanalı 3'ün ses seviyesini değiştirir."
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_TR "PSG Ses Kanalı 4 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_TR "PSG Ses Kanalı 4'ün ses seviyesini değiştirir."
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_TR "PSG Ses Kanalı 5 Ses Seviyesi %"
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_TR "PSG Ses Kanalı 5'in ses seviyesini değiştirir."
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_TR "Fare Hassasiyeti"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_TR "Daha yüksek değerler, fare imlecinin daha hızlı hareket etmesini sağlar."
#define OPTION_VAL_0_25_TR NULL
#define OPTION_VAL_0_50_TR NULL
#define OPTION_VAL_0_75_TR NULL
#define OPTION_VAL_1_00_TR NULL
#define OPTION_VAL_1_25_TR NULL
#define OPTION_VAL_1_50_TR NULL
#define OPTION_VAL_1_75_TR NULL
#define OPTION_VAL_2_00_TR NULL
#define OPTION_VAL_2_25_TR NULL
#define OPTION_VAL_2_50_TR NULL
#define OPTION_VAL_2_75_TR NULL
#define OPTION_VAL_3_00_TR NULL
#define OPTION_VAL_3_25_TR NULL
#define OPTION_VAL_3_50_TR NULL
#define OPTION_VAL_3_75_TR NULL
#define OPTION_VAL_4_00_TR NULL
#define OPTION_VAL_4_25_TR NULL
#define OPTION_VAL_4_50_TR NULL
#define OPTION_VAL_4_75_TR NULL
#define OPTION_VAL_5_00_TR NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_TR "Yazılımdan Sıfırlama Devre Dışı (RUN+SELECT)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_TR "RUN ve SELECT tuşlarına aynı anda basıldığında, yeniden başlatmak yerine iki tuşu da geçici olarak devre dışı bırak."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR "P1 Varsayılan Joypad Tipi"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR "Port 1 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define OPTION_VAL_2_BUTTONS_TR "2 Düğmeli"
#define OPTION_VAL_6_BUTTONS_TR "6 Düğmeli"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR "P2 Varsayılan Joypad Tipi"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR "Port 2 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR "P3 Varsayılan Joypad Tipi"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR "Port 3 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR "P4 Varsayılan Joypad Tipi"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR "Port 4 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR "P5 Varsayılan Joypad Tipi"
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR "Port 5 joypad varsayılan olarak 2 veya 6 düğme olması gerekip gerekmediğini seçin. Bu seçenek yalnızca çekirdek başladığında uygulanır, içerik çalışırken geçiş yapmak istiyorsanız, 'Mod Değiştir' düğmesini kullanın. NOT: 6 düğmeli joypad, uyumlu olmayan oyunlarda garip davranışlara sahip olabilir."
#define PCE_FAST_TURBO_TOGGLING_LABEL_TR "Turbo Değiştir"
#define PCE_FAST_TURBO_TOGGLING_INFO_0_TR "Turbo geçiş tuşlarını etkinleştir (III ve IV tuşları)."
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_TR "Alternatif Turbo Kısayol Tuşu"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_TR "Retropad L3/R3 tuşlarını, III ve IV tuşlarının yerine turbo geçişi için ata. L3/R3 tuşlarına başka bir şey atanmadığı sürece çalışır. Bununla 6-tuşlu kontrolcü kipine geçerken III ve IV tuşlarını yapılandırmayabilirsiniz."
#define PCE_FAST_TURBO_DELAY_LABEL_TR "Turbo Gecikmesi"
#define PCE_FAST_TURBO_DELAY_INFO_0_TR "Turbo sinyallerinin zamanlamasını ayarla. (kare başına)."
#define PCE_FAST_CDIMAGECACHE_LABEL_TR "CD Kalıbı Önbelleği (Yeniden Başlatılmalı)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_TR "Başlangıç sırasında bütün kalıbı hafızaya yükler. Başlangıç sürecini uzatmak pahasına oyundaki yüklenme sürelerini kısaltabilir."
#define PCE_FAST_CDBIOS_LABEL_TR "CD BIOS (Yeniden Başlatılmalı)"
#define PCE_FAST_CDBIOS_INFO_0_TR "Oyunların çoğu \"System Card 3\" üzerinde çalışabilir. Birkaç lisanssız oyun, Game Express'e ihtiyaç duyar."
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR "Sistem Kartı 1"
#define OPTION_VAL_SYSTEM_CARD_2_TR "Sistem Kartı 2"
#define OPTION_VAL_SYSTEM_CARD_3_TR "Sistem Kartı 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_TR "Sistem Kartı 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_TR "Sistem Kartı 3 US"
#define PCE_FAST_CDSPEED_LABEL_TR "(CD) CD Hızı"
#define PCE_FAST_CDSPEED_LABEL_CAT_TR "CD Hızı"
#define PCE_FAST_CDSPEED_INFO_0_TR "Yükseltilen değerler daha hızlı yüklenmeyi etkinleştiririr, birkaç oyunda sorunlara sebep olabilir."
#define OPTION_VAL_1_TR NULL
#define OPTION_VAL_2_TR NULL
#define OPTION_VAL_4_TR NULL
#define OPTION_VAL_8_TR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_TR "(CD) ADPCM Ses Seviyesi %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_TR "ADPCM Ses Seviyesi %"
#define PCE_FAST_ADPCMVOLUME_INFO_0_TR "Sadece CD oyunları için. Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define PCE_FAST_ADPCMVOLUME_INFO_1_TR "Bu ses ayarını aşırı yükseltmek seste yırtılmalara sebep olabilir."
#define PCE_FAST_CDDAVOLUME_LABEL_TR "(CD) CDDA Ses Seviyesi %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_TR "CDDA Ses Seviyesi %"
#define PCE_FAST_CDPSGVOLUME_LABEL_TR "(CD) PSG Ses Seviyesi %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_TR "CD PSG Ses Seviyesi %"
#define PCE_FAST_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_TR "Tarama çizgisi başına 16 hareket donanım sınırını kaldırır. UYARI: Bazı oyunlarda bozulmlara sebep olabilir."
#define PCE_FAST_OCMULTIPLIER_LABEL_TR "CPU Hız Aşırtma Çarpanı (Yeniden Başlatılmalı)"
#define PCE_FAST_OCMULTIPLIER_INFO_0_TR "Yükseltilen değer bazı oyunlardaki yavaşlamaları düşürebilir. UYARI: Bozulmalara ve çökmelere sebep olabilir."

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TR,
      CATEGORY_HACKS_INFO_0_TR
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_TR,
      CATEGORY_CHANNEL_VOLUME_INFO_0_TR
   },
   {
      "cd",
      CATEGORY_CD_LABEL_TR,
      CATEGORY_CD_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_TR,
      NULL,
      PCE_FAST_PALETTE_INFO_0_TR,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_TR },
         { "Composite", OPTION_VAL_COMPOSITE_TR },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_TR,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_TR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_TR },
         { "manual",   OPTION_VAL_MANUAL_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_TR,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_TR,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_TR },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_TR,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_TR,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_TR },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_TR,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_TR },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_TR,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_TR,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_TR },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_TR,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_TR,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_TR,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_TR,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_TR },
         { "0.50", OPTION_VAL_0_50_TR },
         { "0.75", OPTION_VAL_0_75_TR },
         { "1.00", OPTION_VAL_1_00_TR },
         { "1.25", OPTION_VAL_1_25_TR },
         { "1.50", OPTION_VAL_1_50_TR },
         { "1.75", OPTION_VAL_1_75_TR },
         { "2.00", OPTION_VAL_2_00_TR },
         { "2.25", OPTION_VAL_2_25_TR },
         { "2.50", OPTION_VAL_2_50_TR },
         { "2.75", OPTION_VAL_2_75_TR },
         { "3.00", OPTION_VAL_3_00_TR },
         { "3.25", OPTION_VAL_3_25_TR },
         { "3.50", OPTION_VAL_3_50_TR },
         { "3.75", OPTION_VAL_3_75_TR },
         { "4.00", OPTION_VAL_4_00_TR },
         { "4.25", OPTION_VAL_4_25_TR },
         { "4.50", OPTION_VAL_4_50_TR },
         { "4.75", OPTION_VAL_4_75_TR },
         { "5.00", OPTION_VAL_5_00_TR },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_TR,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_TR,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_TR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_TR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_TR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_TR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_TR,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_TR,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_TR },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_TR },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_TR,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_TR,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_TR,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_TR,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_TR },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_TR,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_TR,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_TR,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_TR,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_TR },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_TR },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_TR },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_TR },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_TR },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_TR },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_TR,
      PCE_FAST_CDSPEED_LABEL_CAT_TR,
      PCE_FAST_CDSPEED_INFO_0_TR,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_TR },
         { "2", OPTION_VAL_2_TR },
         { "4", OPTION_VAL_4_TR },
         { "8", OPTION_VAL_8_TR },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_TR,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_TR,
      PCE_FAST_ADPCMVOLUME_INFO_0_TR,
      PCE_FAST_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_TR,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_TR,
      PCE_FAST_ADPCMVOLUME_INFO_0_TR,
      PCE_FAST_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_TR,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_TR,
      PCE_FAST_ADPCMVOLUME_INFO_0_TR,
      PCE_FAST_ADPCMVOLUME_INFO_1_TR,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_TR,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_TR,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK "Налаштувати обрізання екрану, пропуску кадрів та інших параметрів зображення."
#define CATEGORY_INPUT_LABEL_UK "Ввід"
#define CATEGORY_INPUT_INFO_0_UK "Налаштування світлового пістолета, миші та NegCon."
#define CATEGORY_HACKS_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACKS_INFO_0_UK "Налаштування розгону процесора та точності емуляції, що впливають на низькорівневу продуктивність та сумісність."
#define CATEGORY_CHANNEL_VOLUME_LABEL_UK "Розширені налаштування гучності"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_UK "Індивідуальні налаштування гучності аудіоканалів системи."
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK NULL
#define PCE_FAST_PALETTE_LABEL_UK "Кольорова палітра"
#define PCE_FAST_PALETTE_INFO_0_UK "Композитний намагається відтворити оригінальний вивід консолі та може показати більше деталей у деяких іграх."
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK "Композитний"
#define PCE_FAST_FRAMESKIP_LABEL_UK "Пропуск кадру"
#define PCE_FAST_FRAMESKIP_INFO_0_UK "Пропускати кадри, щоб уникнути спустошення буферу (тріскіт). Покращує швидкодію, погіршуючи плавність зображення. 'Авто' пропускає кадри, керуючись командами зовнішньої оболонки. 'Ручний' використовує налаштування 'Межа пропуску кадрів (%)'."
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_MANUAL_UK "Ручний"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_UK "Межа пропуску кадрів (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_UK "Якщо 'Пропус кадрів' встановлено у 'Вручну', зазначає граничне значення оточення аудіо-буферу (відсоток), нижчі за які кадри будуть пропущені. Більш високі значення зменшують ризик зломування, викликаючи зменшення кадрів частіше."
#define OPTION_VAL_33_UK "33 (за замовчуванням)"
#define PCE_FAST_HOVERSCAN_LABEL_UK "Горизонтальна розгортка (тільки в режимі ширини 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_UK "Виберіть максимальну ширину зображення, яку слід показувати. Менші значення будуть обрізати праву частину зображення (для ігор шириною 352 пікселі)."
#define OPTION_VAL_352_UK "352 (за замовчуванням)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_UK NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK "3 (за замовчуванням)"
#define PCE_FAST_LAST_SCANLINE_LABEL_UK NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK "242 (за замовчуванням)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_UK NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_UK NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_UK NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_UK NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_UK NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_UK NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_UK NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_UK "Чутливість миші"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_UK "Великі значення змусять курсор миші рухатися швидше."
#define OPTION_VAL_0_25_UK "0,25"
#define OPTION_VAL_0_50_UK NULL
#define OPTION_VAL_0_75_UK NULL
#define OPTION_VAL_1_00_UK NULL
#define OPTION_VAL_1_25_UK NULL
#define OPTION_VAL_1_50_UK NULL
#define OPTION_VAL_1_75_UK NULL
#define OPTION_VAL_2_00_UK NULL
#define OPTION_VAL_2_25_UK NULL
#define OPTION_VAL_2_50_UK NULL
#define OPTION_VAL_2_75_UK NULL
#define OPTION_VAL_3_00_UK NULL
#define OPTION_VAL_3_25_UK NULL
#define OPTION_VAL_3_50_UK NULL
#define OPTION_VAL_3_75_UK NULL
#define OPTION_VAL_4_00_UK NULL
#define OPTION_VAL_4_25_UK NULL
#define OPTION_VAL_4_50_UK NULL
#define OPTION_VAL_4_75_UK NULL
#define OPTION_VAL_5_00_UK NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_UK "Вимкнути програмне скидання (РУХ+ВИБІР)"
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_UK "Коли РУХ та ВИБІР одночасно натиснуто, тимчасово вимкнуться обидві кнопки замість скидання."
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK NULL
#define OPTION_VAL_2_BUTTONS_UK NULL
#define OPTION_VAL_6_BUTTONS_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_UK NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_UK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_UK "Альтернативні турбокнопки"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_UK NULL
#define PCE_FAST_TURBO_DELAY_LABEL_UK NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_UK NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_UK "Кеш образу CD (потрібен перезапуск)"
#define PCE_FAST_CDIMAGECACHE_INFO_0_UK "Завантажувати повне зображення в пам'ять під час запуску. Може зменшувати час завантаження за рахунок збільшення часу запуску."
#define PCE_FAST_CDBIOS_LABEL_UK NULL
#define PCE_FAST_CDBIOS_INFO_0_UK NULL
#define OPTION_VAL_GAMES_EXPRESS_UK NULL
#define OPTION_VAL_SYSTEM_CARD_1_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_UK NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_UK NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_UK NULL
#define PCE_FAST_CDSPEED_LABEL_UK NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_UK NULL
#define PCE_FAST_CDSPEED_INFO_0_UK NULL
#define OPTION_VAL_1_UK NULL
#define OPTION_VAL_2_UK NULL
#define OPTION_VAL_4_UK NULL
#define OPTION_VAL_8_UK NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_UK NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_UK NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_UK NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_UK NULL
#define PCE_FAST_CDDAVOLUME_LABEL_UK NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_UK NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_UK NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_UK NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_UK NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_UK NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_UK NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_UK,
      CATEGORY_HACKS_INFO_0_UK
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_UK,
      CATEGORY_CHANNEL_VOLUME_INFO_0_UK
   },
   {
      "cd",
      CATEGORY_CD_LABEL_UK,
      CATEGORY_CD_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_UK,
      NULL,
      PCE_FAST_PALETTE_INFO_0_UK,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_UK },
         { "Composite", OPTION_VAL_COMPOSITE_UK },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_UK,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_UK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_UK },
         { "manual",   OPTION_VAL_MANUAL_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_UK,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_UK,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_UK },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_UK,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_UK,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_UK },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_UK,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_UK },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_UK,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_UK,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_UK },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_UK,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_UK,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_UK,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_UK,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_UK },
         { "0.50", OPTION_VAL_0_50_UK },
         { "0.75", OPTION_VAL_0_75_UK },
         { "1.00", OPTION_VAL_1_00_UK },
         { "1.25", OPTION_VAL_1_25_UK },
         { "1.50", OPTION_VAL_1_50_UK },
         { "1.75", OPTION_VAL_1_75_UK },
         { "2.00", OPTION_VAL_2_00_UK },
         { "2.25", OPTION_VAL_2_25_UK },
         { "2.50", OPTION_VAL_2_50_UK },
         { "2.75", OPTION_VAL_2_75_UK },
         { "3.00", OPTION_VAL_3_00_UK },
         { "3.25", OPTION_VAL_3_25_UK },
         { "3.50", OPTION_VAL_3_50_UK },
         { "3.75", OPTION_VAL_3_75_UK },
         { "4.00", OPTION_VAL_4_00_UK },
         { "4.25", OPTION_VAL_4_25_UK },
         { "4.50", OPTION_VAL_4_50_UK },
         { "4.75", OPTION_VAL_4_75_UK },
         { "5.00", OPTION_VAL_5_00_UK },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_UK,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_UK,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_UK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_UK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_UK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_UK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_UK,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_UK,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_UK },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_UK },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_UK,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_UK,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_UK,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_UK,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_UK },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_UK,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_UK,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_UK,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_UK,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_UK },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_UK },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_UK },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_UK },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_UK },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_UK },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_UK,
      PCE_FAST_CDSPEED_LABEL_CAT_UK,
      PCE_FAST_CDSPEED_INFO_0_UK,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_UK },
         { "2", OPTION_VAL_2_UK },
         { "4", OPTION_VAL_4_UK },
         { "8", OPTION_VAL_8_UK },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_UK,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_UK,
      PCE_FAST_ADPCMVOLUME_INFO_0_UK,
      PCE_FAST_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_UK,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_UK,
      PCE_FAST_ADPCMVOLUME_INFO_0_UK,
      PCE_FAST_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_UK,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_UK,
      PCE_FAST_ADPCMVOLUME_INFO_0_UK,
      PCE_FAST_ADPCMVOLUME_INFO_1_UK,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_UK,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_UK,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL NULL
#define CATEGORY_INPUT_LABEL_VAL "Entrada"
#define CATEGORY_INPUT_INFO_0_VAL NULL
#define CATEGORY_HACKS_LABEL_VAL NULL
#define CATEGORY_HACKS_INFO_0_VAL NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_VAL NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_VAL NULL
#define CATEGORY_CD_LABEL_VAL NULL
#define CATEGORY_CD_INFO_0_VAL NULL
#define PCE_FAST_PALETTE_LABEL_VAL NULL
#define PCE_FAST_PALETTE_INFO_0_VAL NULL
#define OPTION_VAL_RGB_VAL NULL
#define OPTION_VAL_COMPOSITE_VAL NULL
#define PCE_FAST_FRAMESKIP_LABEL_VAL NULL
#define PCE_FAST_FRAMESKIP_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define OPTION_VAL_MANUAL_VAL "Selecció manual"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_VAL NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_VAL NULL
#define OPTION_VAL_33_VAL NULL
#define PCE_FAST_HOVERSCAN_LABEL_VAL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_VAL NULL
#define OPTION_VAL_352_VAL NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_VAL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_3_VAL NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_VAL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_VAL NULL
#define OPTION_VAL_242_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_VAL NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_VAL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_VAL NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_VAL NULL
#define OPTION_VAL_0_25_VAL "0,25"
#define OPTION_VAL_0_50_VAL "0,50"
#define OPTION_VAL_0_75_VAL "0,75"
#define OPTION_VAL_1_00_VAL "1,00"
#define OPTION_VAL_1_25_VAL "1,25"
#define OPTION_VAL_1_50_VAL "1,50"
#define OPTION_VAL_1_75_VAL "1,75"
#define OPTION_VAL_2_00_VAL "2,00"
#define OPTION_VAL_2_25_VAL "2,25"
#define OPTION_VAL_2_50_VAL "2,50"
#define OPTION_VAL_2_75_VAL "2,75"
#define OPTION_VAL_3_00_VAL "3,00"
#define OPTION_VAL_3_25_VAL "3,25"
#define OPTION_VAL_3_50_VAL "3,50"
#define OPTION_VAL_3_75_VAL "3,75"
#define OPTION_VAL_4_00_VAL "4,00"
#define OPTION_VAL_4_25_VAL "4,25"
#define OPTION_VAL_4_50_VAL "4,50"
#define OPTION_VAL_4_75_VAL "4,75"
#define OPTION_VAL_5_00_VAL "5,00"
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_VAL NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL NULL
#define OPTION_VAL_2_BUTTONS_VAL NULL
#define OPTION_VAL_6_BUTTONS_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_VAL NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_VAL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_VAL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_VAL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_VAL NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_VAL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_VAL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_VAL NULL
#define PCE_FAST_CDBIOS_LABEL_VAL NULL
#define PCE_FAST_CDBIOS_INFO_0_VAL NULL
#define OPTION_VAL_GAMES_EXPRESS_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_1_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_2_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_3_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_VAL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_VAL NULL
#define PCE_FAST_CDSPEED_LABEL_VAL NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_VAL NULL
#define PCE_FAST_CDSPEED_INFO_0_VAL NULL
#define OPTION_VAL_1_VAL NULL
#define OPTION_VAL_2_VAL NULL
#define OPTION_VAL_4_VAL NULL
#define OPTION_VAL_8_VAL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_VAL NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_VAL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_VAL NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_VAL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_VAL NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_VAL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_VAL NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_VAL NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_VAL NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_VAL NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_VAL NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VAL,
      CATEGORY_VIDEO_INFO_0_VAL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VAL,
      CATEGORY_INPUT_INFO_0_VAL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VAL,
      CATEGORY_HACKS_INFO_0_VAL
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_VAL,
      CATEGORY_CHANNEL_VOLUME_INFO_0_VAL
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VAL,
      CATEGORY_CD_INFO_0_VAL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_VAL,
      NULL,
      PCE_FAST_PALETTE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VAL },
         { "Composite", OPTION_VAL_COMPOSITE_VAL },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_VAL,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_VAL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_VAL },
         { "manual",   OPTION_VAL_MANUAL_VAL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_VAL,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_VAL,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_VAL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_VAL,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_VAL,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_VAL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_VAL,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VAL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_VAL,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_VAL,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VAL },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_VAL,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_VAL,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_VAL,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_VAL },
         { "0.50", OPTION_VAL_0_50_VAL },
         { "0.75", OPTION_VAL_0_75_VAL },
         { "1.00", OPTION_VAL_1_00_VAL },
         { "1.25", OPTION_VAL_1_25_VAL },
         { "1.50", OPTION_VAL_1_50_VAL },
         { "1.75", OPTION_VAL_1_75_VAL },
         { "2.00", OPTION_VAL_2_00_VAL },
         { "2.25", OPTION_VAL_2_25_VAL },
         { "2.50", OPTION_VAL_2_50_VAL },
         { "2.75", OPTION_VAL_2_75_VAL },
         { "3.00", OPTION_VAL_3_00_VAL },
         { "3.25", OPTION_VAL_3_25_VAL },
         { "3.50", OPTION_VAL_3_50_VAL },
         { "3.75", OPTION_VAL_3_75_VAL },
         { "4.00", OPTION_VAL_4_00_VAL },
         { "4.25", OPTION_VAL_4_25_VAL },
         { "4.50", OPTION_VAL_4_50_VAL },
         { "4.75", OPTION_VAL_4_75_VAL },
         { "5.00", OPTION_VAL_5_00_VAL },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_VAL,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_VAL,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_VAL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_VAL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_VAL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_VAL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_VAL,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VAL,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VAL },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VAL },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_VAL,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_VAL,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_VAL,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_VAL,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_VAL },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_VAL,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_VAL,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VAL },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VAL },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VAL },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VAL },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_VAL },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_VAL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_VAL,
      PCE_FAST_CDSPEED_LABEL_CAT_VAL,
      PCE_FAST_CDSPEED_INFO_0_VAL,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_VAL },
         { "2", OPTION_VAL_2_VAL },
         { "4", OPTION_VAL_4_VAL },
         { "8", OPTION_VAL_8_VAL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_VAL,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_0_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_VAL,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_0_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_VAL,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_0_VAL,
      PCE_FAST_ADPCMVOLUME_INFO_1_VAL,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_VAL,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_VAL,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_VAL,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN "Tùy chỉnh crop màn hình, bỏ qua khung hình và các thông số đầu ra hình ảnh khác."
#define CATEGORY_INPUT_LABEL_VN "Input Driver"
#define CATEGORY_INPUT_INFO_0_VN "Định cấu hình đầu vào của súng, chuột và NegCon."
#define CATEGORY_HACKS_LABEL_VN "Hacks giả lập"
#define CATEGORY_HACKS_INFO_0_VN "Định cấu hình các thông số độ chính xác của việc ép xung và mô phỏng bộ xử lý ảnh hưởng đến hiệu suất và khả năng tương thích ở mức thấp."
#define CATEGORY_CHANNEL_VOLUME_LABEL_VN "Tùy chỉnh cài đặt kênh âm thanh"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_VN "Chỉnh sửa âm thanh của phần cứng riêng lẻ."
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN "Định cấu hình cài đặt liên quan đến trình mô phỏng PC Engine CD."
#define PCE_FAST_PALETTE_LABEL_VN "Bảng màu"
#define PCE_FAST_PALETTE_INFO_0_VN "Tổng hợp các cố gắng để tạo lại đầu ra bảng điều khiển ban đầu và có thể hiển thị thêm chi tiết trong một số trò chơi."
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN "Kết hợp"
#define PCE_FAST_FRAMESKIP_LABEL_VN "Bỏ qua khung hình"
#define PCE_FAST_FRAMESKIP_INFO_0_VN "Bỏ qua khung hình để tránh bộ đệm âm thanh chạy dưới mức (tiếng kêu lách tách). Cải thiện hiệu suất với độ mượt mà của hình ảnh. 'Tự động' bỏ qua khung khi giao diện người dùng thông báo. 'Thủ công' sử dụng cài đặt 'Ngưỡng khung hình (%)'."
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_MANUAL_VN "Thủ công"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_VN "Ngưỡng bỏ qua khung hình (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_VN "Khi 'Frameskip' được đặt thành 'Thủ công', chỉ định ngưỡng chiếm dụng bộ đệm âm thanh (tỷ lệ phần trăm) dưới khung hình nào sẽ bị bỏ qua. Giá trị cao hơn làm giảm nguy cơ giật lag do làm rơi khung thường xuyên hơn."
#define OPTION_VAL_33_VN "33 (Mặc định)"
#define PCE_FAST_HOVERSCAN_LABEL_VN "Quét theo chiều ngang (Chỉ dành cho chế độ chiều rộng 352)"
#define PCE_FAST_HOVERSCAN_INFO_0_VN NULL
#define OPTION_VAL_352_VN "352 (Mặc định)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_VN NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN "3 (Mặc định)"
#define PCE_FAST_LAST_SCANLINE_LABEL_VN NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN "242 (Mặc định)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_VN NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_VN NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_VN NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_VN NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_VN NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_VN NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_VN NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_VN NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_VN NULL
#define OPTION_VAL_0_25_VN NULL
#define OPTION_VAL_0_50_VN NULL
#define OPTION_VAL_0_75_VN NULL
#define OPTION_VAL_1_00_VN NULL
#define OPTION_VAL_1_25_VN NULL
#define OPTION_VAL_1_50_VN NULL
#define OPTION_VAL_1_75_VN NULL
#define OPTION_VAL_2_00_VN NULL
#define OPTION_VAL_2_25_VN NULL
#define OPTION_VAL_2_50_VN NULL
#define OPTION_VAL_2_75_VN NULL
#define OPTION_VAL_3_00_VN NULL
#define OPTION_VAL_3_25_VN NULL
#define OPTION_VAL_3_50_VN NULL
#define OPTION_VAL_3_75_VN NULL
#define OPTION_VAL_4_00_VN NULL
#define OPTION_VAL_4_25_VN NULL
#define OPTION_VAL_4_50_VN NULL
#define OPTION_VAL_4_75_VN NULL
#define OPTION_VAL_5_00_VN NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_VN NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN NULL
#define OPTION_VAL_2_BUTTONS_VN NULL
#define OPTION_VAL_6_BUTTONS_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN NULL
#define PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_VN NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_VN NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_VN NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_VN NULL
#define PCE_FAST_TURBO_DELAY_LABEL_VN NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_VN NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_VN NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_VN NULL
#define PCE_FAST_CDBIOS_LABEL_VN NULL
#define PCE_FAST_CDBIOS_INFO_0_VN NULL
#define OPTION_VAL_GAMES_EXPRESS_VN NULL
#define OPTION_VAL_SYSTEM_CARD_1_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_VN NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_VN NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_VN NULL
#define PCE_FAST_CDSPEED_LABEL_VN NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_VN NULL
#define PCE_FAST_CDSPEED_INFO_0_VN NULL
#define OPTION_VAL_1_VN NULL
#define OPTION_VAL_2_VN NULL
#define OPTION_VAL_4_VN NULL
#define OPTION_VAL_8_VN NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_VN NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_VN NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_VN NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_VN NULL
#define PCE_FAST_CDDAVOLUME_LABEL_VN NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_VN NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_VN NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_VN NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_VN NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_VN NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_VN NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VN,
      CATEGORY_HACKS_INFO_0_VN
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_VN,
      CATEGORY_CHANNEL_VOLUME_INFO_0_VN
   },
   {
      "cd",
      CATEGORY_CD_LABEL_VN,
      CATEGORY_CD_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_VN,
      NULL,
      PCE_FAST_PALETTE_INFO_0_VN,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_VN },
         { "Composite", OPTION_VAL_COMPOSITE_VN },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_VN,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_VN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_VN },
         { "manual",   OPTION_VAL_MANUAL_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_VN,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_VN,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_VN },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "pce_fast_hoverscan",
      PCE_FAST_HOVERSCAN_LABEL_VN,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_VN,
      NULL,
      "video",
      {
         { "300", NULL },
         { "302", NULL },
         { "304", NULL },
         { "306", NULL },
         { "308", NULL },
         { "310", NULL },
         { "312", NULL },
         { "314", NULL },
         { "316", NULL },
         { "318", NULL },
         { "320", NULL },
         { "322", NULL },
         { "324", NULL },
         { "326", NULL },
         { "328", NULL },
         { "330", NULL },
         { "332", NULL },
         { "334", NULL },
         { "336", NULL },
         { "338", NULL },
         { "340", NULL },
         { "342", NULL },
         { "344", NULL },
         { "346", NULL },
         { "348", NULL },
         { "350", NULL },
         { "352", OPTION_VAL_352_VN },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_VN,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_VN },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { "16", NULL },
         { "17", NULL },
         { "18", NULL },
         { "19", NULL },
         { "20", NULL },
         { "21", NULL },
         { "22", NULL },
         { "23", NULL },
         { "24", NULL },
         { "25", NULL },
         { "26", NULL },
         { "27", NULL },
         { "28", NULL },
         { "29", NULL },
         { "30", NULL },
         { "31", NULL },
         { "32", NULL },
         { "33", NULL },
         { "34", NULL },
         { "35", NULL },
         { "36", NULL },
         { "37", NULL },
         { "38", NULL },
         { "39", NULL },
         { "40", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_last_scanline",
      PCE_FAST_LAST_SCANLINE_LABEL_VN,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_VN,
      NULL,
      "video",
      {
         { "208", NULL },
         { "209", NULL },
         { "210", NULL },
         { "211", NULL },
         { "212", NULL },
         { "213", NULL },
         { "214", NULL },
         { "215", NULL },
         { "216", NULL },
         { "217", NULL },
         { "218", NULL },
         { "219", NULL },
         { "220", NULL },
         { "221", NULL },
         { "222", NULL },
         { "223", NULL },
         { "224", NULL },
         { "225", NULL },
         { "226", NULL },
         { "227", NULL },
         { "228", NULL },
         { "229", NULL },
         { "230", NULL },
         { "231", NULL },
         { "232", NULL },
         { "233", NULL },
         { "234", NULL },
         { "235", NULL },
         { "236", NULL },
         { "237", NULL },
         { "238", NULL },
         { "239", NULL },
         { "240", NULL },
         { "241", NULL },
         { "242", OPTION_VAL_242_VN },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_1_volume",
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_2_volume",
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_3_volume",
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_4_volume",
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_sound_channel_5_volume",
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_VN,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_VN,
      NULL,
      "channel_volume",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_mouse_sensitivity",
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_VN,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_VN,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_VN },
         { "0.50", OPTION_VAL_0_50_VN },
         { "0.75", OPTION_VAL_0_75_VN },
         { "1.00", OPTION_VAL_1_00_VN },
         { "1.25", OPTION_VAL_1_25_VN },
         { "1.50", OPTION_VAL_1_50_VN },
         { "1.75", OPTION_VAL_1_75_VN },
         { "2.00", OPTION_VAL_2_00_VN },
         { "2.25", OPTION_VAL_2_25_VN },
         { "2.50", OPTION_VAL_2_50_VN },
         { "2.75", OPTION_VAL_2_75_VN },
         { "3.00", OPTION_VAL_3_00_VN },
         { "3.25", OPTION_VAL_3_25_VN },
         { "3.50", OPTION_VAL_3_50_VN },
         { "3.75", OPTION_VAL_3_75_VN },
         { "4.00", OPTION_VAL_4_00_VN },
         { "4.25", OPTION_VAL_4_25_VN },
         { "4.50", OPTION_VAL_4_50_VN },
         { "4.75", OPTION_VAL_4_75_VN },
         { "5.00", OPTION_VAL_5_00_VN },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_VN,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_VN,
      NULL,
      "input",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_default_joypad_type_p1",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_LABEL_VN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P1_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p2",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_LABEL_VN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P2_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p3",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_LABEL_VN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P3_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p4",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_LABEL_VN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P4_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_default_joypad_type_p5",
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_LABEL_VN,
      NULL,
      PCE_FAST_DEFAULT_JOYPAD_TYPE_P5_INFO_0_VN,
      NULL,
      "input",
      {
         { "2 Buttons", OPTION_VAL_2_BUTTONS_VN },
         { "6 Buttons", OPTION_VAL_6_BUTTONS_VN },
         { NULL, NULL},
      },
      "2 Buttons"
   },
   {
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_VN,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_toggle_hotkey",
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_VN,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_turbo_delay",
      PCE_FAST_TURBO_DELAY_LABEL_VN,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_VN,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_VN },
         { "4",  NULL },
         { "5",  NULL },
         { "6",  NULL },
         { "7",  NULL },
         { "8",  NULL },
         { "9",  NULL },
         { "10", NULL },
         { "11", NULL },
         { "12", NULL },
         { "13", NULL },
         { "14", NULL },
         { "15", NULL },
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_fast_cdimagecache",
      PCE_FAST_CDIMAGECACHE_LABEL_VN,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_VN,
      NULL,
      "cd",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      PCE_FAST_CDBIOS_LABEL_VN,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_VN,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_VN },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_VN },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_VN },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_VN },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_VN },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_VN },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_VN,
      PCE_FAST_CDSPEED_LABEL_CAT_VN,
      PCE_FAST_CDSPEED_INFO_0_VN,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_VN },
         { "2", OPTION_VAL_2_VN },
         { "4", OPTION_VAL_4_VN },
         { "8", OPTION_VAL_8_VN },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_VN,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_VN,
      PCE_FAST_ADPCMVOLUME_INFO_0_VN,
      PCE_FAST_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cddavolume",
      PCE_FAST_CDDAVOLUME_LABEL_VN,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_VN,
      PCE_FAST_ADPCMVOLUME_INFO_0_VN,
      PCE_FAST_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_cdpsgvolume",
      PCE_FAST_CDPSGVOLUME_LABEL_VN,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_VN,
      PCE_FAST_ADPCMVOLUME_INFO_0_VN,
      PCE_FAST_ADPCMVOLUME_INFO_1_VN,
      "cd",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_fast_nospritelimit",
      PCE_FAST_NOSPRITELIMIT_LABEL_VN,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_ocmultiplier",
      PCE_FAST_OCMULTIPLIER_LABEL_VN,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { NULL, NULL },
      },
      "1"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif