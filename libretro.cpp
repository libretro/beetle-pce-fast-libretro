#include <stdarg.h>
#include "mednafen.h"
#include "libretro.h"

#include "pce.h"
#include "vdc.h"
#include "psg.h"
#include "input.h"
#include "pcecd.h"
#include "pcecd_drive.h"
#include "arcade_card.h"
#include "cdrom/cdromif.h"
#include "cdrom/CDUtility.h"

#ifdef _MSC_VER
#include "mednafen/msvc_compat.h"
#endif

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

static uint8 MemRead(uint32 addr)
{
   return (PCERead[(addr / 8192) & 0xFF](addr));
}

static const FileExtensionSpecStruct KnownExtensions[] =
{
   { ".pce", ("PC Engine ROM Image") },
   { NULL, NULL }
};

static const uint8 BRAM_Init_String[8] = { 'H', 'U', 'B', 'M', 0x00, 0x88, 0x10, 0x80 }; //"HUBM\x00\x88\x10\x80";
static uint8* HuCROM = NULL;
static bool IsPopulous;
bool PCE_IsCD;
uint8 SaveRAM[2048];

static Blip_Buffer sbuf[2];

bool PCE_ACEnabled;

int pce_overclocked;

// Statically allocated for speed...or something.
uint8 ROMSpace[0x88 * 8192 + 8192]; // + 8192 for PC-as-pointer safety padding

uint8 BaseRAM[32768 +
              8192]; // 8KB for PCE, 32KB for Super Grafx // + 8192 for PC-as-pointer safety padding

uint8 PCEIODataBuffer;
readfunc PCERead[0x100];
writefunc PCEWrite[0x100];

static DECLFR(PCEBusRead)
{
   //printf("BUS Read: %02x %04x\n", A >> 13, A);
   return (0xFF);
}

static DECLFW(PCENullWrite)
{
   //printf("Null Write: %02x, %08x %02x\n", A >> 13, A, V);
}

static DECLFR(BaseRAMRead)
{
   return ((BaseRAM - (0xF8 * 8192))[A]);
}

static DECLFR(BaseRAMRead_Mirrored)
{
   return (BaseRAM[A & 0x1FFF]);
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
   A &= 0x1FFF;

#if defined(__GNUC__) || defined(__clang__) || defined(__ICC) || defined(__INTEL_COMPILER)
   const void* const IOReadHandlers[0x20] =
   {
      &&VDC_00, &&VDC_01, &&VDC_02, &&VDC_03,
      &&VCE_00, &&VCE_01, &&VCE_02, &&VCE_03,
      &&PSG_00, &&PSG_01, &&PSG_02, &&PSG_03,
      &&TIMER_00, &&TIMER_01, &&TIMER_02, &&TIMER_03,
      &&INPUT_00, &&INPUT_01, &&INPUT_02, &&INPUT_03,
      &&IRQ_00, &&IRQ_01, &&IRQ_02, &&IRQ_03,
      &&CDROM_00, &&CDROM_01, &&CDROM_02, &&CDROM_03,
      &&EXP_00, &&EXP_01, &&EXP_02, &&EXP_03
   };

   goto* IOReadHandlers[((A & 0x1C00) >> 8) | (A & 0x3)];
   {
#define PCEF_CASEL(label, caseval) label
#else
#define PCEF_CASEL(label, caseval) case (caseval)

   switch (((A & 0x1C00) >> 8) | (A & 0x3))
   {
#endif
      //
      //
      //


      PCEF_CASEL(VDC_00, 0x00):
         HuC6280_StealCycle();
      return (VDC_Read(0, FALSE));

      PCEF_CASEL(VDC_01, 0x01):
         HuC6280_StealCycle();
      return (VDC_Read(1, FALSE));

      PCEF_CASEL(VDC_02, 0x02):
         HuC6280_StealCycle();
      return (VDC_Read(2, FALSE));

      PCEF_CASEL(VDC_03, 0x03):
         HuC6280_StealCycle();
      return (VDC_Read(3, FALSE));

      PCEF_CASEL(VCE_00, 0x04):
         PCEF_CASEL(VCE_01, 0x05):
         PCEF_CASEL(VCE_02, 0x06):
         PCEF_CASEL(VCE_03, 0x07):
         HuC6280_StealCycle();
      return (VCE_Read(A));

      PCEF_CASEL(PSG_00, 0x08):
         PCEF_CASEL(PSG_01, 0x09):
         PCEF_CASEL(PSG_02, 0x0A):
         PCEF_CASEL(PSG_03, 0x0B):
         if (HuCPU.in_block_move)
            return (0);
      return (PCEIODataBuffer);


      PCEF_CASEL(TIMER_00, 0x0C):
         PCEF_CASEL(TIMER_01, 0x0D):
         PCEF_CASEL(TIMER_02, 0x0E):
         PCEF_CASEL(TIMER_03, 0x0F):
         if (HuCPU.in_block_move)
            return (0);
   {
         uint8 ret = HuC6280_TimerRead(A);
         PCEIODataBuffer = ret;
         return (ret);
      }

      PCEF_CASEL(INPUT_00, 0x10):
         PCEF_CASEL(INPUT_01, 0x11):
         PCEF_CASEL(INPUT_02, 0x12):
         PCEF_CASEL(INPUT_03, 0x13):
         if (HuCPU.in_block_move)
            return (0);
   {
         uint8 ret = INPUT_Read(A);
         PCEIODataBuffer = ret;
         return (ret);
      }

      PCEF_CASEL(IRQ_00, 0x14):
         PCEF_CASEL(IRQ_01, 0x15):
         PCEF_CASEL(IRQ_02, 0x16):
         PCEF_CASEL(IRQ_03, 0x17):
         if (HuCPU.in_block_move)
            return (0);
   {
         uint8 ret = HuC6280_IRQStatusRead(A);
         PCEIODataBuffer = ret;
         return (ret);
      }

      PCEF_CASEL(CDROM_00, 0x18):
         PCEF_CASEL(CDROM_01, 0x19):
         PCEF_CASEL(CDROM_02, 0x1A):
         PCEF_CASEL(CDROM_03, 0x1B):
         if (!PCE_IsCD)
            return (0xFF);

      if ((A & 0x1E00) == 0x1A00)
   {
         if (PCE_ACEnabled)
            return (ArcadeCard_Read(A & 0x1FFF));
         else
            return (0);
      }
      else
         return (PCECD_Read(HuCPU.timestamp * 3, A));

      PCEF_CASEL(EXP_00, 0x1C):
         PCEF_CASEL(EXP_01, 0x1D):
         PCEF_CASEL(EXP_02, 0x1E):
         PCEF_CASEL(EXP_03, 0x1F):
#ifdef HAVE_HES
         if (IsHES)
            return (ReadIBP(A));
#endif
      return (0xFF);

   }
#undef PCEF_CASEL
   //printf("Meow: %08x, %02x:%04x\n", A, A >> 13, A & 0x1FFF);

}

static DECLFW(IOWrite)
{
   A &= 0x1FFF;

   switch (A >> 10)
   {
   case 0:
      HuC6280_StealCycle();
      VDC_Write(A, V);
      break;

   case 1:
      HuC6280_StealCycle();
      VCE_Write(A, V);
      break;

   case 2:
      PCEIODataBuffer = V;
      PSG_Write(HuCPU.timestamp / pce_overclocked, A, V);
      break;

   case 3:
      PCEIODataBuffer = V;
      HuC6280_TimerWrite(A, V);
      break;

   case 4:
      PCEIODataBuffer = V;
      INPUT_Write(A, V);
      break;
   case 5:
      PCEIODataBuffer = V;
      HuC6280_IRQStatusWrite(A, V);
      break;
   case 6:
      if (!PCE_IsCD)
         break;

      if ((A & 0x1E00) == 0x1A00)
      {
         if (PCE_ACEnabled)
            ArcadeCard_Write(A & 0x1FFF, V);
      }
      else
         PCECD_Write(HuCPU.timestamp * 3, A, V);
      break;

   case 7:
      break;  // Expansion.
   }
}

static void PCECDIRQCB(bool asserted)
{
   if (asserted)
      HuC6280_IRQBegin(MDFN_IQIRQ2);
   else
      HuC6280_IRQEnd(MDFN_IQIRQ2);
}


static DECLFW(ACPhysWrite)
{
   ArcadeCard_PhysWrite(A, V);
}

static DECLFR(ACPhysRead)
{
   return (ArcadeCard_PhysRead(A));
}

static DECLFR(SaveRAMRead)
{
   if ((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
      return (SaveRAM[A & 2047]);
   else
      return (0xFF);
}

static DECLFW(SaveRAMWrite)
{
   if ((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
      SaveRAM[A & 2047] = V;
}

static DECLFR(HuCRead)
{
   return ROMSpace[A];
}

static DECLFW(HuCRAMWrite)
{
   ROMSpace[A] = V;
}

static DECLFW(HuCRAMWriteCDSpecial) // Hyper Dyne Special hack
{
   BaseRAM[0x2000 | (A & 0x1FFF)] = V;
   ROMSpace[A] = V;
}

static uint8 HuCSF2Latch = 0;

static DECLFR(HuCSF2Read)
{
   return (HuCROM[(A & 0x7FFFF) + 0x80000 + HuCSF2Latch *
                  0x80000 ]); // | (HuCSF2Latch << 19) ]);
}

static DECLFW(HuCSF2Write)
{
   if ((A & 0x1FFC) == 0x1FF0)
      HuCSF2Latch = (A & 0x3);
}


static uint8 lastchar = 0;

struct retro_perf_callback perf_cb;
retro_log_printf_t log_cb;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;

static bool overscan;
static double last_sound_rate;

static MDFN_Surface surf = {NULL, 0, 0, 0};

char retro_base_directory[PATH_MAX] = "";


bool PCE_InitCD(void)
{
   PCECD_Settings cd_settings;
   memset(&cd_settings, 0, sizeof(PCECD_Settings));

   cd_settings.CDDA_Volume = ((double)setting_pce_fast_cddavolume) / 100.0;
   cd_settings.CD_Speed = setting_pce_fast_cdspeed;

   cd_settings.ADPCM_Volume = (double)(setting_pce_fast_adpcmvolume) / 100.0;

   if (cd_settings.CDDA_Volume != 1.0)
      MDFN_printf(("CD-DA Volume: %d%%\n"), (int)(100 * cd_settings.CDDA_Volume));

   if (cd_settings.ADPCM_Volume != 1.0)
      MDFN_printf(("ADPCM Volume: %d%%\n"), (int)(100 * cd_settings.ADPCM_Volume));

   return (PCECD_Init(&cd_settings, PCECDIRQCB, PCE_MASTER_CLOCK, pce_overclocked,
                      &sbuf[0], &sbuf[1]));
}


static int LoadCommon(void);
static void LoadCommonPre(void);


int HuCLoadCD(const char* bios_path)
{
   FILE* fp = fopen(bios_path, "rb");
   long f_size;

   fseek(fp, 0, SEEK_END);
   f_size = ftell(fp);
   fseek(fp, f_size & 0x200, SEEK_SET);
   f_size &= ~0x200;

   memset(ROMSpace, 0xFF, 0x40000);

   fread(ROMSpace, 1, (f_size > 0x40000) ? 0x40000 : f_size, fp);

   fclose(fp);

   PCE_IsCD = 1;
   PCE_InitCD();

   MDFN_printf(("Arcade Card Emulation:  %s\n"),
               PCE_ACEnabled ? ("Enabled") : ("Disabled"));
   int x;
   for (x = 0; x < 0x40; x++)
   {
      HuCPUFastMap[x] = ROMSpace;
      PCERead[x] = HuCRead;
   }

   for (x = 0x68; x < 0x88; x++)
   {
      HuCPUFastMap[x] = ROMSpace;
      PCERead[x] = HuCRead;
      PCEWrite[x] = HuCRAMWrite;
   }
   PCEWrite[0x80] = HuCRAMWriteCDSpecial;   // Hyper Dyne Special hack
   // MDFNMP_AddRAM(262144, 0x68 * 8192, ROMSpace + 0x68 * 8192);

   if (PCE_ACEnabled)
   {
      ArcadeCard_init();

      for (x = 0x40; x < 0x44; x++)
      {
         HuCPUFastMap[x] = NULL;
         PCERead[x] = ACPhysRead;
         PCEWrite[x] = ACPhysWrite;
      }
   }

   memset(SaveRAM, 0x00, 2048);
   memcpy(SaveRAM, BRAM_Init_String,
          8); // So users don't have to manually intialize the file cabinet
   // in the CD BIOS screen.

   PCEWrite[0xF7] = SaveRAMWrite;
   PCERead[0xF7] = SaveRAMRead;
   // MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
   return (1);
}

int HuC_StateAction(StateMem* sm, int load)
{
   SFORMAT StateRegs[] =
   {
      SFARRAY(ROMSpace + 0x40 * 8192, IsPopulous ? 32768 : 0),
      SFARRAY(SaveRAM, IsPopulous ? 0 : 2048),
      SFARRAY(ROMSpace + 0x68 * 8192, PCE_IsCD ? 262144 : 0),
      SFVAR(HuCSF2Latch),
      SFEND
   };
   int ret = MDFNSS_StateAction(sm, load, StateRegs, "HuC");

   if (load)
      HuCSF2Latch &= 0x3;

   if (PCE_IsCD)
   {
      ret &= PCECD_StateAction(sm, load);

      if (PCE_ACEnabled)
         ret &= ArcadeCard_StateAction(sm, load);
   }
   return (ret);
}

static void Cleanup(void)
{
   if (PCE_IsCD)
      PCECD_Close();

   if (HuCROM)
      MDFN_free(HuCROM);
   HuCROM = NULL;
}


void HuC_Close(void)
{
   Cleanup();
}

void HuC_Power(void)
{
   if (PCE_IsCD)
      memset(ROMSpace + 0x68 * 8192, 0x00, 262144);

   if (PCE_ACEnabled)
      ArcadeCard_Power();
}



static int PCE_Load(const char* path)
{
   FILE* fp = fopen(path, "rb");
   long f_size;
   uint32 headerlen = 0;
   uint32 r_size;

   fseek(fp, 0, SEEK_END);
   f_size = ftell(fp);

   LoadCommonPre();

   {
      if (f_size & 0x200) // 512 byte header!
         headerlen = 512;
   }

   r_size = f_size - headerlen;
   uint32 len =  f_size - headerlen;

   fseek(fp, f_size & 0x200, SEEK_SET);

   uint32 sf2_threshold = 2048 * 1024;
   uint32 sf2_required_size = 2048 * 1024 + 512 * 1024;
   uint32 m_len = (len + 8191) & ~8191;
   bool sf2_mapper = FALSE;

   if (m_len >= sf2_threshold)
   {
      sf2_mapper = TRUE;

      if (m_len != sf2_required_size)
         m_len = sf2_required_size;
   }


   if (r_size > 4096 * 1024) r_size = 4096 * 1024;

   int x;
   for (x = 0; x < 0x100; x++)
   {
      PCERead[x] = PCEBusRead;
      PCEWrite[x] = PCENullWrite;
   }

   if (!(HuCROM = (uint8*)malloc(m_len)))
      return (0);

   memset(HuCROM, 0xFF, m_len);
   fread(HuCROM, 1, ((m_len < len) ? m_len : len), fp);

   fclose(fp);

   MDFN_printf(("ROM:       %dKiB\n"), (len + 1023) / 1024);

   /*************************/

   IsPopulous = 0;
   PCE_IsCD = 0;

   memset(ROMSpace, 0xFF, 0x88 * 8192 + 8192);

   if (m_len == 0x60000)
   {
      memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x20 * 8192);
      memcpy(ROMSpace + 0x20 * 8192, HuCROM, 0x20 * 8192);
      memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
      memcpy(ROMSpace + 0x50 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
      memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
      memcpy(ROMSpace + 0x70 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
   }
   else if (m_len == 0x80000)
   {
      memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x40 * 8192);
      memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
      memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
   }
   else
      memcpy(ROMSpace + 0x00 * 8192, HuCROM,
             (m_len < 1024 * 1024) ? m_len : 1024 * 1024);

   for (x = 0x00; x < 0x80; x++)
   {
      HuCPUFastMap[x] = ROMSpace;
      PCERead[x] = HuCRead;
   }

   if (!memcmp(HuCROM + 0x1F26, "POPULOUS", strlen("POPULOUS")))
   {
      uint8* PopRAM = ROMSpace + 0x40 * 8192;

      memset(PopRAM, 0xFF, 32768);

      IsPopulous = 1;

      MDFN_printf("Populous\n");

      for (x = 0x40; x < 0x44; x++)
      {
         HuCPUFastMap[x] = &PopRAM[(x & 3) * 8192] - x * 8192;
         PCERead[x] = HuCRead;
         PCEWrite[x] = HuCRAMWrite;
      }
      //  MDFNMP_AddRAM(32768, 0x40 * 8192, PopRAM);
   }
   else
   {
      memset(SaveRAM, 0x00, 2048);
      memcpy(SaveRAM, BRAM_Init_String,
             8);    // So users don't have to manually intialize the file cabinet
      // in the CD BIOS screen.
      PCEWrite[0xF7] = SaveRAMWrite;
      PCERead[0xF7] = SaveRAMRead;
      //  MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
   }

   // 0x1A558
   //if(len >= 0x20000 && !memcmp(HuCROM + 0x1A558, "STREET FIGHTER#", strlen("STREET FIGHTER#")))
   if (sf2_mapper)
   {
      for (x = 0x40; x < 0x80; x++)
      {
         // FIXME: PCE_FAST
         HuCPUFastMap[x] =
            NULL; // Make sure our reads go through our read function, and not a table lookup
         PCERead[x] = HuCSF2Read;
      }
      PCEWrite[0] = HuCSF2Write;
      MDFN_printf("Street Fighter 2 Mapper\n");
      HuCSF2Latch = 0;
   }

   return (LoadCommon());
}

static void LoadCommonPre(void)
{
   // FIXME:  Make these globals less global!
   pce_overclocked = 1;
   PCE_ACEnabled = true;

   if (pce_overclocked > 1)
      MDFN_printf(("CPU overclock: %dx\n"), pce_overclocked);

   if (setting_pce_fast_cdspeed > 1)
      MDFN_printf("CD-ROM speed:  %ux\n", setting_pce_fast_cdspeed);

   memset(HuCPUFastMap, 0, sizeof(HuCPUFastMap));
   int x;
   for (x = 0; x < 0x100; x++)
   {
      PCERead[x] = PCEBusRead;
      PCEWrite[x] = PCENullWrite;
   }

   // MDFNMP_Init(1024, (1 << 21) / 1024);
}

static int LoadCommon(void)
{
   VDC_Init(false);

   {
      PCERead[0xF8] = BaseRAMRead;
      PCERead[0xF9] = PCERead[0xFA] = PCERead[0xFB] = BaseRAMRead_Mirrored;

      PCEWrite[0xF8] = BaseRAMWrite;
      PCEWrite[0xF9] = PCEWrite[0xFA] = PCEWrite[0xFB] = BaseRAMWrite_Mirrored;

      int x;
      for (x = 0xf8; x < 0xfb; x++)
         HuCPUFastMap[x] = BaseRAM - x * 8192;

      PCERead[0xFF] = IORead;
   }

   // MDFNMP_AddRAM(8192, 0xf8 * 8192, BaseRAM);

   PCEWrite[0xFF] = IOWrite;

   HuC6280_Init();

   PSG_init(&sbuf[0], &sbuf[1]);

   PSG_SetVolume(1.0);

   if (PCE_IsCD)
   {
      unsigned int cdpsgvolume = setting_pce_fast_cdpsgvolume;

      if (cdpsgvolume != 100)
         MDFN_printf(("CD PSG Volume: %d%%\n"), cdpsgvolume);

      PSG_SetVolume(0.678 * cdpsgvolume / 100);

   }

   PCE_Power();
   MDFNGameInfo.fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 *
                               256);

   // Clean this up:
   if (!setting_pce_keepaspect)
      MDFNGameInfo.fb_width = 682;

   MDFNGameInfo.nominal_width = setting_pce_keepaspect ? 288 : 341;
   MDFNGameInfo.nominal_height = setting_last_scanline - setting_initial_scanline +
                                 1;

   MDFNGameInfo.lcm_width = setting_pce_keepaspect ? 1024 : 341;
   MDFNGameInfo.lcm_height = MDFNGameInfo.nominal_height;

   return (1);
}

static int LoadCD(CDIF* CDInterface)
{
   static char bios_path[PATH_MAX];


   snprintf(bios_path, sizeof(bios_path), "%s%c%s", retro_base_directory,
            SLASH_CHAR, "syscard3.pce");

   LoadCommonPre();

   if (!HuCLoadCD(bios_path))
      return (0);

   PCECD_Drive_SetDisc(true, NULL, true);
   PCECD_Drive_SetDisc(false, CDInterface, true);

   return (LoadCommon());
}

static void Cleanup_PCE(void)
{
   HuC_Close();

   VDC_Close();
}

static void CloseGame(void)
{
   Cleanup_PCE();
}

#ifdef PSP_PROFILER
static int frame_id;
#endif

static void Emulate(EmulateSpecStruct* espec)
{
   INPUT_Frame();

   if (espec->SoundFormatChanged)
   {
      int y;
      for (y = 0; y < 2; y++)
      {
         Blip_Buffer_set_sample_rate(&sbuf[y],
                                     espec->SoundRate ? espec->SoundRate : 44100, 50);
         Blip_Buffer_set_clock_rate(&sbuf[y], (long)(PCE_MASTER_CLOCK / 3));
         Blip_Buffer_bass_freq(&sbuf[y], 10);
      }
   }



   RETRO_PERFORMANCE_INIT(VDC_RunFrame_time);
   RETRO_PERFORMANCE_START(VDC_RunFrame_time);
#if defined(DUMP_FRAME_TIMES) && defined(PERF_TEST)
   retro_perf_tick_t start_ticks = VDC_RunFrame_time.total;
#endif

#ifdef PSP_PROFILER
   if ((frame_id >= PSP_PROFILER_START_FRAME)
         && (frame_id <= PSP_PROFILER_END_FRAME))
      PSPPROF_START;
#endif
   // if (VDC_RunFrame_time.call_cnt == 44)
   //    printf("halt\n");
   VDC_RunFrame(espec, false);
#ifdef PSP_PROFILER
   if ((frame_id >= PSP_PROFILER_START_FRAME)
         && (frame_id <= PSP_PROFILER_END_FRAME))
      PSPPROF_STOP;
   if (frame_id == PSP_PROFILER_END_FRAME)
      PSPPROF_DUMP;
   frame_id++;
#endif
   RETRO_PERFORMANCE_STOP(VDC_RunFrame_time);
#if defined(DUMP_FRAME_TIMES) && defined(PERF_TEST)
   printf("%u : %u ticks\n", VDC_RunFrame_time.call_cnt,
          (uint32_t)(VDC_RunFrame_time.total - start_ticks));
   fflush(stdout);
#endif


   if (PCE_IsCD)
      PCECD_Run(HuCPU.timestamp * 3);

   PSG_EndFrame(HuCPU.timestamp / pce_overclocked);

   if (espec->SoundBuf)
   {
      int y;
      for (y = 0; y < 2; y++)
      {
         Blip_Buffer_end_frame(&sbuf[y], HuCPU.timestamp / pce_overclocked);
         espec->SoundBufSize = Blip_Buffer_read_samples(&sbuf[y], espec->SoundBuf + y,
                               espec->SoundBufMaxSize);
      }
   }

   espec->MasterCycles = HuCPU.timestamp * 3;

   INPUT_FixTS();

   HuC6280_ResetTS();

   if (PCE_IsCD)
      PCECD_ResetTS();
}

static int StateAction(StateMem* sm, int load)
{
   SFORMAT StateRegs[] =
   {
      SFARRAY(BaseRAM, 8192),
      SFVAR(PCEIODataBuffer),
      SFEND
   };

   //for(int i = 8192; i < 32768; i++)
   // if(BaseRAM[i] != 0xFF)
   //  printf("%d %02x\n", i, BaseRAM[i]);

   int ret = MDFNSS_StateAction(sm, load, StateRegs, "MAIN");

   ret &= HuC6280_StateAction(sm, load);
   ret &= VDC_StateAction(sm, load);
   ret &= PSG_StateAction(sm, load);
   ret &= INPUT_StateAction(sm, load);
   ret &= HuC_StateAction(sm, load);

   if (load)
   {

   }

   return (ret);
}

void PCE_Power(void)
{
   memset(BaseRAM, 0x00, sizeof(BaseRAM));

   int i;
   for (i = 8192; i < 32768; i++)
      BaseRAM[i] = 0xFF;

   PCEIODataBuffer = 0xFF;

   HuC6280_Power();
   VDC_Power();
   PSG_Power(HuCPU.timestamp / pce_overclocked);
   HuC_Power();

   if (PCE_IsCD)
      PCECD_Power(HuCPU.timestamp * 3);
}



bool IsBRAMUsed(void)
{
   if (memcmp(SaveRAM, BRAM_Init_String, 8)) // HUBM string is modified/missing
      return (1);

   int x;
   for (x = 8; x < 2048; x++)
      if (SaveRAM[x]) return (1);

   return (0);
}

MDFNGI MDFNGameInfo =
{
   "pce_fast",
   "PC Engine (CD)/TurboGrafx 16 (CD)/SuperGrafx",
   KnownExtensions,
   PCE_Load,
   LoadCD,
   CloseGame,
   StateAction,
   Emulate,
   PCEINPUT_SetInput,
   0,
   true,  // Multires possible?
   0,   // lcm_width
   0,   // lcm_height
   NULL,  // Dummy
   288,   // Nominal width
   232,   // Nominal height
   512, // Framebuffer width
   242, // Framebuffer height
};

static CDIF* CDInterface;  // FIXME: Cleanup on error out.

bool MDFNI_LoadCD(const char* force_module, const char* devicename)
{
   MDFN_printf(("Loading %s...\n\n"), devicename ? devicename : ("PHYSICAL CD"));
   CDInterface = CDIF_Open(devicename);

   //
   // Print out a track list for all discs.
   //
   CDUtility_TOC toc;

   CDInterface->ReadTOC(&toc);

   MDFN_printf("CD Layout:\n");

   for (int32 track = toc.first_track; track <= toc.last_track; track++)
      MDFN_printf(("Track %2d, LBA: %6d  %s\n"), track, toc.tracks[track].lba,
                  (toc.tracks[track].control & 0x4) ? "DATA" : "AUDIO");

   MDFN_printf("Leadout: %6d\n", toc.tracks[100].lba);

   MDFN_printf(("Using module: %s(%s)\n\n"), MDFNGameInfo.shortname,
               MDFNGameInfo.fullname);

   if (!(MDFNGameInfo.LoadCD(CDInterface)))
   {
      delete CDInterface;
      return false;
   }

   return true;
}

bool MDFNI_LoadGame(const char* force_module, const char* name)
{
   if (strlen(name) > 4 && (!strcasecmp(name + strlen(name) - 4, ".cue")
                            || !strcasecmp(name + strlen(name) - 4, ".ccd")
                            || !strcasecmp(name + strlen(name) - 4, ".toc")))
      return (MDFNI_LoadCD(force_module, name));

   MDFN_printf(("Loading %s...\n"), name);

   MDFN_printf(("Using module: %s(%s)\n\n"), MDFNGameInfo.shortname,
               MDFNGameInfo.fullname);

   if (MDFNGameInfo.Load(name) <= 0)
      return false;

   return true;
}

#define MEDNAFEN_CORE_NAME_MODULE "pce_fast"
#define MEDNAFEN_CORE_NAME "Mednafen PCE Fast"
#define MEDNAFEN_CORE_VERSION "v0.9.36.1"
#define MEDNAFEN_CORE_EXTENSIONS "pce|cue|ccd"
#define MEDNAFEN_CORE_TIMING_FPS 59.82
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 288
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 232
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 512
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 242
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (4.0 / 3.0)
#define FB_WIDTH 512
#define FB_HEIGHT 242

#define FB_MAX_HEIGHT FB_HEIGHT

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

   const char* dir = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
      strncpy(retro_base_directory, dir, sizeof(retro_base_directory));
   else
      strncpy(retro_base_directory, ".", sizeof(retro_base_directory));

   setting_initial_scanline = 0;
   setting_last_scanline = 242;

   environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb);

   check_system_specs();
#ifdef PSP
   PSPPROF_INIT;
#endif
}

void retro_reset(void)
{
   PCE_Power();
}

bool retro_load_game_special(unsigned, const struct retro_game_info*, size_t)
{
   return false;
}

static void set_volume(uint32_t* ptr, unsigned number)
{
   switch (number)
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

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_nospritelimit = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_nospritelimit = 1;
   }

   var.key = "pce_keepaspect";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
      {
         setting_pce_keepaspect = 0;
         MDFNGameInfo.fb_width = 512;
         MDFNGameInfo.nominal_width = 341;
         MDFNGameInfo.lcm_width = 341;
      }
      else if (strcmp(var.value, "enabled") == 0)
      {
         setting_pce_keepaspect = 1;
         MDFNGameInfo.fb_width = 682;
         MDFNGameInfo.nominal_width = 288;
         MDFNGameInfo.lcm_width = 1024;
      }
   }

   var.key = "pce_initial_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      setting_initial_scanline = atoi(var.value);

   var.key = "pce_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      setting_last_scanline = atoi(var.value);

   bool do_cdsettings = false;
   var.key = "pce_cddavolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_cddavolume = atoi(var.value);
   }

   var.key = "pce_adpcmvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_adpcmvolume = atoi(var.value);
   }

   var.key = "pce_cdpsgvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_cdpsgvolume = atoi(var.value);
   }

   var.key = "pce_cdspeed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_cdspeed = atoi(var.value);
   }

   if (do_cdsettings)
   {
      PCECD_Settings settings = {0};
      settings.CDDA_Volume = (double)setting_pce_fast_cddavolume / 100;
      settings.CD_Speed = setting_pce_fast_cdspeed;
      settings.ADPCM_Volume = (double)setting_pce_fast_adpcmvolume / 100;

      if (PCECD_SetSettings(&settings) && log_cb)
         log_cb(RETRO_LOG_INFO, "PCE CD Audio settings changed.\n");
   }
}

#define MAX_PLAYERS 5
#define MAX_BUTTONS 13
static uint8_t input_buf[MAX_PLAYERS][2] = {{0}};

bool retro_load_game(const struct retro_game_info* info)
{
   enum retro_pixel_format rgb565 = RETRO_PIXEL_FORMAT_RGB565;
   if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb565))
   {
      if (log_cb)
         log_cb(RETRO_LOG_INFO, "Frontend does not supports RGB565\n");

      return false;
   }

   overscan = false;
   environ_cb(RETRO_ENVIRONMENT_GET_OVERSCAN, &overscan);

   check_variables();

   if (!MDFNI_LoadGame(MEDNAFEN_CORE_NAME_MODULE, info->path))
      return false;

   surf.w = FB_WIDTH;
   surf.h = FB_HEIGHT;
   surf.pitchinpix = FB_WIDTH;
   surf.pixels16 = (uint16*)calloc(FB_WIDTH * FB_HEIGHT, sizeof(uint16));



   // Possible endian bug ...
   for (unsigned i = 0; i < MAX_PLAYERS; i++)
      PCEINPUT_SetInput(i, "gamepad", &input_buf[i][0]);

#ifdef PSP_PROFILER
   frame_id = 0;
#endif

   return true;
}

void retro_unload_game(void)
{
   MDFNGameInfo.CloseGame();

   delete CDInterface;
}

static void update_input(void)
{
   static unsigned map[] =
   {
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
   input_poll_cb();

   update_input();

   static int16_t sound_buf[0x10000];
   static int32_t rects[FB_MAX_HEIGHT];
   rects[0] = ~0;

   EmulateSpecStruct spec = {0};
   spec.surface = &surf;
   spec.SoundRate = 44100;
   spec.SoundBuf = sound_buf;
   spec.LineWidths = rects;
   spec.SoundBufMaxSize = sizeof(sound_buf) / 2;
   spec.SoundVolume = 1.0;
   spec.soundmultiplier = 1.0;
   spec.SoundBufSize = 0;

   if (spec.SoundRate != last_sound_rate)
   {
      spec.SoundFormatChanged = true;
      last_sound_rate = spec.SoundRate;
   }
#ifdef PSP
#ifndef DISABLE_SW_RENDER
   pce_do_hw_render = !input_state_cb(0, RETRO_DEVICE_JOYPAD, 0,
                                      RETRO_DEVICE_ID_JOYPAD_X);
#endif
   setting_last_scanline = 241;
#endif

   Emulate(&spec);

   unsigned width  = spec.DisplayRect.w & ~0x1;
   unsigned height = spec.DisplayRect.h;


#ifdef PSP
#ifndef DISABLE_SW_RENDER
   if (pce_do_hw_render)
#endif
      video_cb(RETRO_HW_FRAME_BUFFER_VALID, width, height, 1024);
#ifndef DISABLE_SW_RENDER
   else
      //      video_cb(surf->pixels16 , MEDNAFEN_CORE_GEOMETRY_BASE_W, MEDNAFEN_CORE_GEOMETRY_BASE_H, FB_WIDTH << 1);
      video_cb(surf.pixels16 + surf.pitchinpix * spec.DisplayRect.y, width, height,
               FB_WIDTH << 1);
#endif
#else
   video_cb(surf.pixels16 + surf.pitchinpix * spec.DisplayRect.y, width, height,
            FB_WIDTH << 1);
#endif

   video_frames++;
   audio_frames += spec.SoundBufSize;

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
      check_variables();

#ifdef RUN_FOR_X_FRAMES
   if (video_frames == RUN_FOR_X_FRAMES)
      environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, NULL);
#endif
}

void retro_get_system_info(struct retro_system_info* info)
{
   memset(info, 0, sizeof(*info));
   info->library_name     = MEDNAFEN_CORE_NAME;
   info->library_version  = MEDNAFEN_CORE_VERSION;
   info->need_fullpath    = true;
   info->valid_extensions = MEDNAFEN_CORE_EXTENSIONS;
   info->block_extract    = false;
}

void retro_get_system_av_info(struct retro_system_av_info* info)
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
   if (surf.pixels16)
   {
      free(surf.pixels16);
      surf.pixels16 = NULL;
   }

   if (log_cb)
   {
      log_cb(RETRO_LOG_INFO, "[%s]: Samples / Frame: %.5f\n",
             MEDNAFEN_CORE_NAME, (double)audio_frames / video_frames);
      log_cb(RETRO_LOG_INFO, "[%s]: Estimated FPS: %.5f\n",
             MEDNAFEN_CORE_NAME, (double)video_frames * 44100 / audio_frames);
   }

#ifdef PERF_TEST
   perf_cb.perf_log();
#endif
#ifdef PSP
   PSPPROF_DUMP;
#endif

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
   switch (device)
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
   environ_cb = cb;

   static const struct retro_variable vars[] =
   {
      { "pce_nospritelimit", "No Sprite Limit; disabled|enabled" },
      { "pce_keepaspect", "Keep Aspect; enabled|disabled" },
      { "pce_initial_scanline", "Initial scanline; 0|1|2|3|4|5|6|7|8|9|10|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25|26|27|28|29|30|31|32|33|34|35|36|37|38|39|40" },
      { "pce_last_scanline", "Last scanline; 242|241|240|239|238|237|236|235|234|232|231|230|229|228|227|226|225|224|223|222|221|220|219|218|217|216|215|214|213|212|211|210" },
      { "pce_cddavolume", "(CD) CDDA Volume; 100|90|80|70|60|50|40|30|20|10|0" },
      { "pce_adpcmvolume", "(CD) ADPCM Volume; 100|90|80|70|60|50|40|30|20|10|0" },
      { "pce_cdpsgvolume", "(CD) CD PSG Volume; 100|90|80|70|60|50|40|30|20|10|0" },
      { "pce_cdspeed", "(CD) CD Speed; 1|2|4|8" },
      { NULL, NULL },
   };

   static const struct retro_controller_description pads[] =
   {
      { "PCE Joypad", RETRO_DEVICE_JOYPAD },
      { "Mouse", RETRO_DEVICE_MOUSE },
   };

   static const struct retro_controller_info ports[] =
   {
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
   //if (serialize_size)
   //   return serialize_size;

   StateMem st;
   memset(&st, 0, sizeof(st));

   if (!MDFNSS_SaveSM(&st))
      return 0;

   free(st.data);
   return serialize_size = st.len;
}

bool retro_serialize(void* data, size_t size)
{
   StateMem st;
   memset(&st, 0, sizeof(st));
   st.data     = (uint8_t*)data;
   st.malloced = size;

   return MDFNSS_SaveSM(&st);
}

bool retro_unserialize(const void* data, size_t size)
{
   StateMem st;
   memset(&st, 0, sizeof(st));
   st.data = (uint8_t*)data;
   st.len  = size;

#ifdef PSP_PROFILER
   PSPPROF_INIT;
   frame_id = 0;
#endif

   return MDFNSS_LoadSM(&st);
}

void* retro_get_memory_data(unsigned type)
{
   uint8_t* data;

   switch (type)
   {
   case RETRO_MEMORY_SAVE_RAM:
      if (IsPopulous)
         data = (uint8_t*)(ROMSpace + 0x40 * 8192);
      else
         data = (uint8_t*)SaveRAM;
      break;
   default:
      data = NULL;
      break;
   }
   return data;
}

size_t retro_get_memory_size(unsigned type)
{
   unsigned size;

   switch (type)
   {
   case RETRO_MEMORY_SAVE_RAM:
      if (IsPopulous)
         size = 32768;
      else
         size = 2048;
      break;
   default:
      size = 0;
      break;
   }

   return size;
}

void retro_cheat_reset(void)
{}

void retro_cheat_set(unsigned, bool, const char*)
{}

