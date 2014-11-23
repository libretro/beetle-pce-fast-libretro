#ifndef _PCEFast_PSG_H
#define _PCEFast_PSG_H

#include "blip/Blip_Buffer.h"

struct psg_channel
{
   uint8 waveform[32];     /* Waveform data */
   uint8 waveform_index;   /* Waveform data index */
   uint8 dda;
   uint8 control;          /* Channel enable, DDA, volume */
   uint8 noisectrl;        /* Noise enable/ctrl (channels 4,5 only) */

   int32 vl[2];    //vll, vlr;

   int32 counter;

   void (*UpdateOutput)(const int32 timestamp, psg_channel* ch);

   uint32 freq_cache;
   uint32 noise_freq_cache;        // Channel 4,5 only
   int32 noisecount;
   uint32 lfsr;

   int32 samp_accum;         // The result of adding up all the samples in the waveform buffer(part of an optimization for high-frequency playback).
   int32 blip_prev_samp[2];
   int32 lastts;

   uint16 frequency;       /* Channel frequency */
   uint8 balance;          /* Channel balance */
};

typedef struct
{
   double OutputVolume;
   uint8 select;               /* Selected channel (0-5) */
   uint8 globalbalance;        /* Global sound balance */
   uint8 lfofreq;              /* LFO frequency */
   uint8 lfoctrl;              /* LFO control */
   int32 vol_update_counter;
   int32 vol_update_which;
   int32 vol_update_vllatch;
   bool vol_pending;
   psg_channel channel[6];
   int32 lastts;
   Blip_Buffer* sbuf[2];
   Blip_Synth Synth;
   int32 dbtable_volonly[32];
   int32 dbtable[32][32];
} PCEFast_PSG;

extern PCEFast_PSG psg;

void PSG_init(Blip_Buffer* bb_l, Blip_Buffer* bb_r);


int PSG_StateAction(StateMem* sm, int load);
void PSG_Power(const int32 timestamp) ;
void PSG_Write(int32 timestamp, uint8 A, uint8 V);
void PSG_SetVolume(double new_volume) ;
void PSG_EndFrame(int32 timestamp);
void PSG_Update(int32 timestamp);
void PSG_UpdateSubLFO(int32 timestamp);
void PSG_UpdateSubNonLFO(int32 timestamp);
void PSG_RecalcUOFunc(int chnum);
void PSG_UpdateOutput_Off(const int32 timestamp, psg_channel* ch);
void PSG_UpdateOutput_Accum(const int32 timestamp, psg_channel* ch);
void PSG_UpdateOutput_Norm(const int32 timestamp, psg_channel* ch);
void PSG_UpdateOutput_Noise(const int32 timestamp, psg_channel* ch);
int32 PSG_GetVL(const int chnum, const int lr);
void PSG_RecalcFreqCache(int chnum);
void PSG_RecalcNoiseFreqCache(int chnum);
template<bool LFO_On>
void PSG_RunChannel(int chc, int32 timestamp);

#endif
