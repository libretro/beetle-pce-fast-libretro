#include <stdarg.h>

#include <retro_miscellaneous.h>
#include <streams/file_stream.h>
#include <string/stdstring.h>
#include <encodings/crc32.h>
#include <libretro.h>

#include "mednafen/mednafen.h"
#include "mednafen/git.h"
#include "mednafen/general.h"

#include "mednafen/pce/pce.h"
#include "mednafen/pce/pcecd.h"
#include "mednafen/pce/input.h"
#include "mednafen/pce/huc.h"
#include "mednafen/pce/vce.h"
#include "mednafen/settings-driver.h"
#include "mednafen/mempatcher.h"
#include "mednafen/cdrom/cdromif.h"
#include "mednafen/cdrom/CDUtility.h"

#ifdef _MSC_VER
#include "mednafen/msvc_compat.h"
#endif

#define MEDNAFEN_CORE_NAME_MODULE "pce"
#define MEDNAFEN_CORE_NAME "Beetle PCE"
#define MEDNAFEN_CORE_VERSION "v0.9.48"
#define MEDNAFEN_CORE_EXTENSIONS "pce|cue|ccd|chd|sgx"
#define MEDNAFEN_CORE_TIMING_FPS 7159090.90909090 / 455 / 263
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 256
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 224
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 512
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 243
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (MEDNAFEN_CORE_GEOMETRY_BASE_W * 8.0 / 7.0) / MEDNAFEN_CORE_GEOMETRY_BASE_H
#define FB_WIDTH 1365
#define FB_HEIGHT 270

static bool old_cdimagecache = false;

extern MDFNGI EmulatedPCE;
MDFNGI *MDFNGameInfo = &EmulatedPCE;


static bool ReadM3U(std::vector<std::string> &file_list, std::string path, unsigned depth = 0)
{
	std::string dir_path;
	char linebuf[2048];
	FILE *fp = fopen(path.c_str(), "rb");

	if (!fp)
		return false;

	MDFN_GetFilePathComponents(path, &dir_path);

	while(fgets(linebuf, sizeof(linebuf), fp))
	{
		std::string efp;

		if(linebuf[0] == '#')
			continue;
		string_trim_whitespace_right(linebuf);
		if(linebuf[0] == 0)
			continue;

		efp = MDFN_EvalFIP(dir_path, std::string(linebuf));

		if(efp.size() >= 4 && efp.substr(efp.size() - 4) == ".m3u")
		{
			if(efp == path)
			{
				log_cb(RETRO_LOG_ERROR, "M3U at \"%s\" references self.\n", efp.c_str());
				fclose(fp);
				return false;
			}

			if(depth == 99)
			{
				log_cb(RETRO_LOG_ERROR, "M3U load recursion too deep!\n");
				fclose(fp);
				return false;
			}

			ReadM3U(file_list, efp, depth++);
		}
		else
			file_list.push_back(efp);
	}

	fclose(fp);

	return true;
}

static std::vector<CDIF *> CDInterfaces;	// FIXME: Cleanup on error out.
// TODO: LoadCommon()

static MDFNGI *MDFNI_LoadCD(const char *devicename)
{
	bool ret = false;
	log_cb(RETRO_LOG_INFO, "Loading %s...\n\n", devicename);

	if(devicename && strlen(devicename) > 4 && !strcasecmp(devicename + strlen(devicename) - 4, ".m3u"))
	{
		std::vector<std::string> file_list;

		if (ReadM3U(file_list, devicename))
			ret = true;

		for(unsigned i = 0; i < file_list.size(); i++)
		{
			CDIF *cdif = CDIF_Open(file_list[i].c_str(), false);
			CDInterfaces.push_back(cdif);
		}
	}
	else
	{
		CDIF *cdif = CDIF_Open(devicename, false);

		if (cdif)
		{
			ret = true;
			CDInterfaces.push_back(cdif);
		}
	}

	if (!ret)
	{
		log_cb(RETRO_LOG_ERROR, "Error opening CD.\n");
		return NULL;
	}

	/* Print out a track list for all discs. */
	MDFN_indent(1);
	for(unsigned i = 0; i < CDInterfaces.size(); i++)
	{
		TOC toc;

		CDInterfaces[i]->ReadTOC(&toc);

		MDFN_printf("CD %d Layout:\n", i + 1);
		MDFN_indent(1);

		for(int32 track = toc.first_track; track <= toc.last_track; track++)
		{
			MDFN_printf("Track %2d, LBA: %6d  %s\n", track, toc.tracks[track].lba, (toc.tracks[track].control & 0x4) ? "DATA" : "AUDIO");
		}

		MDFN_printf("Leadout: %6d\n", toc.tracks[100].lba);
		MDFN_indent(-1);
		MDFN_printf("\n");
	}
	MDFN_indent(-1);

	MDFN_printf("Using module: pce.\n");

	if(!(PCE_LoadCD(&CDInterfaces)))
	{
		for(unsigned i = 0; i < CDInterfaces.size(); i++)
			delete CDInterfaces[i];

		CDInterfaces.clear();

		MDFNGameInfo = NULL;
		return(0);
	}

	//MDFNI_SetLayerEnableMask(~0ULL);

	MDFN_LoadGameCheats(NULL);
	MDFNMP_InstallReadPatches();

	return(MDFNGameInfo);
}

static MDFNGI *MDFNI_LoadGame(const char *name)
{
	static const FileExtensionSpecStruct KnownExtensions[] =
	{
		{ ".pce", "PC Engine ROM Image" },
		{ ".sgx", "SuperGrafx ROM Image" },
		{ NULL, NULL }
	};

	std::vector<FileExtensionSpecStruct> valid_iae;
	MDFNFILE *GameFile = NULL;
	MDFNGameInfo = &EmulatedPCE;

	if(strlen(name) > 4 && (!strcasecmp(name + strlen(name) - 4, ".cue") || !strcasecmp(name + strlen(name) - 4, ".ccd") || !strcasecmp(name + strlen(name) - 4, ".chd") || !strcasecmp(name + strlen(name) - 4, ".toc") || !strcasecmp(name + strlen(name) - 4, ".m3u")))
	{
		return(MDFNI_LoadCD(name));
	}

	MDFN_printf("Loading %s...\n",name);

	MDFN_indent(1);

	// Construct a NULL-delimited list of known file extensions for MDFN_fopen()
	const FileExtensionSpecStruct *curexts = KnownExtensions;

	while(curexts->extension && curexts->description)
	{
		valid_iae.push_back(*curexts);
		curexts++;
	}

	GameFile = file_open(name);

	if(!GameFile)
		goto error;

	MDFN_printf("Using module: pce.\n\n");
	MDFN_indent(1);

	//
	// Load per-game settings
	//
	// Maybe we should make a "pgcfg" subdir, and automatically load all files in it?
	// End load per-game settings
	//

	if(PCE_Load(GameFile) <= 0)
		goto error;

	MDFN_LoadGameCheats(NULL);
	MDFNMP_InstallReadPatches();

	MDFN_indent(-2);

	return(MDFNGameInfo);

error:
	if (GameFile)
		file_close(GameFile);
	MDFNGameInfo = NULL;
	return NULL;
}

static int curindent = 0;

void MDFN_indent(int indent)
{
	curindent += indent;
}

static uint8 lastchar = 0;

void MDFN_printf(const char *format, ...)
{
	char *format_temp;
	char *temp;
	unsigned int x, newlen;

	va_list ap;
	va_start(ap,format);


	// First, determine how large our format_temp buffer needs to be.
	uint8 lastchar_backup = lastchar; // Save lastchar!
	for(newlen=x=0;x<strlen(format);x++)
	{
		if(lastchar == '\n' && format[x] != '\n')
		{
			int y;
			for(y=0;y<curindent;y++)
				newlen++;
		}
		newlen++;
		lastchar = format[x];
	}

	format_temp = (char *)malloc(newlen + 1); // Length + NULL character, duh

	// Now, construct our format_temp string
	lastchar = lastchar_backup; // Restore lastchar
	for(newlen=x=0;x<strlen(format);x++)
	{
		if(lastchar == '\n' && format[x] != '\n')
		{
			int y;
			for(y=0;y<curindent;y++)
				format_temp[newlen++] = ' ';
		}
		format_temp[newlen++] = format[x];
		lastchar = format[x];
	}

	format_temp[newlen] = 0;

	temp = new char[4096];
	vsnprintf(temp, 4096, format_temp, ap);
	free(format_temp);

	MDFND_Message(temp);
	free(temp);

	va_end(ap);
}

void MDFN_PrintError(const char *format, ...)
{
	char *temp;

	va_list ap;

	va_start(ap, format);

	temp = new char[4096];
	vsnprintf(temp, 4096, format, ap);
	MDFND_PrintError(temp);
	free(temp);

	va_end(ap);
}

void MDFN_DebugPrintReal(const char *file, const int line, const char *format, ...)
{
	char *temp;

	va_list ap;

	va_start(ap, format);

	temp = new char[4096];
	vsnprintf(temp, 4096, format, ap);
	fprintf(stderr, "%s:%d  %s\n", file, line, temp);
	free(temp);

	va_end(ap);
}


static MDFNGI *game;

struct retro_perf_callback perf_cb;
retro_get_cpu_features_t perf_get_cpu_features_cb = NULL;
retro_log_printf_t log_cb;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;
static double last_sound_rate;

static MDFN_Surface *surf;

static bool failed_init;

std::string retro_base_directory;

static void check_system_specs(void)
{
	unsigned level = 5;
	environ_cb(RETRO_ENVIRONMENT_SET_PERFORMANCE_LEVEL, &level);
}

void retro_init(void)
{
	struct retro_log_callback log;
	if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
		log_cb = log.log;
	else 
		log_cb = NULL;

	CDUtility_Init();

	const char *dir = NULL;

	if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
	{
		retro_base_directory = dir;
		// Make sure that we don't have any lingering slashes, etc, as they break Windows.
		size_t last = retro_base_directory.find_last_not_of("/\\");
		if (last != std::string::npos)
			last++;

		retro_base_directory = retro_base_directory.substr(0, last);
	}
	else
	{
		/* TODO: Add proper fallback */
		if (log_cb)
			log_cb(RETRO_LOG_WARN, "System directory is not defined. Fallback on using same dir as ROM for system directory later ...\n");
		failed_init = true;
	}
   
	enum retro_pixel_format rgb565 = RETRO_PIXEL_FORMAT_RGB565;
	if (environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb565) && log_cb)
		log_cb(RETRO_LOG_INFO, "Frontend supports RGB565 - will use that instead of XRGB1555.\n");

	if (environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb))
		perf_get_cpu_features_cb = perf_cb.get_cpu_features;
	else
		perf_get_cpu_features_cb = NULL;

	bool yes = true;
	environ_cb(RETRO_ENVIRONMENT_SET_SUPPORT_ACHIEVEMENTS, &yes);
   
	setting_pce_initial_scanline = 0;
	setting_pce_last_scanline = 242;

	check_system_specs();
}

void retro_reset(void)
{
	DoSimpleCommand(MDFN_MSC_RESET);
}

bool retro_load_game_special(unsigned, const struct retro_game_info *, size_t)
{
	return false;
}

#define MAX_PLAYERS 5
#define MAX_BUTTONS 15
static uint8_t input_buf[MAX_PLAYERS][2] = {0};

// Array to keep track of whether a given player's button is turbo
static int turbo_enable[MAX_PLAYERS][MAX_BUTTONS] = {};
// Array to keep track of each buttons turbo status
static int turbo_counter[MAX_PLAYERS][MAX_BUTTONS] = {};
// The number of frames between each firing of a turbo button
static int Turbo_Delay;
static int Turbo_Toggling = 1;
static bool turbo_toggle_alt = false;
static int turbo_toggle_down[MAX_PLAYERS][MAX_BUTTONS] = {};

static void check_variables(bool loaded)
{
	struct retro_variable var = {0};

	var.key = "pce_cdimagecache";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		bool cdimage_cache = true;

		if (strcmp(var.value, "enabled") == 0)
			cdimage_cache = true;
		else if (strcmp(var.value, "disabled") == 0)
			cdimage_cache = false;

		if (cdimage_cache != old_cdimagecache)
			old_cdimagecache = cdimage_cache;
	}

	var.key = "pce_cdbios";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "System Card 3") == 0)
			setting_pce_cdbios = "syscard3.pce";
		else if (strcmp(var.value, "System Card 2") == 0)
			setting_pce_cdbios = "syscard2.pce";
		else if (strcmp(var.value, "System Card 1") == 0)
			setting_pce_cdbios = "syscard1.pce";
		else if (strcmp(var.value, "Games Express") == 0)
			setting_pce_cdbios = "gexpress.pce";
		else if (strcmp(var.value, "System Card 3 US") == 0)
			setting_pce_cdbios = "syscard3u.pce";
		else if (strcmp(var.value, "System Card 2 US") == 0)
			setting_pce_cdbios = "syscard2u.pce";
	}

	var.key = "pce_nospritelimit";
	
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "disabled") == 0)
			setting_pce_nospritelimit = 0;
		else if (strcmp(var.value, "enabled") == 0)
			setting_pce_nospritelimit = 1;
	}

	var.key = "pce_ocmultiplier";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_overclocked = atoi(var.value);
	}

	var.key = "pce_hoverscan";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_hoverscan = atoi(var.value);
	}

	var.key = "pce_initial_scanline";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_initial_scanline = atoi(var.value);
	}

	var.key = "pce_last_scanline";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_last_scanline = atoi(var.value);
	}

	var.key = "pce_psgrevision";
	
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "auto") == 0)
			setting_pce_psgrevision = 2;
		else if (strcmp(var.value, "HuC6280") == 0)
			setting_pce_psgrevision = 0;
		else if (strcmp(var.value, "HuC6280A") == 0)
			setting_pce_psgrevision = 1;
	}

	var.key = "pce_cddavolume";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_cddavolume = atoi(var.value);
	}

	var.key = "pce_adpcmvolume";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_adpcmvolume = atoi(var.value);
	}

	var.key = "pce_cdpsgvolume";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_cdpsgvolume = atoi(var.value);
	}

	var.key = "pce_cdspeed";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		setting_pce_cdspeed = atoi(var.value);
	}

	var.key = "pce_adpcmextraprec";
	
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "10-bit") == 0)
			setting_pce_adpcmextraprec = 0;
		else if (strcmp(var.value, "12-bit") == 0)
			setting_pce_adpcmextraprec = 1;
	}

	var.key = "pce_multitap";
	
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "disabled") == 0)
			setting_pce_multitap = 0;
		else if (strcmp(var.value, "enabled") == 0)
			setting_pce_multitap = 1;
	}

	// Set Turbo_Toggling
	var.key = "pce_Turbo_Toggling";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			Turbo_Toggling = 1;
		else
			Turbo_Toggling = 0;
	}

	// Set TURBO_DELAY 
	var.key = "pce_Turbo_Delay";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "Fast") == 0)
			Turbo_Delay = 3;
		else if (strcmp(var.value, "Medium") == 0)
			Turbo_Delay = 8;
		else if (strcmp(var.value, "Slow") == 0)
			Turbo_Delay = 15;
	}

	//  False sets turbo hotkey X/Y, true assigns hotkey to L3/R3
	var.key = "pce_turbo_toggle_hotkey";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_toggle_alt = true;
		else
			turbo_toggle_alt = false;
	}

	// Enable turbo for each player's I+II buttons   
	var.key = "pce_p0_turbo_I_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[0][0] = 1;
		else
			turbo_enable[0][0] = 0;
	}

	var.key = "pce_p0_turbo_II_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[0][1] = 1;
		else
			turbo_enable[0][1] = 0;
	}

	var.key = "pce_p1_turbo_I_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[1][0] = 1;
		else
			turbo_enable[1][0] = 0;
	}

	var.key = "pce_p1_turbo_II_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[1][1] = 1;
		else
			turbo_enable[1][1] = 0;
	}

	var.key = "pce_p2_turbo_I_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[2][0] = 1;
		else
			turbo_enable[2][0] = 0;
	}

	var.key = "pce_p2_turbo_II_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[2][1] = 1;
		else
			turbo_enable[2][1] = 0;
	}

	var.key = "pce_p3_turbo_I_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[3][0] = 1;
		else
			turbo_enable[3][0] = 0;
	}

	var.key = "pce_p3_turbo_II_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[3][1] = 1;
		else
			turbo_enable[3][1] = 0;
	}

	var.key = "pce_p4_turbo_I_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[4][0] = 1;
		else
			turbo_enable[4][0] = 0;
	}

	var.key = "pce_p4_turbo_II_enable";

	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
	{
		if (strcmp(var.value, "enabled") == 0)
			turbo_enable[4][1] = 1;
		else
			turbo_enable[4][1] = 0;
	}
	
	if (loaded)
		SettingsChanged();
}

bool retro_load_game(const struct retro_game_info *info)
{
	struct retro_input_descriptor desc[] = {
		#define button_ids(INDEX) \
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,  "D-Pad Left" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,    "D-Pad Up" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,  "D-Pad Down" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,     "II" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,     "I" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,     "IV" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,     "III" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,     "V" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,     "VI" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,    "Mode Switch" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT,    "Select" },\
		{ INDEX, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,    "Run" },
		button_ids(0)
		button_ids(1)
		button_ids(2)
		button_ids(3)
		button_ids(4)

		{ 0 },
	};

	if (!info || failed_init)
		return false;

	environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);

	check_variables(false);

	game = MDFNI_LoadGame(info->path);
	if (!game)
		return false;

	surf = (MDFN_Surface*)calloc(1, sizeof(*surf));

	if (!surf)
		return false;

	surf->width  = FB_WIDTH;
	surf->height = FB_HEIGHT;
	surf->pitch  = FB_WIDTH;
	surf->pixels = (uint16_t*) calloc(2, FB_WIDTH * FB_HEIGHT);

	if (!surf->pixels)
	{
		free(surf);
		return false;
	}

	// Possible endian bug ...
	for (unsigned i = 0; i < MAX_PLAYERS; i++)
		PCEINPUT_SetInput(i, "gamepad", &input_buf[i][0]);

	return game;
}

void retro_unload_game(void)
{
	if(!MDFNGameInfo)
		return;

	MDFN_FlushGameCheats(0);

	PCE_CloseGame();

	MDFNMP_Kill();

	MDFNGameInfo = NULL;

	for(unsigned i = 0; i < CDInterfaces.size(); i++)
		delete CDInterfaces[i];

	CDInterfaces.clear();
}

static void update_input(void)
{
	static int turbo_map[]     = { -1,-1,-1,-1,-1,-1,-1,-1, 1, 0,-1,-1,-1,-1,-1 };
	static int turbo_map_alt[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 1, 0 };
	static unsigned map[] = {
		RETRO_DEVICE_ID_JOYPAD_A,
		RETRO_DEVICE_ID_JOYPAD_B,
		RETRO_DEVICE_ID_JOYPAD_SELECT,
		RETRO_DEVICE_ID_JOYPAD_START,
		RETRO_DEVICE_ID_JOYPAD_UP,
		RETRO_DEVICE_ID_JOYPAD_RIGHT,
		RETRO_DEVICE_ID_JOYPAD_DOWN,
		RETRO_DEVICE_ID_JOYPAD_LEFT,
		RETRO_DEVICE_ID_JOYPAD_Y,
		RETRO_DEVICE_ID_JOYPAD_X,
		RETRO_DEVICE_ID_JOYPAD_L,
		RETRO_DEVICE_ID_JOYPAD_R,
		RETRO_DEVICE_ID_JOYPAD_L2,
		RETRO_DEVICE_ID_JOYPAD_L3,
		RETRO_DEVICE_ID_JOYPAD_R3
	};

	for (unsigned j = 0; j < MAX_PLAYERS; j++)
	{
		uint16_t input_state = 0;
		for (unsigned i = 0; i < MAX_BUTTONS; i++)
		{
			if (turbo_enable[j][i] == 1) //Check whether a given button is turbo-capable
			{
				if (turbo_counter[j][i] == (Turbo_Delay+1)) //Turbo buttons only fire when their counter exceeds the turbo delay
				{
					input_state |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]) ? (1 << i) : 0;
				}
				else
				{
					turbo_counter[j][i]++; //Otherwise, their counter is incremented by 1
				}
				if (turbo_counter[j][i] > (Turbo_Delay)) //When the counter exceeds turbo delay, fire and return to zero
				{
					input_state |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]) ? (1 << i) : 0;
					turbo_counter[j][i] = 0;
				}
			}
			else if ((!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i]) != -1 && Turbo_Toggling)
			{
				if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]))
				{
					if (turbo_toggle_down[j][i] == 0)
					{
						turbo_toggle_down[j][i] = 1;
						turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] = turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] ^ 1;
						MDFN_DispMessage("Pad %i Button %s Turbo %s", j + 1,
							i == (!turbo_toggle_alt ? 9 : 14) ? "I" : "II",
							turbo_enable[j][(!turbo_toggle_alt ? turbo_map[i] : turbo_map_alt[i])] ? "ON" : "OFF" );
					}
				}
				else
					turbo_toggle_down[j][i] = 0;
	
			}
			else
				input_state |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]) ? (1 << i) : 0;
		}

		// Input data must be little endian.
		input_buf[j][0] = (input_state >> 0) & 0xff;
		input_buf[j][1] = (input_state >> 8) & 0xff;
	}
}

static uint64_t video_frames, audio_frames;

void update_geometry(unsigned width, unsigned height)
{
	struct retro_system_av_info system_av_info;
	system_av_info.geometry.base_width = width;
	system_av_info.geometry.base_height = height;
	system_av_info.geometry.max_width = MEDNAFEN_CORE_GEOMETRY_MAX_W;
	system_av_info.geometry.max_height = MEDNAFEN_CORE_GEOMETRY_MAX_H;

	float dar, par;
	if(width <= 256 + 24)
		par = 8.0 / 7.0;
	else if(width > 352 + 32)
		par = 4.0 / 7.0;
	else
		par = 6.0 / 7.0;

	dar = (width * par) / height;

	log_cb(RETRO_LOG_INFO, "Resolution: %d %d | %f %f\n", width, height, par, dar);

	system_av_info.geometry.aspect_ratio = dar;
	environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &system_av_info);
}

void retro_run(void)
{
	MDFNGI *curgame = (MDFNGI*)game;

	input_poll_cb();

	update_input();

	static int16_t sound_buf[0x10000];
	static int32_t rects[FB_HEIGHT];
	static unsigned width = 0, height = 0;
	bool resolution_changed = false;
	rects[0] = ~0;

	EmulateSpecStruct spec = {0};
	spec.surface = surf;
	spec.SoundRate = 44100;
	spec.SoundBuf = sound_buf;
	spec.LineWidths = rects;
	spec.SoundBufMaxSize = sizeof(sound_buf) / 2;
	spec.SoundVolume = 1.0;
	spec.soundmultiplier = 1.0;
	spec.SoundBufSize = 0;
	spec.VideoFormatChanged = false;
	spec.SoundFormatChanged = false;
	spec.skip = false;

	if (spec.SoundRate != last_sound_rate)
	{
		spec.SoundFormatChanged = true;
		last_sound_rate = spec.SoundRate;
	}

	Emulate(&spec);

	int16 *const SoundBuf = spec.SoundBuf + spec.SoundBufSizeALMS * curgame->soundchan;
	int32 SoundBufSize = spec.SoundBufSize - spec.SoundBufSizeALMS;
	const int32 SoundBufMaxSize = spec.SoundBufMaxSize - spec.SoundBufSizeALMS;

	spec.SoundBufSize = spec.SoundBufSizeALMS + SoundBufSize;

	if (width != spec.DisplayRect.w || height != spec.DisplayRect.h)
		resolution_changed = true;

	width  = spec.DisplayRect.w;
	height = spec.DisplayRect.h;
	video_cb(surf->pixels + surf->pitch * spec.DisplayRect.y, width, height, FB_WIDTH * 2);

	audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

	bool updated = false;
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
	{
		check_variables(true);
		update_geometry(width, height);
	}

	if (resolution_changed)
		update_geometry(width, height);

	video_frames++;
	audio_frames += spec.SoundBufSize;
}

void retro_get_system_info(struct retro_system_info *info)
{
	memset(info, 0, sizeof(*info));
	info->library_name     = MEDNAFEN_CORE_NAME;
#ifndef GIT_VERSION
#define GIT_VERSION ""
#endif
	info->library_version  = MEDNAFEN_CORE_VERSION GIT_VERSION;
	info->need_fullpath    = true;
	info->valid_extensions = MEDNAFEN_CORE_EXTENSIONS;
	info->block_extract    = false;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
	memset(info, 0, sizeof(*info));
	info->timing.fps            = MEDNAFEN_CORE_TIMING_FPS;
	info->timing.sample_rate    = 44100;
	info->geometry.base_width   = MEDNAFEN_CORE_GEOMETRY_BASE_W;
	info->geometry.base_height  = MEDNAFEN_CORE_GEOMETRY_BASE_H;
	info->geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
	info->geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
	info->geometry.aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO;
}

void retro_deinit()
{
	if (surf)
		free(surf);
	surf = NULL;

	if (log_cb)
	{
		log_cb(RETRO_LOG_INFO, "[%s]: Samples / Frame: %.5f\n",
				MEDNAFEN_CORE_NAME, (double)audio_frames / video_frames);
		log_cb(RETRO_LOG_INFO, "[%s]: Estimated FPS: %.5f\n",
				MEDNAFEN_CORE_NAME, (double)video_frames * 44100 / audio_frames);
	}
}

unsigned retro_get_region(void)
{
	return RETRO_REGION_NTSC; // FIXME: Regions for other cores.
}

unsigned retro_api_version(void)
{
	return RETRO_API_VERSION;
}

void retro_set_controller_port_device(unsigned in_port, unsigned device)
{
	switch(device)
	{
	case RETRO_DEVICE_JOYPAD:
		PCEINPUT_SetInput(in_port, "gamepad", &input_buf[in_port][0]);
		break;
	
	case RETRO_DEVICE_MOUSE:
		PCEINPUT_SetInput(in_port, "mouse", &input_buf[in_port][0]);
		break;
   }
}

void retro_set_environment(retro_environment_t cb)
{
	struct retro_vfs_interface_info vfs_iface_info;
	environ_cb = cb;

	static const struct retro_variable vars[] = {
		{ "pce_cdimagecache", "CD Image Cache (Restart); disabled|enabled" },
		{ "pce_cdbios", "CD Bios (Restart); System Card 3|Games Express|System Card 1|System Card 2|System Card 2 US|System Card 3 US" },
		{ "pce_nospritelimit", "No Sprite Limit; disabled|enabled" },
		{ "pce_ocmultiplier", "CPU Overclock Multiplier; 1|2|3|4|5|6|7|8|9|10|20|30|40|50" },
		{ "pce_hoverscan", "Horizontal Overscan (352 Width Mode Only); 352|300|302|304|306|308|310|312|314|316|318|320|322|324|326|328|330|332|334|336|338|340|342|344|346|348|350" },
		{ "pce_initial_scanline", "Initial scanline; 3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|32|33|34|35|36|37|38|39|40|0|1|2" },
		{ "pce_last_scanline", "Last scanline; 242|208|209|210|211|212|213|214|215|216|217|218|219|220|221|222|223|224|225|226|227|228|229|230|231|232|233|234|235|236|237|238|239|240|241" },
		{ "pce_psgrevision (Restart)", "PSG audio chip; auto|HuC6280|HuC6280A" },
		{ "pce_cddavolume", "(CD) CDDA Volume %; 100|110|120|130|140|150|160|170|180|190|200|0|10|20|30|40|50|60|70|80|90" },
		{ "pce_adpcmvolume", "(CD) ADPCM Volume %; 100|110|120|130|140|150|160|170|180|190|200|0|10|20|30|40|50|60|70|80|90" },
		{ "pce_cdpsgvolume", "(CD) CD PSG Volume %; 100|110|120|130|140|150|160|170|180|190|200|0|10|20|30|40|50|60|70|80|90" },
		{ "pce_cdspeed", "(CD) CD Speed; 1|2|4|8" },
		{ "pce_adpcmextraprec", "(CD) ADPCM precision; 10-bit|12-bit" },
		{ "pce_multitap", "Multitap 5-port controller; enabled|disabled" },
		{ "pce_Turbo_Delay", "Turbo Delay; Fast|Medium|Slow" },
		{ "pce_Turbo_Toggling", "Turbo ON/OFF Toggle; disabled|enabled" },
		{ "pce_turbo_toggle_hotkey", "Alternate Turbo Hotkey; disabled|enabled" },
		{ "pce_p0_turbo_I_enable", "P1 Turbo I; disabled|enabled" },
		{ "pce_p0_turbo_II_enable", "P1 Turbo II; disabled|enabled" },
		{ "pce_p1_turbo_I_enable", "P2 Turbo I; disabled|enabled" },
		{ "pce_p1_turbo_II_enable", "P2 Turbo II; disabled|enabled" },
		{ "pce_p2_turbo_I_enable", "P3 Turbo I; disabled|enabled" },
		{ "pce_p2_turbo_II_enable", "P3 Turbo II; disabled|enabled" },
		{ "pce_p3_turbo_I_enable", "P4 Turbo I; disabled|enabled" },
		{ "pce_p3_turbo_II_enable", "P4 Turbo II; disabled|enabled" },
		{ "pce_p4_turbo_I_enable", "P5 Turbo I; disabled|enabled" },
		{ "pce_p4_turbo_II_enable", "P5 Turbo II; disabled|enabled" },
		{ NULL, NULL },
	};

	static const struct retro_controller_description pads[] = {
		{ "PCE Joypad", RETRO_DEVICE_JOYPAD },
		{ "Mouse", RETRO_DEVICE_MOUSE },
	};

	static const struct retro_controller_info ports[] = {
		{ pads, 2 },
		{ pads, 2 },
		{ pads, 2 },
		{ pads, 2 },
		{ pads, 2 },
		{ 0 },
	};

	cb(RETRO_ENVIRONMENT_SET_VARIABLES, (void*)vars);
	environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);

	vfs_iface_info.required_interface_version = 1;
	vfs_iface_info.iface                      = NULL;
	if (environ_cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_iface_info))
		filestream_vfs_init(&vfs_iface_info);
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{
	audio_cb = cb;
}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
	audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
	input_poll_cb = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
	input_state_cb = cb;
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
	video_cb = cb;
}

static size_t serialize_size;

size_t retro_serialize_size(void)
{
	StateMem st;

	st.data           = NULL;
	st.loc            = 0;
	st.len            = 0;
	st.malloced       = 0;
	st.initial_malloc = 0;

	if (!MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL))
		return 0;

	free(st.data);

	return serialize_size = st.len;
}

bool retro_serialize(void *data, size_t size)
{
	StateMem st;
	bool ret          = false;
	uint8_t *_dat     = (uint8_t*)malloc(size);

	if (!_dat)
		return false;

	/* Mednafen can realloc the buffer so we need to ensure this is safe. */
	st.data           = _dat;
	st.loc            = 0;
	st.len            = 0;
	st.malloced       = size;
	st.initial_malloc = 0;

	ret = MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL);

	memcpy(data, st.data, size);
	free(st.data);

	return ret;
}

bool retro_unserialize(const void *data, size_t size)
{
	StateMem st;

	st.data           = (uint8_t*)data;
	st.loc            = 0;
	st.len            = size;
	st.malloced       = 0;
	st.initial_malloc = 0;

	return MDFNSS_LoadSM(&st, 0, 0);
}

void *retro_get_memory_data(unsigned type)
{
	switch (type)
	{
	case RETRO_MEMORY_SAVE_RAM:
		if (IsPopulous)
			return (uint8_t*)PopRAM;

		return (uint8_t*)SaveRAM;

	case RETRO_MEMORY_SYSTEM_RAM:
		return BaseRAM;
		 
	default:
		break;
	}

	return NULL;
}

size_t retro_get_memory_size(unsigned type)
{
	switch (type)
	{
	case RETRO_MEMORY_SAVE_RAM:
		if (IsPopulous)
			return 32768;
		return 2048;

	case RETRO_MEMORY_SYSTEM_RAM:
		return sizeof(BaseRAM) - 8192;

	default:
		break;
	}

   return 0;
}

void retro_cheat_reset(void)
{}

void retro_cheat_set(unsigned, bool, const char *)
{}

#ifdef _WIN32
static void sanitize_path(std::string &path)
{
	size_t size = path.size();
	for (size_t i = 0; i < size; i++)
		if (path[i] == '/')
			path[i] = '\\';
}
#endif

// Use a simpler approach to make sure that things go right for libretro.
std::string MDFN_MakeFName(MakeFName_Type type, int id1, const char *cd1)
{
	char slash;
#ifdef _WIN32
	slash = '\\';
#else
	slash = '/';
#endif
	std::string ret;
	switch (type)
	{
	case MDFNMKF_FIRMWARE:
		ret = retro_base_directory + slash + std::string(cd1);
#ifdef _WIN32
		sanitize_path(ret); // Because Windows path handling is mongoloid.
#endif
		break;
	  
	default:	  
		break;
	}

	if (log_cb)
		log_cb(RETRO_LOG_INFO, "MDFN_MakeFName: %s\n", ret.c_str());
	return ret;
}

void MDFND_Message(const char *str)
{
	if (log_cb)
		log_cb(RETRO_LOG_INFO, "%s\n", str);
}

void MDFND_PrintError(const char* err)
{
	if (log_cb)
		log_cb(RETRO_LOG_ERROR, "%s\n", err);
}

/* forward declarations */
extern void MDFND_DispMessage(unsigned char *str);

void MDFND_DispMessage(unsigned char *str)
{
	const char *strc = (const char*)str;
	struct retro_message msg =
	{
		strc,
		180
	};

	environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

void MDFN_DispMessage(const char *format, ...)
{
	struct retro_message msg;
	va_list ap;
	va_start(ap,format);
	char *str = new char[4096];
	const char *strc = NULL;

	vsnprintf(str, 4096, format,ap);
	va_end(ap);
	strc = str;

	msg.frames = 180;
	msg.msg = strc;

	environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

void MDFN_MidSync(EmulateSpecStruct *espec)
{
	//if(!MDFNnetplay)
	{
		//ProcessAudio(espec);

		//espec->SoundBufSizeALMS = espec->SoundBufSize;
		//espec->MasterCyclesALMS = espec->MasterCycles;

		PCEINPUT_TransformInput();
	}
}
