#ifndef __MDFN_PCE_PCE_H
#define __MDFN_PCE_PCE_H

#include <mednafen/mednafen.h>
#include <mednafen/state.h>
#include <mednafen/general.h>

#define PCE_MASTER_CLOCK	21477272.727273

#define DECLFR(x) MDFN_FASTCALL uint8 x (uint32 A)
#define DECLFW(x) MDFN_FASTCALL void x (uint32 A, uint8 V)

#include "huc6280.h"

extern HuC6280 HuCPU;
extern uint8 BaseRAM[32768];
extern MDFNGI EmulatedPCE;

extern bool PCE_ACEnabled; // Arcade Card emulation enabled?
extern void PCE_Power(void);

extern MDFN_COLD int PCE_Load(MDFNFILE *fp);
extern MDFN_COLD int PCE_LoadCD(std::vector<CDIF *> *CDInterfaces);
extern MDFN_COLD void PCE_CloseGame(void);

extern void Emulate(EmulateSpecStruct *espec);
extern int StateAction(StateMem *sm, int load, int data_only);
extern void DoSimpleCommand(int cmd);
extern void CDSettingChanged(const char *name);
extern void SettingsChanged();

extern uint8 MemRead(uint32 addr);

#endif
