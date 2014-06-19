#include "mednafen/mednafen.h"
#include "mednafen/git.h"
#include "mednafen/general.h"
#include "mednafen/md5.h"
#include "libretro.h"
#include "thread.h"

#include "mednafen/pce_fast/pce.h"
#include "mednafen/pce_fast/vdc.h"
#include "mednafen/pce_fast/psg.h"
#include "mednafen/pce_fast/input.h"
#include "mednafen/pce_fast/huc.h"
#include "mednafen/pce_fast/pcecd.h"
#include "mednafen/pce_fast/pcecd_drive.h"
#include "mednafen/hw_misc/arcade_card/arcade_card.h"
#include "mednafen/mempatcher.h"
#include "mednafen/cdrom/cdromif.h"

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

extern "C" unsigned long crc32(unsigned long crc, const unsigned char *buf, unsigned int len);

namespace PCE_Fast
{

static PCEFast_PSG *psg = NULL;
extern ArcadeCard *arcade_card; // Bah, lousy globals.

static Blip_Buffer sbuf[2];

bool PCE_ACEnabled;

static bool IsSGX;
static bool IsHES;
int pce_overclocked;

// Statically allocated for speed...or something.
uint8 ROMSpace[0x88 * 8192 + 8192];	// + 8192 for PC-as-pointer safety padding

uint8 BaseRAM[32768 + 8192]; // 8KB for PCE, 32KB for Super Grafx // + 8192 for PC-as-pointer safety padding

uint8 PCEIODataBuffer;
readfunc PCERead[0x100];
writefunc PCEWrite[0x100];

static DECLFR(PCEBusRead)
{
 //printf("BUS Read: %02x %04x\n", A >> 13, A);
 return(0xFF);
}

static DECLFW(PCENullWrite)
{
 //printf("Null Write: %02x, %08x %02x\n", A >> 13, A, V);
}

static DECLFR(BaseRAMReadSGX)
{
 return((BaseRAM - (0xF8 * 8192))[A]);
}

static DECLFW(BaseRAMWriteSGX)
{
 (BaseRAM - (0xF8 * 8192))[A] = V;
}

static DECLFR(BaseRAMRead)
{
 return((BaseRAM - (0xF8 * 8192))[A]);
}

static DECLFR(BaseRAMRead_Mirrored)
{
 return(BaseRAM[A & 0x1FFF]);
}

static DECLFW(BaseRAMWrite)
{
 (BaseRAM - (0xF8 * 8192))[A] = V;
}

static DECLFW(BaseRAMWrite_Mirrored)
{
 BaseRAM[A & 0x1FFF] = V;
}

static DECLFR(IORead)
{
 #define IOREAD_SGX 0
 #include "mednafen/pce_fast/ioread.inc"
 #undef IOREAD_SGX
}

static DECLFR(IOReadSGX)
{
 #define IOREAD_SGX 1
 #include "mednafen/pce_fast/ioread.inc"
 #undef IOREAD_SGX
}

static DECLFW(IOWrite)
{
 A &= 0x1FFF;
  
 switch(A >> 10)
 {
  case 0: HuC6280_StealCycle();
	       VDC_Write(A, V);
	       break;

  case 1: HuC6280_StealCycle();
	       VCE_Write(A, V);
	       break;

  case 2: PCEIODataBuffer = V;
	       psg->Write(HuCPU.timestamp / pce_overclocked, A, V);
	       break;

  case 3: PCEIODataBuffer = V;
	       HuC6280_TimerWrite(A, V);
	       break;

  case 4: PCEIODataBuffer = V; INPUT_Write(A, V); break;
  case 5: PCEIODataBuffer = V; HuC6280_IRQStatusWrite(A, V); break;
  case 6: 
	  if(!PCE_IsCD)
	   break;

	  if((A & 0x1E00) == 0x1A00)
	  {
	   if(arcade_card)
	    arcade_card->Write(A & 0x1FFF, V);
	  }
	  else
	  {
	   PCECD_Write(HuCPU.timestamp * 3, A, V);
	  }
	  break;

  case 7: break;	// Expansion.
 }
}

static void PCECDIRQCB(bool asserted)
{
 if(asserted)
  HuC6280_IRQBegin(MDFN_IQIRQ2);
 else
  HuC6280_IRQEnd(MDFN_IQIRQ2);
}

bool PCE_InitCD(void)
{
 PCECD_Settings cd_settings;
 memset(&cd_settings, 0, sizeof(PCECD_Settings));

 cd_settings.CDDA_Volume = (double)MDFN_GetSettingUI("pce_fast.cddavolume") / 100;
 cd_settings.CD_Speed = MDFN_GetSettingUI("pce_fast.cdspeed");

 cd_settings.ADPCM_Volume = (double)MDFN_GetSettingUI("pce_fast.adpcmvolume") / 100;
 cd_settings.ADPCM_LPF = MDFN_GetSettingB("pce_fast.adpcmlp");

 if(cd_settings.CDDA_Volume != 1.0)
  MDFN_printf(_("CD-DA Volume: %d%%\n"), (int)(100 * cd_settings.CDDA_Volume));

 if(cd_settings.ADPCM_Volume != 1.0)
  MDFN_printf(_("ADPCM Volume: %d%%\n"), (int)(100 * cd_settings.ADPCM_Volume));

 return(PCECD_Init(&cd_settings, PCECDIRQCB, PCE_MASTER_CLOCK, pce_overclocked, &sbuf[0], &sbuf[1]));
}


static int LoadCommon(void);
static void LoadCommonPre(void);

static bool TestMagic(const char *name, MDFNFILE *fp)
{
 if(memcmp(GET_FDATA_PTR(fp), "HESM", 4) && strcasecmp(GET_FEXTS_PTR(fp), "pce") && strcasecmp(GET_FEXTS_PTR(fp), "sgx"))
  return(FALSE);

 return(TRUE);
}

static int Load(const char *name, MDFNFILE *fp)
{
 uint32 headerlen = 0;
 uint32 r_size;

 IsHES = 0;
 IsSGX = 0;

 if(!memcmp(GET_FDATA_PTR(fp), "HESM", 4))
  IsHES = 1;

 LoadCommonPre();

 if(!IsHES)
 {
  if(GET_FSIZE_PTR(fp) & 0x200) // 512 byte header!
   headerlen = 512;
 }

 r_size = GET_FSIZE_PTR(fp) - headerlen;
 if(r_size > 4096 * 1024) r_size = 4096 * 1024;

 for(int x = 0; x < 0x100; x++)
 {
  PCERead[x] = PCEBusRead;
  PCEWrite[x] = PCENullWrite;
 }

 uint32 crc = crc32(0, GET_FDATA_PTR(fp) + headerlen, GET_FSIZE_PTR(fp) - headerlen);

  HuCLoad(GET_FDATA_PTR(fp) + headerlen, GET_FSIZE_PTR(fp) - headerlen, crc);

 if(!strcasecmp(GET_FEXTS_PTR(fp), "sgx"))
  IsSGX = TRUE;

 if(GET_FSIZE_PTR(fp) >= 8192 && !memcmp(GET_FDATA_PTR(fp) + headerlen, "DARIUS Version 1.11b", strlen("DARIUS VERSION 1.11b")))
 {
  MDFN_printf("SuperGfx:  Darius Plus\n");
  IsSGX = 1;
 }

 if(crc == 0x4c2126b0)
 {
  MDFN_printf("SuperGfx:  Aldynes\n");
  IsSGX = 1;
 }

 if(crc == 0x8c4588e2)
 {
  MDFN_printf("SuperGfx:  1941 - Counter Attack\n");
  IsSGX = 1;
 }
 if(crc == 0x1f041166)
 {
  MDFN_printf("SuperGfx:  Madouou Granzort\n");
  IsSGX = 1;
 }
 if(crc == 0xb486a8ed)
 {
  MDFN_printf("SuperGfx:  Daimakaimura\n");
  IsSGX = 1;
 }
 if(crc == 0x3b13af61)
 {
  MDFN_printf("SuperGfx:  Battle Ace\n");
  IsSGX = 1;
 }

 return(LoadCommon());
}

static void LoadCommonPre(void)
{
 // FIXME:  Make these globals less global!
 pce_overclocked = MDFN_GetSettingUI("pce_fast.ocmultiplier");
 PCE_ACEnabled = MDFN_GetSettingB("pce_fast.arcadecard");

 if(pce_overclocked > 1)
  MDFN_printf(_("CPU overclock: %dx\n"), pce_overclocked);

 if(MDFN_GetSettingUI("pce_fast.cdspeed") > 1)
  MDFN_printf(_("CD-ROM speed:  %ux\n"), (unsigned int)MDFN_GetSettingUI("pce_fast.cdspeed"));

 memset(HuCPUFastMap, 0, sizeof(HuCPUFastMap));
 for(int x = 0; x < 0x100; x++)
 {
  PCERead[x] = PCEBusRead;
  PCEWrite[x] = PCENullWrite;
 }

 MDFNMP_Init(1024, (1 << 21) / 1024);
}

static int LoadCommon(void)
{ 
 IsSGX |= MDFN_GetSettingB("pce_fast.forcesgx") ? 1 : 0;

 if(IsHES)
  IsSGX = 1;
 // Don't modify IsSGX past this point.
 
 VDC_Init(IsSGX);

 if(IsSGX)
 {
  MDFN_printf("SuperGrafx Emulation Enabled.\n");
  PCERead[0xF8] = PCERead[0xF9] = PCERead[0xFA] = PCERead[0xFB] = BaseRAMReadSGX;
  PCEWrite[0xF8] = PCEWrite[0xF9] = PCEWrite[0xFA] = PCEWrite[0xFB] = BaseRAMWriteSGX;

  for(int x = 0xf8; x < 0xfb; x++)
   HuCPUFastMap[x] = BaseRAM - 0xf8 * 8192;

  PCERead[0xFF] = IOReadSGX;
 }
 else
 {
  PCERead[0xF8] = BaseRAMRead;
  PCERead[0xF9] = PCERead[0xFA] = PCERead[0xFB] = BaseRAMRead_Mirrored;

  PCEWrite[0xF8] = BaseRAMWrite;
  PCEWrite[0xF9] = PCEWrite[0xFA] = PCEWrite[0xFB] = BaseRAMWrite_Mirrored;

  for(int x = 0xf8; x < 0xfb; x++)
   HuCPUFastMap[x] = BaseRAM - x * 8192;

  PCERead[0xFF] = IORead;
 }

 MDFNMP_AddRAM(IsSGX ? 32768 : 8192, 0xf8 * 8192, BaseRAM);

 PCEWrite[0xFF] = IOWrite;

 HuC6280_Init();

 psg = new PCEFast_PSG(&sbuf[0], &sbuf[1]);

 psg->SetVolume(1.0);

 if(PCE_IsCD)
 {
  unsigned int cdpsgvolume = MDFN_GetSettingUI("pce_fast.cdpsgvolume");

  if(cdpsgvolume != 100)
  {
   MDFN_printf(_("CD PSG Volume: %d%%\n"), cdpsgvolume);
  }

  psg->SetVolume(0.678 * cdpsgvolume / 100);

 }

 PCEINPUT_Init();

 PCE_Power();

 MDFNGameInfo->LayerNames = IsSGX ? "BG0\0SPR0\0BG1\0SPR1\0" : "Background\0Sprites\0";
 MDFNGameInfo->fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 * 256);

 // Clean this up:
 if(!MDFN_GetSettingB("pce_fast.correct_aspect"))
  MDFNGameInfo->fb_width = 682;

 if(!IsHES)
 {
  MDFNGameInfo->nominal_width = MDFN_GetSettingB("pce_fast.correct_aspect") ? 288 : 341;
  MDFNGameInfo->nominal_height = MDFN_GetSettingUI("pce_fast.slend") - MDFN_GetSettingUI("pce_fast.slstart") + 1;

  MDFNGameInfo->lcm_width = MDFN_GetSettingB("pce_fast.correct_aspect") ? 1024 : 341;
  MDFNGameInfo->lcm_height = MDFNGameInfo->nominal_height;
 }

 return(1);
}

static bool TestMagicCD(std::vector<CDIF *> *CDInterfaces)
{
 static const uint8 magic_test[0x20] = { 0x82, 0xB1, 0x82, 0xCC, 0x83, 0x76, 0x83, 0x8D, 0x83, 0x4F, 0x83, 0x89, 0x83, 0x80, 0x82, 0xCC,
                                         0x92, 0x98, 0x8D, 0xEC, 0x8C, 0xA0, 0x82, 0xCD, 0x8A, 0x94, 0x8E, 0xAE, 0x89, 0xEF, 0x8E, 0xD0
                                       };
 uint8 sector_buffer[2048];
 CDIF *cdiface = (*CDInterfaces)[0];
 CDUtility::TOC toc;
 bool ret = FALSE;

 memset(sector_buffer, 0, sizeof(sector_buffer));

 cdiface->ReadTOC(&toc);

 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
   cdiface->ReadSector(sector_buffer, toc.tracks[track].lba, 1);

   if(!memcmp((char*)sector_buffer, (char *)magic_test, 0x20))
    ret = TRUE;

   // PCE CD BIOS apparently only looks at the first data track.
   break;
  }
 }


 // If it's a PC-FX CD(Battle Heat), return false.
 // This is very kludgy.
 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
   cdiface->ReadSector(sector_buffer, toc.tracks[track].lba, 1);
   if(!strncmp("PC-FX:Hu_CD-ROM", (char*)sector_buffer, strlen("PC-FX:Hu_CD-ROM")))
   {
    return(false);
   }
  }
 }


 // Now, test for the Games Express CD games.  The GE BIOS seems to always look at sector 0x10, but only if the first track is a
 // data track.
 if(toc.first_track == 1 && (toc.tracks[1].control & 0x4))
 {
  if(cdiface->ReadSector(sector_buffer, 0x10, 1))
  {
   if(!memcmp((char *)sector_buffer + 0x8, "HACKER CD ROM SYSTEM", 0x14))
   {
    ret = TRUE;
   }
  }
 }

 return(ret);
}

static int LoadCD(std::vector<CDIF *> *CDInterfaces)
{
 std::string bios_path = MDFN_MakeFName(MDFNMKF_FIRMWARE, 0, MDFN_GetSettingS("pce_fast.cdbios").c_str() );

 IsHES = 0;
 IsSGX = 0;

 LoadCommonPre();

 if(!HuCLoadCD(bios_path.c_str()))
  return(0);

 PCECD_Drive_SetDisc(true, NULL, true);
 PCECD_Drive_SetDisc(false, (*CDInterfaces)[0], true);

 return(LoadCommon());
}


static void CloseGame(void)
{
 {
  HuCClose();
 }
 VDC_Close();
 if(psg)
 {
  delete psg;
  psg = NULL;
 }
}

static void Emulate(EmulateSpecStruct *espec)
{
 INPUT_Frame();

 MDFNMP_ApplyPeriodicCheats();

 #if 0
 {
  static bool firstcat = true;
  MDFN_PixelFormat nf;

  nf.bpp = 16;
  nf.colorspace = MDFN_COLORSPACE_RGB;
  nf.Rshift = 11;
  nf.Gshift = 5;
  nf.Bshift = 0;
  nf.Ashift = 16;
  
  nf.Rprec = 5;
  nf.Gprec = 6;
  nf.Bprec = 5;
  nf.Aprec = 8;

  espec->surface->SetFormat(nf, false);
  espec->VideoFormatChanged = firstcat;
  firstcat = false;
 }
 #endif

#if 0
 static bool firstcat = true;

 MDFN_PixelFormat tmp_pf;

 tmp_pf.Rshift = 0;
 tmp_pf.Gshift = 0;
 tmp_pf.Bshift = 0;
 tmp_pf.Ashift = 8;

 tmp_pf.Rprec = 0;
 tmp_pf.Gprec = 0;
 tmp_pf.Bprec = 0;
 tmp_pf.Aprec = 0;

 tmp_pf.bpp = 8;
 tmp_pf.colorspace = MDFN_COLORSPACE_RGB;

 espec->surface->SetFormat(tmp_pf, false);
 espec->VideoFormatChanged = firstcat;
 firstcat = false;
#endif

 if(espec->VideoFormatChanged)
  VDC_SetPixelFormat(espec->surface->format); //.Rshift, espec->surface->format.Gshift, espec->surface->format.Bshift);

 if(espec->SoundFormatChanged)
 {
  for(int y = 0; y < 2; y++)
  {
   sbuf[y].set_sample_rate(espec->SoundRate ? espec->SoundRate : 44100, 50);
   sbuf[y].clock_rate((long)(PCE_MASTER_CLOCK / 3));
   sbuf[y].bass_freq(10);
  }
 }
 VDC_RunFrame(espec, IsHES);

 if(PCE_IsCD)
 {
  PCECD_Run(HuCPU.timestamp * 3);
 }

 psg->EndFrame(HuCPU.timestamp / pce_overclocked);

 if(espec->SoundBuf)
 {
  for(int y = 0; y < 2; y++)
  {
   sbuf[y].end_frame(HuCPU.timestamp / pce_overclocked);
   espec->SoundBufSize = sbuf[y].read_samples(espec->SoundBuf + y, espec->SoundBufMaxSize, 1);
  }
 }

 espec->MasterCycles = HuCPU.timestamp * 3;

 INPUT_FixTS();

 HuC6280_ResetTS();

 if(PCE_IsCD)
  PCECD_ResetTS();
}

static int StateAction(StateMem *sm, int load, int data_only)
{
 SFORMAT StateRegs[] =
 {
  SFARRAY(BaseRAM, IsSGX? 32768 : 8192),
  SFVAR(PCEIODataBuffer),
  SFEND
 };

 //for(int i = 8192; i < 32768; i++)
 // if(BaseRAM[i] != 0xFF)
 //  printf("%d %02x\n", i, BaseRAM[i]);

 int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN");

 ret &= HuC6280_StateAction(sm, load, data_only);
 ret &= VDC_StateAction(sm, load, data_only);
 ret &= psg->StateAction(sm, load, data_only);
 ret &= INPUT_StateAction(sm, load, data_only);
 ret &= HuC_StateAction(sm, load, data_only);

 if(load)
 {

 }

 return(ret);
}

void PCE_Power(void)
{
 memset(BaseRAM, 0x00, sizeof(BaseRAM));

 if(!IsSGX)
  for(int i = 8192; i < 32768; i++)
   BaseRAM[i] = 0xFF;

 PCEIODataBuffer = 0xFF;

 HuC6280_Power();
 VDC_Power();
 psg->Power(HuCPU.timestamp / pce_overclocked);
 HuC_Power();

 if(PCE_IsCD)
 {
  PCECD_Power(HuCPU.timestamp * 3);
 }
}

static void DoSimpleCommand(int cmd)
{
 switch(cmd)
 {
  case MDFN_MSC_RESET: PCE_Power(); break;
  case MDFN_MSC_POWER: PCE_Power(); break;
 }
}

static MDFNSetting PCESettings[] = 
{
  { "pce_fast.correct_aspect", MDFNSF_CAT_VIDEO, gettext_noop("Correct the aspect ratio."), NULL, MDFNST_BOOL, "1" },
  { "pce_fast.slstart", MDFNSF_NOFLAGS, gettext_noop("First rendered scanline."), NULL, MDFNST_UINT, "4", "0", "239" },
  { "pce_fast.slend", MDFNSF_NOFLAGS, gettext_noop("Last rendered scanline."), NULL, MDFNST_UINT, "235", "0", "239" },
  { "pce_fast.mouse_sensitivity", MDFNSF_NOFLAGS, gettext_noop("Mouse sensitivity."), NULL, MDFNST_FLOAT, "0.50", NULL, NULL, NULL, PCEINPUT_SettingChanged },
  { "pce_fast.disable_softreset", MDFNSF_NOFLAGS, gettext_noop("If set, when RUN+SEL are pressed simultaneously, disable both buttons temporarily."), NULL, MDFNST_BOOL, "0", NULL, NULL, NULL, PCEINPUT_SettingChanged },
  { "pce_fast.forcesgx", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, gettext_noop("Force SuperGrafx emulation."), NULL, MDFNST_BOOL, "0" },
  { "pce_fast.arcadecard", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, gettext_noop("Enable Arcade Card emulation."), NULL, MDFNST_BOOL, "1" },
  { "pce_fast.ocmultiplier", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, gettext_noop("CPU overclock multiplier."), NULL, MDFNST_UINT, "1", "1", "100"},
  { "pce_fast.cdspeed", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, gettext_noop("CD-ROM data transfer speed multiplier."), NULL, MDFNST_UINT, "1", "1", "100" },
  { "pce_fast.nospritelimit", MDFNSF_NOFLAGS, gettext_noop("Remove 16-sprites-per-scanline hardware limit."), NULL, MDFNST_BOOL, "0" },

  { "pce_fast.cdbios", MDFNSF_EMU_STATE, gettext_noop("Path to the CD BIOS"), NULL, MDFNST_STRING, "syscard3.pce" },

  { "pce_fast.adpcmlp", MDFNSF_NOFLAGS, gettext_noop("Enable dynamic ADPCM lowpass filter."), NULL, MDFNST_BOOL, "0" },
  { "pce_fast.cdpsgvolume", MDFNSF_NOFLAGS, gettext_noop("PSG volume when playing a CD game."), NULL, MDFNST_UINT, "100", "0", "200" },
  { "pce_fast.cddavolume", MDFNSF_NOFLAGS, gettext_noop("CD-DA volume."), NULL, MDFNST_UINT, "100", "0", "200" },
  { "pce_fast.adpcmvolume", MDFNSF_NOFLAGS, gettext_noop("ADPCM volume."), NULL, MDFNST_UINT, "100", "0", "200" },
  { NULL }
};

static uint8 MemRead(uint32 addr)
{
 return(PCERead[(addr / 8192) & 0xFF](addr));
}

static const FileExtensionSpecStruct KnownExtensions[] =
{
 { ".pce", gettext_noop("PC Engine ROM Image") },
 { ".hes", gettext_noop("PC Engine Music Rip") },
 { ".sgx", gettext_noop("SuperGrafx ROM Image") },
 { NULL, NULL }
};

};

MDFNGI EmulatedPCE_Fast =
{
 "pce_fast",
 "PC Engine (CD)/TurboGrafx 16 (CD)/SuperGrafx",
 KnownExtensions,
 MODPRIO_INTERNAL_LOW,
 NULL,
 &PCEInputInfo,
 Load,
 TestMagic,
 LoadCD,
 TestMagicCD,
 CloseGame,
 VDC_SetLayerEnableMask,
 NULL,
 NULL,
 NULL,
 NULL,
 NULL,
 MemRead,
 NULL,
 false,
 StateAction,
 Emulate,
 PCEINPUT_SetInput,
 DoSimpleCommand,
 PCESettings,
 MDFN_MASTERCLOCK_FIXED(PCE_MASTER_CLOCK),
 0,

 true,  // Multires possible?

 0,   // lcm_width
 0,   // lcm_height           
 NULL,  // Dummy

 288,   // Nominal width
 232,   // Nominal height

 512,	// Framebuffer width
 242,	// Framebuffer height

 2,     // Number of output sound channels
};



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

static bool overscan;
static double last_sound_rate;
static MDFN_PixelFormat last_pixel_format;

static MDFN_Surface *surf;

static bool failed_init;

std::string retro_base_directory;
std::string retro_base_name;
std::string retro_save_directory;

static void set_basename(const char *path)
{
   const char *base = strrchr(path, '/');
   if (!base)
      base = strrchr(path, '\\');

   if (base)
      retro_base_name = base + 1;
   else
      retro_base_name = path;

   retro_base_name = retro_base_name.substr(0, retro_base_name.find_last_of('.'));
}

#include "mednafen/pce_fast/pcecd.h"

#define MEDNAFEN_CORE_NAME_MODULE "pce_fast"
#define MEDNAFEN_CORE_NAME "Mednafen PCE Fast"
#define MEDNAFEN_CORE_VERSION "v0.9.33.3"
#define MEDNAFEN_CORE_EXTENSIONS "pce|sgx|cue|ccd"
#define MEDNAFEN_CORE_TIMING_FPS 59.82
#define MEDNAFEN_CORE_GEOMETRY_BASE_W (game->nominal_width)
#define MEDNAFEN_CORE_GEOMETRY_BASE_H (game->nominal_height)
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 512
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 242
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (4.0 / 3.0)
#define FB_WIDTH 512
#define FB_HEIGHT 242

#define FB_MAX_HEIGHT FB_HEIGHT

// Wastes a little space for NTSC PSX, but better than dynamically allocating.
const char *mednafen_core_str = MEDNAFEN_CORE_NAME;

static void check_system_specs(void)
{
   unsigned level = 0;
   environ_cb(RETRO_ENVIRONMENT_SET_PERFORMANCE_LEVEL, &level);
}

void retro_init(void)
{
   struct retro_log_callback log;
   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else 
      log_cb = NULL;

   MDFNI_InitializeModule();

   const char *dir = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
   {
      retro_base_directory = dir;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      size_t last = retro_base_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_base_directory = retro_base_directory.substr(0, last);

      MDFNI_Initialize(retro_base_directory.c_str());
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "System directory is not defined. Fallback on using same dir as ROM for system directory later ...\n");
      failed_init = true;
   }
   
   if (environ_cb(RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY, &dir) && dir)
   {
	  // If save directory is defined use it, otherwise use system directory
      retro_save_directory = *dir ? dir : retro_base_directory;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      size_t last = retro_save_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_save_directory = retro_save_directory.substr(0, last);      
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "Save directory is not defined. Fallback on using SYSTEM directory ...\n");
	  retro_save_directory = retro_base_directory;
   }      

#if defined(WANT_16BPP) && defined(FRONTEND_SUPPORTS_RGB565)
   enum retro_pixel_format rgb565 = RETRO_PIXEL_FORMAT_RGB565;
   if (environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb565) && log_cb)
      log_cb(RETRO_LOG_INFO, "Frontend supports RGB565 - will use that instead of XRGB1555.\n");
#endif

   if (environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb))
      perf_get_cpu_features_cb = perf_cb.get_cpu_features;
   else
      perf_get_cpu_features_cb = NULL;

   check_system_specs();
}

void retro_reset(void)
{
   game->DoSimpleCommand(MDFN_MSC_RESET);
}

bool retro_load_game_special(unsigned, const struct retro_game_info *, size_t)
{
   return false;
}

static void set_volume (uint32_t *ptr, unsigned number)
{
   switch(number)
   {
      default:
         *ptr = number;
         break;
   }
}

static void check_variables(void)
{
   struct retro_variable var = {0};

   var.key = "pce_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_nospritelimit = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_nospritelimit = 1;
   }

   var.key = "pce_keepaspect";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      if (strcmp(var.value, "disabled") == 0)
      {
         setting_pce_keepaspect = 0;
         game->fb_width = 512;
         game->nominal_width = 341;
         game->lcm_width = 341;
      }
      else if (strcmp(var.value, "enabled") == 0)
      {
         setting_pce_keepaspect = 1;
         game->fb_width = 682;
         game->nominal_width = 288;
         game->lcm_width = 1024;
      }
   }

   bool do_cdsettings = false;
   var.key = "pce_cddavolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      do_cdsettings = true;
      setting_pce_fast_cddavolume = atoi(var.value);
   }

   var.key = "pce_adpcmvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      do_cdsettings = true;
      setting_pce_fast_adpcmvolume = atoi(var.value);
   }

   var.key = "pce_cdpsgvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      do_cdsettings = true;
      setting_pce_fast_cdpsgvolume = atoi(var.value);
   }

   var.key = "pce_cdspeed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
   {
      do_cdsettings = true;
      setting_pce_fast_cdspeed = atoi(var.value);
   }

   if (do_cdsettings)
   {
      PCE_Fast::PCECD_Settings settings = {0};
      settings.CDDA_Volume = (double)setting_pce_fast_cddavolume / 100;
      settings.CD_Speed = setting_pce_fast_cdspeed;
      settings.ADPCM_Volume = (double)setting_pce_fast_adpcmvolume / 100;

      if (PCECD_SetSettings(&settings) && log_cb)
         log_cb(RETRO_LOG_INFO, "PCE CD Audio settings changed.\n");
   }
}

#define MAX_PLAYERS 5
#define MAX_BUTTONS 13
static uint8_t input_buf[MAX_PLAYERS][2] = {0};

bool retro_load_game(const struct retro_game_info *info)
{
   if (failed_init)
      return false;

#ifdef WANT_32BPP
   enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
   if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt))
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Pixel format XRGB8888 not supported by platform, cannot use %s.\n", MEDNAFEN_CORE_NAME);
      return false;
   }
#endif

   overscan = false;
   environ_cb(RETRO_ENVIRONMENT_GET_OVERSCAN, &overscan);

   set_basename(info->path);

   game = MDFNI_LoadGame(MEDNAFEN_CORE_NAME_MODULE, info->path);
   if (!game)
      return false;

   MDFN_PixelFormat pix_fmt(MDFN_COLORSPACE_RGB, 16, 8, 0, 24);
   memset(&last_pixel_format, 0, sizeof(MDFN_PixelFormat));
   
   surf = new MDFN_Surface(NULL, FB_WIDTH, FB_HEIGHT, FB_WIDTH, pix_fmt);

   check_variables();

   // Possible endian bug ...
   for (unsigned i = 0; i < MAX_PLAYERS; i++)
      game->SetInput(i, "gamepad", &input_buf[i][0]);

   return game;
}

void retro_unload_game()
{
   if (!game)
      return;

   MDFNI_CloseGame();
}



// Hardcoded for PSX. No reason to parse lots of structures ...
// See mednafen/psx/input/gamepad.cpp
static void update_input(void)
{
   MDFNGI *currgame = (MDFNGI*)game;

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
      RETRO_DEVICE_ID_JOYPAD_L2
   };

   for (unsigned j = 0; j < MAX_PLAYERS; j++)
   {
      uint16_t input_state = 0;
      for (unsigned i = 0; i < MAX_BUTTONS; i++)
         input_state |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]) ? (1 << i) : 0;

      // Input data must be little endian.
      input_buf[j][0] = (input_state >> 0) & 0xff;
      input_buf[j][1] = (input_state >> 8) & 0xff;
   }
}

static uint64_t video_frames, audio_frames;

void retro_run(void)
{
   MDFNGI *curgame = (MDFNGI*)game;

   input_poll_cb();

   update_input();

   static int16_t sound_buf[0x10000];
   static MDFN_Rect rects[FB_MAX_HEIGHT];
   rects[0].w = ~0;

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

   if (memcmp(&last_pixel_format, &spec.surface->format, sizeof(MDFN_PixelFormat)))
   {
      spec.VideoFormatChanged = TRUE;

      last_pixel_format = spec.surface->format;
   }

   if (spec.SoundRate != last_sound_rate)
   {
      spec.SoundFormatChanged = true;
      last_sound_rate = spec.SoundRate;
   }

   curgame->Emulate(&spec);

   int16 *const SoundBuf = spec.SoundBuf + spec.SoundBufSizeALMS * curgame->soundchan;
   int32 SoundBufSize = spec.SoundBufSize - spec.SoundBufSizeALMS;
   const int32 SoundBufMaxSize = spec.SoundBufMaxSize - spec.SoundBufSizeALMS;

   spec.SoundBufSize = spec.SoundBufSizeALMS + SoundBufSize;

   unsigned width  = spec.DisplayRect.w;
   unsigned height = spec.DisplayRect.h;

#if defined(WANT_32BPP)
   const uint32_t *pix = surf->pixels;
   video_cb(pix, width, height, FB_WIDTH << 2);
#elif defined(WANT_16BPP)
   const uint16_t *pix = surf->pixels16;
   video_cb(pix, width, height, FB_WIDTH << 1);
#endif

   video_frames++;
   audio_frames += spec.SoundBufSize;

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
      check_variables();
}

void retro_get_system_info(struct retro_system_info *info)
{
   memset(info, 0, sizeof(*info));
   info->library_name     = MEDNAFEN_CORE_NAME;
   info->library_version  = MEDNAFEN_CORE_VERSION;
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
   delete surf;
   surf = NULL;

   if (log_cb)
   {
      log_cb(RETRO_LOG_INFO, "[%s]: Samples / Frame: %.5f\n",
            mednafen_core_str, (double)audio_frames / video_frames);
      log_cb(RETRO_LOG_INFO, "[%s]: Estimated FPS: %.5f\n",
            mednafen_core_str, (double)video_frames * 44100 / audio_frames);
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
   MDFNGI *currgame = (MDFNGI*)game;

   if (!currgame)
      return;

   switch(device)
   {
      case RETRO_DEVICE_JOYPAD:
         if (currgame->SetInput)
            currgame->SetInput(in_port, "gamepad", &input_buf[in_port][0]);
         break;
      case RETRO_DEVICE_MOUSE:
         if (currgame->SetInput)
            currgame->SetInput(in_port, "mouse", &input_buf[in_port][0]);
         break;
   }
}

void retro_set_environment(retro_environment_t cb)
{
   environ_cb = cb;

   static const struct retro_variable vars[] = {
      { "pce_nospritelimit", "No Sprite Limit; disabled|enabled" },
      { "pce_keepaspect", "Keep Aspect; enabled|disabled" },
      { "pce_cddavolume", "(CD) CDDA Volume; 0|10|20|30|40|50|60|70|80|90|100" },
      { "pce_adpcmvolume", "(CD) ADPCM Volume; 0|10|20|30|40|50|60|70|80|90|100" },
      { "pce_cdpsgvolume", "(CD) CD PSG Volume; 0|10|20|30|40|50|60|70|80|90|100" },
      { "pce_cdspeed", "(CD) CD Speed; 1|2|4|8" },
      { NULL, NULL },
   };

   static const struct retro_controller_description pads[] = {
      { "PCE Joypad", RETRO_DEVICE_JOYPAD },
      { "Mouse", RETRO_DEVICE_MOUSE },
   };

   static const struct retro_controller_info ports[] = {
      { pads, 2 },
      { pads, 2 },
      { 0 },
   };

   cb(RETRO_ENVIRONMENT_SET_VARIABLES, (void*)vars);
   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);
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
   MDFNGI *curgame = (MDFNGI*)game;
   //if (serialize_size)
   //   return serialize_size;

   if (!curgame->StateAction)
   {
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "[mednafen]: Module %s doesn't support save states.\n", curgame->shortname);
      return 0;
   }

   StateMem st;
   memset(&st, 0, sizeof(st));

   if (!MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL))
   {
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "[mednafen]: Module %s doesn't support save states.\n", curgame->shortname);
      return 0;
   }

   free(st.data);
   return serialize_size = st.len;
}

bool retro_serialize(void *data, size_t size)
{
   StateMem st;
   memset(&st, 0, sizeof(st));
   st.data     = (uint8_t*)data;
   st.malloced = size;

   return MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL);
}

bool retro_unserialize(const void *data, size_t size)
{
   StateMem st;
   memset(&st, 0, sizeof(st));
   st.data = (uint8_t*)data;
   st.len  = size;

   return MDFNSS_LoadSM(&st, 0, 0);
}

void *retro_get_memory_data(unsigned)
{
   return NULL;
}

size_t retro_get_memory_size(unsigned)
{
   return 0;
}

void retro_cheat_reset(void)
{}

void retro_cheat_set(unsigned, bool, const char *)
{}

MDFN_Thread *MDFND_CreateThread(int (*fn)(void *), void *data)
{
   return (MDFN_Thread*)sthread_create((void (*)(void*))fn, data);
}

void MDFND_WaitThread(MDFN_Thread *thr, int *val)
{
   sthread_join((sthread_t*)thr);

   if (val)
   {
      *val = 0;
      fprintf(stderr, "WaitThread relies on return value.\n");
   }
}

void MDFND_KillThread(MDFN_Thread *)
{
   fprintf(stderr, "Killing a thread is a BAD IDEA!\n");
}

MDFN_Mutex *MDFND_CreateMutex()
{
   return (MDFN_Mutex*)slock_new();
}

void MDFND_DestroyMutex(MDFN_Mutex *lock)
{
   slock_free((slock_t*)lock);
}

int MDFND_LockMutex(MDFN_Mutex *lock)
{
   slock_lock((slock_t*)lock);
   return 0;
}

int MDFND_UnlockMutex(MDFN_Mutex *lock)
{
   slock_unlock((slock_t*)lock);
   return 0;
}

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
      case MDFNMKF_SAV:
         ret = retro_save_directory +slash + retro_base_name +
            std::string(".") +
#ifndef _XBOX
	    md5_context::asciistr(MDFNGameInfo->MD5, 0) + std::string(".") +
#endif
            std::string(cd1);
         break;
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

void MDFND_DispMessage(unsigned char *str)
{
   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s\n", str);
}

void MDFND_Message(const char *str)
{
   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s\n", str);
}

void MDFND_MidSync(const EmulateSpecStruct *)
{}

void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y)
{
 //MDFND_MidLineUpdate(espec, y);
}

void MDFND_PrintError(const char* err)
{
   if (log_cb)
      log_cb(RETRO_LOG_ERROR, "%s\n", err);
}

void MDFND_Sleep(unsigned int time)
{
   retro_sleep(time);
}
