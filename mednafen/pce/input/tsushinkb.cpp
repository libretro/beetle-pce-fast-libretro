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

#include "../pce.h"
#include "../input.h"
#include "tsushinkb.h"

class PCE_Input_TsushinKB : public PCE_Input_Device
{
public:

	PCE_Input_TsushinKB();

	virtual void Power(int32 timestamp);
	virtual void Write(int32 timestamp, bool old_SEL, bool new_SEL, bool old_CLR, bool new_CLR);
	virtual uint8 Read(int32 timestamp);
	virtual void Update(const uint8 *data, bool start_frame);
	virtual int StateAction(StateMem *sm, int load, int data_only, const char *section_name);

private:
	bool SEL, CLR;
	uint8 TsuKBState[16];
	uint8 TsuKBLatch[16 + 2 + 1];
	uint32 TsuKBIndex;
	bool last_capslock;
};

void PCE_Input_TsushinKB::Power(int32 timestamp)
{
	SEL = CLR = 0;
	memset(TsuKBState, 0, sizeof(TsuKBState));
	memset(TsuKBLatch, 0, sizeof(TsuKBLatch));
	TsuKBIndex = 0;
	last_capslock = 0;
}

PCE_Input_TsushinKB::PCE_Input_TsushinKB()
{
	Power(0);
}

void PCE_Input_TsushinKB::Update(const uint8 *data, bool start_frame)
{
	bool capslock = TsuKBState[0xE] & 0x10;
	bool new_capslock = data[0xE] & 0x10;

	if(!last_capslock && new_capslock)
		capslock ^= 1;

	for(int i = 0; i < 16; i++)
		TsuKBState[i] = data[i];

	TsuKBState[0xE] = (TsuKBState[0xE] & ~0x10) | (capslock ? 0x10 : 0x00);

	last_capslock = new_capslock;
}

uint8 PCE_Input_TsushinKB::Read(int32 timestamp)
{
	uint8 ret;

	ret = ((TsuKBLatch[TsuKBIndex] >> (SEL * 4)) & 0xF);

	return(ret);
}

void PCE_Input_TsushinKB::Write(int32 timestamp, bool old_SEL, bool new_SEL, bool old_CLR, bool new_CLR)
{
	SEL = new_SEL;
	CLR = new_CLR;

	//printf("Write: %d %d %d %d\n", old_SEL, new_SEL, old_CLR, new_CLR);

	if(!old_CLR && new_CLR)
	{
		TsuKBLatch[0] = 0x02;

		for(int i = 0; i < 16; i++)
			TsuKBLatch[i + 1] = TsuKBState[i] ^ 0xFF;

		TsuKBLatch[17] = 0x02;
		TsuKBIndex = 0;
		//puts("Latched");
	}
	else if(!old_SEL && new_SEL)
	{
		TsuKBIndex = (TsuKBIndex + 1) % 18;
		if(!TsuKBIndex)
		{
			for(int i = 0; i < 16; i++)
				TsuKBLatch[i + 1] = TsuKBState[i] ^ 0xFF;
		}
	}
}

int PCE_Input_TsushinKB::StateAction(StateMem *sm, int load, int data_only, const char *section_name)
{
	SFORMAT StateRegs[] =
	{
		SFVAR(SEL),
		SFVAR(CLR),
		SFARRAY(TsuKBState, sizeof(TsuKBState)),
		SFARRAY(TsuKBLatch, sizeof(TsuKBLatch)),
		SFVAR(TsuKBIndex),
		SFVAR(last_capslock),
		SFEND
	};
	int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, section_name, false);
 
	return(ret);
}

PCE_Input_Device *PCEINPUT_MakeTsushinKB(void)
{
	return(new PCE_Input_TsushinKB());
}
