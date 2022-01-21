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
#define CATEGORY_HACKS_LABEL_AST NULL
#define CATEGORY_HACKS_INFO_0_AST NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_AST "Axustes avanzaos del volume de les canales"
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
#define PCE_FAST_OCMULTIPLIER_INFO_0_AST NULL

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

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA NULL
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA NULL
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
#define OPTION_VAL_AUTO_CA NULL
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
#define OPTION_VAL_0_25_CA NULL
#define OPTION_VAL_0_50_CA NULL
#define OPTION_VAL_0_75_CA NULL
#define OPTION_VAL_1_00_CA NULL
#define OPTION_VAL_1_25_CA NULL
#define OPTION_VAL_1_50_CA NULL
#define OPTION_VAL_1_75_CA NULL
#define OPTION_VAL_2_00_CA NULL
#define OPTION_VAL_2_25_CA NULL
#define OPTION_VAL_2_50_CA NULL
#define OPTION_VAL_2_75_CA NULL
#define OPTION_VAL_3_00_CA NULL
#define OPTION_VAL_3_25_CA NULL
#define OPTION_VAL_3_50_CA NULL
#define OPTION_VAL_3_75_CA NULL
#define OPTION_VAL_4_00_CA NULL
#define OPTION_VAL_4_25_CA NULL
#define OPTION_VAL_4_50_CA NULL
#define OPTION_VAL_4_75_CA NULL
#define OPTION_VAL_5_00_CA NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CA NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CA NULL
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
#define CATEGORY_VIDEO_INFO_0_CHS NULL
#define CATEGORY_INPUT_LABEL_CHS "输入"
#define CATEGORY_INPUT_INFO_0_CHS NULL
#define CATEGORY_HACKS_LABEL_CHS "模拟修改"
#define CATEGORY_HACKS_INFO_0_CHS "配置处理器超时和模拟精确参数，影响低级性能和兼容性。"
#define CATEGORY_CHANNEL_VOLUME_LABEL_CHS "高级频道音量设置"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CHS NULL
#define CATEGORY_CD_LABEL_CHS NULL
#define CATEGORY_CD_INFO_0_CHS NULL
#define PCE_FAST_PALETTE_LABEL_CHS "色板"
#define PCE_FAST_PALETTE_INFO_0_CHS NULL
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS "合成"
#define PCE_FAST_FRAMESKIP_LABEL_CHS "跳帧"
#define PCE_FAST_FRAMESKIP_INFO_0_CHS "跳过帧以避免运行下的音频缓冲区(崩溃)。提高性能以牺牲视觉性能。 “自动”跳板帧在前端建议时。“手动”使用了“Frameskip 阈值(%)”设置。"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_MANUAL_CHS "手动"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHS "跳帧阈值(%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHS "当“跳帧”功能设置成“手动”，请在下方指定跳帧占音频缓存的比例（百分比）。更高的值可以降低因频繁丢帧而导致的爆音风险。"
#define OPTION_VAL_33_CHS "33 (默认)"
#define PCE_FAST_HOVERSCAN_LABEL_CHS NULL
#define PCE_FAST_HOVERSCAN_INFO_0_CHS NULL
#define OPTION_VAL_352_CHS "352 (默认)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CHS NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_3_CHS "3 (默认)"
#define PCE_FAST_LAST_SCANLINE_LABEL_CHS NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_CHS NULL
#define OPTION_VAL_242_CHS "242 (默认)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHS NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHS NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHS "鼠标灵敏度"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHS NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CHS NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHS NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CHS NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CHS NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHS NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHS NULL
#define PCE_FAST_TURBO_DELAY_LABEL_CHS NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_CHS NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_CHS NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_CHS NULL
#define PCE_FAST_CDBIOS_LABEL_CHS NULL
#define PCE_FAST_CDBIOS_INFO_0_CHS NULL
#define OPTION_VAL_GAMES_EXPRESS_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHS NULL
#define PCE_FAST_CDSPEED_LABEL_CHS NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_CHS NULL
#define PCE_FAST_CDSPEED_INFO_0_CHS NULL
#define OPTION_VAL_1_CHS NULL
#define OPTION_VAL_2_CHS NULL
#define OPTION_VAL_4_CHS "4 倍"
#define OPTION_VAL_8_CHS "8 倍"
#define PCE_FAST_ADPCMVOLUME_LABEL_CHS NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHS NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_CHS NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_CHS NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CHS NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CHS NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CHS NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHS NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_CHS NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CHS NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_CHS NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_CHS NULL

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

#define CATEGORY_VIDEO_LABEL_CHT "視訊"
#define CATEGORY_VIDEO_INFO_0_CHT NULL
#define CATEGORY_INPUT_LABEL_CHT "輸入"
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_HACKS_LABEL_CHT NULL
#define CATEGORY_HACKS_INFO_0_CHT NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_CHT NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CHT NULL
#define CATEGORY_CD_LABEL_CHT NULL
#define CATEGORY_CD_INFO_0_CHT NULL
#define PCE_FAST_PALETTE_LABEL_CHT NULL
#define PCE_FAST_PALETTE_INFO_0_CHT NULL
#define OPTION_VAL_RGB_CHT NULL
#define OPTION_VAL_COMPOSITE_CHT NULL
#define PCE_FAST_FRAMESKIP_LABEL_CHT NULL
#define PCE_FAST_FRAMESKIP_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_MANUAL_CHT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CHT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CHT NULL
#define OPTION_VAL_33_CHT NULL
#define PCE_FAST_HOVERSCAN_LABEL_CHT NULL
#define PCE_FAST_HOVERSCAN_INFO_0_CHT NULL
#define OPTION_VAL_352_CHT NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CHT NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_3_CHT NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_CHT NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_CHT NULL
#define OPTION_VAL_242_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CHT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CHT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CHT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CHT NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CHT NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CHT NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CHT NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CHT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CHT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CHT NULL
#define PCE_FAST_TURBO_DELAY_LABEL_CHT NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_CHT NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_CHT NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_CHT NULL
#define PCE_FAST_CDBIOS_LABEL_CHT NULL
#define PCE_FAST_CDBIOS_INFO_0_CHT NULL
#define OPTION_VAL_GAMES_EXPRESS_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_1_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_2_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_3_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CHT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CHT NULL
#define PCE_FAST_CDSPEED_LABEL_CHT NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_CHT NULL
#define PCE_FAST_CDSPEED_INFO_0_CHT NULL
#define OPTION_VAL_1_CHT NULL
#define OPTION_VAL_2_CHT NULL
#define OPTION_VAL_4_CHT NULL
#define OPTION_VAL_8_CHT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CHT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CHT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_CHT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_CHT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CHT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CHT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CHT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CHT NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_CHT NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CHT NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_CHT NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_CHT NULL

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
#define CATEGORY_VIDEO_INFO_0_CS NULL
#define CATEGORY_INPUT_LABEL_CS "Vstup"
#define CATEGORY_INPUT_INFO_0_CS NULL
#define CATEGORY_HACKS_LABEL_CS NULL
#define CATEGORY_HACKS_INFO_0_CS NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_CS NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_CS NULL
#define CATEGORY_CD_LABEL_CS NULL
#define CATEGORY_CD_INFO_0_CS NULL
#define PCE_FAST_PALETTE_LABEL_CS NULL
#define PCE_FAST_PALETTE_INFO_0_CS NULL
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_COMPOSITE_CS NULL
#define PCE_FAST_FRAMESKIP_LABEL_CS NULL
#define PCE_FAST_FRAMESKIP_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_MANUAL_CS NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_CS NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_CS NULL
#define OPTION_VAL_33_CS NULL
#define PCE_FAST_HOVERSCAN_LABEL_CS NULL
#define PCE_FAST_HOVERSCAN_INFO_0_CS NULL
#define OPTION_VAL_352_CS NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_CS NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_3_CS NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_CS NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_CS NULL
#define OPTION_VAL_242_CS NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_CS NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_CS NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_CS NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_CS NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_CS NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_CS NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_CS NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_CS NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_CS NULL
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
#define OPTION_VAL_5_00_CS NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_CS NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_CS NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_CS NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_CS NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_CS NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_CS NULL
#define PCE_FAST_TURBO_DELAY_LABEL_CS NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_CS NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_CS NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_CS NULL
#define PCE_FAST_CDBIOS_LABEL_CS NULL
#define PCE_FAST_CDBIOS_INFO_0_CS NULL
#define OPTION_VAL_GAMES_EXPRESS_CS NULL
#define OPTION_VAL_SYSTEM_CARD_1_CS NULL
#define OPTION_VAL_SYSTEM_CARD_2_CS NULL
#define OPTION_VAL_SYSTEM_CARD_3_CS NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_CS NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_CS NULL
#define PCE_FAST_CDSPEED_LABEL_CS NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_CS NULL
#define PCE_FAST_CDSPEED_INFO_0_CS NULL
#define OPTION_VAL_1_CS NULL
#define OPTION_VAL_2_CS NULL
#define OPTION_VAL_4_CS NULL
#define OPTION_VAL_8_CS NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CS NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_CS NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_CS NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_CS NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CS NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_CS NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CS NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_CS NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_CS NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_CS NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_CS NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_CS NULL

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
#define CATEGORY_VIDEO_INFO_0_DE NULL
#define CATEGORY_INPUT_LABEL_DE "Eingabe"
#define CATEGORY_INPUT_INFO_0_DE NULL
#define CATEGORY_HACKS_LABEL_DE "Emulations-Hacks"
#define CATEGORY_HACKS_INFO_0_DE "Parameter für Prozessorübertaktung und Emulationsgenauigkeit, die sich auf die Low-Level-Leistung und Kompatibilität auswirken, anpassen."
#define CATEGORY_CHANNEL_VOLUME_LABEL_DE NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_DE NULL
#define CATEGORY_CD_LABEL_DE NULL
#define CATEGORY_CD_INFO_0_DE NULL
#define PCE_FAST_PALETTE_LABEL_DE "Farbpalette"
#define PCE_FAST_PALETTE_INFO_0_DE NULL
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define PCE_FAST_FRAMESKIP_LABEL_DE NULL
#define PCE_FAST_FRAMESKIP_INFO_0_DE "Frames überspringen, um ein Unterlaufen des Audiopuffers (Knistern) zu vermeiden. Verbessert die Leistung auf Kosten der visuellen Glätte. 'Auto' überspringt Frames, wenn vom Frontend empfohlen. 'Manual' verwendet die Einstellung 'Frameskip Grenzwert (%)'."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_MANUAL_DE "Manuell"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_DE "Frameskip Grenzwert (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_DE "Gibt den Audiopuffer-Belegungsschwellenwert (Prozent) an, unter dem Frames übersprungen werden, wenn 'Frameskip' auf 'Manual' eingestellt ist. Höhere Werte verringern das Risiko von Knistern, da Frames häufiger weggelassen werden."
#define OPTION_VAL_33_DE "33 (Standard)"
#define PCE_FAST_HOVERSCAN_LABEL_DE NULL
#define PCE_FAST_HOVERSCAN_INFO_0_DE NULL
#define OPTION_VAL_352_DE "352 (Standard)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_DE NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_3_DE "3 (Standard)"
#define PCE_FAST_LAST_SCANLINE_LABEL_DE NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_DE NULL
#define OPTION_VAL_242_DE "242 (Standard)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_DE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_DE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_DE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_DE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_DE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_DE NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_DE NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_DE "Mausempfindlichkeit"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_DE NULL
#define OPTION_VAL_0_25_DE NULL
#define OPTION_VAL_0_50_DE NULL
#define OPTION_VAL_0_75_DE NULL
#define OPTION_VAL_1_00_DE NULL
#define OPTION_VAL_1_25_DE NULL
#define OPTION_VAL_1_50_DE NULL
#define OPTION_VAL_1_75_DE NULL
#define OPTION_VAL_2_00_DE NULL
#define OPTION_VAL_2_25_DE NULL
#define OPTION_VAL_2_50_DE NULL
#define OPTION_VAL_2_75_DE NULL
#define OPTION_VAL_3_00_DE NULL
#define OPTION_VAL_3_25_DE NULL
#define OPTION_VAL_3_50_DE NULL
#define OPTION_VAL_3_75_DE NULL
#define OPTION_VAL_4_00_DE NULL
#define OPTION_VAL_4_25_DE NULL
#define OPTION_VAL_4_50_DE NULL
#define OPTION_VAL_4_75_DE NULL
#define OPTION_VAL_5_00_DE NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_DE NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_DE NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_DE NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_DE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_DE NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_DE NULL
#define PCE_FAST_TURBO_DELAY_LABEL_DE NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_DE NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_DE NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_DE NULL
#define PCE_FAST_CDBIOS_LABEL_DE NULL
#define PCE_FAST_CDBIOS_INFO_0_DE NULL
#define OPTION_VAL_GAMES_EXPRESS_DE NULL
#define OPTION_VAL_SYSTEM_CARD_1_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_DE NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_DE NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_DE NULL
#define PCE_FAST_CDSPEED_LABEL_DE NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_DE NULL
#define PCE_FAST_CDSPEED_INFO_0_DE NULL
#define OPTION_VAL_1_DE "1 x"
#define OPTION_VAL_2_DE "2 x"
#define OPTION_VAL_4_DE "4 x"
#define OPTION_VAL_8_DE "8 x"
#define PCE_FAST_ADPCMVOLUME_LABEL_DE NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_DE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_DE NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_DE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_DE NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_DE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_DE NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_DE NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_DE NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_DE NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_DE NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_DE NULL

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
#define OPTION_VAL_33_EL NULL
#define PCE_FAST_HOVERSCAN_LABEL_EL NULL
#define PCE_FAST_HOVERSCAN_INFO_0_EL NULL
#define OPTION_VAL_352_EL NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_EL NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_3_EL NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_EL NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_EL NULL
#define OPTION_VAL_242_EL NULL
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
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_EL NULL
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
#define PCE_FAST_TURBO_TOGGLING_LABEL_EL NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_EL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_EL NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_EL NULL
#define PCE_FAST_TURBO_DELAY_LABEL_EL NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_EL NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_EL NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_EL NULL
#define PCE_FAST_CDBIOS_LABEL_EL NULL
#define PCE_FAST_CDBIOS_INFO_0_EL NULL
#define OPTION_VAL_GAMES_EXPRESS_EL NULL
#define OPTION_VAL_SYSTEM_CARD_1_EL NULL
#define OPTION_VAL_SYSTEM_CARD_2_EL NULL
#define OPTION_VAL_SYSTEM_CARD_3_EL NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_EL NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_EL NULL
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
#define CATEGORY_INPUT_LABEL_FA "داده"
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
#define PCE_FAST_FRAMESKIP_LABEL_FA NULL
#define PCE_FAST_FRAMESKIP_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_MANUAL_FA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FA NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FA NULL
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
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_INPUT_LABEL_FI "Syöte"
#define CATEGORY_INPUT_INFO_0_FI NULL
#define CATEGORY_HACKS_LABEL_FI "Emulointikikat"
#define CATEGORY_HACKS_INFO_0_FI "Määritä prosessorin ylikellotus- ja emuloinnin tarkkuuden asetukset, jotka vaikuttavat matalan tason suorituskykyyn ja yhteensopivuuteen."
#define CATEGORY_CHANNEL_VOLUME_LABEL_FI "Kanavan äänenvoimakkuuden lisäasetukset"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_FI NULL
#define CATEGORY_CD_LABEL_FI NULL
#define CATEGORY_CD_INFO_0_FI NULL
#define PCE_FAST_PALETTE_LABEL_FI "Väripaletti"
#define PCE_FAST_PALETTE_INFO_0_FI NULL
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_COMPOSITE_FI "Komposiitti"
#define PCE_FAST_FRAMESKIP_LABEL_FI "Kuvanohitus"
#define PCE_FAST_FRAMESKIP_INFO_0_FI "Ohita kuvia välttääksesi äänipuskurin ali ajon (säröily). Parantaa suorituskykyä visuaalisen tasaisuuden kustannuksella. \"Automaatti\" ohittaa kehykset käyttöliittymän asetusten mukaan. \"Manuaalinen\" käyttää \"Kuvienohituksen arvo (%)\" -asetusta."
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_MANUAL_FI "Manuaalinen"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_FI "Kuvienohituksen arvo (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_FI "Kun \"kehyksen ohitus\" on asetettu \"manuaaliksi\", määrittää äänipuskuri käyttökynnyksen (prosentteina), jonka alapuolella kehykset ohitetaan. Korkeammat arvot vähentävät särkymisen riskiä siten, että kehykset putoavat useammin."
#define OPTION_VAL_33_FI "33 (Oletus)"
#define PCE_FAST_HOVERSCAN_LABEL_FI NULL
#define PCE_FAST_HOVERSCAN_INFO_0_FI NULL
#define OPTION_VAL_352_FI "352 (Oletus)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_FI NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_3_FI "3 (Oletus)"
#define PCE_FAST_LAST_SCANLINE_LABEL_FI NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_FI NULL
#define OPTION_VAL_242_FI "242 (Oletus)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_FI NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_FI NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_FI NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_FI NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_FI NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_FI NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_FI NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_FI "Hiiren herkkyys"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_FI NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_FI NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_FI NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_FI NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_FI NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_FI NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_FI NULL
#define PCE_FAST_TURBO_DELAY_LABEL_FI "Turbon viive"
#define PCE_FAST_TURBO_DELAY_INFO_0_FI NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_FI NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_FI NULL
#define PCE_FAST_CDBIOS_LABEL_FI NULL
#define PCE_FAST_CDBIOS_INFO_0_FI NULL
#define OPTION_VAL_GAMES_EXPRESS_FI NULL
#define OPTION_VAL_SYSTEM_CARD_1_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_FI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_FI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_FI NULL
#define PCE_FAST_CDSPEED_LABEL_FI NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_FI "CD-nopeus"
#define PCE_FAST_CDSPEED_INFO_0_FI NULL
#define OPTION_VAL_1_FI NULL
#define OPTION_VAL_2_FI NULL
#define OPTION_VAL_4_FI NULL
#define OPTION_VAL_8_FI NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_FI NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_FI NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_FI NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_FI NULL
#define PCE_FAST_CDDAVOLUME_LABEL_FI NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_FI NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_FI NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_FI NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_FI "Poista sprite-rajoitus"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_FI NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_FI NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_FI NULL

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

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Videó"
#define CATEGORY_VIDEO_INFO_0_HU NULL
#define CATEGORY_INPUT_LABEL_HU "Bevitel"
#define CATEGORY_INPUT_INFO_0_HU NULL
#define CATEGORY_HACKS_LABEL_HU NULL
#define CATEGORY_HACKS_INFO_0_HU NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_HU NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_HU NULL
#define CATEGORY_CD_LABEL_HU NULL
#define CATEGORY_CD_INFO_0_HU NULL
#define PCE_FAST_PALETTE_LABEL_HU NULL
#define PCE_FAST_PALETTE_INFO_0_HU NULL
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_COMPOSITE_HU NULL
#define PCE_FAST_FRAMESKIP_LABEL_HU NULL
#define PCE_FAST_FRAMESKIP_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_MANUAL_HU "Kézi"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_HU NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_HU NULL
#define OPTION_VAL_33_HU NULL
#define PCE_FAST_HOVERSCAN_LABEL_HU NULL
#define PCE_FAST_HOVERSCAN_INFO_0_HU NULL
#define OPTION_VAL_352_HU NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_HU NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_3_HU NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_HU NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_HU NULL
#define OPTION_VAL_242_HU NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_HU NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_HU NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_HU NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_HU NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_HU NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_HU NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_HU NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_HU NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_HU NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_HU NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_HU NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_HU NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_HU NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_HU NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_HU NULL
#define PCE_FAST_TURBO_DELAY_LABEL_HU NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_HU NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_HU NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_HU NULL
#define PCE_FAST_CDBIOS_LABEL_HU NULL
#define PCE_FAST_CDBIOS_INFO_0_HU NULL
#define OPTION_VAL_GAMES_EXPRESS_HU NULL
#define OPTION_VAL_SYSTEM_CARD_1_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_HU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_HU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_HU NULL
#define PCE_FAST_CDSPEED_LABEL_HU NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_HU NULL
#define PCE_FAST_CDSPEED_INFO_0_HU NULL
#define OPTION_VAL_1_HU NULL
#define OPTION_VAL_2_HU NULL
#define OPTION_VAL_4_HU NULL
#define OPTION_VAL_8_HU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_HU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_HU NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_HU NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_HU NULL
#define PCE_FAST_CDDAVOLUME_LABEL_HU NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_HU NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_HU NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_HU NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_HU NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_HU NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_HU NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_HU NULL

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
#define CATEGORY_HACKS_LABEL_ID NULL
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
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_MANUAL_ID NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_ID NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_ID "Saat 'Frameskip' di setel ke 'Manual', tentukan ambang batas hunian buffer audio (persentase) di bawah frame mana yang akan dilewati. Nilai yang lebih tinggi mengurangi risiko keretakan dengan menyebabkan bingkai frame lebih sering dijatuhkan."
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
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_ID NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_ID NULL
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
#define PCE_FAST_TURBO_TOGGLING_LABEL_ID NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_ID NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_ID NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_ID NULL
#define PCE_FAST_TURBO_DELAY_LABEL_ID NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_ID NULL
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

#define CATEGORY_VIDEO_LABEL_JA "ビデオのドライバ"
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_INPUT_LABEL_JA "入力"
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_HACKS_LABEL_JA "エミュレーションハック"
#define CATEGORY_HACKS_INFO_0_JA NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_JA "高度なチャンネル音量設定"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_JA NULL
#define CATEGORY_CD_LABEL_JA NULL
#define CATEGORY_CD_INFO_0_JA NULL
#define PCE_FAST_PALETTE_LABEL_JA NULL
#define PCE_FAST_PALETTE_INFO_0_JA NULL
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_COMPOSITE_JA NULL
#define PCE_FAST_FRAMESKIP_LABEL_JA "フレームスキップ"
#define PCE_FAST_FRAMESKIP_INFO_0_JA "フレームをスキップしてオーディオバッファアンダーラン (音割れ) を回避します。視覚的な滑らかさを犠牲にしてパフォーマンスを向上させます。 「自動」は、フロントエンドにアドバイスされたときにフレームをスキップします。「マニュアル」は、「フレームスキップ閾値 (%)」設定を使用します。"
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_MANUAL_JA "手動"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_JA "フレームスキップ閾値 (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_JA "'フレームスキップ' が '手動' に設定されている場合, フレームがスキップされるオーディオバッファ占有しきい値 (%) を指定します. 値を大きくすると, フレームを頻繁に落とすことでクラッキングが発生するリスクが低下します."
#define OPTION_VAL_33_JA NULL
#define PCE_FAST_HOVERSCAN_LABEL_JA NULL
#define PCE_FAST_HOVERSCAN_INFO_0_JA NULL
#define OPTION_VAL_352_JA NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_JA NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_3_JA NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_JA NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_JA NULL
#define OPTION_VAL_242_JA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_JA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_JA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_JA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_JA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_JA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_JA NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_JA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_JA NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_JA NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_JA NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_JA NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_JA NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_JA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_JA NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_JA NULL
#define PCE_FAST_TURBO_DELAY_LABEL_JA NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_JA NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_JA NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_JA NULL
#define PCE_FAST_CDBIOS_LABEL_JA NULL
#define PCE_FAST_CDBIOS_INFO_0_JA NULL
#define OPTION_VAL_GAMES_EXPRESS_JA NULL
#define OPTION_VAL_SYSTEM_CARD_1_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_JA NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_JA NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_JA NULL
#define PCE_FAST_CDSPEED_LABEL_JA NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_JA NULL
#define PCE_FAST_CDSPEED_INFO_0_JA NULL
#define OPTION_VAL_1_JA NULL
#define OPTION_VAL_2_JA NULL
#define OPTION_VAL_4_JA NULL
#define OPTION_VAL_8_JA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_JA NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_JA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_JA NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_JA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_JA NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_JA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_JA NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_JA NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_JA NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_JA NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_JA NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_JA NULL

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
#define CATEGORY_VIDEO_INFO_0_KO NULL
#define CATEGORY_INPUT_LABEL_KO "입력"
#define CATEGORY_INPUT_INFO_0_KO NULL
#define CATEGORY_HACKS_LABEL_KO "에뮬레이션 핵"
#define CATEGORY_HACKS_INFO_0_KO "성능과 호환성에 영향을 끼치는 프로세서 오버클러킹 및 에뮬레이션 정확도 옵션 등을 설정합니다."
#define CATEGORY_CHANNEL_VOLUME_LABEL_KO "고급 채널 볼륨 설정"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_KO "개별 하드웨어 오디오 채널의 볼륨을 설정합니다."
#define CATEGORY_CD_LABEL_KO NULL
#define CATEGORY_CD_INFO_0_KO NULL
#define PCE_FAST_PALETTE_LABEL_KO "색상 팔레트"
#define PCE_FAST_PALETTE_INFO_0_KO NULL
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_COMPOSITE_KO "컴포지트"
#define PCE_FAST_FRAMESKIP_LABEL_KO "프레임 스킵"
#define PCE_FAST_FRAMESKIP_INFO_0_KO "오디오 버퍼 언더런(소리깨짐) 을 줄이기 위해 프레임 건너뛰기를 합니다. 시각적인 부드러움을 포기하는 대신 성능이 향상됩니다. '자동'은 프론트엔드의 추천값으로 실행되고 '사용자 설정'은 '프레임 스킵 임계값(%)' 설정을 이용해 실행됩니다."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_MANUAL_KO "수동"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_KO "프레임 스킵 임계값 (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_KO "'프레임 건너뛰기'가 '사용자 설정'일 경우 건너뛸 프레임에 대한 오디오 버퍼 점유 임계점 (퍼센트) 을 설정하게됩니다. 값이 높을 수록 프레임은 떨어지고 그 대신 소리 깨짐 현상은 줄어들게 됩니다."
#define OPTION_VAL_33_KO "33 (기본)"
#define PCE_FAST_HOVERSCAN_LABEL_KO NULL
#define PCE_FAST_HOVERSCAN_INFO_0_KO NULL
#define OPTION_VAL_352_KO "352 (기본)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_KO NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_3_KO "3 (기본)"
#define PCE_FAST_LAST_SCANLINE_LABEL_KO NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_KO NULL
#define OPTION_VAL_242_KO "242 (기본)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_KO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_KO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_KO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_KO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_KO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_KO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_KO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_KO "마우스 감도"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_KO NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_KO NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_KO NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_KO NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_KO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_KO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_KO NULL
#define PCE_FAST_TURBO_DELAY_LABEL_KO NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_KO NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_KO NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_KO NULL
#define PCE_FAST_CDBIOS_LABEL_KO NULL
#define PCE_FAST_CDBIOS_INFO_0_KO NULL
#define OPTION_VAL_GAMES_EXPRESS_KO NULL
#define OPTION_VAL_SYSTEM_CARD_1_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_KO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_KO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_KO NULL
#define PCE_FAST_CDSPEED_LABEL_KO NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_KO NULL
#define PCE_FAST_CDSPEED_INFO_0_KO NULL
#define OPTION_VAL_1_KO NULL
#define OPTION_VAL_2_KO NULL
#define OPTION_VAL_4_KO NULL
#define OPTION_VAL_8_KO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_KO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_KO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_KO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_KO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_KO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_KO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_KO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_KO NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_KO "스프라이트 제한 해제"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_KO NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_KO NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_KO NULL

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

/* RETRO_LANGUAGE_MT */

#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_INPUT_LABEL_MT NULL
#define CATEGORY_INPUT_INFO_0_MT NULL
#define CATEGORY_HACKS_LABEL_MT NULL
#define CATEGORY_HACKS_INFO_0_MT NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_MT NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_MT NULL
#define CATEGORY_CD_LABEL_MT NULL
#define CATEGORY_CD_INFO_0_MT NULL
#define PCE_FAST_PALETTE_LABEL_MT NULL
#define PCE_FAST_PALETTE_INFO_0_MT NULL
#define OPTION_VAL_RGB_MT NULL
#define OPTION_VAL_COMPOSITE_MT NULL
#define PCE_FAST_FRAMESKIP_LABEL_MT NULL
#define PCE_FAST_FRAMESKIP_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_MANUAL_MT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_MT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_MT NULL
#define OPTION_VAL_33_MT NULL
#define PCE_FAST_HOVERSCAN_LABEL_MT NULL
#define PCE_FAST_HOVERSCAN_INFO_0_MT NULL
#define OPTION_VAL_352_MT NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_MT NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_3_MT NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_MT NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_MT NULL
#define OPTION_VAL_242_MT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_MT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_MT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_MT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_MT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_MT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_MT NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_MT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_MT NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_MT NULL
#define OPTION_VAL_0_25_MT NULL
#define OPTION_VAL_0_50_MT NULL
#define OPTION_VAL_0_75_MT NULL
#define OPTION_VAL_1_00_MT NULL
#define OPTION_VAL_1_25_MT NULL
#define OPTION_VAL_1_50_MT NULL
#define OPTION_VAL_1_75_MT NULL
#define OPTION_VAL_2_00_MT NULL
#define OPTION_VAL_2_25_MT NULL
#define OPTION_VAL_2_50_MT NULL
#define OPTION_VAL_2_75_MT NULL
#define OPTION_VAL_3_00_MT NULL
#define OPTION_VAL_3_25_MT NULL
#define OPTION_VAL_3_50_MT NULL
#define OPTION_VAL_3_75_MT NULL
#define OPTION_VAL_4_00_MT NULL
#define OPTION_VAL_4_25_MT NULL
#define OPTION_VAL_4_50_MT NULL
#define OPTION_VAL_4_75_MT NULL
#define OPTION_VAL_5_00_MT NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_MT NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_MT NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_MT NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_MT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_MT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_MT NULL
#define PCE_FAST_TURBO_DELAY_LABEL_MT NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_MT NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_MT NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_MT NULL
#define PCE_FAST_CDBIOS_LABEL_MT NULL
#define PCE_FAST_CDBIOS_INFO_0_MT NULL
#define OPTION_VAL_GAMES_EXPRESS_MT NULL
#define OPTION_VAL_SYSTEM_CARD_1_MT NULL
#define OPTION_VAL_SYSTEM_CARD_2_MT NULL
#define OPTION_VAL_SYSTEM_CARD_3_MT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_MT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_MT NULL
#define PCE_FAST_CDSPEED_LABEL_MT NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_MT NULL
#define PCE_FAST_CDSPEED_INFO_0_MT NULL
#define OPTION_VAL_1_MT NULL
#define OPTION_VAL_2_MT NULL
#define OPTION_VAL_4_MT NULL
#define OPTION_VAL_8_MT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_MT NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_MT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_MT NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_MT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_MT NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_MT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_MT NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_MT NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_MT NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_MT NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_MT NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
      CATEGORY_VIDEO_INFO_0_MT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_MT,
      CATEGORY_INPUT_INFO_0_MT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_MT,
      CATEGORY_HACKS_INFO_0_MT
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_MT,
      CATEGORY_CHANNEL_VOLUME_INFO_0_MT
   },
   {
      "cd",
      CATEGORY_CD_LABEL_MT,
      CATEGORY_CD_INFO_0_MT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_MT,
      NULL,
      PCE_FAST_PALETTE_INFO_0_MT,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_MT },
         { "Composite", OPTION_VAL_COMPOSITE_MT },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_MT,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_MT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_MT },
         { "manual",   OPTION_VAL_MANUAL_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_MT,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_MT,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_MT },
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
      PCE_FAST_HOVERSCAN_LABEL_MT,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_MT,
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
         { "352", OPTION_VAL_352_MT },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_MT,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_MT,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_MT },
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
      PCE_FAST_LAST_SCANLINE_LABEL_MT,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_MT,
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
         { "242", OPTION_VAL_242_MT },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_MT,
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
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_MT,
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
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_MT,
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
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_MT,
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
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_MT,
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
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_MT,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_MT,
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
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_MT,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_MT,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_MT },
         { "0.50", OPTION_VAL_0_50_MT },
         { "0.75", OPTION_VAL_0_75_MT },
         { "1.00", OPTION_VAL_1_00_MT },
         { "1.25", OPTION_VAL_1_25_MT },
         { "1.50", OPTION_VAL_1_50_MT },
         { "1.75", OPTION_VAL_1_75_MT },
         { "2.00", OPTION_VAL_2_00_MT },
         { "2.25", OPTION_VAL_2_25_MT },
         { "2.50", OPTION_VAL_2_50_MT },
         { "2.75", OPTION_VAL_2_75_MT },
         { "3.00", OPTION_VAL_3_00_MT },
         { "3.25", OPTION_VAL_3_25_MT },
         { "3.50", OPTION_VAL_3_50_MT },
         { "3.75", OPTION_VAL_3_75_MT },
         { "4.00", OPTION_VAL_4_00_MT },
         { "4.25", OPTION_VAL_4_25_MT },
         { "4.50", OPTION_VAL_4_50_MT },
         { "4.75", OPTION_VAL_4_75_MT },
         { "5.00", OPTION_VAL_5_00_MT },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_MT,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_MT,
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
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_MT,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_MT,
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
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_MT,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_MT,
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
      PCE_FAST_TURBO_DELAY_LABEL_MT,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_MT,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_MT },
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
      PCE_FAST_CDIMAGECACHE_LABEL_MT,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_MT,
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
      PCE_FAST_CDBIOS_LABEL_MT,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_MT,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_MT },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_MT },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_MT },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_MT },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_MT },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_MT },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_MT,
      PCE_FAST_CDSPEED_LABEL_CAT_MT,
      PCE_FAST_CDSPEED_INFO_0_MT,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_MT },
         { "2", OPTION_VAL_2_MT },
         { "4", OPTION_VAL_4_MT },
         { "8", OPTION_VAL_8_MT },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_MT,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_MT,
      PCE_FAST_ADPCMVOLUME_INFO_0_MT,
      PCE_FAST_ADPCMVOLUME_INFO_1_MT,
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
      PCE_FAST_CDDAVOLUME_LABEL_MT,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_MT,
      PCE_FAST_ADPCMVOLUME_INFO_0_MT,
      PCE_FAST_ADPCMVOLUME_INFO_1_MT,
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
      PCE_FAST_CDPSGVOLUME_LABEL_MT,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_MT,
      PCE_FAST_ADPCMVOLUME_INFO_0_MT,
      PCE_FAST_ADPCMVOLUME_INFO_1_MT,
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
      PCE_FAST_NOSPRITELIMIT_LABEL_MT,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_MT,
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
      PCE_FAST_OCMULTIPLIER_LABEL_MT,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_MT,
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
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
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

/* RETRO_LANGUAGE_OC */

#define CATEGORY_VIDEO_LABEL_OC "Vidèo"
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_INPUT_LABEL_OC NULL
#define CATEGORY_INPUT_INFO_0_OC NULL
#define CATEGORY_HACKS_LABEL_OC NULL
#define CATEGORY_HACKS_INFO_0_OC NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_OC NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_OC NULL
#define CATEGORY_CD_LABEL_OC NULL
#define CATEGORY_CD_INFO_0_OC NULL
#define PCE_FAST_PALETTE_LABEL_OC NULL
#define PCE_FAST_PALETTE_INFO_0_OC NULL
#define OPTION_VAL_RGB_OC NULL
#define OPTION_VAL_COMPOSITE_OC NULL
#define PCE_FAST_FRAMESKIP_LABEL_OC NULL
#define PCE_FAST_FRAMESKIP_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_MANUAL_OC NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_OC NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_OC NULL
#define OPTION_VAL_33_OC NULL
#define PCE_FAST_HOVERSCAN_LABEL_OC NULL
#define PCE_FAST_HOVERSCAN_INFO_0_OC NULL
#define OPTION_VAL_352_OC NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_OC NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_3_OC NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_OC NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_OC NULL
#define OPTION_VAL_242_OC NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_OC NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_OC NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_OC NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_OC NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_OC NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_OC NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_OC NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_OC NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_OC NULL
#define OPTION_VAL_0_25_OC NULL
#define OPTION_VAL_0_50_OC NULL
#define OPTION_VAL_0_75_OC NULL
#define OPTION_VAL_1_00_OC NULL
#define OPTION_VAL_1_25_OC NULL
#define OPTION_VAL_1_50_OC NULL
#define OPTION_VAL_1_75_OC NULL
#define OPTION_VAL_2_00_OC NULL
#define OPTION_VAL_2_25_OC NULL
#define OPTION_VAL_2_50_OC NULL
#define OPTION_VAL_2_75_OC NULL
#define OPTION_VAL_3_00_OC NULL
#define OPTION_VAL_3_25_OC NULL
#define OPTION_VAL_3_50_OC NULL
#define OPTION_VAL_3_75_OC NULL
#define OPTION_VAL_4_00_OC NULL
#define OPTION_VAL_4_25_OC NULL
#define OPTION_VAL_4_50_OC NULL
#define OPTION_VAL_4_75_OC NULL
#define OPTION_VAL_5_00_OC NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_OC NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_OC NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_OC NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_OC NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_OC NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_OC NULL
#define PCE_FAST_TURBO_DELAY_LABEL_OC NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_OC NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_OC NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_OC NULL
#define PCE_FAST_CDBIOS_LABEL_OC NULL
#define PCE_FAST_CDBIOS_INFO_0_OC NULL
#define OPTION_VAL_GAMES_EXPRESS_OC NULL
#define OPTION_VAL_SYSTEM_CARD_1_OC NULL
#define OPTION_VAL_SYSTEM_CARD_2_OC NULL
#define OPTION_VAL_SYSTEM_CARD_3_OC NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_OC NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_OC NULL
#define PCE_FAST_CDSPEED_LABEL_OC NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_OC NULL
#define PCE_FAST_CDSPEED_INFO_0_OC NULL
#define OPTION_VAL_1_OC NULL
#define OPTION_VAL_2_OC NULL
#define OPTION_VAL_4_OC NULL
#define OPTION_VAL_8_OC NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_OC NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_OC NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_OC NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_OC NULL
#define PCE_FAST_CDDAVOLUME_LABEL_OC NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_OC NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_OC NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_OC NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_OC NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_OC NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_OC NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
      CATEGORY_VIDEO_INFO_0_OC
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OC,
      CATEGORY_INPUT_INFO_0_OC
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OC,
      CATEGORY_HACKS_INFO_0_OC
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_OC,
      CATEGORY_CHANNEL_VOLUME_INFO_0_OC
   },
   {
      "cd",
      CATEGORY_CD_LABEL_OC,
      CATEGORY_CD_INFO_0_OC
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_OC,
      NULL,
      PCE_FAST_PALETTE_INFO_0_OC,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_OC },
         { "Composite", OPTION_VAL_COMPOSITE_OC },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_OC,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_OC,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_OC },
         { "manual",   OPTION_VAL_MANUAL_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_OC,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_OC,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_OC },
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
      PCE_FAST_HOVERSCAN_LABEL_OC,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_OC,
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
         { "352", OPTION_VAL_352_OC },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_OC,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_OC,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_OC },
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
      PCE_FAST_LAST_SCANLINE_LABEL_OC,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_OC,
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
         { "242", OPTION_VAL_242_OC },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_OC,
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
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_OC,
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
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_OC,
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
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_OC,
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
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_OC,
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
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_OC,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_OC,
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
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_OC,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_OC,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_OC },
         { "0.50", OPTION_VAL_0_50_OC },
         { "0.75", OPTION_VAL_0_75_OC },
         { "1.00", OPTION_VAL_1_00_OC },
         { "1.25", OPTION_VAL_1_25_OC },
         { "1.50", OPTION_VAL_1_50_OC },
         { "1.75", OPTION_VAL_1_75_OC },
         { "2.00", OPTION_VAL_2_00_OC },
         { "2.25", OPTION_VAL_2_25_OC },
         { "2.50", OPTION_VAL_2_50_OC },
         { "2.75", OPTION_VAL_2_75_OC },
         { "3.00", OPTION_VAL_3_00_OC },
         { "3.25", OPTION_VAL_3_25_OC },
         { "3.50", OPTION_VAL_3_50_OC },
         { "3.75", OPTION_VAL_3_75_OC },
         { "4.00", OPTION_VAL_4_00_OC },
         { "4.25", OPTION_VAL_4_25_OC },
         { "4.50", OPTION_VAL_4_50_OC },
         { "4.75", OPTION_VAL_4_75_OC },
         { "5.00", OPTION_VAL_5_00_OC },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_OC,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_OC,
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
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_OC,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_OC,
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
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_OC,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_OC,
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
      PCE_FAST_TURBO_DELAY_LABEL_OC,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_OC,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_OC },
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
      PCE_FAST_CDIMAGECACHE_LABEL_OC,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_OC,
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
      PCE_FAST_CDBIOS_LABEL_OC,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_OC,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_OC },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_OC },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_OC },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_OC },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_OC },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_OC },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_OC,
      PCE_FAST_CDSPEED_LABEL_CAT_OC,
      PCE_FAST_CDSPEED_INFO_0_OC,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_OC },
         { "2", OPTION_VAL_2_OC },
         { "4", OPTION_VAL_4_OC },
         { "8", OPTION_VAL_8_OC },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_OC,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_OC,
      PCE_FAST_ADPCMVOLUME_INFO_0_OC,
      PCE_FAST_ADPCMVOLUME_INFO_1_OC,
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
      PCE_FAST_CDDAVOLUME_LABEL_OC,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_OC,
      PCE_FAST_ADPCMVOLUME_INFO_0_OC,
      PCE_FAST_ADPCMVOLUME_INFO_1_OC,
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
      PCE_FAST_CDPSGVOLUME_LABEL_OC,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_OC,
      PCE_FAST_ADPCMVOLUME_INFO_0_OC,
      PCE_FAST_ADPCMVOLUME_INFO_1_OC,
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
      PCE_FAST_NOSPRITELIMIT_LABEL_OC,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_OC,
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
      PCE_FAST_OCMULTIPLIER_LABEL_OC,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_OC,
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
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
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
#define PCE_FAST_TURBO_TOGGLING_LABEL_PL NULL
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
#define PCE_FAST_NOSPRITELIMIT_LABEL_PL "Bez limitu duszków"
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
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_MANUAL_PT_PT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_PT_PT NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_PT_PT NULL
#define OPTION_VAL_33_PT_PT NULL
#define PCE_FAST_HOVERSCAN_LABEL_PT_PT NULL
#define PCE_FAST_HOVERSCAN_INFO_0_PT_PT NULL
#define OPTION_VAL_352_PT_PT NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_PT_PT NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_3_PT_PT NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_PT_PT NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_PT_PT NULL
#define OPTION_VAL_242_PT_PT NULL
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
#define PCE_FAST_TURBO_TOGGLING_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_PT_PT NULL
#define PCE_FAST_TURBO_DELAY_LABEL_PT_PT NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_PT_PT NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_PT_PT NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_PT_PT NULL
#define PCE_FAST_CDBIOS_LABEL_PT_PT NULL
#define PCE_FAST_CDBIOS_INFO_0_PT_PT NULL
#define OPTION_VAL_GAMES_EXPRESS_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_1_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_2_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_3_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_PT_PT NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_PT_PT NULL
#define PCE_FAST_CDSPEED_LABEL_PT_PT NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_PT_PT NULL
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

/* RETRO_LANGUAGE_RO */

#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_INPUT_LABEL_RO NULL
#define CATEGORY_INPUT_INFO_0_RO NULL
#define CATEGORY_HACKS_LABEL_RO NULL
#define CATEGORY_HACKS_INFO_0_RO NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_RO NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_RO NULL
#define CATEGORY_CD_LABEL_RO NULL
#define CATEGORY_CD_INFO_0_RO NULL
#define PCE_FAST_PALETTE_LABEL_RO NULL
#define PCE_FAST_PALETTE_INFO_0_RO NULL
#define OPTION_VAL_RGB_RO NULL
#define OPTION_VAL_COMPOSITE_RO NULL
#define PCE_FAST_FRAMESKIP_LABEL_RO NULL
#define PCE_FAST_FRAMESKIP_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_MANUAL_RO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_RO NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_RO NULL
#define OPTION_VAL_33_RO NULL
#define PCE_FAST_HOVERSCAN_LABEL_RO NULL
#define PCE_FAST_HOVERSCAN_INFO_0_RO NULL
#define OPTION_VAL_352_RO NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_RO NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_3_RO NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_RO NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_RO NULL
#define OPTION_VAL_242_RO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_RO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_RO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_RO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_RO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_RO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_RO NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_RO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_RO NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_RO NULL
#define OPTION_VAL_0_25_RO NULL
#define OPTION_VAL_0_50_RO NULL
#define OPTION_VAL_0_75_RO NULL
#define OPTION_VAL_1_00_RO NULL
#define OPTION_VAL_1_25_RO NULL
#define OPTION_VAL_1_50_RO NULL
#define OPTION_VAL_1_75_RO NULL
#define OPTION_VAL_2_00_RO NULL
#define OPTION_VAL_2_25_RO NULL
#define OPTION_VAL_2_50_RO NULL
#define OPTION_VAL_2_75_RO NULL
#define OPTION_VAL_3_00_RO NULL
#define OPTION_VAL_3_25_RO NULL
#define OPTION_VAL_3_50_RO NULL
#define OPTION_VAL_3_75_RO NULL
#define OPTION_VAL_4_00_RO NULL
#define OPTION_VAL_4_25_RO NULL
#define OPTION_VAL_4_50_RO NULL
#define OPTION_VAL_4_75_RO NULL
#define OPTION_VAL_5_00_RO NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_RO NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_RO NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_RO NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_RO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_RO NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_RO NULL
#define PCE_FAST_TURBO_DELAY_LABEL_RO NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_RO NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_RO NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_RO NULL
#define PCE_FAST_CDBIOS_LABEL_RO NULL
#define PCE_FAST_CDBIOS_INFO_0_RO NULL
#define OPTION_VAL_GAMES_EXPRESS_RO NULL
#define OPTION_VAL_SYSTEM_CARD_1_RO NULL
#define OPTION_VAL_SYSTEM_CARD_2_RO NULL
#define OPTION_VAL_SYSTEM_CARD_3_RO NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RO NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RO NULL
#define PCE_FAST_CDSPEED_LABEL_RO NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_RO NULL
#define PCE_FAST_CDSPEED_INFO_0_RO NULL
#define OPTION_VAL_1_RO NULL
#define OPTION_VAL_2_RO NULL
#define OPTION_VAL_4_RO NULL
#define OPTION_VAL_8_RO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_RO NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_RO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_RO NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_RO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_RO NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_RO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_RO NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_RO NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_RO NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_RO NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_RO NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
      CATEGORY_VIDEO_INFO_0_RO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RO,
      CATEGORY_INPUT_INFO_0_RO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RO,
      CATEGORY_HACKS_INFO_0_RO
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_RO,
      CATEGORY_CHANNEL_VOLUME_INFO_0_RO
   },
   {
      "cd",
      CATEGORY_CD_LABEL_RO,
      CATEGORY_CD_INFO_0_RO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_RO,
      NULL,
      PCE_FAST_PALETTE_INFO_0_RO,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_RO },
         { "Composite", OPTION_VAL_COMPOSITE_RO },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_RO,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_RO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RO },
         { "manual",   OPTION_VAL_MANUAL_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_RO,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_RO,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_RO },
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
      PCE_FAST_HOVERSCAN_LABEL_RO,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_RO,
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
         { "352", OPTION_VAL_352_RO },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_RO,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_RO,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_RO },
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
      PCE_FAST_LAST_SCANLINE_LABEL_RO,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_RO,
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
         { "242", OPTION_VAL_242_RO },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_RO,
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
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_RO,
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
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_RO,
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
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_RO,
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
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_RO,
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
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_RO,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_RO,
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
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_RO,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_RO,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_RO },
         { "0.50", OPTION_VAL_0_50_RO },
         { "0.75", OPTION_VAL_0_75_RO },
         { "1.00", OPTION_VAL_1_00_RO },
         { "1.25", OPTION_VAL_1_25_RO },
         { "1.50", OPTION_VAL_1_50_RO },
         { "1.75", OPTION_VAL_1_75_RO },
         { "2.00", OPTION_VAL_2_00_RO },
         { "2.25", OPTION_VAL_2_25_RO },
         { "2.50", OPTION_VAL_2_50_RO },
         { "2.75", OPTION_VAL_2_75_RO },
         { "3.00", OPTION_VAL_3_00_RO },
         { "3.25", OPTION_VAL_3_25_RO },
         { "3.50", OPTION_VAL_3_50_RO },
         { "3.75", OPTION_VAL_3_75_RO },
         { "4.00", OPTION_VAL_4_00_RO },
         { "4.25", OPTION_VAL_4_25_RO },
         { "4.50", OPTION_VAL_4_50_RO },
         { "4.75", OPTION_VAL_4_75_RO },
         { "5.00", OPTION_VAL_5_00_RO },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_RO,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_RO,
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
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_RO,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_RO,
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
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_RO,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_RO,
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
      PCE_FAST_TURBO_DELAY_LABEL_RO,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_RO,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_RO },
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
      PCE_FAST_CDIMAGECACHE_LABEL_RO,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_RO,
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
      PCE_FAST_CDBIOS_LABEL_RO,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_RO,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_RO },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_RO },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_RO },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_RO },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_RO },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_RO },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_RO,
      PCE_FAST_CDSPEED_LABEL_CAT_RO,
      PCE_FAST_CDSPEED_INFO_0_RO,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_RO },
         { "2", OPTION_VAL_2_RO },
         { "4", OPTION_VAL_4_RO },
         { "8", OPTION_VAL_8_RO },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_RO,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_RO,
      PCE_FAST_ADPCMVOLUME_INFO_0_RO,
      PCE_FAST_ADPCMVOLUME_INFO_1_RO,
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
      PCE_FAST_CDDAVOLUME_LABEL_RO,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_RO,
      PCE_FAST_ADPCMVOLUME_INFO_0_RO,
      PCE_FAST_ADPCMVOLUME_INFO_1_RO,
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
      PCE_FAST_CDPSGVOLUME_LABEL_RO,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_RO,
      PCE_FAST_ADPCMVOLUME_INFO_0_RO,
      PCE_FAST_ADPCMVOLUME_INFO_1_RO,
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
      PCE_FAST_NOSPRITELIMIT_LABEL_RO,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_RO,
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
      PCE_FAST_OCMULTIPLIER_LABEL_RO,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_RO,
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
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU NULL
#define CATEGORY_INPUT_LABEL_RU "Ввод"
#define CATEGORY_INPUT_INFO_0_RU "Настройки ввода для светового пистолета, мыши и NegCon."
#define CATEGORY_HACKS_LABEL_RU "Хаки эмуляции"
#define CATEGORY_HACKS_INFO_0_RU "Настройка разгона процессора и параметров точности эмуляции, влияющих на производительность и совместимость."
#define CATEGORY_CHANNEL_VOLUME_LABEL_RU "Расширенные настройки громкости"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_RU "Индивидуальная настройка громкости аудиоканалов."
#define CATEGORY_CD_LABEL_RU NULL
#define CATEGORY_CD_INFO_0_RU NULL
#define PCE_FAST_PALETTE_LABEL_RU "Цветовая палитра"
#define PCE_FAST_PALETTE_INFO_0_RU NULL
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_COMPOSITE_RU "Композитный"
#define PCE_FAST_FRAMESKIP_LABEL_RU "Пропуск кадров"
#define PCE_FAST_FRAMESKIP_INFO_0_RU "Пропускать кадры, чтобы избежать опустошения аудиобуфера (треск). Улучшает производительность, но снижает плавность изображения. В режиме 'Авто' пропуск кадров регулируется фронтендом. В режиме 'Вручную' используется настройка 'Граница пропуска кадров (%)'."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_MANUAL_RU "Вручную"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_RU "Граница пропуска кадров (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_RU "Устанавливает порог заполнения аудиобуфера (в процентах), ниже которого будет включаться пропуск кадров, если для параметра 'Пропуск кадров' выбран режим 'Вручную'. Большие значения снижают вероятность появления треска за счёт более частого пропуска кадров."
#define OPTION_VAL_33_RU "33 (по умолчанию)"
#define PCE_FAST_HOVERSCAN_LABEL_RU NULL
#define PCE_FAST_HOVERSCAN_INFO_0_RU NULL
#define OPTION_VAL_352_RU "352 (по умолчанию)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_RU NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_3_RU "3 (по умолчанию)"
#define PCE_FAST_LAST_SCANLINE_LABEL_RU NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_RU NULL
#define OPTION_VAL_242_RU "242 (по умолчанию)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_RU NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_RU NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_RU NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_RU NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_RU NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_RU NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_RU NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_RU "Чувствительность мыши"
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_RU NULL
#define OPTION_VAL_0_25_RU NULL
#define OPTION_VAL_0_50_RU NULL
#define OPTION_VAL_0_75_RU NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_RU NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_RU NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_RU NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_RU NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_RU NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_RU NULL
#define PCE_FAST_TURBO_DELAY_LABEL_RU "Задержка турбо"
#define PCE_FAST_TURBO_DELAY_INFO_0_RU NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_RU NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_RU NULL
#define PCE_FAST_CDBIOS_LABEL_RU NULL
#define PCE_FAST_CDBIOS_INFO_0_RU NULL
#define OPTION_VAL_GAMES_EXPRESS_RU NULL
#define OPTION_VAL_SYSTEM_CARD_1_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_RU NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_RU NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_RU NULL
#define PCE_FAST_CDSPEED_LABEL_RU NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_RU NULL
#define PCE_FAST_CDSPEED_INFO_0_RU NULL
#define OPTION_VAL_1_RU NULL
#define OPTION_VAL_2_RU NULL
#define OPTION_VAL_4_RU NULL
#define OPTION_VAL_8_RU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_RU NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_RU NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_RU NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_RU NULL
#define PCE_FAST_CDDAVOLUME_LABEL_RU NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_RU NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_RU NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_RU NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_RU "Без ограничения спрайтов"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_RU NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_RU NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_RU NULL

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

/* RETRO_LANGUAGE_SI */

#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_INPUT_LABEL_SI NULL
#define CATEGORY_INPUT_INFO_0_SI NULL
#define CATEGORY_HACKS_LABEL_SI NULL
#define CATEGORY_HACKS_INFO_0_SI NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_SI NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SI NULL
#define CATEGORY_CD_LABEL_SI NULL
#define CATEGORY_CD_INFO_0_SI NULL
#define PCE_FAST_PALETTE_LABEL_SI NULL
#define PCE_FAST_PALETTE_INFO_0_SI NULL
#define OPTION_VAL_RGB_SI NULL
#define OPTION_VAL_COMPOSITE_SI NULL
#define PCE_FAST_FRAMESKIP_LABEL_SI NULL
#define PCE_FAST_FRAMESKIP_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_MANUAL_SI NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SI NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SI NULL
#define OPTION_VAL_33_SI NULL
#define PCE_FAST_HOVERSCAN_LABEL_SI NULL
#define PCE_FAST_HOVERSCAN_INFO_0_SI NULL
#define OPTION_VAL_352_SI NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SI NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_3_SI NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_SI NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_SI NULL
#define OPTION_VAL_242_SI NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SI NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SI NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SI NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SI NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SI NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SI NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SI NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SI NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SI NULL
#define OPTION_VAL_0_25_SI NULL
#define OPTION_VAL_0_50_SI NULL
#define OPTION_VAL_0_75_SI NULL
#define OPTION_VAL_1_00_SI NULL
#define OPTION_VAL_1_25_SI NULL
#define OPTION_VAL_1_50_SI NULL
#define OPTION_VAL_1_75_SI NULL
#define OPTION_VAL_2_00_SI NULL
#define OPTION_VAL_2_25_SI NULL
#define OPTION_VAL_2_50_SI NULL
#define OPTION_VAL_2_75_SI NULL
#define OPTION_VAL_3_00_SI NULL
#define OPTION_VAL_3_25_SI NULL
#define OPTION_VAL_3_50_SI NULL
#define OPTION_VAL_3_75_SI NULL
#define OPTION_VAL_4_00_SI NULL
#define OPTION_VAL_4_25_SI NULL
#define OPTION_VAL_4_50_SI NULL
#define OPTION_VAL_4_75_SI NULL
#define OPTION_VAL_5_00_SI NULL
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_SI NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_SI NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_SI NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SI NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SI NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SI NULL
#define PCE_FAST_TURBO_DELAY_LABEL_SI NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_SI NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_SI NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_SI NULL
#define PCE_FAST_CDBIOS_LABEL_SI NULL
#define PCE_FAST_CDBIOS_INFO_0_SI NULL
#define OPTION_VAL_GAMES_EXPRESS_SI NULL
#define OPTION_VAL_SYSTEM_CARD_1_SI NULL
#define OPTION_VAL_SYSTEM_CARD_2_SI NULL
#define OPTION_VAL_SYSTEM_CARD_3_SI NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SI NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SI NULL
#define PCE_FAST_CDSPEED_LABEL_SI NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_SI NULL
#define PCE_FAST_CDSPEED_INFO_0_SI NULL
#define OPTION_VAL_1_SI NULL
#define OPTION_VAL_2_SI NULL
#define OPTION_VAL_4_SI NULL
#define OPTION_VAL_8_SI NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SI NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SI NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_SI NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_SI NULL
#define PCE_FAST_CDDAVOLUME_LABEL_SI NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SI NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_SI NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SI NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_SI NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_SI NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_SI NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
      CATEGORY_VIDEO_INFO_0_SI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SI,
      CATEGORY_INPUT_INFO_0_SI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SI,
      CATEGORY_HACKS_INFO_0_SI
   },
   {
      "channel_volume",
      CATEGORY_CHANNEL_VOLUME_LABEL_SI,
      CATEGORY_CHANNEL_VOLUME_INFO_0_SI
   },
   {
      "cd",
      CATEGORY_CD_LABEL_SI,
      CATEGORY_CD_INFO_0_SI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "pce_fast_palette",
      PCE_FAST_PALETTE_LABEL_SI,
      NULL,
      PCE_FAST_PALETTE_INFO_0_SI,
      NULL,
      "video",
      {
         { "RGB", OPTION_VAL_RGB_SI },
         { "Composite", OPTION_VAL_COMPOSITE_SI },
         { NULL, NULL},
      },
      "RGB"
   },
   {
      "pce_fast_frameskip",
      PCE_FAST_FRAMESKIP_LABEL_SI,
      NULL,
      PCE_FAST_FRAMESKIP_INFO_0_SI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SI },
         { "manual",   OPTION_VAL_MANUAL_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_frameskip_threshold",
      PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SI,
      NULL,
      PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SI,
      NULL,
      "video",
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", OPTION_VAL_33_SI },
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
      PCE_FAST_HOVERSCAN_LABEL_SI,
      NULL,
      PCE_FAST_HOVERSCAN_INFO_0_SI,
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
         { "352", OPTION_VAL_352_SI },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_fast_initial_scanline",
      PCE_FAST_INITIAL_SCANLINE_LABEL_SI,
      NULL,
      PCE_FAST_INITIAL_SCANLINE_INFO_0_SI,
      NULL,
      "video",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", OPTION_VAL_3_SI },
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
      PCE_FAST_LAST_SCANLINE_LABEL_SI,
      NULL,
      PCE_FAST_LAST_SCANLINE_INFO_0_SI,
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
         { "242", OPTION_VAL_242_SI },
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_fast_sound_channel_0_volume",
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SI,
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
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SI,
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
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SI,
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
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SI,
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
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SI,
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
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SI,
      NULL,
      PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SI,
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
      PCE_FAST_MOUSE_SENSITIVITY_LABEL_SI,
      NULL,
      PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SI,
      NULL,
      "input",
      {
         { "0.25", OPTION_VAL_0_25_SI },
         { "0.50", OPTION_VAL_0_50_SI },
         { "0.75", OPTION_VAL_0_75_SI },
         { "1.00", OPTION_VAL_1_00_SI },
         { "1.25", OPTION_VAL_1_25_SI },
         { "1.50", OPTION_VAL_1_50_SI },
         { "1.75", OPTION_VAL_1_75_SI },
         { "2.00", OPTION_VAL_2_00_SI },
         { "2.25", OPTION_VAL_2_25_SI },
         { "2.50", OPTION_VAL_2_50_SI },
         { "2.75", OPTION_VAL_2_75_SI },
         { "3.00", OPTION_VAL_3_00_SI },
         { "3.25", OPTION_VAL_3_25_SI },
         { "3.50", OPTION_VAL_3_50_SI },
         { "3.75", OPTION_VAL_3_75_SI },
         { "4.00", OPTION_VAL_4_00_SI },
         { "4.25", OPTION_VAL_4_25_SI },
         { "4.50", OPTION_VAL_4_50_SI },
         { "4.75", OPTION_VAL_4_75_SI },
         { "5.00", OPTION_VAL_5_00_SI },
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_fast_disable_softreset",
      PCE_FAST_DISABLE_SOFTRESET_LABEL_SI,
      NULL,
      PCE_FAST_DISABLE_SOFTRESET_INFO_0_SI,
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
      "pce_fast_turbo_toggling",
      PCE_FAST_TURBO_TOGGLING_LABEL_SI,
      NULL,
      PCE_FAST_TURBO_TOGGLING_INFO_0_SI,
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
      PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SI,
      NULL,
      PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SI,
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
      PCE_FAST_TURBO_DELAY_LABEL_SI,
      NULL,
      PCE_FAST_TURBO_DELAY_INFO_0_SI,
      NULL,
      "input",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  OPTION_VAL_3_SI },
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
      PCE_FAST_CDIMAGECACHE_LABEL_SI,
      NULL,
      PCE_FAST_CDIMAGECACHE_INFO_0_SI,
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
      PCE_FAST_CDBIOS_LABEL_SI,
      NULL,
      PCE_FAST_CDBIOS_INFO_0_SI,
      NULL,
      "cd",
      {
         { "Games Express", OPTION_VAL_GAMES_EXPRESS_SI },
         { "System Card 1", OPTION_VAL_SYSTEM_CARD_1_SI },
         { "System Card 2", OPTION_VAL_SYSTEM_CARD_2_SI },
         { "System Card 3", OPTION_VAL_SYSTEM_CARD_3_SI },
         { "System Card 2 US", OPTION_VAL_SYSTEM_CARD_2_US_SI },
         { "System Card 3 US", OPTION_VAL_SYSTEM_CARD_3_US_SI },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_fast_cdspeed",
      PCE_FAST_CDSPEED_LABEL_SI,
      PCE_FAST_CDSPEED_LABEL_CAT_SI,
      PCE_FAST_CDSPEED_INFO_0_SI,
      NULL,
      "cd",
      {
         { "1", OPTION_VAL_1_SI },
         { "2", OPTION_VAL_2_SI },
         { "4", OPTION_VAL_4_SI },
         { "8", OPTION_VAL_8_SI },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_fast_adpcmvolume",
      PCE_FAST_ADPCMVOLUME_LABEL_SI,
      PCE_FAST_ADPCMVOLUME_LABEL_CAT_SI,
      PCE_FAST_ADPCMVOLUME_INFO_0_SI,
      PCE_FAST_ADPCMVOLUME_INFO_1_SI,
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
      PCE_FAST_CDDAVOLUME_LABEL_SI,
      PCE_FAST_CDDAVOLUME_LABEL_CAT_SI,
      PCE_FAST_ADPCMVOLUME_INFO_0_SI,
      PCE_FAST_ADPCMVOLUME_INFO_1_SI,
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
      PCE_FAST_CDPSGVOLUME_LABEL_SI,
      PCE_FAST_CDPSGVOLUME_LABEL_CAT_SI,
      PCE_FAST_ADPCMVOLUME_INFO_0_SI,
      PCE_FAST_ADPCMVOLUME_INFO_1_SI,
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
      PCE_FAST_NOSPRITELIMIT_LABEL_SI,
      NULL,
      PCE_FAST_NOSPRITELIMIT_INFO_0_SI,
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
      PCE_FAST_OCMULTIPLIER_LABEL_SI,
      NULL,
      PCE_FAST_OCMULTIPLIER_INFO_0_SI,
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
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK "Vstup"
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK NULL
#define CATEGORY_HACKS_INFO_0_SK NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_SK NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SK NULL
#define CATEGORY_CD_LABEL_SK NULL
#define CATEGORY_CD_INFO_0_SK NULL
#define PCE_FAST_PALETTE_LABEL_SK NULL
#define PCE_FAST_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_COMPOSITE_SK NULL
#define PCE_FAST_FRAMESKIP_LABEL_SK NULL
#define PCE_FAST_FRAMESKIP_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_MANUAL_SK NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SK NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SK "Ak je 'Preskočenie snímkov' nastavené na 'Ručne', určuje obsadenosť zvukového zásobníka (v percentách) pod ktorou budú snímky preskočené. Vyššie hodnoty znižujú riziko praskania za cenu zahodenia snímkov častejšie."
#define OPTION_VAL_33_SK NULL
#define PCE_FAST_HOVERSCAN_LABEL_SK NULL
#define PCE_FAST_HOVERSCAN_INFO_0_SK NULL
#define OPTION_VAL_352_SK NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SK NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_3_SK NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_SK NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_SK NULL
#define OPTION_VAL_242_SK NULL
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
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SK NULL
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
#define PCE_FAST_TURBO_TOGGLING_LABEL_SK NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SK NULL
#define PCE_FAST_TURBO_DELAY_LABEL_SK NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_SK NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_SK NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_SK NULL
#define PCE_FAST_CDBIOS_LABEL_SK NULL
#define PCE_FAST_CDBIOS_INFO_0_SK NULL
#define OPTION_VAL_GAMES_EXPRESS_SK NULL
#define OPTION_VAL_SYSTEM_CARD_1_SK NULL
#define OPTION_VAL_SYSTEM_CARD_2_SK NULL
#define OPTION_VAL_SYSTEM_CARD_3_SK NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SK NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SK NULL
#define PCE_FAST_CDSPEED_LABEL_SK NULL
#define PCE_FAST_CDSPEED_LABEL_CAT_SK NULL
#define PCE_FAST_CDSPEED_INFO_0_SK NULL
#define OPTION_VAL_1_SK NULL
#define OPTION_VAL_2_SK NULL
#define OPTION_VAL_4_SK NULL
#define OPTION_VAL_8_SK NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SK NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SK NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_SK NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_SK NULL
#define PCE_FAST_CDDAVOLUME_LABEL_SK NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SK NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_SK NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SK NULL
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

#define CATEGORY_VIDEO_LABEL_SV "Bild"
#define CATEGORY_VIDEO_INFO_0_SV NULL
#define CATEGORY_INPUT_LABEL_SV "Inmatning"
#define CATEGORY_INPUT_INFO_0_SV NULL
#define CATEGORY_HACKS_LABEL_SV NULL
#define CATEGORY_HACKS_INFO_0_SV NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_SV NULL
#define CATEGORY_CHANNEL_VOLUME_INFO_0_SV NULL
#define CATEGORY_CD_LABEL_SV NULL
#define CATEGORY_CD_INFO_0_SV NULL
#define PCE_FAST_PALETTE_LABEL_SV "Färgpalett"
#define PCE_FAST_PALETTE_INFO_0_SV NULL
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_COMPOSITE_SV "Komposit"
#define PCE_FAST_FRAMESKIP_LABEL_SV NULL
#define PCE_FAST_FRAMESKIP_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV "Automatiskt"
#define OPTION_VAL_MANUAL_SV NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_SV NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_SV "När 'Frameskip' är satt till 'Manuell', ange ljudbuffertens tröskel (i procent) under vilka ramar som kommer att hoppas över. Högre värden minskar risken för hackigt ljud genom att bildrutor tappas oftare."
#define OPTION_VAL_33_SV NULL
#define PCE_FAST_HOVERSCAN_LABEL_SV NULL
#define PCE_FAST_HOVERSCAN_INFO_0_SV NULL
#define OPTION_VAL_352_SV NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_SV NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_3_SV NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_SV NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_SV NULL
#define OPTION_VAL_242_SV NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_SV NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_SV NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_SV NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_SV NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_SV NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_SV NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_SV NULL
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_SV NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_SV NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_SV NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_SV NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_SV NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_SV NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_SV NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_SV NULL
#define PCE_FAST_TURBO_DELAY_LABEL_SV NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_SV NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_SV NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_SV NULL
#define PCE_FAST_CDBIOS_LABEL_SV NULL
#define PCE_FAST_CDBIOS_INFO_0_SV NULL
#define OPTION_VAL_GAMES_EXPRESS_SV NULL
#define OPTION_VAL_SYSTEM_CARD_1_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_SV NULL
#define OPTION_VAL_SYSTEM_CARD_2_US_SV NULL
#define OPTION_VAL_SYSTEM_CARD_3_US_SV NULL
#define PCE_FAST_CDSPEED_LABEL_SV "(CD) CD-hastighet"
#define PCE_FAST_CDSPEED_LABEL_CAT_SV "CD-hastighet"
#define PCE_FAST_CDSPEED_INFO_0_SV NULL
#define OPTION_VAL_1_SV NULL
#define OPTION_VAL_2_SV NULL
#define OPTION_VAL_4_SV NULL
#define OPTION_VAL_8_SV NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_SV "(CD) ADPCM Volym %"
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_SV NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_SV NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_SV NULL
#define PCE_FAST_CDDAVOLUME_LABEL_SV "(CD) CDDA Volym %"
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_SV NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_SV "(CD) PSG Volym %"
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_SV NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_SV NULL
#define PCE_FAST_NOSPRITELIMIT_INFO_0_SV NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_SV NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_SV NULL

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
#define PCE_FAST_PALETTE_INFO_0_TR NULL
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
#define PCE_FAST_HOVERSCAN_INFO_0_TR NULL
#define OPTION_VAL_352_TR "352 (Varsayılan)"
#define PCE_FAST_INITIAL_SCANLINE_LABEL_TR "İlk Tarama Çizgisi"
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_3_TR "3 (Varsayılan)"
#define PCE_FAST_LAST_SCANLINE_LABEL_TR "Son Tarama Çizgisi"
#define PCE_FAST_LAST_SCANLINE_INFO_0_TR NULL
#define OPTION_VAL_242_TR "242 (Varsayılan)"
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_0_VOLUME_INFO_0_TR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_1_VOLUME_INFO_0_TR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_2_VOLUME_INFO_0_TR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_3_VOLUME_INFO_0_TR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_4_VOLUME_INFO_0_TR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_LABEL_TR NULL
#define PCE_FAST_SOUND_CHANNEL_5_VOLUME_INFO_0_TR NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_TR NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_TR NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_TR NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_TR NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_TR "Alternatif Turbo Kısayol Tuşu"
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_TR NULL
#define PCE_FAST_TURBO_DELAY_LABEL_TR "Turbo Gecikmesi"
#define PCE_FAST_TURBO_DELAY_INFO_0_TR NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_TR NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_TR NULL
#define PCE_FAST_CDBIOS_LABEL_TR "CD BIOS (Yeniden Başlatılmalı)"
#define PCE_FAST_CDBIOS_INFO_0_TR NULL
#define OPTION_VAL_GAMES_EXPRESS_TR NULL
#define OPTION_VAL_SYSTEM_CARD_1_TR "Sistem Kartı 1"
#define OPTION_VAL_SYSTEM_CARD_2_TR "Sistem Kartı 2"
#define OPTION_VAL_SYSTEM_CARD_3_TR "Sistem Kartı 3"
#define OPTION_VAL_SYSTEM_CARD_2_US_TR "Sistem Kartı 2 US"
#define OPTION_VAL_SYSTEM_CARD_3_US_TR "Sistem Kartı 3 US"
#define PCE_FAST_CDSPEED_LABEL_TR "(CD) CD Hızı"
#define PCE_FAST_CDSPEED_LABEL_CAT_TR "CD Hızı"
#define PCE_FAST_CDSPEED_INFO_0_TR NULL
#define OPTION_VAL_1_TR NULL
#define OPTION_VAL_2_TR NULL
#define OPTION_VAL_4_TR NULL
#define OPTION_VAL_8_TR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_TR NULL
#define PCE_FAST_ADPCMVOLUME_LABEL_CAT_TR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_0_TR NULL
#define PCE_FAST_ADPCMVOLUME_INFO_1_TR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_TR NULL
#define PCE_FAST_CDDAVOLUME_LABEL_CAT_TR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_TR NULL
#define PCE_FAST_CDPSGVOLUME_LABEL_CAT_TR NULL
#define PCE_FAST_NOSPRITELIMIT_LABEL_TR "Hareket Sınırını Kaldır"
#define PCE_FAST_NOSPRITELIMIT_INFO_0_TR NULL
#define PCE_FAST_OCMULTIPLIER_LABEL_TR NULL
#define PCE_FAST_OCMULTIPLIER_INFO_0_TR NULL

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
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_INPUT_LABEL_UK "Ввід"
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_HACKS_LABEL_UK "Гаки емуляції"
#define CATEGORY_HACKS_INFO_0_UK "Налаштування розгону процесора та точності емуляції, що впливають на низькорівневу продуктивність та сумісність."
#define CATEGORY_CHANNEL_VOLUME_LABEL_UK "Розширені налаштування гучності"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_UK "Індивідуальні налаштування гучності аудіоканалів системи."
#define CATEGORY_CD_LABEL_UK NULL
#define CATEGORY_CD_INFO_0_UK NULL
#define PCE_FAST_PALETTE_LABEL_UK NULL
#define PCE_FAST_PALETTE_INFO_0_UK NULL
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_COMPOSITE_UK NULL
#define PCE_FAST_FRAMESKIP_LABEL_UK "Пропуск кадру"
#define PCE_FAST_FRAMESKIP_INFO_0_UK "Пропускати кадри, щоб уникнути спустошення буферу (тріскіт). Покращує швидкодію, погіршуючи плавність зображення. 'Авто' пропускає кадри, керуючись командами зовнішньої оболонки. 'Ручний' використовує налаштування 'Межа пропуску кадрів (%)'."
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_MANUAL_UK "Ручний"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_UK "Межа пропуску кадрів (%)"
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_UK "Якщо 'Пропус кадрів' встановлено у 'Вручну', зазначає граничне значення оточення аудіо-буферу (відсоток), нижчі за які кадри будуть пропущені. Більш високі значення зменшують ризик зломування, викликаючи зменшення кадрів частіше."
#define OPTION_VAL_33_UK NULL
#define PCE_FAST_HOVERSCAN_LABEL_UK NULL
#define PCE_FAST_HOVERSCAN_INFO_0_UK NULL
#define OPTION_VAL_352_UK NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_UK NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_3_UK NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_UK NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_UK NULL
#define OPTION_VAL_242_UK NULL
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
#define PCE_FAST_MOUSE_SENSITIVITY_LABEL_UK NULL
#define PCE_FAST_MOUSE_SENSITIVITY_INFO_0_UK NULL
#define OPTION_VAL_0_25_UK NULL
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
#define PCE_FAST_DISABLE_SOFTRESET_LABEL_UK NULL
#define PCE_FAST_DISABLE_SOFTRESET_INFO_0_UK NULL
#define PCE_FAST_TURBO_TOGGLING_LABEL_UK NULL
#define PCE_FAST_TURBO_TOGGLING_INFO_0_UK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_LABEL_UK NULL
#define PCE_FAST_TURBO_TOGGLE_HOTKEY_INFO_0_UK NULL
#define PCE_FAST_TURBO_DELAY_LABEL_UK NULL
#define PCE_FAST_TURBO_DELAY_INFO_0_UK NULL
#define PCE_FAST_CDIMAGECACHE_LABEL_UK NULL
#define PCE_FAST_CDIMAGECACHE_INFO_0_UK NULL
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

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN "Hình ảnh"
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_INPUT_LABEL_VN "Input Driver"
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_HACKS_LABEL_VN NULL
#define CATEGORY_HACKS_INFO_0_VN NULL
#define CATEGORY_CHANNEL_VOLUME_LABEL_VN "Tùy chỉnh cài đặt kênh âm thanh"
#define CATEGORY_CHANNEL_VOLUME_INFO_0_VN "Chỉnh sửa âm thanh của phần cứng riêng lẻ."
#define CATEGORY_CD_LABEL_VN NULL
#define CATEGORY_CD_INFO_0_VN NULL
#define PCE_FAST_PALETTE_LABEL_VN NULL
#define PCE_FAST_PALETTE_INFO_0_VN NULL
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_COMPOSITE_VN NULL
#define PCE_FAST_FRAMESKIP_LABEL_VN "Bỏ qua khung hình"
#define PCE_FAST_FRAMESKIP_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_MANUAL_VN "Thủ công"
#define PCE_FAST_FRAMESKIP_THRESHOLD_LABEL_VN NULL
#define PCE_FAST_FRAMESKIP_THRESHOLD_INFO_0_VN NULL
#define OPTION_VAL_33_VN NULL
#define PCE_FAST_HOVERSCAN_LABEL_VN NULL
#define PCE_FAST_HOVERSCAN_INFO_0_VN NULL
#define OPTION_VAL_352_VN NULL
#define PCE_FAST_INITIAL_SCANLINE_LABEL_VN NULL
#define PCE_FAST_INITIAL_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_3_VN NULL
#define PCE_FAST_LAST_SCANLINE_LABEL_VN NULL
#define PCE_FAST_LAST_SCANLINE_INFO_0_VN NULL
#define OPTION_VAL_242_VN NULL
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