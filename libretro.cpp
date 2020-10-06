#include <stdarg.h>
#include <complex>

#include <retro_miscellaneous.h>
#include <streams/file_stream.h>
#include <string/stdstring.h>
#include <encodings/crc32.h>
#include <libretro.h>

#include "mednafen/mednafen.h"
#include "mednafen/git.h"
#include "mednafen/general.h"
#include "mednafen/state_helpers.h"

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
#include "mednafen/cdrom/CDUtility.h"

#include "libretro_core_options.h"

#ifdef _MSC_VER
#include "mednafen/msvc_compat.h"
#endif

std::string retro_base_directory;

#define MEDNAFEN_CORE_NAME_MODULE "pce_fast"
#define MEDNAFEN_CORE_NAME "Beetle PCE Fast"
#define MEDNAFEN_CORE_VERSION "v0.9.38.7"
#define MEDNAFEN_CORE_EXTENSIONS "pce|cue|ccd|chd"
#define MEDNAFEN_CORE_TIMING_FPS 59.82
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 256
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 243
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 512
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 243
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (6.0 / 5.0)
#define FB_WIDTH 512
#define FB_HEIGHT 243

static const uint8 BRAM_Init_String[8] = { 'H', 'U', 'B', 'M', 0x00, 0x88, 0x10, 0x80 }; //"HUBM\x00\x88\x10\x80";

ArcadeCard *arcade_card = NULL;

static uint8 *HuCROM = NULL;

static uint8 HuCSF2Latch = 0;

static bool IsPopulous;

uint8 SaveRAM[2048];

static bool old_cdimagecache = false;
static bool use_palette = false;

std::string setting_pce_fast_cdbios = "syscard3.pce";

extern MDFNGI EmulatedPCE_Fast;

extern "C" {
MDFNGI *MDFNGameInfo = &EmulatedPCE_Fast;
}

/* Composite palette 2020/09/14
 * authors: Dshadoff, Turboxray, Furrtek, Kitrinx and others
 */
static uint8_t composite_palette[] = {
   0, 0, 0, 
   0, 0, 27, 
   1, 2, 61, 
   0, 0, 88, 
   1, 4, 123, 
   0, 0, 149, 
   2, 5, 184, 
   0, 2, 211, 
   28, 0, 4, 
   32, 4, 39, 
   29, 1, 65, 
   33, 6, 100, 
   29, 2, 127, 
   34, 7, 162, 
   30, 4, 188, 
   34, 9, 223, 
   64, 6, 16, 
   60, 3, 43, 
   65, 8, 78, 
   61, 5, 104, 
   66, 10, 139, 
   62, 6, 166, 
   66, 11, 200, 
   62, 8, 227, 
   92, 5, 20, 
   88, 2, 47, 
   93, 7, 82, 
   89, 4, 108, 
   94, 9, 143, 
   90, 5, 170, 
   94, 10, 205, 
   90, 7, 231, 
   120, 4, 25, 
   125, 9, 59, 
   121, 6, 86, 
   125, 11, 121, 
   122, 8, 147, 
   126, 13, 182, 
   122, 9, 209, 
   127, 14, 243, 
   156, 11, 37, 
   153, 8, 63, 
   157, 13, 98, 
   153, 10, 125, 
   158, 15, 160, 
   154, 12, 186, 
   158, 17, 221, 
   155, 13, 247, 
   184, 10, 41, 
   181, 7, 68, 
   185, 12, 102, 
   181, 9, 129, 
   186, 14, 164, 
   182, 10, 190, 
   186, 15, 225, 
   183, 12, 252, 
   212, 9, 45, 
   217, 14, 80, 
   213, 11, 106, 
   218, 16, 141, 
   214, 13, 168, 
   218, 18, 203, 
   214, 14, 229, 
   219, 19, 255, 
   9, 37, 2, 
   5, 34, 29, 
   9, 39, 64, 
   6, 36, 90, 
   10, 41, 125, 
   6, 37, 152, 
   11, 42, 186, 
   7, 39, 213, 
   37, 36, 6, 
   33, 33, 33, 
   37, 38, 68, 
   34, 35, 94, 
   38, 40, 129, 
   34, 36, 156, 
   39, 41, 190, 
   35, 38, 217, 
   65, 35, 10, 
   69, 40, 45, 
   65, 37, 72, 
   70, 42, 107, 
   66, 39, 133, 
   70, 44, 168, 
   67, 40, 194, 
   71, 45, 229, 
   101, 42, 23, 
   97, 39, 49, 
   102, 44, 84, 
   98, 41, 111, 
   102, 46, 145, 
   98, 43, 172, 
   103, 48, 207, 
   99, 44, 233, 
   129, 41, 27, 
   125, 38, 53, 
   130, 43, 88, 
   126, 40, 115, 
   130, 45, 150, 
   126, 42, 176, 
   131, 47, 211, 
   127, 43, 237, 
   157, 40, 31, 
   161, 45, 66, 
   158, 42, 92, 
   162, 47, 127, 
   158, 44, 154, 
   163, 49, 188, 
   159, 45, 215, 
   163, 50, 250, 
   193, 47, 43, 
   189, 44, 70, 
   194, 49, 105, 
   190, 46, 131, 
   194, 51, 166, 
   191, 48, 192, 
   195, 53, 227, 
   191, 49, 254, 
   221, 46, 47, 
   217, 43, 74, 
   222, 48, 109, 
   218, 45, 135, 
   222, 50, 170, 
   219, 47, 197, 
   223, 52, 231, 
   219, 48, 255, 
   9, 66, 0, 
   14, 71, 31, 
   10, 68, 58, 
   14, 73, 92, 
   10, 70, 119, 
   15, 75, 154, 
   11, 71, 180, 
   16, 76, 215, 
   45, 73, 9, 
   42, 70, 35, 
   46, 75, 70, 
   42, 72, 97, 
   47, 77, 131, 
   43, 74, 158, 
   39, 70, 184, 
   44, 75, 219, 
   73, 72, 13, 
   70, 69, 39, 
   74, 74, 74, 
   70, 71, 101, 
   75, 76, 135, 
   71, 73, 162, 
   75, 78, 197, 
   72, 74, 223, 
   101, 71, 17, 
   106, 76, 52, 
   102, 73, 78, 
   106, 78, 113, 
   103, 75, 139, 
   107, 80, 174, 
   103, 77, 201, 
   108, 82, 236, 
   138, 78, 29, 
   134, 75, 56, 
   138, 80, 90, 
   134, 77, 117, 
   139, 82, 152, 
   135, 79, 178, 
   131, 75, 205, 
   136, 80, 240, 
   166, 77, 33, 
   162, 74, 60, 
   166, 79, 95, 
   162, 76, 121, 
   167, 81, 156, 
   163, 78, 182, 
   168, 83, 217, 
   164, 79, 244, 
   194, 76, 37, 
   198, 81, 72, 
   194, 78, 99, 
   199, 83, 133, 
   195, 80, 160, 
   199, 85, 195, 
   196, 82, 221, 
   200, 87, 255, 
   230, 84, 50, 
   226, 80, 76, 
   230, 85, 111, 
   227, 82, 137, 
   223, 79, 164, 
   227, 84, 199, 
   224, 81, 225, 
   228, 86, 255, 
   18, 103, 0, 
   14, 100, 25, 
   18, 105, 60, 
   15, 102, 86, 
   19, 107, 121, 
   15, 104, 148, 
   20, 109, 183, 
   16, 105, 209, 
   46, 102, 3, 
   50, 107, 37, 
   46, 104, 64, 
   51, 109, 99, 
   47, 106, 125, 
   52, 111, 160, 
   48, 108, 187, 
   52, 113, 221, 
   74, 101, 7, 
   78, 106, 42, 
   74, 103, 68, 
   79, 108, 103, 
   75, 105, 129, 
   80, 110, 164, 
   76, 107, 191, 
   80, 112, 226, 
   110, 108, 19, 
   106, 105, 46, 
   111, 110, 80, 
   107, 107, 107, 
   111, 112, 142, 
   108, 109, 168, 
   112, 114, 203, 
   108, 110, 230, 
   138, 107, 23, 
   142, 112, 58, 
   139, 109, 84, 
   143, 114, 119, 
   139, 111, 146, 
   144, 116, 181, 
   140, 113, 207, 
   144, 118, 242, 
   166, 106, 27, 
   170, 111, 62, 
   167, 108, 89, 
   171, 113, 123, 
   167, 110, 150, 
   172, 115, 185, 
   168, 112, 211, 
   172, 117, 246, 
   202, 114, 40, 
   198, 110, 66, 
   203, 115, 101, 
   199, 112, 127, 
   204, 117, 162, 
   200, 114, 189, 
   204, 119, 224, 
   200, 116, 250, 
   230, 112, 44, 
   235, 117, 78, 
   231, 114, 105, 
   235, 119, 140, 
   232, 116, 166, 
   236, 121, 201, 
   232, 118, 228, 
   237, 123, 255, 
   18, 132, 0, 
   23, 137, 27, 
   19, 134, 54, 
   23, 139, 89, 
   20, 136, 115, 
   24, 141, 150, 
   20, 138, 177, 
   25, 143, 211, 
   55, 139, 5, 
   51, 136, 31, 
   55, 141, 66, 
   51, 138, 93, 
   56, 143, 128, 
   52, 140, 154, 
   57, 145, 189, 
   53, 141, 215, 
   83, 138, 9, 
   87, 143, 44, 
   83, 140, 70, 
   88, 145, 105, 
   84, 142, 132, 
   88, 147, 166, 
   85, 144, 193, 
   89, 149, 228, 
   111, 137, 13, 
   115, 142, 48, 
   111, 139, 74, 
   116, 144, 109, 
   112, 141, 136, 
   116, 146, 171, 
   113, 143, 197, 
   117, 148, 232, 
   147, 145, 25, 
   143, 141, 52, 
   147, 146, 87, 
   144, 143, 113, 
   148, 148, 148, 
   144, 145, 175, 
   149, 150, 209, 
   145, 147, 236, 
   175, 143, 29, 
   179, 148, 64, 
   175, 145, 91, 
   180, 150, 126, 
   176, 147, 152, 
   181, 152, 187, 
   177, 149, 213, 
   181, 154, 248, 
   203, 142, 34, 
   207, 147, 68, 
   203, 144, 95, 
   208, 149, 130, 
   204, 146, 156, 
   209, 151, 191, 
   205, 148, 218, 
   209, 153, 252, 
   239, 150, 46, 
   235, 146, 72, 
   240, 151, 107, 
   236, 148, 134, 
   240, 153, 169, 
   237, 150, 195, 
   241, 155, 230, 
   237, 152, 255, 
   27, 169, 0, 
   31, 174, 30, 
   28, 171, 56, 
   32, 176, 91, 
   28, 173, 118, 
   33, 178, 152, 
   29, 175, 179, 
   25, 171, 205, 
   55, 168, 0, 
   59, 173, 34, 
   56, 170, 60, 
   60, 175, 95, 
   56, 172, 122, 
   61, 177, 156, 
   57, 174, 183, 
   61, 179, 218, 
   91, 176, 11, 
   87, 172, 38, 
   92, 177, 73, 
   88, 174, 99, 
   93, 179, 134, 
   89, 176, 160, 
   93, 181, 195, 
   89, 178, 222, 
   119, 175, 15, 
   124, 180, 50, 
   120, 176, 77, 
   124, 181, 111, 
   121, 178, 138, 
   117, 175, 165, 
   121, 180, 199, 
   117, 177, 226, 
   147, 173, 19, 
   152, 178, 54, 
   148, 175, 81, 
   152, 180, 116, 
   149, 177, 142, 
   153, 182, 177, 
   149, 179, 203, 
   154, 184, 238, 
   183, 181, 32, 
   180, 177, 58, 
   184, 182, 93, 
   180, 179, 120, 
   185, 184, 154, 
   181, 181, 181, 
   185, 186, 216, 
   182, 183, 242, 
   211, 180, 36, 
   216, 185, 71, 
   212, 181, 97, 
   217, 186, 132, 
   213, 183, 158, 
   209, 180, 185, 
   213, 185, 220, 
   210, 182, 246, 
   239, 179, 40, 
   244, 184, 75, 
   240, 180, 101, 
   245, 185, 136, 
   241, 182, 163, 
   245, 187, 197, 
   241, 184, 224, 
   246, 189, 255, 
   36, 207, 0, 
   32, 203, 24, 
   36, 208, 58, 
   33, 205, 85, 
   37, 210, 120, 
   33, 207, 146, 
   38, 212, 181, 
   34, 209, 208, 
   64, 206, 1, 
   60, 202, 28, 
   64, 207, 63, 
   61, 204, 89, 
   65, 209, 124, 
   61, 206, 150, 
   66, 211, 185, 
   62, 208, 212, 
   92, 205, 5, 
   96, 210, 40, 
   92, 206, 67, 
   97, 211, 101, 
   93, 208, 128, 
   97, 213, 163, 
   94, 210, 189, 
   98, 215, 224, 
   128, 212, 18, 
   124, 208, 44, 
   129, 213, 79, 
   125, 210, 105, 
   129, 215, 140, 
   125, 212, 167, 
   130, 217, 202, 
   126, 214, 228, 
   156, 211, 22, 
   152, 207, 48, 
   157, 212, 83, 
   153, 209, 110, 
   157, 214, 144, 
   153, 211, 171, 
   158, 216, 206, 
   154, 213, 232, 
   184, 210, 26, 
   188, 215, 61, 
   185, 211, 87, 
   189, 216, 122, 
   185, 213, 148, 
   190, 218, 183, 
   186, 215, 210, 
   190, 220, 245, 
   220, 217, 38, 
   216, 214, 65, 
   221, 219, 99, 
   217, 215, 126, 
   221, 220, 161, 
   218, 217, 187, 
   222, 222, 222, 
   218, 219, 249, 
   248, 216, 42, 
   244, 213, 69, 
   249, 218, 103, 
   245, 214, 130, 
   249, 219, 165, 
   246, 216, 191, 
   250, 221, 226, 
   246, 218, 253, 
   36, 236, 0, 
   41, 241, 26, 
   37, 237, 52, 
   41, 242, 87, 
   37, 239, 114, 
   42, 244, 149, 
   38, 241, 175, 
   43, 246, 210, 
   72, 243, 3, 
   69, 240, 30, 
   73, 245, 65, 
   69, 241, 91, 
   74, 246, 126, 
   70, 243, 153, 
   74, 248, 187, 
   71, 245, 214, 
   100, 242, 8, 
   97, 238, 34, 
   101, 243, 69, 
   97, 240, 95, 
   102, 245, 130, 
   98, 242, 157, 
   102, 247, 192, 
   99, 244, 218, 
   128, 241, 12, 
   133, 246, 46, 
   129, 242, 73, 
   133, 247, 108, 
   130, 244, 134, 
   134, 249, 169, 
   130, 246, 196, 
   135, 251, 230, 
   165, 248, 24, 
   161, 245, 50, 
   165, 250, 85, 
   161, 246, 112, 
   166, 251, 147, 
   162, 248, 173, 
   167, 253, 208, 
   163, 250, 235, 
   193, 247, 28, 
   189, 244, 55, 
   193, 249, 89, 
   189, 245, 116, 
   194, 250, 151, 
   190, 247, 177, 
   195, 252, 212, 
   191, 249, 239, 
   221, 246, 32, 
   225, 251, 67, 
   221, 248, 93, 
   226, 253, 128, 
   222, 249, 155, 
   226, 254, 190, 
   223, 251, 216, 
   227, 255, 251, 
   255, 253, 44, 
   253, 250, 71, 
   255, 255, 106, 
   254, 251, 132, 
   255, 255, 167, 
   254, 253, 194, 
   255, 255, 228, 
   255, 255, 255
};

/* Forward declarations */
static void MDFN_printf(const char *format, ...);
void MDFN_indent(int indent);

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

static PCEFast_PSG *psg = NULL;
extern ArcadeCard *arcade_card; // Bah, lousy globals.

static Blip_Buffer sbuf[2];

bool PCE_ACEnabled;

// Statically allocated for speed...or something.
uint8 ROMSpace[0x88 * 8192 + 8192];	// + 8192 for PC-as-pointer safety padding

uint8 BaseRAM[32768 + 8192]; // 8KB for PCE, 32KB for Super Grafx // + 8192 for PC-as-pointer safety padding

uint8 PCEIODataBuffer;

uint8 MemRead(uint32 addr)
{
   return(HuCPU.PCERead[(addr / 8192) & 0xFF](addr));
}

static DECLFW(ACPhysWrite)
{
   arcade_card->PhysWrite(A, V);
}

static DECLFR(ACPhysRead)
{
   return(arcade_card->PhysRead(A, false));
}

static DECLFR(SaveRAMRead)
{
   if((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
      return(SaveRAM[A & 2047]);
   return(0xFF);
}

static DECLFW(SaveRAMWrite)
{
 if((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
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

static DECLFR(HuCSF2Read)
{
 return(HuCROM[(A & 0x7FFFF) + 0x80000 + HuCSF2Latch * 0x80000 ]); // | (HuCSF2Latch << 19) ]);
}

static DECLFW(HuCSF2Write)
{
 if((A & 0x1FFC) == 0x1FF0)
 {
  HuCSF2Latch = (A & 0x3);
 }
}


static DECLFR(PCEBusRead)
{
 //printf("BUS Read: %02x %04x\n", A >> 13, A);
 return(0xFF);
}

static DECLFW(PCENullWrite)
{
 //printf("Null Write: %02x, %08x %02x\n", A >> 13, A, V);
}

static DECLFR(BaseRAMRead)
{
 return BaseRAM[(size_t)A - (0xF8 * 8192)];
}

static DECLFR(BaseRAMRead_Mirrored)
{
 return(BaseRAM[A & 0x1FFF]);
}

static DECLFW(BaseRAMWrite)
{
 BaseRAM[(size_t)A - (0xF8 * 8192)] = V;
}

static DECLFW(BaseRAMWrite_Mirrored)
{
 BaseRAM[A & 0x1FFF] = V;
}

static DECLFR(IORead)
{
 #include "mednafen/pce_fast/ioread.inc"
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
  MDFN_printf("CD-DA Volume: %d%%\n", (int)(100 * cd_settings.CDDA_Volume));

 if(cd_settings.ADPCM_Volume != 1.0)
  MDFN_printf("ADPCM Volume: %d%%\n", (int)(100 * cd_settings.ADPCM_Volume));

 return(PCECD_Init(&cd_settings, PCECDIRQCB, PCE_MASTER_CLOCK, pce_overclocked, &sbuf[0], &sbuf[1]));
}

static int LoadCommon(void);
static void LoadCommonPre(void);

static int HuCLoad(const uint8 *data, uint32 len, uint32 crc32)
{
 uint32 crc = 0;
 uint32 sf2_threshold = 2048 * 1024;
 uint32 sf2_required_size = 2048 * 1024 + 512 * 1024;
 uint32 m_len = (len + 8191)&~8191;
 bool sf2_mapper = FALSE;

 if(m_len >= sf2_threshold)
 {
  sf2_mapper = TRUE;

  if(m_len != sf2_required_size)
   m_len = sf2_required_size;
 }

 IsPopulous = 0;
 PCE_IsCD = 0;

 MDFN_printf("ROM:       %dKiB\n", (len + 1023) / 1024);
 MDFN_printf("ROM CRC32: 0x%04x\n", crc32);

 if(!(HuCROM = (uint8 *)malloc(m_len)))
  return(0);

 memset(HuCROM, 0xFF, m_len);
 memcpy(HuCROM, data, (m_len < len) ? m_len : len);

 memset(ROMSpace, 0xFF, 0x88 * 8192 + 8192);

 if(m_len == 0x60000)
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x20 * 8192);
  memcpy(ROMSpace + 0x20 * 8192, HuCROM, 0x20 * 8192);
  memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x50 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x70 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
 }
 else if(m_len == 0x80000)
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x40 * 8192);
  memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
  memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
 }
 else
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, (m_len < 1024 * 1024) ? m_len : 1024 * 1024);
 }

 for(int x = 0x00; x < 0x80; x++)
 {
  HuCPU.FastMap[x] = &ROMSpace[x * 8192];
  HuCPU.PCERead[x] = HuCRead;
 }

 if(!memcmp(HuCROM + 0x1F26, "POPULOUS", strlen("POPULOUS")))
 {
  uint8 *PopRAM = ROMSpace + 0x40 * 8192;

  memset(PopRAM, 0xFF, 32768);

  IsPopulous = 1;

  MDFN_printf("Populous\n");

  for(int x = 0x40; x < 0x44; x++)
  {
   HuCPU.FastMap[x] = &PopRAM[(x & 3) * 8192];
   HuCPU.PCERead[x] = HuCRead;
   HuCPU.PCEWrite[x] = HuCRAMWrite;
  }
  MDFNMP_AddRAM(32768, 0x40 * 8192, PopRAM);
 }
 else
 {
  memset(SaveRAM, 0x00, 2048);
  memcpy(SaveRAM, BRAM_Init_String, 8);    // So users don't have to manually intialize the file cabinet
                                                // in the CD BIOS screen.
  HuCPU.PCEWrite[0xF7] = SaveRAMWrite;
  HuCPU.PCERead[0xF7] = SaveRAMRead;
  MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
 }

 // 0x1A558
 //if(len >= 0x20000 && !memcmp(HuCROM + 0x1A558, "STREET FIGHTER#", strlen("STREET FIGHTER#")))
 if(sf2_mapper)
 {
  for(int x = 0x40; x < 0x80; x++)
  {
   HuCPU.PCERead[x] = HuCSF2Read;
  }
  HuCPU.PCEWrite[0] = HuCSF2Write;
  MDFN_printf("Street Fighter 2 Mapper\n");
  HuCSF2Latch = 0;
 }

 return(1);
}

static int Load(const char *name, MDFNFILE *fp)
{
   uint32 headerlen = 0;
   uint32 r_size;

   LoadCommonPre();

   {
      if(GET_FSIZE_PTR(fp) & 0x200) // 512 byte header!
         headerlen = 512;
   }

   r_size = GET_FSIZE_PTR(fp) - headerlen;
   if(r_size > 4096 * 1024) r_size = 4096 * 1024;

   for(int x = 0; x < 0x100; x++)
   {
      HuCPU.PCERead[x] = PCEBusRead;
      HuCPU.PCEWrite[x] = PCENullWrite;
   }

   uint32 crc = encoding_crc32(0, GET_FDATA_PTR(fp) + headerlen, GET_FSIZE_PTR(fp) - headerlen);

   HuCLoad(GET_FDATA_PTR(fp) + headerlen, GET_FSIZE_PTR(fp) - headerlen, crc);

   if(crc == 0xfae0fc60)
      OrderOfGriffonFix = true;

   return(LoadCommon());
}

static void LoadCommonPre(void)
{
 HuC6280_Init();

 // FIXME:  Make these globals less global!
 pce_overclocked = MDFN_GetSettingUI("pce_fast.ocmultiplier");
 PCE_ACEnabled = MDFN_GetSettingB("pce_fast.arcadecard");

 if(pce_overclocked > 1)
  MDFN_printf("CPU overclock: %dx\n", pce_overclocked);

 if(MDFN_GetSettingUI("pce_fast.cdspeed") > 1)
  MDFN_printf("CD-ROM speed:  %ux\n", (unsigned int)MDFN_GetSettingUI("pce_fast.cdspeed"));

 for(int x = 0; x < 0x100; x++)
 {
  HuCPU.PCERead[x] = PCEBusRead;
  HuCPU.PCEWrite[x] = PCENullWrite;
 }

 MDFNMP_Init(1024, (1 << 21) / 1024);
}

static int LoadCommon(void)
{
 VDC_Init(false);

 {
  HuCPU.PCERead[0xF8] = BaseRAMRead;
  HuCPU.PCERead[0xF9] = HuCPU.PCERead[0xFA] = HuCPU.PCERead[0xFB] = BaseRAMRead_Mirrored;

  HuCPU.PCEWrite[0xF8] = BaseRAMWrite;
  HuCPU.PCEWrite[0xF9] = HuCPU.PCEWrite[0xFA] = HuCPU.PCEWrite[0xFB] = BaseRAMWrite_Mirrored;

  for(int x = 0xf8; x < 0xfb; x++)
   HuCPU.FastMap[x] = &BaseRAM[0];

  HuCPU.PCERead[0xFF] = IORead;
 }

 MDFNMP_AddRAM(8192, 0xf8 * 8192, BaseRAM);

 HuCPU.PCEWrite[0xFF] = IOWrite;

 psg = new PCEFast_PSG(&sbuf[0], &sbuf[1]);

 psg->SetVolume(1.0);

 if(PCE_IsCD)
 {
  unsigned int cdpsgvolume = MDFN_GetSettingUI("pce_fast.cdpsgvolume");

  if(cdpsgvolume != 100)
  {
   MDFN_printf("CD PSG Volume: %d%%\n", cdpsgvolume);
  }

  psg->SetVolume(0.678 * cdpsgvolume / 100);

 }

 PCEINPUT_Init();

 PCE_Power();

#if 0
 MDFNGameInfo->LayerNames = "Background\0Sprites\0";
#endif
 MDFNGameInfo->fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 * 256);
 return(1);
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
static std::string MDFN_MakeFName(MakeFName_Type type, int id1, const char *cd1)
{
#ifdef _WIN32
   char slash = '\\';
#else
   char slash = '/';
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

static void Cleanup(void)
{
   if(arcade_card)
      delete arcade_card;
   arcade_card = NULL;

   if(PCE_IsCD)
      PCECD_Close();

   if(HuCROM)
      free(HuCROM);
   HuCROM = NULL;
}

static int HuCLoadCD(const char *bios_path)
{
   MDFNFILE *fp = file_open(bios_path);

   if(!fp)
      return(0);

   memset(ROMSpace, 0xFF, 262144);

   memcpy(ROMSpace, GET_FDATA_PTR(fp) + (GET_FSIZE_PTR(fp) & 512), ((GET_FSIZE_PTR(fp) & ~512) > 262144) ? 262144 : (GET_FSIZE_PTR(fp) &~ 512) );

   if (fp)
      file_close(fp);
   fp = NULL;

   PCE_IsCD = 1;
   PCE_InitCD();

   MDFN_printf("Arcade Card Emulation:  %s\n", PCE_ACEnabled ? "Enabled" : "Disabled");
   for(int x = 0; x < 0x40; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
   }

   for(int x = 0x68; x < 0x88; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
      HuCPU.PCEWrite[x] = HuCRAMWrite;
   }
   HuCPU.PCEWrite[0x80] = HuCRAMWriteCDSpecial; 	// Hyper Dyne Special hack
   MDFNMP_AddRAM(262144, 0x68 * 8192, ROMSpace + 0x68 * 8192);

   if(PCE_ACEnabled)
   {
      if (!(arcade_card = new ArcadeCard()))
      {
         MDFN_PrintError("Error creating %s object.\n", "ArcadeCard");
         Cleanup();
         return(0);
      }

      for(int x = 0x40; x < 0x44; x++)
      {
         HuCPU.PCERead[x] = ACPhysRead;
         HuCPU.PCEWrite[x] = ACPhysWrite;
      }
   }

   memset(SaveRAM, 0x00, 2048);
   memcpy(SaveRAM, BRAM_Init_String, 8);	// So users don't have to manually intialize the file cabinet
   // in the CD BIOS screen.

   HuCPU.PCEWrite[0xF7] = SaveRAMWrite;
   HuCPU.PCERead[0xF7] = SaveRAMRead;
   MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
   return(1);
}


static int LoadCD(std::vector<CDIF *> *CDInterfaces)
{
 std::string bios_path = MDFN_MakeFName(MDFNMKF_FIRMWARE, 0, setting_pce_fast_cdbios.c_str() );

 LoadCommonPre();

 if(!HuCLoadCD(bios_path.c_str()))
  return(0);

 PCECD_Drive_SetDisc(true, NULL, true);
 PCECD_Drive_SetDisc(false, (*CDInterfaces)[0], true);

 return(LoadCommon());
}

static void HuC_Close(void)
{
   Cleanup();
}

static void Cleanup_PCE(void)
{
   HuC_Close();

   VDC_Close();

   if(psg)
      delete psg;
   psg = NULL;
}

static void CloseGame(void)
{
   Cleanup_PCE();
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

 if(espec->VideoFormatChanged)
  VDC_SetPixelFormat(espec->CustomPalette, espec->CustomPaletteNumEntries);

 if(espec->SoundFormatChanged)
 {
  for(int y = 0; y < 2; y++)
  {
     Blip_Buffer_set_sample_rate(&sbuf[y],
           espec->SoundRate ? espec->SoundRate : 44100, 50);
     Blip_Buffer_set_clock_rate(&sbuf[y], (long)(PCE_MASTER_CLOCK / 3));
     Blip_Buffer_bass_freq(&sbuf[y], 10);
  }
 }
 VDC_RunFrame(espec, false);

 if(PCE_IsCD)
 {
  PCECD_Run(HuCPU.timestamp * 3);
 }

 psg->EndFrame(HuCPU.timestamp / pce_overclocked);

 if(espec->SoundBuf)
 {
  for(int y = 0; y < 2; y++)
  {
     Blip_Buffer_end_frame(&sbuf[y], HuCPU.timestamp / pce_overclocked);
     espec->SoundBufSize = Blip_Buffer_read_samples(&sbuf[y], espec->SoundBuf + y,
           espec->SoundBufMaxSize);
  }
 }

 espec->MasterCycles = HuCPU.timestamp * 3;

 INPUT_FixTS();

 HuC6280_ResetTS();

 if(PCE_IsCD)
  PCECD_ResetTS();
}

int HuC_StateAction(StateMem *sm, int load, int data_only)
{
 SFORMAT StateRegs[] =
 {
  SFARRAY(ROMSpace + 0x40 * 8192, IsPopulous ? 32768 : 0),
  SFARRAY(SaveRAM, IsPopulous ? 0 : 2048),
  SFARRAY(ROMSpace + 0x68 * 8192, PCE_IsCD ? 262144 : 0),
  SFVARN(HuCSF2Latch, "HuCSF2Latch"),
  SFEND
 };
 int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "HuC", false);

 if(load)
  HuCSF2Latch &= 0x3;

 if(PCE_IsCD)
 {
  ret &= PCECD_StateAction(sm, load, data_only);

  if(arcade_card)
   ret &= arcade_card->StateAction(sm, load, data_only);
 }
 return(ret);
}

void HuC_Power(void)
{
 if(PCE_IsCD)
  memset(ROMSpace + 0x68 * 8192, 0x00, 262144);

 if(arcade_card)
  arcade_card->Power();
}


extern "C" int StateAction(StateMem *sm, int load, int data_only)
{
   SFORMAT StateRegs[] =
   {
      SFARRAY(BaseRAM, 8192),
      SFVARN(PCEIODataBuffer, "PCEIODataBuffer"),
      SFEND
   };

   //for(int i = 8192; i < 32768; i++)
   // if(BaseRAM[i] != 0xFF)
   //  printf("%d %02x\n", i, BaseRAM[i]);

   int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

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


bool IsBRAMUsed(void)
{
 if(memcmp(SaveRAM, BRAM_Init_String, 8)) // HUBM string is modified/missing
  return(1);

 for(int x = 8; x < 2048; x++)
  if(SaveRAM[x]) return(1);

 return(0);
}

MDFNGI EmulatedPCE_Fast =
{
 MDFN_MASTERCLOCK_FIXED(PCE_MASTER_CLOCK),
 0,

 true,  // Multires possible?

 0,   // lcm_width
 0,   // lcm_height
 NULL,  // Dummy

 MEDNAFEN_CORE_GEOMETRY_BASE_W,   // Nominal width
 MEDNAFEN_CORE_GEOMETRY_BASE_H,   // Nominal height

 FB_WIDTH,	// Framebuffer width
 FB_HEIGHT,	// Framebuffer height

 2,     // Number of output sound channels
};

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

   MDFN_printf("Using module: pce_fast.\n");

   if(!(LoadCD(&CDInterfaces)))
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
   MDFNFILE *GameFile = NULL;
   MDFNGameInfo = &EmulatedPCE_Fast;

   if(strlen(name) > 4 && (!strcasecmp(name + strlen(name) - 4, ".cue") || !strcasecmp(name + strlen(name) - 4, ".ccd") || !strcasecmp(name + strlen(name) - 4, ".chd") || !strcasecmp(name + strlen(name) - 4, ".toc") || !strcasecmp(name + strlen(name) - 4, ".m3u")))
      return(MDFNI_LoadCD(name));

   MDFN_printf("Loading %s...\n",name);

   MDFN_indent(1);

   GameFile = file_open(name);

   if(!GameFile)
      goto error;

   //
   // Load per-game settings
   //
   // Maybe we should make a "pgcfg" subdir, and automatically load all files in it?
   // End load per-game settings
   //

   if(Load(name, GameFile) <= 0)
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

static void MDFN_printf(const char *format, ...)
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

   temp = (char*)malloc(4096 * sizeof(char));
   vsnprintf(temp, 4096, format_temp, ap);
   free(format_temp);

   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s\n", temp);
   free(temp);

   va_end(ap);
}

void MDFN_PrintError(const char *format, ...)
{
 char *temp;

 va_list ap;

 va_start(ap, format);

 temp = (char*)malloc(4096 * sizeof(char));
 vsnprintf(temp, 4096, format, ap);
 if (log_cb)
    log_cb(RETRO_LOG_ERROR, "%s\n", temp);
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

static bool libretro_supports_bitmasks = false;

static MDFN_Surface *surf;

static bool failed_init;

#include "mednafen/pce_fast/pcecd.h"

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

   setting_initial_scanline = 0;
   setting_last_scanline = 242;

   check_system_specs();

   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      libretro_supports_bitmasks = true;
}

void retro_reset(void)
{
   DoSimpleCommand(MDFN_MSC_RESET);
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

#define MAX_PLAYERS 5
#define MAX_BUTTONS 15
static uint8_t input_type[MAX_PLAYERS] = {};
static uint8_t input_buf[MAX_PLAYERS][5] = {};
static float mouse_sensitivity = 1.0f;
static bool disable_softreset = false;

// Array to keep track of whether a given player's button is turbo
static int turbo_enable[MAX_PLAYERS][MAX_BUTTONS] = {};
// Array to keep track of each buttons turbo status
static int turbo_counter[MAX_PLAYERS][MAX_BUTTONS] = {};
// The number of frames between each firing of a turbo button
static int Turbo_Delay;
static int Turbo_Toggling = 1;
static bool turbo_toggle_alt = false;
static int psg_channels_volume[6] = { 100, 100, 100, 100, 100, 100 };
static int turbo_toggle_down[MAX_PLAYERS][MAX_BUTTONS] = {};

static void check_variables(void)
{
   struct retro_variable var = {0};

   var.key = "pce_fast_cdimagecache";

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

   var.key = "pce_fast_cdbios";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "System Card 3") == 0)
         setting_pce_fast_cdbios = "syscard3.pce";
      else if (strcmp(var.value, "System Card 2") == 0)
         setting_pce_fast_cdbios = "syscard2.pce";
      else if (strcmp(var.value, "System Card 1") == 0)
         setting_pce_fast_cdbios = "syscard1.pce";
      else if (strcmp(var.value, "Games Express") == 0)
         setting_pce_fast_cdbios = "gexpress.pce";
      else if (strcmp(var.value, "System Card 3 US") == 0)
         setting_pce_fast_cdbios = "syscard3u.pce";
      else if (strcmp(var.value, "System Card 2 US") == 0)
         setting_pce_fast_cdbios = "syscard2u.pce";

   }

   var.key = "pce_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_nospritelimit = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_nospritelimit = 1;
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
      setting_initial_scanline = atoi(var.value);
   }

   var.key = "pce_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_last_scanline = atoi(var.value);
   }

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
   
   char pce_sound_channel_volume_base_str[] = "pce_sound_channel_0_volume";
   var.key = pce_sound_channel_volume_base_str;
   for (unsigned c = 0; c < 6; c++) {;
       pce_sound_channel_volume_base_str[18] = c+'0';
       if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
       {
           psg_channels_volume[c] = atoi(var.value);
       }
   }
 
   // Set Turbo_Toggling
   var.key = "pce_turbo_toggling";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "enabled") == 0)
         Turbo_Toggling = 1;
      else
         Turbo_Toggling = 0;
   }

   // Set TURBO_DELAY
   var.key = "pce_turbo_delay";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      Turbo_Delay = atoi(var.value);
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

   var.key = "pce_disable_softreset";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      disable_softreset = (strcmp(var.value, "enabled") == 0);
   }
   
   var.key = "pce_mouse_sensitivity";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      mouse_sensitivity = atof(var.value);
   }

   var.key = "pce_fast_palette";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "Composite") == 0)
         use_palette = true;
      else
         use_palette = false;
   }
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

   check_variables();

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
   for (unsigned i = 0; i < MAX_PLAYERS; i++) {
      input_type[i] = RETRO_DEVICE_JOYPAD;
      PCEINPUT_SetInput(i, "gamepad", (uint8_t*)&input_buf[i][0]);
   }

   VDC_SetPixelFormat(NULL, 0);

   struct retro_memory_descriptor descs[8];
   struct retro_memory_map        mmaps;
   int i = 0;

   memset(descs, 0, sizeof(descs));

   descs[i].ptr    = (uint8_t*)BaseRAM;
   descs[i].start  = 0xf8 * 8192;
   descs[i].len    = 8192;
   descs[i].select = 0xFFFFE000;
   i++;

   if (IsPopulous)
   {
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x40 * 8192);
      descs[i].start  = 0x40 * 8192;
      descs[i].len    = 8192 * 4;
      i++;
   }
   else
   {
      descs[i].ptr    = (uint8_t*)SaveRAM;
      descs[i].start  = 0xf7 * 8192;
      descs[i].len    = 2048;
      i++;
   }

   if (PCE_IsCD)
   {
      // Super System Card RAM
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x68 * 8192);
      descs[i].start  = 0x68 * 8192;
      descs[i].len    = 8192 * 24;
      descs[i].select = 0xFFFD0000;
      i++;

      // CD RAM
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x80 * 8192);
      descs[i].start  = 0x80 * 8192;
      descs[i].len    = 8192 * 8;
      descs[i].select = 0xFFFF0000;
      i++;
   }
   
   for (unsigned c = 0; c < 6; c++) {
       psg->SetChannelUserVolume(c, psg_channels_volume[c]);
   }

   mmaps.descriptors = descs;
   mmaps.num_descriptors = i;
   environ_cb(RETRO_ENVIRONMENT_SET_MEMORY_MAPS, &mmaps);

   return game;
}

void retro_unload_game(void)
{
   if(!MDFNGameInfo)
      return;

   MDFN_FlushGameCheats(0);

   CloseGame();

   MDFNMP_Kill();

   MDFNGameInfo = NULL;

   for(unsigned i = 0; i < CDInterfaces.size(); i++)
      delete CDInterfaces[i];
   CDInterfaces.clear();
}

static void update_input(void)
{
   unsigned i,j;
   int16_t joy_bits[MAX_PLAYERS] = {0};

   static int turbo_map[]     = { -1,-1,-1,-1,-1,-1,-1,-1, 1, 0,-1,-1,-1,-1,-1 };
   static int turbo_map_alt[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1, 1, 0 };
   int *turbo_map_selected    = (!turbo_toggle_alt ? turbo_map : turbo_map_alt);
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

   for (j = 0; j < MAX_PLAYERS; j++)
   {
      if (libretro_supports_bitmasks)
         joy_bits[j] = input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
      else
      {
         for (i = 0; i < (RETRO_DEVICE_ID_JOYPAD_R3+1); i++)
            joy_bits[j] |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, i) ? (1 << i) : 0;
      }
   }

   for (unsigned j = 0; j < MAX_PLAYERS; j++)
   {
      switch (input_type[j])
      {
      case RETRO_DEVICE_JOYPAD:
      {
         uint16_t input_state = 0;

         // read normal inputs
         for (unsigned i = 0; i < MAX_BUTTONS; i++)
         {
            input_state |= (joy_bits[j] & (1 << map[i])) ? (1 << i) : 0;

            // disable soft reset
            if (disable_softreset == true)
               if ((input_state & 0xC) == 0xC) input_state &= ~0xC;

            // handle turbo buttons
            if (turbo_enable[j][i] == 1)                    // Check whether a given button is turbo-capable
            {
               if (input_state & (1 << i))
               {
                  if (turbo_counter[j][i] < 2)              // Some PCE games needs 2 frames to react to button presses, so
                     input_state |= 1 << i;                 // trigger turbo button at counter 0 and 1
                  else
                     input_state &= ~(1 << i);
                  turbo_counter[j][i]++;                    // Counter is incremented by 1
                  if (turbo_counter[j][i] > Turbo_Delay)    // When the counter exceeds turbo delay, reset counter to zero
                     turbo_counter[j][i] = 0;
               }
               else
                  turbo_counter[j][i] = 0;                  // Reset counter if button is not pressed.
            }
            else
               turbo_counter[j][i] = 0;                     // Reset counter if button is not pressed.

            // handle 2/6 button mode switching
            if (turbo_map_selected[i] != -1 && Turbo_Toggling && !AVPad6Enabled[j])
            {
               if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, map[i]))
               {
                  if (turbo_toggle_down[j][i] == 0)
                  {
                     turbo_toggle_down[j][i] = 1;
                     turbo_enable[j][turbo_map_selected[i]] = turbo_enable[j][turbo_map_selected[i]] ^ 1;
                     MDFN_DispMessage("Pad %i Button %s Turbo %s", j + 1,
                        i == (!turbo_toggle_alt ? 9 : 14) ? "I" : "II",
                        turbo_enable[j][turbo_map_selected[i]] ? "ON" : "OFF" );
                  }
               }
               else turbo_toggle_down[j][i] = 0;
            }
         }

         // Input data must be little endian.
         input_buf[j][0] = (input_state >> 0) & 0xff;
         input_buf[j][1] = (input_state >> 8) & 0xff;
      } break;

      case RETRO_DEVICE_MOUSE:
      {
         int16_t raw_x = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_X);
         int16_t raw_y = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_Y);

         int16_t x = (int16_t)roundf((float)raw_x * mouse_sensitivity);
         int16_t y = (int16_t)roundf((float)raw_y * mouse_sensitivity);

         input_buf[j][0] = (x >> 0) & 0xff;
         input_buf[j][1] = (x >> 8) & 0xff;
         input_buf[j][2] = (y >> 0) & 0xff;
         input_buf[j][3] = (y >> 8) & 0xff;

         input_buf[j][4] = 0;

         // left mouse button
         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_LEFT))
            input_buf[j][4] |= (1 << 0);

         // right mouse button
         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_RIGHT))
            input_buf[j][4] |= (1 << 1);

         // select
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT))
            input_buf[j][4] |= (1 << 2);

         // start
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START) ||
             input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_MIDDLE))
            input_buf[j][4] |= (1 << 3);
      } break;
      } // case
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
   system_av_info.geometry.aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO * ((float) MEDNAFEN_CORE_GEOMETRY_BASE_H / height);
   environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &system_av_info);
}

void retro_run(void)
{
   MDFNGI *curgame = (MDFNGI*)game;

   input_poll_cb();

   update_input();

   static bool last_palette_format;
   static int16_t sound_buf[0x10000];
   static int32_t rects[FB_HEIGHT];
   static unsigned width, height;
   bool resolution_changed = false;

   rects[0] = ~0;

   EmulateSpecStruct spec = { 0 };
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
   spec.CustomPalette      = use_palette ? composite_palette : NULL;
   spec.CustomPaletteNumEntries = use_palette ? 512 : 0;
   
   if (last_palette_format != use_palette)
   {
      spec.VideoFormatChanged = TRUE;
      last_palette_format = use_palette;
   }

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

   if (width  != spec.DisplayRect.w || height != spec.DisplayRect.h)
      resolution_changed = true;

   width  = spec.DisplayRect.w;
   height = spec.DisplayRect.h;
   video_cb(surf->pixels + surf->pitch * spec.DisplayRect.y, width, height, FB_WIDTH * 2);

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
   {
      check_variables();
      if(PCE_IsCD){
            psg->SetVolume(0.678 * setting_pce_fast_cdpsgvolume / 100);
      }
      
       for (unsigned c = 0; c < 6; c++) {
           psg->SetChannelUserVolume(c, psg_channels_volume[c]);
       }

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

   libretro_supports_bitmasks = false;
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
   if (in_port > 4)
      return;

   // Filter out other device types, otherwise we can
   // accidentally skip devices like joypad+analog.
   device &= RETRO_DEVICE_JOYPAD | RETRO_DEVICE_MOUSE;

   switch(device)
   {
      case RETRO_DEVICE_JOYPAD:
         input_type[in_port] = RETRO_DEVICE_JOYPAD;
         PCEINPUT_SetInput(in_port, "gamepad", (uint8_t*)&input_buf[in_port][0]);
         break;
      case RETRO_DEVICE_MOUSE:
         input_type[in_port] = RETRO_DEVICE_MOUSE;
         PCEINPUT_SetInput(in_port, "mouse", (uint8_t*)&input_buf[in_port][0]);
         break;
      default:
         input_type[in_port] = RETRO_DEVICE_NONE;
         break;
   }
}

void retro_set_environment(retro_environment_t cb)
{
   struct retro_vfs_interface_info vfs_iface_info;
   environ_cb = cb;

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

   libretro_set_core_options(cb);
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
            return (uint8_t*)(ROMSpace + 0x40 * 8192);
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
         return 8192;
      default:
         break;
   }

   return 0;
}

void retro_cheat_reset(void)
{
   MDFN_FlushGameCheats(0);
}

void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
   char name[256];
   char temp[256];
   char *codepart;

   if (code == NULL)
      return;

   sprintf(name, "N/A");
   strcpy(temp, code);
   codepart = strtok(temp, "+,;._ ");

   while (codepart)
   {
      // Cheat references are based on
      // https://gamehacking.org/system/pce
      // https://gamehacking.org/system/pcd
      //
      // accepts 1Fxxxx:xx raw format (ram)      
      // accepts 10xxxx:xx raw format (cd-ram)
      // accepts F8xxxx:xx physical address format (ram)
      if ((strlen(codepart) == 9) && (codepart[6]==':'))
      {
         uint32 a;
         uint64 v;

         codepart[6] = '\0';

         a = strtoul(codepart, NULL, 16);
         v = strtoul(codepart + 7, NULL, 16);

         // RAM region (0x1F0000 - 0x1F2000)
         //translate physical address to raw address format
         if ((a & 0xFFE000) == 0xF82000)
         {
            a &= 0x1FFF;
            a |= 0x1F0000;
         }

         // CD-RAM region (0x100000 - 0x110000)
         // translate physical address to raw address format
         // this is just guess-work and assumed the target address is always 0x10Axxx,
         // better use raw formats if possible
         if ((a & 0xFFC000) == 0x80C000)
         {
            a &= 0x1FFF;
            a |= 0x10A000;
         }
         
         // only accept codes in of valid address range
         // raw address = 0x1F0000 - 0x1F1FFF or physical address 0xF82xxx - 0xF83xxx (RAM) 
         // raw address = 0x0D0000 - 0x10FFFF (SYSTEM CARD RAM / CD-RAM)
         if (((a >= 0x1F0000) && (a < 0x1F2000)) ||  // main RAM
            ((a >= 0x100000) && (a < 0x110000))  ||  // CD RAM
            ((a >= 0x00D000) && (a < 0x10FFFF)))     // System Card RAM
         {
            if (!MDFNI_AddCheat(name, a, v, 0, 'R', 1, 0))
               log_cb(RETRO_LOG_DEBUG, "Failed to set code: '%s:%02x'\n", codepart,v);
            else
               log_cb(RETRO_LOG_DEBUG, "Code set: '%s:%02x'\n", codepart,v);
         }
         else
            log_cb(RETRO_LOG_DEBUG, "Invalid or unknown code: '%s:%02x'\n", codepart,v);
         /* log_cb(RETRO_LOG_DEBUG, "address=%08x v=%02x\n", a, v); */
      }
      else
         log_cb(RETRO_LOG_DEBUG, "Invalid or unknown code: '%s'\n", codepart);
      codepart = strtok(NULL,"+,;._ ");
   }
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
   free(str);
}

extern "C" void MDFN_DispMessage(const char *format, ...)
{
   va_list ap;
   struct retro_message msg;
   const char *strc = NULL;
   char *str        = (char*)malloc(4096 * sizeof(char));

   va_start(ap,format);

   vsnprintf(str, 4096, format,ap);
   va_end(ap);
   strc       = str;

   msg.frames = 180;
   msg.msg    = strc;

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
   free(str);
}
