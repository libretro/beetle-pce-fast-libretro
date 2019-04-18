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

/*  VCE and VPC emulation */

/*
<_Ki>	So here is what I found today: the /Hblank signal is not affected (at all) by VCE's dot clock selection.
  It seems to be completely fixed;  /HBlank-L-period = 237 x master clock cycles, and /HBlank-H-period = 1128, and 
  that makes h-period = 1365 x master clock cycles as a whole.
*/

#include "pce.h"
#include "huc.h"
#include <mednafen/video.h>
#include "vce.h"
#include <mednafen/hw_video/huc6270/vdc.h>
#include "pcecd.h"
#include <math.h>
#include <mednafen/settings.h>

static const int vce_ratios[4] = { 4, 3, 2, 2 };

static int32 MDFN_FASTCALL NO_INLINE Sync(const int32 timestamp);

static struct
{
	int line;
	int rate;
} dot_scanline[256];

static int dot_scanline_count = 0;
static int max_dot_rate;

static void add_dot_scanline(int scanline, int dot_clock)
{
	if(scanline == 0)
		dot_scanline_count = 0;

	dot_scanline[dot_scanline_count].line = scanline;
	dot_scanline[dot_scanline_count].rate = vce_ratios[dot_clock];

	dot_scanline_count++;
}

static void fix_scanline(uint16_t *fb, uint16_t pitch)
{
	bool multires = false;
	int rate = 0;

	rate = dot_scanline[0].rate;
	for(int lcv = 1; lcv < dot_scanline_count; lcv++)
	{
		if(rate != dot_scanline[lcv].rate)
		{
			multires = true;
			break;
		}
	}

	if(!multires)
	{
		max_dot_rate = rate;
		return;
	}

	
	const int new_rate = 1;  // 1024 mode
		
	for(int lcv = 0; lcv < dot_scanline_count - 1; lcv++)
	{
		int cur_scanline = dot_scanline[lcv].line;
		int next_scanline = dot_scanline[lcv + 1].line;

		while(cur_scanline < next_scanline)
		{
			uint16_t *scanline_ptr = &fb[cur_scanline * pitch];
			int old_rate = dot_scanline[lcv].rate;
			int old_pixel, new_pixel;

			switch(old_rate)
			{
			case 4: old_pixel = 256 - 1; break;
			case 3: old_pixel = 342 - 1; break;
			case 2: old_pixel = 512 - 1; break;
			}

			switch(new_rate)
			{
			case 3: new_pixel = 342 - 1; break;
			case 2: new_pixel = 512 - 1; break;
			case 1: new_pixel = 1024 - 1; break;
			}


			// 341.33333333 * 3 = 1023 + 1 (pixel 342) = 1024
			rate = (old_rate == 3) ? old_rate - new_rate : 0;
			
			while(new_pixel >= 0)
			{
				scanline_ptr[new_pixel--] = scanline_ptr[old_pixel];
				rate += new_rate;								

				if(rate >= old_rate)
				{
					rate -= old_rate;
					old_pixel--;
				}
			}

			cur_scanline++;
		}
	}

	max_dot_rate = new_rate;
}

static void IRQChange_Hook(bool newstatus)
{
	extern VCE *vce; //HORRIBLE
	vce->IRQChangeCheck();
}

bool VCE::WS_Hook(int32 vdc_cycles)
{
	bool ret = true;
	int32 to_steal;

	if(vdc_cycles == -1) // Special event-based wait-stating
		to_steal = CalcNextEvent();
	else
		to_steal = ((vdc_cycles * dot_clock_ratio - clock_divider) + 2) / 3;

	if(to_steal <= 0) // This should never happen.  But in case it does...
	{
		printf("Bad steal: %d; Wanted VDC: %d; Dot clock ratio: %d; Clock divider: %d\n", to_steal, vdc_cycles, dot_clock_ratio, clock_divider);
		to_steal = 1;
	}

	if((to_steal + ws_counter) > 455 * 64)
	{
		printf("WS Over: Wanted: %d, could: %d\n", to_steal, 455 * 64 - ws_counter);
		to_steal = 455 * 64 - ws_counter;

		if(to_steal < 0)
			to_steal = 0;

		ret = false;
	}

	if(to_steal > 0)
	{
		HuCPU.StealCycles(to_steal);
		ws_counter += to_steal;
	}

	return(ret);
}

static bool WS_Hook_(int32 vdc_cycles)
{
	extern VCE *vce;

	return(vce->WS_Hook(vdc_cycles));
}

void VCE::IRQChangeCheck(void)
{
	bool irqtmp = 0;

	for(unsigned chip = 0; chip < chip_count; chip++)
	irqtmp |= vdc[chip].PeekIRQ();

	if(irqtmp)
		HuCPU.IRQBegin(HuC6280::IQIRQ1);
	else
		HuCPU.IRQEnd(HuC6280::IQIRQ1);
}

void VCE::SetShowHorizOS(bool show)
{
	ShowHorizOS = show;
}


VCE::VCE(const bool want_sgfx, const uint32 vram_size)
{
	//printf("%zu\n", (size_t)((uintptr_t)&vdc[0] - (uintptr_t)this));

	ShowHorizOS = false;

	sgfx = want_sgfx;
	chip_count = sgfx ? 2 : 1;

	cd_event = 1;

	fb = NULL;
	pitch32 = 0;

	for(unsigned chip = 0; chip < chip_count; chip++)
	{
		vdc[chip].SetVRAMSize(vram_size);
		vdc[chip].SetIRQHook(IRQChange_Hook);
		vdc[chip].SetWSHook(WS_Hook_);
		vdc[chip].SetLayerEnableMask(0x3);
	}

	SetVDCUnlimitedSprites(false);

	memset(surf_clut, 0, sizeof(surf_clut));

	SetShowHorizOS(false);
	
	SetPixelFormat(NULL, 0);
}

void VCE::SetVDCUnlimitedSprites(const bool nospritelimit)
{
	for(unsigned chip = 0; chip < chip_count; chip++)
		vdc[chip].SetUnlimitedSprites(nospritelimit);
}

VCE::~VCE()
{

}

void VCE::Reset(const int32 timestamp)
{
	last_ts = 0;

	pixel_offset = 0;
	dot_clock = 0;
	dot_clock_ratio = vce_ratios[dot_clock];
	clock_divider = 0;

	ws_counter = 0;
	scanline = 0;
	scanline_out_ptr = NULL;
	CR = 0;
	lc263 = 0;
	bw = 0;

	memset(color_table, 0, sizeof(color_table));
	memset(color_table_cache, 0, sizeof(color_table_cache));

	ctaddress = 0;

	hblank = 1;
	vblank = 1;

	NeedSLReset = false;

	hblank_counter = 237;
	vblank_counter = 4095 + 30;

	for(unsigned chip = 0; chip < chip_count; chip++)
		child_event[chip] = vdc[chip].Reset();

	// SuperGrafx VPC init
	priority[0] = 0x11;
	priority[1] = 0x11;
	winwidths[0] = 0;
	winwidths[1] = 0;
	st_mode = 0;
	window_counter[0] = 0x40;
	window_counter[1] = 0x40;

	if(fb)
		scanline_out_ptr = &fb[(scanline % 263) * pitch32];
}

/*
 Note:  If we're skipping the frame, don't write to the data behind the pXBuf, DisplayRect, and LineWidths
 pointers at all.  There's no need to, and HES playback depends on these structures being left alone; if they're not,
 there will be graphics distortion, and maybe memory corruption.
*/

void VCE::StartFrame(MDFN_Surface *surface, MDFN_Rect *DisplayRect, int32 *LineWidths, int skip)
{
	FrameDone = false;

	//printf("Clock divider: %d\n", clock_divider);

	color_table_cache[0x200] = color_table_cache[0x300] = MAKECOLOR(0x00, 0xFE, 0x00, 0);

	if(!skip)
	{
		DisplayRect->x = 0;
		DisplayRect->w = 1365;
		DisplayRect->y = 0 + 14;
		DisplayRect->h = 240; //263 - 14;

		DisplayRect->y = 14 + MDFN_GetSettingUI("pce.slstart");
		DisplayRect->h = MDFN_GetSettingUI("pce.slend") - MDFN_GetSettingUI("pce.slstart") + 1;

		for(int y = 0; y < 263; y++)
			LineWidths[y] = 0;

		pitch32 = surface->pitch;
		fb = surface->pixels;
		LW = LineWidths;
		scanline_out_ptr = &fb[(scanline % 263) * pitch32];
	}
	else
	{
		pitch32 = 0;
		fb = NULL;
		LW = NULL;
		scanline_out_ptr = NULL;
	}

	skipframe = skip;

	add_dot_scanline(0, dot_clock);
}

bool VCE::RunPartial(void)
{
	HuCPU.SetEventHandler(Sync);

	if(!PCE_IsCD)
		cd_event = 0x3FFFFFFF;

	ws_counter = 0;
	HuCPU.Run();

	if(!skipframe)
	{
		// Worst-case fallback
		int32 LW_Fix = 256;

		for(int y = 0; y < 263; y++)
		{
			if(LW[y])
			{
				LW_Fix = LW[y];
				break;
			}
		}

		for(int y = 0; y < 263; y++)
		{
			if(!LW[y])
				LW[y] = LW_Fix;
		}
	}

	Update(HuCPU.Timestamp());

	return(FrameDone);
}

void VCE::Update(const int32 timestamp)
{
	if(PCE_IsCD)
		SetCDEvent(PCECD_Run(timestamp));

	HuCPU.SetEvent(Sync(timestamp));
}

int32 INLINE VCE::CalcNextEvent(void)
{
	int32 next_event = hblank_counter;

	if(next_event > vblank_counter)
		next_event = vblank_counter;

	if(next_event > cd_event)
		next_event = cd_event;

	next_event = min_T<int32>(next_event, child_event[0] * dot_clock_ratio - clock_divider);

	if(sgfx)
		next_event = min_T<int32>(next_event, child_event[1] * dot_clock_ratio - clock_divider);

	if(next_event < 1)
		next_event = 1;

	return next_event;
}

template<bool TA_SuperGrafx, bool TA_AwesomeMode>
void INLINE VCE::SyncSub(int32 clocks)
{
	while(clocks > 0)
	{
		int32 div_clocks;
		int32 chunk_clocks = clocks;

		if(chunk_clocks > hblank_counter)
			chunk_clocks = hblank_counter;

		if(chunk_clocks > vblank_counter)
			chunk_clocks = vblank_counter;

		chunk_clocks = min_T<int32>(chunk_clocks, child_event[0] * dot_clock_ratio - clock_divider);

		if(TA_SuperGrafx)
			chunk_clocks = min_T<int32>(chunk_clocks, child_event[1] * dot_clock_ratio - clock_divider);

		if(MDFN_UNLIKELY(chunk_clocks <= 0))
		{
			fprintf(stderr, "[BUG] chunk_clocks <= 0 -- %d --- %d %d %d %d, %d %d\n", chunk_clocks, clocks, hblank_counter, vblank_counter, clock_divider, child_event[0], child_event[1]);
			chunk_clocks = 1;
		}
 
		clock_divider += chunk_clocks;
		div_clocks = clock_divider / dot_clock_ratio;
		clock_divider -= div_clocks * dot_clock_ratio;

		child_event[0] -= div_clocks;
		if(TA_SuperGrafx)
			child_event[1] -= div_clocks;

		if(div_clocks > 0)
		{
			child_event[0] = vdc[0].Run(div_clocks, pixel_buffer[0], skipframe);
			if(TA_SuperGrafx)
				child_event[1] = vdc[1].Run(div_clocks, pixel_buffer[1], skipframe);

			if(!skipframe)
			{
				if(TA_SuperGrafx)
				{
					for(int32 i = 0; MDFN_LIKELY(i < div_clocks); i++) // * vce_ratios[dot_clock]; i++)
					{
						static const int prio_select[4] = { 1, 1, 0, 0 };
						static const int prio_shift[4] = { 4, 0, 4, 0 };
						uint32 pix;
						int in_window = 0;

						if(window_counter[0] > 0x40)
						{
							in_window |= 1;
							window_counter[0]--;
						}

						if(window_counter[1] > 0x40)
						{
							in_window |= 2;
							window_counter[1]--;
						}

						uint8 pb = (priority[prio_select[in_window]] >> prio_shift[in_window]) & 0xF;
						uint32 vdc2_pixel, vdc1_pixel;

						vdc2_pixel = vdc1_pixel = 0;

						if(pb & 1)
							vdc1_pixel = pixel_buffer[0][i];
						if(pb & 2)
							vdc2_pixel = pixel_buffer[1][i];

						/* Dai MakaiMura uses setting 1, and expects VDC #2 sprites in front of VDC #1 background, but
							behind VDC #1's sprites.
						*/
						switch(pb >> 2)
						{
						case 1:
							if((vdc2_pixel & 0x100) && !(vdc1_pixel & 0x100) && (vdc2_pixel & 0xF))
								vdc1_pixel = 0; //amask;
							break;
						case 2:
							if((vdc1_pixel & 0x100) && !(vdc2_pixel & 0x100) && (vdc2_pixel & 0xF))
								vdc1_pixel = 0; //|= amask;
							break;
						}
						pix = color_table_cache[((vdc1_pixel & 0xF) ? vdc1_pixel : vdc2_pixel) & 0x1FF];

						if(TA_AwesomeMode)
						{
							for(int32 s_i = 0; s_i < dot_clock_ratio; s_i++)
							{
								scanline_out_ptr[pixel_offset & 2047] = pix;
								pixel_offset++;
							}
						}
						else
						{
							scanline_out_ptr[pixel_offset & 2047] = pix;
							pixel_offset++;
						}
					}
				}
				else
				{
					if(TA_AwesomeMode)
					{
						for(int32 i = 0; MDFN_LIKELY(i < div_clocks); i++)
						{
							for(int32 si = 0; si < dot_clock_ratio; si++)
							{
								uint32 pix = color_table_cache[pixel_buffer[0][i] & 0x3FF];
						
								scanline_out_ptr[pixel_offset & 2047] = pix;
								pixel_offset++;
							}
						}
					}
					else
					{
						for(int32 i = 0; MDFN_LIKELY(i < div_clocks); i++) // * vce_ratios[dot_clock]; i++)
						{
							uint32 pix = color_table_cache[pixel_buffer[0][i] & 0x3FF];
							scanline_out_ptr[pixel_offset & 2047] = pix;
							pixel_offset++;
						}
					}
				}
			}	// end if(!skipframe)
		} // end if(div_clocks > 0)

		clocks -= chunk_clocks;
		hblank_counter -= chunk_clocks;
		if(hblank_counter <= 0)
		{
			hblank ^= 1;
  
			if(hblank)
			{
				// Clock gets stretched and "synchronized" at the beginning of the 237-master-cycle hsync period.
				//clock_divider = 0;
			}
			else
			{
				if(sgfx)
				{
					int add = 8 + ((dot_clock == 1) ? 38 : 24);
					window_counter[0] = winwidths[0] + add;
					window_counter[1] = winwidths[1] + add;
				}

				if(NeedSLReset)
					scanline = 0;
				else
					scanline++;

				if(scanline == 14 + 240)
				{
					FrameDone = true;
				}

				if((scanline == 14 + 240) || (scanline == 123))
				{
					HuCPU.Exit();
				}

				//printf("VCE New scanline: %d\n", scanline);

				scanline_out_ptr = &fb[(scanline % 263) * pitch32];

				pixel_offset = 0;
				NeedSLReset = false;

				if(!skipframe)
				{
					static const int x_offsets[2][4] = {
						{ 8 + 24,      8 + 38,      8 + 96,      8 + 96 },
						{ 8 + 24 - 12, 8 + 38 - 16, 8 + 96 - 24, 8 + 96 - 24 },
					};
					static const int w_cows[2][4] = {
						{ 256,      352,      512,      512 },
						{ 256 + 24, 352 + 21, 512 + 48, 512 + 48 },
					};

					int rect_x, rect_w;

					if(TA_AwesomeMode)
					{
						if(dot_clock >= 2)
							rect_x = 208;
						else if(dot_clock == 1)
							rect_x = 136;
						else
							rect_x = 128;
						rect_w = 1024;

						if(ShowHorizOS)
						{
							rect_x -= 48;
							rect_w += 96;
						}
					}
					else
					{
						rect_x = x_offsets[ShowHorizOS][dot_clock]; 
						rect_w = w_cows[ShowHorizOS][dot_clock];
					}

					pixel_offset = (0 - rect_x) & 2047;
					LW[scanline % 263] = rect_w;
				}
			}
			hblank_counter = hblank ? 237 : 1128;

			child_event[0] = vdc[0].HSync(hblank);
			if(TA_SuperGrafx)
				child_event[1] = vdc[1].HSync(hblank);
		}

		vblank_counter -= chunk_clocks;
		if(vblank_counter <= 0)
		{
			vblank ^= 1;
			vblank_counter = vblank ? 4095 : ((lc263 ? 358995 : 357630) - 4095);

			if(!vblank)
			{
				NeedSLReset = true;
			}

			child_event[0] = vdc[0].VSync(vblank);
			if(TA_SuperGrafx)
				child_event[1] = vdc[1].VSync(vblank);
		}
	}
}

// If we ignore the return value of Sync(), we must do "HuCPU.SetEvent(CalcNextEvent());"
// before the function(read/write functions) that called Sync() return!
int32 INLINE VCE::SyncReal(const int32 timestamp)
{
	int32 clocks = timestamp - last_ts;

	cd_event -= clocks;
	if(cd_event <= 0)
		cd_event = PCECD_Run(timestamp);

	if(sgfx)
		SyncSub<true, false>(clocks);
	else
		SyncSub<false, false>(clocks);

	//
	//
	//
	int32 ret = CalcNextEvent();

	last_ts = timestamp;

	return(ret);
}

static int32 MDFN_FASTCALL NO_INLINE Sync(const int32 timestamp)
{
	extern VCE *vce; //HORRIBLE
	return vce->SyncReal(timestamp);
}

// So wrong, but feels so...MUSHROOMY.
// THIS IS BROKEN!
// We need to put Sync() call before that, or bias
// cd_event and the value to HuCPU.SetEvent by (HuCPU.timestamp - last_ts)
void VCE::SetCDEvent(const int32 cycles)
{
	const int32 time_behind = HuCPU.Timestamp() - last_ts;

	assert(time_behind >= 0);

	cd_event = cycles + time_behind;
	HuCPU.SetEvent(CalcNextEvent() - time_behind);
}

void VCE::FixPCache(int entry)
{
	const uint32* csl = surf_clut[bw];

	if(!(entry & 0xFF))
	{
		for(int x = 0; x < 16; x++)
			color_table_cache[(entry & 0x100) + (x << 4)] = csl[color_table[entry & 0x100]];
	}

	if(!(entry & 0xF))
		return;

	color_table_cache[entry] = csl[color_table[entry]];
}

void VCE::SetVCECR(uint8 V)
{
	if(((V & 0x80) >> 7) != bw)
	{
		bw = V & 0x80;
		for(int x = 0; x < 512; x++)
			FixPCache(x);
	}

	lc263 = (V & 0x04);

	dot_clock = V & 0x3;
	dot_clock_ratio = vce_ratios[dot_clock];

	add_dot_scanline(scanline, dot_clock);

	CR = V;
}

void VCE::SetPixelFormat(const uint8* CustomColorMap, const uint32 CustomColorMapLen)
{
	for(int x = 0; x < 512; x++)
	{
		int r, g, b;
		int sc_r, sc_g, sc_b;

		if(CustomColorMap)
		{
			r = CustomColorMap[x * 3 + 0];
			g = CustomColorMap[x * 3 + 1];
			b = CustomColorMap[x * 3 + 2];
		}
		else
		{
			b = 36 * (x & 0x007);
			r = 36 * ((x & 0x038) >> 3);
			g = 36 * ((x & 0x1c0) >> 6);
		}

		if(CustomColorMap && CustomColorMapLen == 1024)
		{
			sc_r = CustomColorMap[(512 + x) * 3 + 0];
			sc_g = CustomColorMap[(512 + x) * 3 + 1];
			sc_b = CustomColorMap[(512 + x) * 3 + 2];
		}
		else
		{
			double y;

			y = floor(0.5 + 0.300 * r + 0.589 * g + 0.111 * b);

			if(y < 0)
				y = 0;

			if(y > 255)
				y = 255;

			sc_r = sc_g = sc_b = y;
		}

		surf_clut[0][x] = MAKECOLOR(r, g, b, 0);
		surf_clut[1][x] = MAKECOLOR(sc_r, sc_g, sc_b, 0);
	}

	// I know the temptation is there, but don't combine these two loops just
	// because they loop 512 times ;)
	for(int x = 0; x < 512; x++)
		FixPCache(x);
}

uint8 VCE::Read(uint32 A)
{
	uint8 ret = 0xFF;

	Sync(HuCPU.Timestamp());

	switch(A & 0x7)
	{
	case 4:
		ret = color_table[ctaddress & 0x1FF];
		break;

	case 5:
		ret = color_table[ctaddress & 0x1FF] >> 8;
		ret &= 1;
		ret |= 0xFE;
		ctaddress = (ctaddress + 1) & 0x1FF;
		break;
	}

	HuCPU.SetEvent(CalcNextEvent());

	return(ret);
}

void VCE::Write(uint32 A, uint8 V)
{
	Sync(HuCPU.Timestamp());

	//printf("VCE Write(vce scanline=%d, HuCPU.timestamp=%d): %04x %02x\n", scanline, HuCPU.timestamp, A, V);
	switch(A&0x7)
	{
	case 0:
	{
		int old_dot_clock = dot_clock;

		SetVCECR(V);

		if(old_dot_clock != dot_clock)	// FIXME, this is wrong.  A total fix will require changing the meaning
										// of clock_divider variable.
		{
			clock_divider = 0;
		}
	}
	break;

	case 2: ctaddress &= 0x100; ctaddress |= V; break;
	case 3: ctaddress &= 0x0FF; ctaddress |= (V & 1) << 8; break;

	case 4:
		color_table[ctaddress & 0x1FF] &= 0x100;
		color_table[ctaddress & 0x1FF] |= V;
		FixPCache(ctaddress & 0x1FF);
		break;

	case 5:
		color_table[ctaddress & 0x1FF] &= 0xFF;
		color_table[ctaddress & 0x1FF] |= (V & 1) << 8;
		FixPCache(ctaddress & 0x1FF);
		ctaddress = (ctaddress + 1) & 0x1FF;
		break;
	}

	HuCPU.SetEvent(CalcNextEvent());
}

uint8 VCE::ReadVDC(uint32 A)
{
	uint8 ret;

	Sync(HuCPU.Timestamp());

	if(!sgfx)
	{
		ret = vdc[0].Read(A, child_event[0], 0);
	}
	else
	{
		int chip = 0;

		A &= 0x1F;

		if(A & 0x8)
		{
			ret = 0;

			switch(A)
			{
			case 0x8: ret = priority[0]; break;
			case 0x9: ret = priority[1]; break;
			case 0xA: ret = winwidths[0]; break;
			case 0xB: ret = winwidths[0] >> 8; break;
			case 0xC: ret = winwidths[1]; break;
			case 0xD: ret = winwidths[1] >> 8; break;
			case 0xE: ret = 0; break;
			}
		}
		else
		{
			chip = (A & 0x10) >> 4;
			ret = vdc[chip].Read(A & 0x3, child_event[chip], 0);
		}
	}

	HuCPU.SetEvent(CalcNextEvent());

	return(ret);
}

void VCE::WriteVDC(uint32 A, uint8 V)
{
	Sync(HuCPU.Timestamp());

	if(!sgfx)
	{
		vdc[0].Write(A & 0x1FFF, V, child_event[0]);
	}
	else
	{
		int chip = 0;

		// For ST0/ST1/ST2
		A |= ((A >> 31) & st_mode) << 4;

		A &= 0x1F;

		if(A & 0x8)
		{
			switch(A)
			{
			case 0x8: priority[0] = V; break;
			case 0x9: priority[1] = V; break;
			case 0xA: winwidths[0] &= 0x300; winwidths[0] |= V; break;
			case 0xB: winwidths[0] &= 0x0FF; winwidths[0] |= (V & 3) << 8; break;
			case 0xC: winwidths[1] &= 0x300; winwidths[1] |= V; break;
			case 0xD: winwidths[1] &= 0x0FF; winwidths[1] |= (V & 3) << 8; break;
			case 0xE: st_mode = V & 1; break;
			}
		}
		else
		{
			chip = (A & 0x10) >> 4;
			vdc[chip].Write(A & 0x3, V, child_event[chip]);
		}
	}

	HuCPU.SetEvent(CalcNextEvent());
}

void VCE::WriteVDC_ST(uint32 A, uint8 V)
{
	Sync(HuCPU.Timestamp());

	if(!sgfx)
	{
		vdc[0].Write(A, V, child_event[0]);
	}
	else
	{
		int chip = st_mode & 1;
		vdc[chip].Write(A, V, child_event[chip]);
	}

	HuCPU.SetEvent(CalcNextEvent());
}

void VCE::SetLayerEnableMask(uint64 mask)
{
	for(unsigned chip = 0; chip < chip_count; chip++)
	{
		vdc[chip].SetLayerEnableMask((mask >> (chip * 2)) & 0x3);
	}
}

int VCE::StateAction(StateMem *sm, const unsigned load, const bool data_only)
{
	SFORMAT VCE_StateRegs[] =
	{
		SFVARN(CR, "VCECR"),

		SFVAR(ws_counter),

		SFVARN(ctaddress, "ctaddress"),
		SFARRAY16N(color_table, 0x200, "color_table"),

		SFVARN(clock_divider, "clock_divider"),
		SFARRAY32N(child_event, 2, "child_event"),
		SFVARN(scanline, "scanline"),
		SFVARN(pixel_offset, "pixel_offset"),
		SFVARN(hblank_counter, "hblank_counter"),
		SFVARN(vblank_counter, "vblank_counter"),
		SFVAR(hblank),
		SFVAR(vblank),
		SFVAR(NeedSLReset),
		SFEND
	};

	int ret = MDFNSS_StateAction(sm, load, data_only, VCE_StateRegs, "VCE", false);

	if(sgfx)
	{
		SFORMAT VPC_StateRegs[] =
		{
			SFARRAYN(priority, 2, "priority"),
			SFARRAY16N(winwidths, 2, "winwidths"),
			SFVARN(st_mode, "st_mode"),
			SFARRAY32N(window_counter, 2, "window_counter"),
			SFEND
		};

		ret &= MDFNSS_StateAction(sm, load, data_only, VPC_StateRegs, "VPC", false);
	}

	if(load)
	{
		SetVCECR(CR);
		//
		//
		//
		ctaddress &= 0x1FF;

		clock_divider = (uint32)clock_divider % dot_clock_ratio;

		if(scanline < 0)
			scanline = 0;

		if(hblank_counter < 1)
			hblank_counter = 1;
		else if(hblank_counter > 1365)
			hblank_counter = 1365;

		if(vblank_counter < 1)
			vblank_counter = 1;
		else if(vblank_counter > 400000)
			vblank_counter = 400000;

		if(cd_event < 1)
			cd_event = 1;

		for(unsigned chip = 0; chip < chip_count; chip++)
		{
			if(child_event[chip] < 1)
				child_event[chip] = 1;
			else if(child_event[chip] > 1024)
				child_event[chip] = 1024;
		}
		//
		//
		//
		for(int x = 0; x < 512; x++)
			FixPCache(x);
	}

	for(unsigned chip = 0; chip < chip_count; chip++)
		ret &= vdc[chip].StateAction(sm, load, data_only, chip ? "VDCB" : "VDC");
	
	return ret;
}

void VCE::EndFrame(MDFN_Rect *DisplayRect)
{
	add_dot_scanline(scanline, dot_clock);
	fix_scanline(fb, pitch32);


	int max_scanline_width;

	switch(max_dot_rate)
	{
	case 4: max_scanline_width = 256; break;
	case 3: max_scanline_width = 342; break;
	case 2: max_scanline_width = 512; break;
	case 1: max_scanline_width = 1024; break;
	}


	DisplayRect->x = 0;
	DisplayRect->w = (max_scanline_width == 342) ? setting_pce_hoverscan : max_scanline_width;

	DisplayRect->y = 14 + MDFN_GetSettingUI("pce.slstart");
	DisplayRect->h = MDFN_GetSettingUI("pce.slend") - MDFN_GetSettingUI("pce.slstart") + 1;
}
