#ifndef __MDFN_PCE_HUC6280_H
#define __MDFN_PCE_HUC6280_H

class MDFN_ALIGN(128) HuC6280
{
public:

	typedef void (MDFN_FASTCALL *writefunc)(uint32 A, uint8 V);
	typedef uint8 (MDFN_FASTCALL *readfunc)(uint32 A);
	typedef int32 (MDFN_FASTCALL *ehfunc)(const int32 timestamp);

	enum { N_FLAG = 0x80 };
	enum { V_FLAG = 0x40 };
	enum { T_FLAG = 0x20 };
	enum { B_FLAG = 0x10 };
	enum { D_FLAG = 0x08 };
	enum { I_FLAG = 0x04 };
	enum { Z_FLAG = 0x02 };
	enum { C_FLAG = 0x01 };

	// If emulate_wai is true, then the "0xCB" opcode will be handled by waiting for the next high-level event, NOT 
	// for the IRQ line to be asserted as on a 65816.
	// It's mainly a hack intended for less CPU-intensive HES playback.
	HuC6280() MDFN_COLD;
	~HuC6280() MDFN_COLD;

	void Init(const bool emulate_wai) MDFN_COLD;

	void Reset(void) MDFN_COLD;
	void Power(void) MDFN_COLD;

	enum { IQIRQ1 = 0x002 };
	enum { IQIRQ2 = 0x001 };
	enum { IQTIMER = 0x004 };
	enum { IQRESET = 0x020 };

	void INLINE IRQBegin(int w)
	{
		IRQlow |= w;
	}

	void INLINE IRQEnd(int w)
	{
		IRQlow &= ~w;
	}

	void TimerSync(void);

	uint8 INLINE GetIODataBuffer(void)
	{
		return(IODataBuffer);
	}

	void INLINE SetIODataBuffer(uint8 v)
	{
		IODataBuffer = v;
	}

	uint8 TimerRead(unsigned int address, bool peek = false);
	void TimerWrite(unsigned int address, uint8 V);

	uint8 IRQStatusRead(unsigned int address, bool peek = false);
	void IRQStatusWrite(unsigned int address, uint8 V);

	int StateAction(StateMem *sm, const unsigned load, const bool data_only);

	template<bool DebugMode>
	void RunSub(void) NO_INLINE;

	void Run(const bool StepMode = false);

	void INLINE Exit(void)
	{
		runrunrun = 0;
	}

	void INLINE SyncAndResetTimestamp(uint32 ts_base = 0)
	{
		TimerSync();

		timer_lastts = ts_base;
		timestamp = ts_base;
	}

	bool INLINE InBlockMove(void)
	{
		return(in_block_move);
	}

	void StealCycle(void);
	void StealCycles(const int count);
	void StealMasterCycles(const int count);

	void NO_INLINE SetEvent(const int32 cycles)
	{
		next_user_event = cycles;
		CalcNextEvent();
	}

	void INLINE SetEventHandler(ehfunc new_EventHandler)
	{
		EventHandler = new_EventHandler;
	}

	uint32 INLINE Timestamp(void)
	{
		return(timestamp);
	}

	void INLINE SetFastRead(unsigned int i, uint8 *ptr)
	{
		assert(i < 0x100);
		FastMap[i] = ptr;
	}

	readfunc INLINE GetReadHandler(unsigned int i)
	{
		assert(i < 0x100);
		return(ReadMap[i]);
	}


	void INLINE SetReadHandler(unsigned int i, readfunc func)
	{
		assert(i < 0x100);
		ReadMap[i] = func;
	}

	void INLINE SetWriteHandler(unsigned int i, writefunc func)
	{
		assert(i < 0x100);
		WriteMap[i] = func;
	}

	// If external debugging code uses this function, then SetFastRead() must not be used with a pointer other than NULL for it to work
	// properly.
	uint32 INLINE GetLastLogicalReadAddr(void)
	{
		return(LastLogicalReadAddr);
	}

	uint32 INLINE GetLastLogicalWriteAddr(void)
	{
		return(LastLogicalWriteAddr);
	}
	
	void INLINE SetOverclock(uint32 rate)
	{
		overclock_rate = rate;
	}

private:
	void FlushMPRCache(void);

	void INLINE SetMPR(int i, int v)
	{
		MPR[i] = v;
		FastPageR[i] = FastMap[v] ? ((uintptr_t)FastMap[v] - i * 8192) : 0;
	}


	// Logical
	uint8 INLINE RdMem(unsigned int address)
	{
		if(FastPageR[address >> 13])
			return *(uint8*)(FastPageR[address >> 13] + address);

		LastLogicalReadAddr = address;

		uint8 wmpr = MPR[address >> 13];
		return ReadMap[wmpr]((wmpr << 13) | (address & 0x1FFF));
	}

	// Logical
	uint8 INLINE RdOp(unsigned int address)
	{
		return RdMem(address);
	}

	// Logical
	void INLINE WrMem(unsigned int address, uint8 V)
	{
		uint8 wmpr = MPR[address >> 13];

		LastLogicalWriteAddr = address;

		WriteMap[wmpr]((wmpr << 13) | (address & 0x1FFF), V);
	}

	// Used for ST0, ST1, ST2
	// Must not modify address(upper bit is abused for ST0/ST1/ST2 handling).
	void INLINE WrMemPhysical(uint32 address, uint8 data)
	{
		WriteMap[(address >> 13) & 0xFF](address, data);
	}

	void INLINE REDOPIMCACHE(void)
	{ 
		PIMaskCache = (P & I_FLAG) ? 0 : ~0; 
	}

	void INLINE REDOSPEEDCACHE(void)
	{
		speed_shift_cache = (speed ^ 1) << 1;
	}

	void LastCycle(void);

	void INLINE Overclock(int &cycles)
	{
		timestamp_frac += cycles;
		if(timestamp_frac >= overclock_rate)
		{
			cycles = timestamp_frac / overclock_rate;
			timestamp_frac %= overclock_rate;
		}
		else
			cycles = 0;
	}

	void INLINE ADDCYC(int x)
	{
		int master = (x * 3) << speed_shift_cache;
		
		Overclock(master);

		timestamp += master;
		next_event -= master;
		next_user_event -= master;

		if(next_event <= 0)
			HappySync();
	}

	void INLINE ADDCYC_MASTER(int master)
	{
		Overclock(master);

		timestamp += master;
		next_event -= master;
		next_user_event -= master;

		if(next_event <= 0)
			HappySync();
	}


	void HappySync(void);

	void INLINE CalcNextEvent(void)
	{
		next_event = timer_div;

		if(next_event > next_user_event)
			next_event = next_user_event;
	}

	void X_ZN(const uint8);
	void X_ZNT(const uint8);

	void PUSH(const uint8 V);
	uint8 POP(void);

	template<bool DebugMode>
	void JR(const bool cond, const bool BBRS = false);

	template<bool DebugMode>
	void BBRi(const uint8 val, const unsigned int bitto);

	template<bool DebugMode>
	void BBSi(const uint8 val, const unsigned int bitto);

private:
	uint32 timestamp;
	uint32 timestamp_frac;
	int32 next_event;	// Next event, period.  Timer, user, ALIENS ARE INVADING SAVE ME HELP
	int32 next_user_event;
	int32 timer_lastts;
	ehfunc EventHandler;
	
	uint32 overclock_rate;

	uint32 PC;		// Program Counter(16-bit, but as a 32-bit variable for performance reasons)
	uint8 A;		// Accumulator
	uint8 X;		// X Index register
	uint8 Y;		// Y Indes register
	uint8 S;		// Stack Pointer
	uint8 P;		// Processor Flags/Status Register
	uint8 IRQMask;
	uint32 PIMaskCache;	// Will be = 0 if (P & I_FLAG) is set, ~0 if (P & I_FLAG) is clear.
	uint32 IRQlow;          /* Simulated IRQ pin held low(or is it high?).
							   And other junk hooked on for speed reasons.*/
	int32 IRQSample;
	int32 IFlagSample;
	uint8 MPR[9];		// 8, + 1 for PC overflow from $ffff to $10000

	uint8 lastop;
	uint8 speed;
	uint8 speed_shift_cache;

	uint8 IODataBuffer;

	bool timer_inreload;
	uint8 timer_status;
	int32 timer_value, timer_load;
	int32 timer_div;

	int32 runrunrun;	// Don't change to bool(main possibles values are -1, 0, 1).

	enum
	{
		IBM_TIA = 1,
		IBM_TAI = 2,
		IBM_TDD = 3,
		IBM_TII = 4,
		IBM_TIN = 5
	};
	uint32 in_block_move;
	uint32 bmt_alternate;
	uint16 bmt_src, bmt_dest, bmt_length;

	uint32 LastLogicalReadAddr;		// Some helper variables for debugging code(external)
	uint32 LastLogicalWriteAddr;	// to know where the read/write occurred in the 16-bit logical space.

	uintptr_t FastPageR[9];	// Biased fast page read cache for each 8KiB in the 16-bit logical address space
							// (Reloaded on corresponding MPR change)

	uint8 *FastMap[0x100];		// Direct pointers to memory for mapped RAM and ROM for faster reads.
	readfunc ReadMap[0x100];	// Read handler pointers for each 8KiB in the 21-bit physical address space.
	writefunc WriteMap[0x100];	// Write handler pointers for each 8KiB in the 21-bit physical address space.

	bool (*CPUHook)(uint32);
	void (*ADDBT)(uint32, uint32, uint32);

	bool EmulateWAI;		// For speed hacks
};

#endif
