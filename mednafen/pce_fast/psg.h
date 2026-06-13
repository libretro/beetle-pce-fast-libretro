#ifndef _PCEFast_PSG_H
#define _PCEFast_PSG_H

#include <boolean.h>

#include "../mednafen-types.h"
#include "../state.h"
#include "../include/blip/Blip_Buffer.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Was a C++ class (PCEFast_PSG); converted to a plain struct + free
 * functions. The per-channel UpdateOutput pointer, formerly a
 * pointer-to-member, is now a plain function pointer taking the owning
 * PCEFast_PSG* as its first argument. */
struct PCEFast_PSG;

typedef void (*PCEFast_PSG_UOFunc)(struct PCEFast_PSG *, const int32 timestamp, struct psg_channel *ch);

struct psg_channel
{
   uint8 waveform[32];     /* Waveform data */
   uint8 waveform_index;   /* Waveform data index */
   uint8 dda;
   uint8 control;          /* Channel enable, DDA, volume */
   uint8 noisectrl;        /* Noise enable/ctrl (channels 4,5 only) */

   int32 vl[2];    /* vll, vlr */

   int32 counter;

   PCEFast_PSG_UOFunc UpdateOutput;

   uint32 freq_cache;
   uint32 noise_freq_cache;        /* Channel 4,5 only */
   int32 noisecount;
   uint32 lfsr;

   int32 samp_accum;         /* The sum of all samples in the waveform buffer (HF-playback optimization). */
   int32 blip_prev_samp[2];
   int32 lastts;

   uint16 frequency;       /* Channel frequency */
   uint8 balance;          /* Channel balance */

   int32 user_volume;
};

typedef struct PCEFast_PSG
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

   struct psg_channel channel[6];

   int32 lastts;

   Blip_Buffer *sbuf[2];
   Blip_Synth Synth;

   int32 dbtable_volonly[32];

   int32 dbtable[32][32];
} PCEFast_PSG;

/* Construction / destruction (was ctor/dtor, used via new/delete). */
PCEFast_PSG *PCEFast_PSG_new(Blip_Buffer *bb_l, Blip_Buffer *bb_r) MDFN_COLD;
void PCEFast_PSG_free(PCEFast_PSG *psg) MDFN_COLD;

int  PCEFast_PSG_StateAction(PCEFast_PSG *psg, StateMem *sm, int load, int data_only) MDFN_COLD;

void PCEFast_PSG_Power(PCEFast_PSG *psg, const int32 timestamp) MDFN_COLD;
void PCEFast_PSG_Write(PCEFast_PSG *psg, int32 timestamp, uint8 A, uint8 V);

void PCEFast_PSG_SetVolume(PCEFast_PSG *psg, double new_volume) MDFN_COLD;
void PCEFast_PSG_SetChannelUserVolume(PCEFast_PSG *psg, int chnum, int32 new_volume) MDFN_COLD;

void PCEFast_PSG_EndFrame(PCEFast_PSG *psg, int32 timestamp);

#ifdef __cplusplus
}
#endif

#endif
