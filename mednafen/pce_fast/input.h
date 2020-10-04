#ifndef __PCE_INPUT_H
#define __PCE_INPUT_H

#include <boolean.h>
#include "../git.h"
#include "../mednafen-types.h"
#include "../state.h"

#ifdef __cplusplus
extern "C" {
#endif

void PCEINPUT_Init(void);
void PCEINPUT_SettingChanged(const char *name);
void PCEINPUT_SetInput(unsigned port, const char *type, uint8 *ptr);
uint8 INPUT_Read(unsigned int A);
void INPUT_Write(unsigned int A, uint8 V);
void INPUT_Frame(void);
int INPUT_StateAction(StateMem *sm, int load, int data_only);
extern InputInfoStruct PCEInputInfo;
void INPUT_FixTS(void);
extern bool AVPad6Enabled[5];

#ifdef __cplusplus
}
#endif

#endif
