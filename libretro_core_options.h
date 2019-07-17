#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include <libretro.h>
#include <retro_inline.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition */

struct retro_core_option_definition option_defs_us[] = {
   {
      "pce_cdimagecache",
      "CD Image Cache (Restart)",
      "Keep the CD image in memory.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_cdbios",
      "CD Bios (Restart)",
      "Most games can run on 'System Card 3'. 'Games Express' is needed for several unlicensed games.",
      {
         { "Games Express", NULL },
         { "System Card 1", NULL },
         { "System Card 2", NULL },
         { "System Card 3", NULL },
         { "System Card 2 US", NULL },
         { "System Card 3 US", NULL },
         { NULL, NULL},
      },
      "System Card 3"
   },
   {
      "pce_arcadecard",
      "Arcade Card (Restart)",
      "Leave this option enabled to allow enhanced modes of ACD-enhanced SCD games.",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_nospritelimit",
      "No Sprite Limit",
      "Remove 16-sprites-per-scanline hardware limit. WARNING: May cause graphics glitching on some games (such as Bloody Wolf).",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      "CPU Overclock Multiplier",
      "Higher values can reduce slowdowns in games. WARNING: Can cause glitches and crashes.",
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
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_aspect_ratio",
      "Aspect Ratio",
      "Choose the preferred content aspect ratio. This will only apply when RetroArch's aspect ratio is set to 'Core provided' in the Video settings.",
      {
         { "auto", NULL },
         { "6:5", NULL },
         { "4:3", NULL },
         { "uncorrected", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_scaling",
      "Resolution Scaling",
      "'auto' will authorize resolution to switch. 'lores' can crush pixels. 'hires' will stay on the maximum width.",
      {
         { "auto", NULL },
         { "lores", NULL },
         { "hires", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_hires_blend",
      "Hires Blending Strength",
      "Blend pixels together when in hires mode. Higher values will blur the picture more.",
      {
         { "disabled", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_h_overscan",
      "Show Horizontal Overscan",
      "Show or crop horizontal overscan. 'auto' will try to adapt to games, cropping empty areas.",
      {
         { "auto", NULL },
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "auto"
   },
   {
      "pce_initial_scanline",
      "Initial Scanline",
      "First rendered scanline. Higher values will crop the top of the screen.",
      {
         { "0", NULL },
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
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_last_scanline",
      "Last Scanline",
      "Last rendered scanline. Lower values will crop the bottom of the screen.",
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
         { "242", NULL },
         { NULL, NULL},
      },
      "242"
   },
   {
      "pce_psgrevision",
      "PSG Audio Chip (Restart)",
      "HuC6280 as found in the original PC Engine. HuC6280A as found in the SuperGrafx and CoreGrafx I.",
      {
         { "auto", NULL },
         { "HuC6280", NULL },
         { "HuC6280A", NULL },
         { NULL, NULL},
      },
      "HuC6280A"
   },
   {
      "pce_cddavolume",
      "(CD) CDDA Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      {
         { "0", NULL },
         { "10", NULL },
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
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_adpcmvolume",
      "(CD) ADPCM Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      {
         { "0", NULL },
         { "10", NULL },
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
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdpsgvolume",
      "(CD) CD PSG Volume %",
      "CD game only. Setting this volume control too high may cause sample clipping.",
      {
         { "0", NULL },
         { "10", NULL },
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
         { NULL, NULL},
      },
      "100"
   },
   {
      "pce_cdspeed",
      "(CD) CD Speed",
      "Faster loading times but can cause issues with a couple of games.",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL},
      },
      "1"
   },
   {
      "pce_adpcmextraprec",
      "(CD) ADPCM precision",
      "Full precision of 12-bits for the MSM5205 ADPCM predictor can reduce whining noise during ADPCM playback.",
      {
         { "10-bit", NULL },
         { "12-bit", NULL },
         { NULL, NULL},
      },
      "10-bit"
   },
   {
      "pce_resamp_quality",
      "Owl Resampler Quality",
      "Higher values give better signal noise ratio and preservation of higher frequencies, but increased computation, a bit of latency and clipping if the volume is set too high.",
      {
         { "0", NULL },
         { "1", NULL },
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { NULL, NULL},
      },
      "3"
   },
   {
      "pce_show_advanced_input_settings",
      "Show Advanced Input/Turbo Settings",
      "Show Multitap, Mouse, Turbo Buttons and advanced parameters. NOTE: You need to go back in game and re-enter the menu to refresh the list.",
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_mouse_sensitivity",
      "Mouse Sensitivity",
      "Higher values will make the mouse cursor move faster.",
      {
         { "0.125", NULL },
         { "0.250", NULL },
         { "0.375", NULL },
         { "0.500", NULL },
         { "0.625", NULL },
         { "0.750", NULL },
         { "0.875", NULL },
         { "1.000", NULL },
         { "1.125", NULL },
         { "1.25", NULL },
         { "1.50", NULL },
         { "1.75", NULL },
         { "2.00", NULL },
         { "2.25", NULL },
         { "2.50", NULL },
         { "2.75", NULL },
         { "3.00", NULL },
         { "3.25", NULL },
         { "3.50", NULL },
         { "3.75", NULL },
         { "4.00", NULL },
         { "4.25", NULL },
         { "4.50", NULL },
         { "4.75", NULL },
         { "5.00", NULL },
         { NULL, NULL},
      },
      "1.25"
   },
   {
      "pce_multitap",
      "Multitap 5-port Controller",
      "Enable multitap (TurboTap) emulation.",
      {
         { "enabled", NULL },
         { "disabled", NULL },
         { NULL, NULL},
      },
      "enabled"
   },
   {
      "pce_disable_softreset",
      "Disable Soft Reset (RUN+SELECT)",
      "If set, when RUN+SEL are pressed simultaneously, disable both buttons temporarily.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_up_down_allowed",
      "Allow UP+DOWN/LEFT+RIGHT",
      "Enabling this will allow pressing / quickly alternating / holding both left and right (or up and down) directions at the same time. This may cause movement-based glitches.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_Turbo_Delay",
      "Turbo Delay",
      NULL,
      {
         { "Fast", NULL },
         { "Medium", NULL },
         { "Slow", NULL },
         { NULL, NULL},
      },
      "Fast"
   },
   {
      "pce_Turbo_Toggling",
      "Turbo Hotkey",
      NULL,
      {
         { "disabled", NULL },
         { "toggle", NULL },
         { "always", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      "Alternate Turbo Hotkey",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_I_enable",
      "P1 Turbo I",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p0_turbo_II_enable",
      "P1 Turbo II",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_I_enable",
      "P2 Turbo I",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p1_turbo_II_enable",
      "P2 Turbo II",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_I_enable",
      "P3 Turbo I",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p2_turbo_II_enable",
      "P3 Turbo II",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_I_enable",
      "P4 Turbo I",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p3_turbo_II_enable",
      "P4 Turbo II",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_I_enable",
      "P5 Turbo I",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "pce_p4_turbo_II_enable",
      "P5 Turbo II",
      NULL,
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   { NULL, NULL, NULL, {{0}}, NULL },
};

/* RETRO_LANGUAGE_JAPANESE */

/* RETRO_LANGUAGE_FRENCH */

/* RETRO_LANGUAGE_SPANISH */

/* RETRO_LANGUAGE_GERMAN */

/* RETRO_LANGUAGE_ITALIAN */

/* RETRO_LANGUAGE_DUTCH */

/* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */

/* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */

/* RETRO_LANGUAGE_RUSSIAN */

/* RETRO_LANGUAGE_KOREAN */

/* RETRO_LANGUAGE_CHINESE_TRADITIONAL */

/* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */

/* RETRO_LANGUAGE_ESPERANTO */

/* RETRO_LANGUAGE_POLISH */

/* RETRO_LANGUAGE_VIETNAMESE */

/* RETRO_LANGUAGE_ARABIC */

/* RETRO_LANGUAGE_GREEK */

/* RETRO_LANGUAGE_TURKISH */

/*
 ********************************
 * Language Mapping
 ********************************
*/

struct retro_core_option_definition *option_defs_intl[RETRO_LANGUAGE_LAST] = {
   option_defs_us, /* RETRO_LANGUAGE_ENGLISH */
   NULL,           /* RETRO_LANGUAGE_JAPANESE */
   NULL,           /* RETRO_LANGUAGE_FRENCH */
   NULL,           /* RETRO_LANGUAGE_SPANISH */
   NULL,           /* RETRO_LANGUAGE_GERMAN */
   NULL,           /* RETRO_LANGUAGE_ITALIAN */
   NULL,           /* RETRO_LANGUAGE_DUTCH */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   NULL,           /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   NULL,           /* RETRO_LANGUAGE_RUSSIAN */
   NULL,           /* RETRO_LANGUAGE_KOREAN */
   NULL,           /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   NULL,           /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   NULL,           /* RETRO_LANGUAGE_ESPERANTO */
   NULL,           /* RETRO_LANGUAGE_POLISH */
   NULL,           /* RETRO_LANGUAGE_VIETNAMESE */
   NULL,           /* RETRO_LANGUAGE_ARABIC */
   NULL,           /* RETRO_LANGUAGE_GREEK */
   NULL,           /* RETRO_LANGUAGE_TURKISH */
};

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should only be called inside retro_set_environment().
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static INLINE void libretro_set_core_options(retro_environment_t environ_cb)
{
   unsigned version = 0;

   if (!environ_cb)
      return;

   if (environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version) && (version == 1))
   {
      struct retro_core_options_intl core_options_intl;
      unsigned language = 0;

      core_options_intl.us    = option_defs_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = option_defs_intl[language];

      environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_intl);
   }
   else
   {
      size_t i;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options
       * > Note: We are going to skip a number of irrelevant
       *   core options when building the retro_variable array,
       *   but we'll allocate space for all of them. The difference
       *   in resource usage is negligible, and this allows us to
       *   keep the code 'cleaner' */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      /* Allocate arrays */
      variables  = (struct retro_variable *)calloc(num_options + 1, sizeof(struct retro_variable));
      values_buf = (char **)calloc(num_options, sizeof(char *));

      if (!variables || !values_buf)
         goto error;

      /* Copy parameters from option_defs_us array */
      for (i = 0; i < num_options; i++)
      {
         const char *key                        = option_defs_us[i].key;
         const char *desc                       = option_defs_us[i].desc;
         const char *default_value              = option_defs_us[i].default_value;
         struct retro_core_option_value *values = option_defs_us[i].values;
         size_t buf_len                         = 3;
         size_t default_index                   = 0;

         values_buf[i] = NULL;

         /* Skip options that are irrelevant when using the
          * old style core options interface */
         if (strcmp(key, "pce_show_advanced_input_settings") == 0)
            continue;

         if (desc)
         {
            size_t num_values = 0;

            /* Determine number of values */
            while (true)
            {
               if (values[num_values].value)
               {
                  /* Check if this is the default value */
                  if (default_value)
                     if (strcmp(values[num_values].value, default_value) == 0)
                        default_index = num_values;

                  buf_len += strlen(values[num_values].value);
                  num_values++;
               }
               else
                  break;
            }

            /* Build values string */
            if (num_values > 1)
            {
               size_t j;

               buf_len += num_values - 1;
               buf_len += strlen(desc);

               values_buf[i] = (char *)calloc(buf_len, sizeof(char));
               if (!values_buf[i])
                  goto error;

               strcpy(values_buf[i], desc);
               strcat(values_buf[i], "; ");

               /* Default value goes first */
               strcat(values_buf[i], values[default_index].value);

               /* Add remaining values */
               for (j = 0; j < num_values; j++)
               {
                  if (j != default_index)
                  {
                     strcat(values_buf[i], "|");
                     strcat(values_buf[i], values[j].value);
                  }
               }
            }
         }

         variables[option_index].key   = key;
         variables[option_index].value = values_buf[i];
         option_index++;
      }
      
      /* Set variables */
      environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);

error:

      /* Clean up */
      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
