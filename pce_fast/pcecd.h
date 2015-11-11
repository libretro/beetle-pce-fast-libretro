#ifndef __PCE_CDROM_H
#define __PCE_CDROM_H

#include "blip/Blip_Buffer.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
   float CDDA_Volume;   // Max 2.000...
   float ADPCM_Volume;  // Max 2.000...

   unsigned int CD_Speed;

} PCECD_Settings;

void PCECD_Run(uint32 in_timestamp);
void PCECD_ResetTS(void);

bool PCECD_Init(const PCECD_Settings* settings, void (*irqcb)(bool),
                double master_clock, unsigned int ocm, Blip_Buffer* soundbuf_l,
                Blip_Buffer* soundbuf_r) ;
bool PCECD_SetSettings(const PCECD_Settings* settings) ;
void PCECD_Close(void) ;
void PCECD_Power(uint32 timestamp) ;


uint8 PCECD_Read(uint32 timestamp, uint32);
void PCECD_Write(uint32 timestamp, uint32, uint8 data);

bool PCECD_IsBRAMEnabled(void);

int PCECD_StateAction(StateMem* sm, int load);

#ifdef __cplusplus
}
#endif
#endif

