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
      "pce_fast_cdimagecache",
      "CD Image Cache (Restart)",
      "Loads the complete image in memory at startup. Can potentially decrease loading times at the cost of increased startup time.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_fast_cdbios",
      "CD BIOS (Restart)",
      "Select which PC Engine CD BIOS to use.",
      {
         { "System Card 3", NULL },
         { "Games Express", NULL },
         { "System Card 1", NULL },
         { "System Card 2", NULL },
         { "System Card 2 US", NULL },
         { "System Card 3 US", NULL },
         { NULL, NULL },
      },
      "System Card 3"
   },
   {
      "pce_nospritelimit",
      "No Sprite Limit",
      "Remove 16-sprites-per-scanline hardware limit.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_ocmultiplier",
      "CPU Overclock Multiplier (Restart)",
      "Overclock the emulated CPU.",
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
   {
      "pce_hoverscan",
      "Horizontal Overscan (352 Width Mode Only)",
      "Modify the horizontal overscan.",
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
         { "352", NULL },
         { NULL, NULL },
      },
      "352"
   },
   {
      "pce_initial_scanline",
      "Initial scanline",
      "Initial scanline.",
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
         { NULL, NULL },
      },
      "3"
   },
   {
      "pce_last_scanline",
      "Last scanline",
      "Adjust last display scanline.",
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
         { NULL, NULL },
      },
      "242"
   },
   {
      "pce_disable_softreset",
      "Disable Soft Reset (RUN+SELECT)",
      "If set, when RUN+SEL are pressed simultaneously, disable both buttons temporarily.",
      {
          { "disabled", NULL },
          { "enabled", NULL },
          { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_cddavolume",
      "(CD) CDDA Volume %",
      "Modify CDDA Volume %.",
      {
         { "0", NULL },
         { "10", NULL },
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
      "pce_adpcmvolume",
      "(CD) ADPCM Volume %",
      "Modify ADPCM Volume %.",
      {
         { "0", NULL },
         { "10", NULL },
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
      "pce_cdpsgvolume",
      "(CD) PSG Volume %",
      "Modify CD PSG Volume %.",
      {
         { "0", NULL },
         { "10", NULL },
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
      "pce_sound_channel_0_volume",
      "PSG Sound Channel 0 Volume %",
      "Modify PSG Sound Channel 0 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_sound_channel_1_volume",
      "PSG Sound Channel 1 Volume %",
      "Modify PSG Sound Channel 1 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_sound_channel_2_volume",
      "PSG Sound Channel 2 Volume %",
      "Modify PSG Sound Channel 2 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_sound_channel_3_volume",
      "PSG Sound Channel 3 Volume %",
      "Modify PSG Sound Channel 3 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_sound_channel_4_volume",
      "PSG Sound Channel 4 Volume %",
      "Modify PSG Sound Channel 4 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_sound_channel_5_volume",
      "PSG Sound Channel 5 Volume %",
      "Modify PSG Sound Channel 5 Volume %",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "90", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "pce_cdspeed",
      "(CD) CD Speed",
      "Set the speed of the emulated CD drive.",
      {
         { "1", NULL },
         { "2", NULL },
         { "4", NULL },
         { "8", NULL },
         { NULL, NULL },
      },
      "1"
   },
   {
      "pce_mouse_sensitivity",
      "Mouse Sensitivity",
      "Configure the PCE Mouse device type's sensitivity.",
      {
         { "0.25", NULL },
         { "0.50", NULL },
         { "0.75", NULL },
         { "1.00", NULL },
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
         { NULL, NULL },
      },
      "1.25"
   },
   {
      "pce_turbo_delay",
      "Turbo Delay",
      "Adjust turbo delay.",
      {
         { "1",  NULL },
         { "2",  NULL },
         { "3",  NULL },
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
      "pce_turbo_toggling",
      "Turbo ON/OFF Toggle",
      "Enables Turbo ON/OFF inputs.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "pce_turbo_toggle_hotkey",
      "Alternate Turbo Hotkey",
      "Enables Alternate Turbo ON/OFF inputs. You can avoid remapping Button III and IV when switching to 6-button gamepad mode with this.",
      {
         { "disabled", NULL },
         { "enabled", NULL },
         { NULL, NULL },
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
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
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
      size_t num_options               = 0;
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine number of options */
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

         variables[i].key   = key;
         variables[i].value = values_buf[i];
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
