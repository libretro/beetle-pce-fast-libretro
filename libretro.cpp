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

#ifdef __PS3__
using namespace std;
#endif

std::string retro_base_directory;

#define MEDNAFEN_CORE_NAME_MODULE "pce_fast"
#define MEDNAFEN_CORE_NAME "Beetle PCE Fast"
#define MEDNAFEN_CORE_VERSION "v1.31.0.0"
#define MEDNAFEN_CORE_EXTENSIONS "pce|cue|ccd|chd|toc|m3u"
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

static bool cdimagecache = false;
static bool use_palette = false;

std::string setting_pce_fast_cdbios = "syscard3.pce";

static int16_t sound_buf[0x10000];

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

bool PCE_ACEnabled = false;

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
 return(0xFF);
}

static DECLFW(PCENullWrite)
{
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

#if defined(__GNUC__) || defined(__clang__) || defined(__ICC) || defined(__INTEL_COMPILER) 
 #define PCEF_CASEL(label, caseval) label
#else
 #define PCEF_CASEL(label, caseval) case (caseval)
#endif

static DECLFR(IORead)
{
   A &= 0x1FFF;

#if defined(__GNUC__) || defined(__clang__) || defined(__ICC) || defined(__INTEL_COMPILER) 
   const void * const IOReadHandlers[0x20] =
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

   goto *IOReadHandlers[((A & 0x1C00) >> 8) | (A & 0x3)];
#else
   switch(((A & 0x1C00) >> 8) | (A & 0x3))
#endif
   {
      PCEF_CASEL(VDC_00, 0x00):
         HuC6280_StealCycle();
         return(VDC_Read(0));

      PCEF_CASEL(VDC_01, 0x01):
         HuC6280_StealCycle();
         return(VDC_Read(1));

      PCEF_CASEL(VDC_02, 0x02):
         HuC6280_StealCycle();
         return(VDC_Read(2));

      PCEF_CASEL(VDC_03, 0x03):
         HuC6280_StealCycle();
         return(VDC_Read(3));

      PCEF_CASEL(VCE_00, 0x04):
      PCEF_CASEL(VCE_01, 0x05):
      PCEF_CASEL(VCE_02, 0x06):
      PCEF_CASEL(VCE_03, 0x07):
      HuC6280_StealCycle();
         return(VCE_Read(A));

      PCEF_CASEL(PSG_00, 0x08):
      PCEF_CASEL(PSG_01, 0x09):
      PCEF_CASEL(PSG_02, 0x0A):
      PCEF_CASEL(PSG_03, 0x0B):
         if(HuCPU.in_block_move)
            return(0);
         return(PCEIODataBuffer);

      PCEF_CASEL(TIMER_00, 0x0C):
      PCEF_CASEL(TIMER_01, 0x0D):
      PCEF_CASEL(TIMER_02, 0x0E):
      PCEF_CASEL(TIMER_03, 0x0F):
         if(HuCPU.in_block_move)
            return(0);
      {
         uint8 ret       = HuC6280_TimerRead(A);
         PCEIODataBuffer = ret;
         return(ret);
      }

      PCEF_CASEL(INPUT_00, 0x10):
      PCEF_CASEL(INPUT_01, 0x11):
      PCEF_CASEL(INPUT_02, 0x12):
      PCEF_CASEL(INPUT_03, 0x13):
         if(HuCPU.in_block_move)
            return(0);
      {
         uint8 ret = INPUT_Read(A);
         PCEIODataBuffer = ret;
         return(ret);
      }

      PCEF_CASEL(IRQ_00, 0x14):
      PCEF_CASEL(IRQ_01, 0x15):
      PCEF_CASEL(IRQ_02, 0x16):
      PCEF_CASEL(IRQ_03, 0x17):
         if(HuCPU.in_block_move)
            return(0);
      {
         uint8 ret = HuC6280_IRQStatusRead(A);
         PCEIODataBuffer = ret;
         return(ret);
      }

      PCEF_CASEL(CDROM_00, 0x18):
      PCEF_CASEL(CDROM_01, 0x19):
      PCEF_CASEL(CDROM_02, 0x1A):
      PCEF_CASEL(CDROM_03, 0x1B):
         if(!PCE_IsCD)
            return(0xFF);

      if((A & 0x1E00) == 0x1A00)
      {
         if(arcade_card)
            return(arcade_card->Read(A & 0x1FFF, false));
         return(0);
      }
      return(PCECD_Read(HuCPU.timestamp * 3, A));

      PCEF_CASEL(EXP_00, 0x1C):
      PCEF_CASEL(EXP_01, 0x1D):
      PCEF_CASEL(EXP_02, 0x1E):
      PCEF_CASEL(EXP_03, 0x1F):
#ifdef HAVE_HES
         if(IsHES)
            return(ReadIBP(A));
#endif
      return(0xFF);
   }
}

static DECLFW(IOWrite)
{
   A &= 0x1FFF;

   switch(A >> 10)
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
         psg->Write(HuCPU.timestamp / pce_overclocked, A, V);
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
         if(!PCE_IsCD)
            break;

         if((A & 0x1E00) == 0x1A00)
         {
            if(arcade_card)
               arcade_card->Write(A & 0x1FFF, V);
         }
         else
            PCECD_Write(HuCPU.timestamp * 3, A, V);
         break;

      case 7:
         break;	// Expansion.
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

   return(PCECD_Init(&cd_settings, PCECDIRQCB, PCE_MASTER_CLOCK, pce_overclocked, &sbuf[0], &sbuf[1]));
}

static int LoadCommon(void);
static void LoadCommonPre(void);

static int HuCLoad(const uint8 *data, uint32 len, uint32 crc32)
{
   int x;
   uint32 crc = 0;
   uint32 sf2_threshold     = 2048 * 1024;
   uint32 sf2_required_size = 2048 * 1024 + 512 * 1024;
   uint32 m_len             = (len + 8191)&~8191;
   bool sf2_mapper          = false;

   if(m_len >= sf2_threshold)
   {
      sf2_mapper              = true;

      if(m_len != sf2_required_size)
         m_len = sf2_required_size;
   }

   IsPopulous = 0;
   PCE_IsCD = 0;

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

   for(x = 0x00; x < 0x80; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
   }

   if(!memcmp(HuCROM + 0x1F26, "POPULOUS", strlen("POPULOUS")))
   {
      uint8 *PopRAM = ROMSpace + 0x40 * 8192;

      memset(PopRAM, 0xFF, 32768);

      IsPopulous = 1;

      for(x = 0x40; x < 0x44; x++)
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
   /* Street Fighter 2 Mapper */
   if(sf2_mapper)
   {
      for(x = 0x40; x < 0x80; x++)
         HuCPU.PCERead[x] = HuCSF2Read;
      HuCPU.PCEWrite[0] = HuCSF2Write;
      HuCSF2Latch = 0;
   }

   return(1);
}

static int Load(const uint8_t *data, size_t size)
{
   int x;
   uint32 headerlen = 0;
   uint32 r_size;

   LoadCommonPre();

   if(size & 0x200) // 512 byte header!
      headerlen = 512;

   r_size = size - headerlen;
   if(r_size > 4096 * 1024) r_size = 4096 * 1024;

   for(x = 0; x < 0x100; x++)
   {
      HuCPU.PCERead[x] = PCEBusRead;
      HuCPU.PCEWrite[x] = PCENullWrite;
   }

   uint32 crc = encoding_crc32(0, data + headerlen, size - headerlen);

   HuCLoad(data + headerlen, size - headerlen, crc);

   if(crc == 0xfae0fc60)
      OrderOfGriffonFix = true;

   return(LoadCommon());
}

static void LoadCommonPre(void)
{
   int x;
   HuC6280_Init();

   // FIXME:  Make these globals less global!
   pce_overclocked = MDFN_GetSettingUI("pce_fast.ocmultiplier");
   PCE_ACEnabled   = MDFN_GetSettingB("pce_fast.arcadecard");

   for(x = 0; x < 0x100; x++)
   {
      HuCPU.PCERead[x] = PCEBusRead;
      HuCPU.PCEWrite[x] = PCENullWrite;
   }

   MDFNMP_Init(1024, (1 << 21) / 1024);
}

static int LoadCommon(void)
{
   int x;
   VDC_Init();

   {
      HuCPU.PCERead[0xF8] = BaseRAMRead;
      HuCPU.PCERead[0xF9] = HuCPU.PCERead[0xFA] = HuCPU.PCERead[0xFB] = BaseRAMRead_Mirrored;

      HuCPU.PCEWrite[0xF8] = BaseRAMWrite;
      HuCPU.PCEWrite[0xF9] = HuCPU.PCEWrite[0xFA] = HuCPU.PCEWrite[0xFB] = BaseRAMWrite_Mirrored;

      for(x = 0xf8; x < 0xfb; x++)
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

      psg->SetVolume(0.678 * cdpsgvolume / 100);
   }

   PCEINPUT_Init();

   PCE_Power();

   return(1);
}

#ifdef _WIN32
static void sanitize_path(std::string &path)
{
   size_t i;
   size_t size = path.size();
   for (i = 0; i < size; i++)
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
   int x;
   MDFNFILE *fp = file_open(bios_path);

   if(!fp)
      return(0);

   memset(ROMSpace, 0xFF, 262144);

   memcpy(ROMSpace, fp->data + (fp->size & 512), ((fp->size & ~512) > 262144) ? 262144 : (fp->size &~ 512) );

   if (fp)
      file_close(fp);
   fp = NULL;

   PCE_IsCD = 1;
   PCE_InitCD();

   for(x = 0; x < 0x40; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
   }

   for(x = 0x68; x < 0x88; x++)
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
         Cleanup();
         return(0);
      }

      for(x = 0x40; x < 0x44; x++)
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

 if(espec->VideoFormatChanged)
  VDC_SetPixelFormat(espec->CustomPalette, espec->CustomPaletteNumEntries);

 VDC_RunFrame(espec, false);

 if(PCE_IsCD)
 {
  PCECD_Run(HuCPU.timestamp * 3);
 }

 psg->EndFrame(HuCPU.timestamp / pce_overclocked);

 {
  uint8_t y;
  for(y = 0; y < 2; y++)
  {
     Blip_Buffer_end_frame(&sbuf[y], HuCPU.timestamp / pce_overclocked);
     espec->SoundBufSize = Blip_Buffer_read_samples(&sbuf[y],
		     espec->SoundBuf + y,
		     sizeof(sound_buf) >> 1);
  }
 }

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

   int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

   ret &= HuC6280_StateAction(sm, load, data_only);
   ret &= VDC_StateAction(sm, load, data_only);
   ret &= psg->StateAction(sm, load, data_only);
   ret &= INPUT_StateAction(sm, load, data_only);
   ret &= HuC_StateAction(sm, load, data_only);

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
   int x;
   if(memcmp(SaveRAM, BRAM_Init_String, 8)) // HUBM string is modified/missing
      return(1);

   for(x = 8; x < 2048; x++)
      if(SaveRAM[x]) return(1);

   return(0);
}

static void ReadM3U(std::vector<std::string> &file_list, std::string path, unsigned depth = 0)
{
   std::string dir_path;
   char linebuf[2048];
   RFILE *fp = filestream_open(path.c_str(), RETRO_VFS_FILE_ACCESS_READ,
         RETRO_VFS_FILE_ACCESS_HINT_NONE);

   if (!fp)
      return;

   MDFN_GetFilePathComponents(path, &dir_path);

   while(filestream_gets(fp, linebuf, sizeof(linebuf)) != NULL)
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
            goto end;
         }

         if(depth == 99)
         {
            log_cb(RETRO_LOG_ERROR, "M3U load recursion too deep!\n");
            goto end;
         }

         ReadM3U(file_list, efp, depth++);
      }
      else
         file_list.push_back(efp);
   }

end:
   filestream_close(fp);
}

 static std::vector<CDIF *> CDInterfaces;	// FIXME: Cleanup on error out.
// TODO: LoadCommon()

static bool MDFNI_LoadCD(const char *path, const char *ext)
{
   bool ret = false;

   if (!path || !ext)
   {
      log_cb(RETRO_LOG_ERROR, "Error opening CD - invalid path\n");
      return false;
   }

   log_cb(RETRO_LOG_INFO, "Loading %s...\n\n", path);

   if(!strcasecmp(ext, "m3u"))
   {
      std::vector<std::string> file_list;

      ReadM3U(file_list, path);

      for(unsigned i = 0; i < file_list.size(); i++)
      {
         CDIF *cdif = CDIF_Open(file_list[i].c_str(), cdimagecache);
         CDInterfaces.push_back(cdif);
      }
   }
   else
   {
      CDIF *cdif = CDIF_Open(path, cdimagecache);

      if (cdif)
      {
         ret = true;
         CDInterfaces.push_back(cdif);
      }
   }

   if (!ret)
   {
      log_cb(RETRO_LOG_ERROR, "Error opening CD.\n");
      return false;
   }

   if(!(LoadCD(&CDInterfaces)))
   {
      unsigned i;
      for(i = 0; i < CDInterfaces.size(); i++)
         delete CDInterfaces[i];
      CDInterfaces.clear();

      return false;
   }

   //MDFNI_SetLayerEnableMask(~0ULL);

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   return true;
}

static bool MDFNI_LoadGame(const char *path, const char *ext,
      const uint8_t *data, size_t size)
{
   MDFNFILE *GameFile          = NULL;
   const uint8_t *content_data = NULL;
   size_t content_size         = 0;

   if(ext &&
      (!strcasecmp(ext, "cue") ||
       !strcasecmp(ext, "ccd") ||
       !strcasecmp(ext, "chd") ||
       !strcasecmp(ext, "toc") ||
       !strcasecmp(ext, "m3u")))
      return MDFNI_LoadCD(path, ext);

   /* Check whether we already have a valid
    * data buffer */
   if (data)
   {
      content_data = data;
      content_size = size;
   }
   else
   {
      if (!path)
      {
         log_cb(RETRO_LOG_ERROR, "Error loading content - invalid path\n");
         goto error;
      }

      /* Load content from file */
      GameFile = file_open(path);

      if(!GameFile)
         goto error;

      content_data = GameFile->data;
      content_size = GameFile->size;
   }

   if(Load(content_data, content_size) <= 0)
      goto error;

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   if (GameFile)
      file_close(GameFile);
   return true;

error:
   if (GameFile)
      file_close(GameFile);
   return false;
}

static uint8 lastchar = 0;

struct retro_perf_callback perf_cb;
retro_get_cpu_features_t perf_get_cpu_features_cb = NULL;
retro_log_printf_t log_cb;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;

static bool libretro_supports_option_categories = false;
static bool libretro_supports_bitmasks = false;

static MDFN_Surface *surf = NULL;

static bool failed_init = false;

static unsigned video_width = 0;
static unsigned video_height = 0;

static uint64_t video_frames = 0;
static uint64_t audio_frames = 0;

#include "mednafen/pce_fast/pcecd.h"

/* Frameskipping Support */

static unsigned frameskip_type             = 0;
static unsigned frameskip_threshold        = 0;
static uint16_t frameskip_counter          = 0;

static bool retro_audio_buff_active        = false;
static unsigned retro_audio_buff_occupancy = 0;
static bool retro_audio_buff_underrun      = false;
/* Maximum number of consecutive frames that
 * can be skipped */
#define FRAMESKIP_MAX 30

static unsigned audio_latency              = 0;
static bool update_audio_latency           = false;

static void retro_audio_buff_status_cb(
      bool active, unsigned occupancy, bool underrun_likely)
{
   retro_audio_buff_active    = active;
   retro_audio_buff_occupancy = occupancy;
   retro_audio_buff_underrun  = underrun_likely;
}

static void init_frameskip(void)
{
   if (frameskip_type > 0)
   {
      struct retro_audio_buffer_status_callback buf_status_cb;

      buf_status_cb.callback = retro_audio_buff_status_cb;
      if (!environ_cb(RETRO_ENVIRONMENT_SET_AUDIO_BUFFER_STATUS_CALLBACK,
            &buf_status_cb))
      {
         if (log_cb)
            log_cb(RETRO_LOG_WARN, "Frameskip disabled - frontend does not support audio buffer status monitoring.\n");

         retro_audio_buff_active    = false;
         retro_audio_buff_occupancy = 0;
         retro_audio_buff_underrun  = false;
         audio_latency              = 0;
      }
      else
      {
         /* Frameskip is enabled - increase frontend
          * audio latency to minimise potential
          * buffer underruns */
         float frame_time_msec = 1000.0f / (float)MEDNAFEN_CORE_TIMING_FPS;

         /* Set latency to 6x current frame time... */
         audio_latency = (unsigned)((6.0f * frame_time_msec) + 0.5f);

         /* ...then round up to nearest multiple of 32 */
         audio_latency = (audio_latency + 0x1F) & ~0x1F;
      }
   }
   else
   {
      environ_cb(RETRO_ENVIRONMENT_SET_AUDIO_BUFFER_STATUS_CALLBACK, NULL);
      audio_latency = 0;
   }

   update_audio_latency = true;
}

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

   libretro_supports_bitmasks = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      libretro_supports_bitmasks = true;

   frameskip_type             = 0;
   frameskip_threshold        = 0;
   frameskip_counter          = 0;
   retro_audio_buff_active    = false;
   retro_audio_buff_occupancy = 0;
   retro_audio_buff_underrun  = false;
   audio_latency              = 0;
   update_audio_latency       = false;

   video_width = 0;
   video_height = 0;
   video_frames = 0;
   audio_frames = 0;

   lastchar = 0;
   failed_init = false;
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

static void check_variables(bool first_run)
{
   struct retro_variable var = {0};
   unsigned frameskip_type_prev;

   if (first_run)
   {
      var.key      = "pce_fast_cdimagecache";
      cdimagecache = false;

      if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
         if (strcmp(var.value, "enabled") == 0)
            cdimagecache = true;

      var.key                 = "pce_fast_cdbios";
      setting_pce_fast_cdbios = "syscard3.pce";

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
   }

   var.key = "pce_fast_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_nospritelimit = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_nospritelimit = 1;
   }

   var.key = "pce_fast_ocmultiplier";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_overclocked = atoi(var.value);
   }

   var.key             = "pce_fast_frameskip";
   var.value           = NULL;
   frameskip_type_prev = frameskip_type;
   frameskip_type      = 0;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "auto") == 0)
         frameskip_type = 1;
      else if (strcmp(var.value, "manual") == 0)
         frameskip_type = 2;
   }

   /* Reinitialise frameskipping, if required */
   if (first_run || (frameskip_type != frameskip_type_prev))
      init_frameskip();

   var.key             = "pce_fast_frameskip_threshold";
   var.value           = NULL;
   frameskip_threshold = 33;

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      frameskip_threshold = strtol(var.value, NULL, 10);

	var.key = "pce_fast_hoverscan";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_hoverscan = atoi(var.value);
   }

   var.key = "pce_fast_initial_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_initial_scanline = atoi(var.value);
   }

   var.key = "pce_fast_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_last_scanline = atoi(var.value);
   }

   bool do_cdsettings = false;
   var.key = "pce_fast_cddavolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_cddavolume = atoi(var.value);
   }

   var.key = "pce_fast_adpcmvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_adpcmvolume = atoi(var.value);
   }

   var.key = "pce_fast_cdpsgvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      do_cdsettings = true;
      setting_pce_fast_cdpsgvolume = atoi(var.value);
   }

   var.key = "pce_fast_cdspeed";

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
   
   char pce_sound_channel_volume_base_str[] = "pce_fast_sound_channel_0_volume";
   var.key = pce_sound_channel_volume_base_str;
   for (unsigned c = 0; c < 6; c++) {;
       pce_sound_channel_volume_base_str[23] = c+'0';
       if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
       {
           psg_channels_volume[c] = atoi(var.value);
       }
   }
 
   // Set Turbo_Toggling
   var.key = "pce_fast_turbo_toggling";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "enabled") == 0)
         Turbo_Toggling = 1;
      else
         Turbo_Toggling = 0;
   }

   // Set TURBO_DELAY
   var.key = "pce_fast_turbo_delay";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      Turbo_Delay = atoi(var.value);
   }

   //  False sets turbo hotkey X/Y, true assigns hotkey to L3/R3
   var.key = "pce_fast_turbo_toggle_hotkey";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "enabled") == 0)
         turbo_toggle_alt = true;
      else
         turbo_toggle_alt = false;
   }

   var.key = "pce_fast_disable_softreset";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      disable_softreset = (strcmp(var.value, "enabled") == 0);
   }
   
   var.key = "pce_fast_mouse_sensitivity";

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
   uint8_t y;
   unsigned c;
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

   const struct retro_game_info_ext *info_ext = NULL;
   const uint8_t *content_data                = NULL;
   size_t content_size                        = 0;
   const char *content_path                   = NULL;
   char content_ext[8];

   content_ext[0] = '\0';

   if (failed_init)
      return false;

   /* Attempt to fetch extended game info */
   if (environ_cb(RETRO_ENVIRONMENT_GET_GAME_INFO_EXT, &info_ext))
   {
      content_data = (const uint8_t *)info_ext->data;
      content_size = info_ext->size;

      /* Content path information is only required
       * if we do not have a valid data buffer */
      if (!content_data)
      {
         content_path = info_ext->full_path;

         strncpy(content_ext, info_ext->ext, sizeof(content_ext));
         content_ext[sizeof(content_ext) - 1] = '\0';
      }
   }
   else
   {
      const char *ext = NULL;

      if (!info || !info->path)
         return false;

      content_data = NULL;
      content_size = 0;
      content_path = info->path;

      if ((ext = strrchr(info->path, '.')))
      {
         strncpy(content_ext, ext + 1, sizeof(content_ext));
         content_ext[sizeof(content_ext) - 1] = '\0';
      }
   }

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);

   check_variables(true);

   if (!MDFNI_LoadGame(content_path, content_ext,
         content_data, content_size))
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
   
   for (c = 0; c < 6; c++)
       psg->SetChannelUserVolume(c, psg_channels_volume[c]);

   mmaps.descriptors = descs;
   mmaps.num_descriptors = i;
   environ_cb(RETRO_ENVIRONMENT_SET_MEMORY_MAPS, &mmaps);

   for(y = 0; y < 2; y++)
   {
     Blip_Buffer_set_sample_rate(&sbuf[y],
           44100, 50);
     Blip_Buffer_set_clock_rate(&sbuf[y], (long)(PCE_MASTER_CLOCK / 3));
     Blip_Buffer_bass_freq(&sbuf[y], 10);
   }

   return true;
}

void retro_unload_game(void)
{
   unsigned i;

   MDFN_FlushGameCheats(0);

   CloseGame();

   MDFNMP_Kill();

   for(i = 0; i < CDInterfaces.size(); i++)
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
   static bool last_palette_format;
   EmulateSpecStruct spec;
   bool resolution_changed = false;
   int skip_frame          = 0;

   input_poll_cb();

   update_input();

   /* Check whether current frame should
    * be skipped
    * > Note: Cannot skip the first frame,
    *   since we need at least one rendered
    *   frame in order to set initial (valid)
    *   width/height values for the video_cb
    *   callback */
   if ((frameskip_type > 0) &&
       retro_audio_buff_active &&
       video_frames)
   {
      switch (frameskip_type)
      {
         case 1: /* auto */
            skip_frame = retro_audio_buff_underrun ? 1 : 0;
            break;
         case 2: /* manual */
            skip_frame = (retro_audio_buff_occupancy < frameskip_threshold) ? 1 : 0;
            break;
         default:
            skip_frame = 0;
            break;
      }

      if (!skip_frame ||
          (frameskip_counter >= FRAMESKIP_MAX))
      {
         skip_frame        = 0;
         frameskip_counter = 0;
      }
      else
         frameskip_counter++;
   }

   /* If frameskip settings have changed, update
    * frontend audio latency */
   if (update_audio_latency)
   {
      environ_cb(RETRO_ENVIRONMENT_SET_MINIMUM_AUDIO_LATENCY,
            &audio_latency);
      update_audio_latency = false;
   }

   spec.surface                 = surf;
   spec.VideoFormatChanged      = false;
   spec.DisplayRect.x           = 0;
   spec.DisplayRect.y           = 0;
   spec.DisplayRect.w           = 0;
   spec.DisplayRect.h           = 0;
   spec.CustomPalette           = use_palette ? composite_palette : NULL;
   spec.CustomPaletteNumEntries = use_palette ? 512 : 0;
   spec.InterlaceOn             = false;
   spec.InterlaceField          = false;
   spec.skip                    = skip_frame;
   spec.SoundBuf                = sound_buf;
   spec.SoundBufSize            = 0;

   if (last_palette_format != use_palette)
   {
      spec.VideoFormatChanged = true;
      last_palette_format = use_palette;
   }

   Emulate(&spec);

   if (skip_frame)
      video_cb(NULL, video_width, video_height, FB_WIDTH * 2);
   else
   {
      if (video_width  != spec.DisplayRect.w || video_height != spec.DisplayRect.h)
         resolution_changed = true;

      video_width  = spec.DisplayRect.w;
      video_height = spec.DisplayRect.h;

      video_cb(surf->pixels + surf->pitch * spec.DisplayRect.y, video_width, video_height, FB_WIDTH * 2);
   }

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);

   bool updated = false;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
   {
      unsigned c;
      check_variables(false);
      if(PCE_IsCD){
         psg->SetVolume(0.678 * setting_pce_fast_cdpsgvolume / 100);
      }

      for (c = 0; c < 6; c++)
         psg->SetChannelUserVolume(c, psg_channels_volume[c]);

      update_geometry(video_width, video_height);
   }
   else if (resolution_changed)
      update_geometry(video_width, video_height);

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

void retro_deinit(void)
{
   if (surf->pixels)
      free(surf->pixels);
   surf->pixels = NULL;

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

   libretro_supports_option_categories = false;
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

   static const struct retro_system_content_info_override content_overrides[] = {
      {
         "pce", /* extensions */
         false, /* need_fullpath */
         false  /* persistent_data */
      },
      { NULL, false, false }
   };

   libretro_supports_option_categories = false;
   libretro_set_core_options(environ_cb,
         &libretro_supports_option_categories);

   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);
   environ_cb(RETRO_ENVIRONMENT_SET_CONTENT_INFO_OVERRIDE, (void*)content_overrides);

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

   return st.len;
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
