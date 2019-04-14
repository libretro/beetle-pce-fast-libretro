#ifndef __MDFN_PCE_HUC_H
#define __MDFN_PCE_HUC_H

typedef enum
{
	SYSCARD_NONE = 0,
	SYSCARD_1,
	SYSCARD_2,
	SYSCARD_3,
	SYSCARD_ARCADE		// 3.0 + extras
} SysCardType;

uint32 HuC_Load(MDFNFILE* fp, bool DisableBRAM = false, SysCardType syscard = SYSCARD_NONE) MDFN_COLD;
void HuC_SaveNV(void);
void HuC_Kill(void) MDFN_COLD;

void HuC_Update(int32 timestamp);
void HuC_ResetTS(int32 ts_base);

int HuC_StateAction(StateMem *sm, const unsigned load, const bool data_only);

void HuC_Power(void);

DECLFR(PCE_ACRead);
DECLFW(PCE_ACWrite);

extern bool PCE_IsCD;
extern bool IsPopulous;
extern bool IsTsushin;

extern uint8 *TsushinRAM;
extern uint8 *PopRAM;
extern uint8 SaveRAM[2048];
extern uint8 *CDRAM;

#endif
