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

#ifndef __MDFN_PCE_VCE_H
#define __MDFN_PCE_VCE_H

#include "huc6280.h"
#include <mednafen/hw_video/huc6270/vdc.h>

typedef struct
{
	int pulse;
	int start;
	int width;
	int end;
	int rate;

	int max_rate;
	bool multi_res;
	
	float par;
} vce_resolution_t;

extern vce_resolution_t vce_resolution;


class VCE final
{
public:

	VCE(const bool want_sgfx, const uint32 vram_size = 32768) MDFN_COLD;
	~VCE() MDFN_COLD;

	void SetVDCUnlimitedSprites(const bool nospritelimit);
	void SetShowHorizOS(bool show);
	void SetLayerEnableMask(uint64 mask);

	int StateAction(StateMem *sm, const unsigned load, const bool data_only);

	void SetPixelFormat(const uint8* CustomColorMap, const uint32 CustomColorMapLen);

	void StartFrame(MDFN_Surface *surface, MDFN_Rect *DisplayRect, int32 *LineWidths, int skip);
	bool RunPartial(void);
	void EndFrame(MDFN_Rect *DisplayRect);

	void Update(const int32 timestamp);

	void INLINE ResetTS(int ts_base)
	{
		last_ts = ts_base;
	}

	int INLINE GetScanlineNo(void)
	{
		return(scanline);
	}

	void Reset(const int32 timestamp);

	void Write(uint32 A, uint8 V);
	uint8 Read(uint32 A);

	uint8 ReadVDC(uint32 A);
	void WriteVDC(uint32 A, uint8 V);
	void WriteVDC_ST(uint32 A, uint8 V);

	void IRQChangeCheck(void);

	bool WS_Hook(int32 vdc_cycles);

	void SetCDEvent(const int32 cycles);

	int32 SyncReal(const int32 timestamp);
	
	//
	//
	//
	//
	//
	//

private:

	template<bool TA_SuperGrafx>
	void SyncSub(int32 clocks, bool AwesomeMode);

	void FixPCache(int entry);
	void SetVCECR(uint8 V);
	
	void update_resolution_info(void);
	
	int32 CalcNextEvent(void);
	int32 child_event[2];

	int32 cd_event;

	uint16 *fb;			// Pointer to the framebuffer.
	uint16 pitch32;		// Pitch(in 16-bit pixels)
	bool FrameDone;
	bool ShowHorizOS;
	bool sgfx;

	bool skipframe;
	int32 *LW;
	unsigned chip_count;	// = 1 when sgfx is false, = 2 when sgfx is true

	int32 clock_divider;

	int32 scanline;
	uint16 *scanline_out_ptr;	// Pointer into fb
	int32 pixel_offset;

	int32 hblank_counter;
	int32 vblank_counter;

	bool hblank;	// true if in HBLANK, false if not.
	bool vblank;	// true if in vblank, false if not

	bool NeedSLReset;

	uint8 CR;				// Control Register
	bool lc263;     		// CR->263 line count if set, 262 if not
	bool bw;        		// CR->Black and White
	uint8 dot_clock;		// CR->Dot Clock(5, 7, or 10 MHz = 0, 1, 2/3)
	int32 dot_clock_ratio;	// CR->Dot Clock ratio cache

	int32 ws_counter;

	int32 last_ts;

	//
	// SuperGrafx HuC6202 VPC state
	//
	int32 window_counter[2];
	uint16 winwidths[2];
	uint8 priority[2];
	uint8 st_mode;

	//
	//
	//
	uint16 ctaddress;
	uint32 color_table_cache[0x200 * 2];	// * 2 for user layer disabling stuff.
	uint16 pixel_buffer[2][2048];			// Internal temporary pixel buffers.
	uint16 color_table[0x200];
	uint32 surf_clut[2][512];

	VDC vdc[2];
};

#endif
