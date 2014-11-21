#ifndef __PCE_INPUT_H
#define __PCE_INPUT_H

void PCEINPUT_SetInput(int port, const char* type, void* ptr);
uint8 INPUT_Read(unsigned int A);
void INPUT_Write(unsigned int A, uint8 V);
void INPUT_Frame(void);
int INPUT_StateAction(StateMem* sm, int load);
extern InputInfoStruct PCEInputInfo;
void INPUT_FixTS(void);


#endif
