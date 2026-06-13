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

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "../mednafen-types.h"
#include "../state.h"
#include "../state_helpers.h"

#include "psg.h"

/* Forward declarations for the per-channel output functions (referenced
 * by RecalcUOFunc and RunChannel before their definitions). */
static void PCEFast_PSG_UpdateOutput_Off(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch);
static void PCEFast_PSG_UpdateOutput_Accum(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch);
static void PCEFast_PSG_UpdateOutput_Norm(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch);
static void PCEFast_PSG_UpdateOutput_Noise(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch);
static void PCEFast_PSG_RecalcUOFunc(PCEFast_PSG *psg, int chnum);
static void PCEFast_PSG_RecalcFreqCache(PCEFast_PSG *psg, int chnum);
static void PCEFast_PSG_RecalcNoiseFreqCache(PCEFast_PSG *psg, int chnum);
static void PCEFast_PSG_Update(PCEFast_PSG *psg, int32 timestamp);
static int32 PCEFast_PSG_GetVL(PCEFast_PSG *psg, const int chnum, const int lr);

void PCEFast_PSG_SetVolume(PCEFast_PSG *psg, double new_volume)
{
   psg->OutputVolume = new_volume;

   Blip_Synth_set_volume(&psg->Synth, psg->OutputVolume / 6, 8192);
}

void PCEFast_PSG_SetChannelUserVolume(PCEFast_PSG *psg, int chnum, int32 new_volume)
{
    struct psg_channel *ch;
    if(chnum >= 6 || new_volume > 100) return;  /* check valid args */
    ch = &psg->channel[chnum];
    ch->user_volume = new_volume;
}

static void PCEFast_PSG_UpdateOutput_Norm(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch)
{
   int32 samp[2];
   int delta0;
   int delta1;
   int sv = ch->dda;

   samp[0] = psg->dbtable[ch->vl[0]][sv];
   samp[1] = psg->dbtable[ch->vl[1]][sv];

   if(ch->user_volume < 100)
   {
       delta0 = ((samp[0] - ch->blip_prev_samp[0]) * ch->user_volume * 164) >> 14;
       delta1 = ((samp[1] - ch->blip_prev_samp[1]) * ch->user_volume * 164) >> 14;
   } else {
       delta0 = samp[0] - ch->blip_prev_samp[0];
       delta1 = samp[1] - ch->blip_prev_samp[1];
   }

   Blip_Synth_offset(&psg->Synth, timestamp, delta0, psg->sbuf[0]);
   Blip_Synth_offset(&psg->Synth, timestamp, delta1, psg->sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

static void PCEFast_PSG_UpdateOutput_Noise(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch)
{
   int32 samp[2];
   int delta0;
   int delta1;
   int sv = ((ch->lfsr & 1) << 5) - (ch->lfsr & 1); /* (ch->lfsr & 0x1) ? 0x1F : 0; */

   samp[0] = psg->dbtable[ch->vl[0]][sv];
   samp[1] = psg->dbtable[ch->vl[1]][sv];

   if(ch->user_volume < 100)
   {
       delta0 = ((samp[0] - ch->blip_prev_samp[0]) * ch->user_volume * 164) >> 14;
       delta1 = ((samp[1] - ch->blip_prev_samp[1]) * ch->user_volume * 164) >> 14;
   } else {
       delta0 = samp[0] - ch->blip_prev_samp[0];
       delta1 = samp[1] - ch->blip_prev_samp[1];
   }

   Blip_Synth_offset(&psg->Synth, timestamp, delta0, psg->sbuf[0]);
   Blip_Synth_offset(&psg->Synth, timestamp, delta1, psg->sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

static void PCEFast_PSG_UpdateOutput_Off(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch)
{
   int32 samp[2];
   int delta0;
   int delta1;

   samp[0] = samp[1] = 0;

   if(ch->user_volume < 100)
   {
       delta0 = ((samp[0] - ch->blip_prev_samp[0]) * ch->user_volume * 164) >> 14;
       delta1 = ((samp[1] - ch->blip_prev_samp[1]) * ch->user_volume * 164) >> 14;
   } else {
       delta0 = samp[0] - ch->blip_prev_samp[0];
       delta1 = samp[1] - ch->blip_prev_samp[1];
   }

   Blip_Synth_offset(&psg->Synth, timestamp, delta0, psg->sbuf[0]);
   Blip_Synth_offset(&psg->Synth, timestamp, delta1, psg->sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}


static void PCEFast_PSG_UpdateOutput_Accum(PCEFast_PSG *psg, const int32 timestamp, struct psg_channel *ch)
{
   int32 samp[2];
   int delta0;
   int delta1;

   samp[0] = ((int32)psg->dbtable_volonly[ch->vl[0]] * ((int32)ch->samp_accum - 496)) >> (8 + 5);
   samp[1] = ((int32)psg->dbtable_volonly[ch->vl[1]] * ((int32)ch->samp_accum - 496)) >> (8 + 5);

   if(ch->user_volume < 100)
   {
       delta0 = ((samp[0] - ch->blip_prev_samp[0]) * ch->user_volume * 164) >> 14;
       delta1 = ((samp[1] - ch->blip_prev_samp[1]) * ch->user_volume * 164) >> 14;
   } else {
       delta0 = samp[0] - ch->blip_prev_samp[0];
       delta1 = samp[1] - ch->blip_prev_samp[1];
   }

   Blip_Synth_offset(&psg->Synth, timestamp, delta0, psg->sbuf[0]);
   Blip_Synth_offset(&psg->Synth, timestamp, delta1, psg->sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

/* This function should always be called after RecalcFreqCache() (it's not
 * called from RecalcFreqCache to avoid redundant code) */
static void PCEFast_PSG_RecalcUOFunc(PCEFast_PSG *psg, int chnum)
{
   struct psg_channel *ch = &psg->channel[chnum];

   if(!(ch->control & 0xC0))
      ch->UpdateOutput = PCEFast_PSG_UpdateOutput_Off;
   else if(ch->noisectrl & ch->control & 0x80)
      ch->UpdateOutput = PCEFast_PSG_UpdateOutput_Noise;
   /* If the control for the channel is in waveform play mode, and the (real)
    * playback frequency is too high, and the channel is either not the LFO
    * modulator channel or the LFO trigger bit (which halts the LFO modulator
    * channel's waveform incrementing when set) is clear */
   else if((ch->control & 0xC0) == 0x80 && ch->freq_cache <= 0xA && (chnum != 1 || !(psg->lfoctrl & 0x80)) )
      ch->UpdateOutput = PCEFast_PSG_UpdateOutput_Accum;
   else
      ch->UpdateOutput = PCEFast_PSG_UpdateOutput_Norm;
}


static void PCEFast_PSG_RecalcFreqCache(PCEFast_PSG *psg, int chnum)
{
   struct psg_channel *ch = &psg->channel[chnum];

   if(chnum == 0 && (psg->lfoctrl & 0x03))
   {
      const uint32 shift = (((psg->lfoctrl & 0x3) - 1) << 1);
      uint8 la = psg->channel[1].dda;
      int32 tmp_freq = ((int32)ch->frequency + ((la - 0x10) << shift)) & 0xFFF;

      ch->freq_cache = (tmp_freq ? tmp_freq : 4096) << 1;
   }
   else
   {
      ch->freq_cache = (ch->frequency ? ch->frequency : 4096) << 1;

      if(chnum == 1 && (psg->lfoctrl & 0x03))
         ch->freq_cache *= psg->lfofreq ? psg->lfofreq : 256;
   }
}

static void PCEFast_PSG_RecalcNoiseFreqCache(PCEFast_PSG *psg, int chnum)
{
   struct psg_channel *ch = &psg->channel[chnum];
   int32 freq = 0x1F - (ch->noisectrl & 0x1F);

   if(!freq)
      freq = 0x20;
   else
      freq <<= 6;

   freq <<= 1;

   ch->noise_freq_cache = freq;
}

PCEFast_PSG *PCEFast_PSG_new(Blip_Buffer *bb_l, Blip_Buffer *bb_r)
{
   int ch;
   int vl;
   int samp;
   PCEFast_PSG *psg = (PCEFast_PSG *)calloc(1, sizeof(*psg));

   if(!psg)
      return NULL;

   psg->sbuf[0] = bb_l;
   psg->sbuf[1] = bb_r;

   psg->lastts = 0;
   for(ch = 0; ch < 6; ch++)
   {
      psg->channel[ch].blip_prev_samp[0] = 0;
      psg->channel[ch].blip_prev_samp[1] = 0;
      psg->channel[ch].lastts = 0;
   }

   PCEFast_PSG_SetVolume(psg, 1.0);

   for(vl = 0; vl < 32; vl++)
   {
      double flub = 1;

      if(vl)
         flub /= powf(2, (double)1 / 4 * vl);                  /* ~1.5dB reduction per increment of vl */

      if(vl == 0x1F)
         flub = 0;

      for(samp = 0; samp < 32; samp++)
      {
         int eff_samp = samp * 2 - 0x1F;

         psg->dbtable[vl][samp] = (int32)(flub * eff_samp * 128);
         psg->dbtable_volonly[vl] = (int32)(flub * 65536);
      }
   }

   PCEFast_PSG_Power(psg, 0);

   return psg;
}

void PCEFast_PSG_free(PCEFast_PSG *psg)
{
   if(psg)
      free(psg);
}

static int32 PCEFast_PSG_GetVL(PCEFast_PSG *psg, const int chnum, const int lr)
{
   /* Note: Changing the 0x1F (not that there should be) would require
    * changing the channel pseudo-off volume check logic later on. */
   static const uint8 scale_tab[] =
   {
      0x00, 0x03, 0x05, 0x07, 0x09, 0x0B, 0x0D, 0x0F,
      0x10, 0x13, 0x15, 0x17, 0x19, 0x1B, 0x1D, 0x1F
   };

   struct psg_channel *ch = &psg->channel[chnum];

   const int gbal = 0x1F - scale_tab[(psg->globalbalance >> (lr ? 0 : 4)) & 0xF];
   const int bal = 0x1F - scale_tab[(ch->balance >> (lr ? 0 : 4)) & 0xF];
   const int al = 0x1F - (ch->control & 0x1F);
   int vol_reduction;

   vol_reduction = gbal + bal + al;

   if(vol_reduction > 0x1F)
      vol_reduction = 0x1F;

   return(vol_reduction);
}

void PCEFast_PSG_Write(PCEFast_PSG *psg, int32 timestamp, uint8 A, uint8 V)
{
   struct psg_channel *ch;

   A &= 0x0F;

   if(A == 0x00)
   {
      psg->select = (V & 0x07);
      return;
   }

   PCEFast_PSG_Update(psg, timestamp);

   ch = &psg->channel[psg->select];

   switch(A)
   {
      default: break;

      case 0x01: /* Global sound balance */
               psg->globalbalance = V;
               psg->vol_pending = true;
               break;

      case 0x02: /* Channel frequency (LSB) */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */

               ch->frequency = (ch->frequency & 0x0F00) | V;
               PCEFast_PSG_RecalcFreqCache(psg, psg->select);
               PCEFast_PSG_RecalcUOFunc(psg, psg->select);
               break;

      case 0x03: /* Channel frequency (MSB) */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */

               ch->frequency = (ch->frequency & 0x00FF) | ((V & 0x0F) << 8);
               PCEFast_PSG_RecalcFreqCache(psg, psg->select);
               PCEFast_PSG_RecalcUOFunc(psg, psg->select);
               break;

      case 0x04: /* Channel enable, DDA, volume */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */

               if((ch->control & 0x40) && !(V & 0x40))
               {
                  ch->waveform_index = 0;
                  ch->dda = ch->waveform[ch->waveform_index];
                  ch->counter = ch->freq_cache;
               }

               if(!(ch->control & 0x80) && (V & 0x80))
               {
                  if(!(V & 0x40))
                  {
                     ch->waveform_index = (ch->waveform_index + 1) & 0x1F;
                     ch->dda = ch->waveform[ch->waveform_index];
                  }
               }

               ch->control = V;
               PCEFast_PSG_RecalcFreqCache(psg, psg->select);
               PCEFast_PSG_RecalcUOFunc(psg, psg->select);

               psg->vol_pending = true;
               break;

      case 0x05: /* Channel balance */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */
               ch->balance = V;

               psg->vol_pending = true;
               break;

      case 0x06: /* Channel waveform data */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */
               V &= 0x1F;

               if(!(ch->control & 0x40))
               {
                  ch->samp_accum -= ch->waveform[ch->waveform_index];
                  ch->waveform[ch->waveform_index] = V;
                  ch->samp_accum += ch->waveform[ch->waveform_index];
               }

               if((ch->control & 0xC0) == 0x00)
                  ch->waveform_index = ((ch->waveform_index + 1) & 0x1F);

               if(ch->control & 0x80)
               {
                  /* According to my tests (on SuperGrafx), writing to this channel
                   * will update the waveform value cache/latch regardless of DDA
                   * mode being enabled. */
                  ch->dda = V;
               }
               break;

      case 0x07: /* Noise enable and frequency */
               if(psg->select > 5) return; /* no more than 6 channels, silly game. */
               if(psg->select >= 4)
               {
                  ch->noisectrl = V;
                  PCEFast_PSG_RecalcNoiseFreqCache(psg, psg->select);
                  PCEFast_PSG_RecalcUOFunc(psg, psg->select);
               }
               break;

      case 0x08: /* LFO frequency */
               psg->lfofreq = V & 0xFF;
               PCEFast_PSG_RecalcFreqCache(psg, 1);
               break;

      case 0x09: /* LFO trigger and control */
               if(V & 0x80)
               {
                  psg->channel[1].waveform_index = 0;
                  psg->channel[1].dda = psg->channel[1].waveform[psg->channel[1].waveform_index];
                  psg->channel[1].counter = psg->channel[1].freq_cache;
               }
               psg->lfoctrl = V;
               PCEFast_PSG_RecalcFreqCache(psg, 0);
               PCEFast_PSG_RecalcUOFunc(psg, 0);
               PCEFast_PSG_RecalcFreqCache(psg, 1);
               PCEFast_PSG_RecalcUOFunc(psg, 1);
               break;
   }
}

/* Was template<bool LFO_On>; LFO_On is now a plain parameter. Not INLINE
 * due to the (mutual) recursion through RunChannel(... , false). */
static void PCEFast_PSG_RunChannel(PCEFast_PSG *psg, int chc, int32 timestamp, bool LFO_On)
{
   struct psg_channel *ch = &psg->channel[chc];
   int32 running_timestamp = ch->lastts;
   int32 run_time = timestamp - ch->lastts;

   ch->lastts = timestamp;

   if(!run_time)
      return;

   ch->UpdateOutput(psg, running_timestamp, ch);

   if(chc >= 4)
   {
      int32 freq = ch->noise_freq_cache;

      ch->noisecount -= run_time;

#define CLOCK_LFSR(lfsr) { unsigned int newbit = ((lfsr >> 0) ^ (lfsr >> 1) ^ (lfsr >> 11) ^ (lfsr >> 12) ^ (lfsr >> 17)) & 1; lfsr = (lfsr >> 1) | (newbit << 17); }
      if(PCEFast_PSG_UpdateOutput_Noise == ch->UpdateOutput)
      {
         while(ch->noisecount <= 0)
         {
            CLOCK_LFSR(ch->lfsr);
            PCEFast_PSG_UpdateOutput_Noise(psg, timestamp + ch->noisecount, ch);
            ch->noisecount += freq;
         }
      }
      else
      {
         while(ch->noisecount <= 0)
         {
            CLOCK_LFSR(ch->lfsr);
            ch->noisecount += freq;
         }
      }
#undef CLOCK_LFSR
   }

   /* D7 of control is 0, don't clock the counter at all.
    * D7 of lfocontrol is 1 (and chc == 1), don't clock the counter at all (not sure about this).
    * In DDA mode, don't clock the counter.
    * (Noise being enabled isn't handled here since AFAIK it doesn't disable
    *  clocking of the waveform portion; its sound just overrides the waveform
    *  output when the noise enable bit is set, which is handled in RecalcUOFunc). */
   if(!(ch->control & 0x80) || (chc == 1 && (psg->lfoctrl & 0x80)) || (ch->control & 0x40))
      return;

   ch->counter -= run_time;

   if(!LFO_On && ch->freq_cache <= 0xA)
   {
      if(ch->counter <= 0)
      {
         const int32 inc_count = ((0 - ch->counter) / ch->freq_cache) + 1;

         ch->counter += inc_count * ch->freq_cache;

         ch->waveform_index = (ch->waveform_index + inc_count) & 0x1F;
         ch->dda = ch->waveform[ch->waveform_index];
      }
   }

   while(ch->counter <= 0)
   {
      ch->waveform_index = (ch->waveform_index + 1) & 0x1F;
      ch->dda = ch->waveform[ch->waveform_index];

      ch->UpdateOutput(psg, timestamp + ch->counter, ch);

      if(LFO_On)
      {
         PCEFast_PSG_RunChannel(psg, 1, timestamp + ch->counter, false);
         PCEFast_PSG_RecalcFreqCache(psg, 0);
         PCEFast_PSG_RecalcUOFunc(psg, 0);

         ch->counter += (ch->freq_cache <= 0xA) ? 0xA : ch->freq_cache;	/* Not particularly accurate, but faster. */
      }
      else
         ch->counter += ch->freq_cache;
   }
}

static INLINE void PCEFast_PSG_UpdateSubLFO(PCEFast_PSG *psg, int32 timestamp)
{
   int chc;
   PCEFast_PSG_RunChannel(psg, 0, timestamp, true);

   for(chc = 1; chc < 6; chc++)
      PCEFast_PSG_RunChannel(psg, chc, timestamp, false);
}

static INLINE void PCEFast_PSG_UpdateSubNonLFO(PCEFast_PSG *psg, int32 timestamp)
{
   int chc;
   for(chc = 0; chc < 6; chc++)
      PCEFast_PSG_RunChannel(psg, chc, timestamp, false);
}

static void PCEFast_PSG_Update(PCEFast_PSG *psg, int32 timestamp)
{
   int32 run_time = timestamp - psg->lastts;
   bool lfo_on;
   int32 clocks;
   int32 running_timestamp;

   if(psg->vol_pending && !psg->vol_update_counter && !psg->vol_update_which)
   {
      psg->vol_update_counter = 1;
      psg->vol_pending = false;
   }

   lfo_on = (bool)(psg->lfoctrl & 0x03);

   if(lfo_on)
   {
      if(!(psg->channel[1].control & 0x80) || (psg->lfoctrl & 0x80))
      {
         lfo_on = 0;
         PCEFast_PSG_RecalcFreqCache(psg, 0);
         PCEFast_PSG_RecalcUOFunc(psg, 0);
      }
   }

   clocks = run_time;
   running_timestamp = psg->lastts;

   while(clocks > 0)
   {
      int32 chunk_clocks = clocks;

      if(psg->vol_update_counter > 0 && chunk_clocks > psg->vol_update_counter)
         chunk_clocks = psg->vol_update_counter;

      running_timestamp += chunk_clocks;
      clocks -= chunk_clocks;

      if(lfo_on)
         PCEFast_PSG_UpdateSubLFO(psg, running_timestamp);
      else
         PCEFast_PSG_UpdateSubNonLFO(psg, running_timestamp);

      if(psg->vol_update_counter > 0)
      {
         psg->vol_update_counter -= chunk_clocks;
         if(!psg->vol_update_counter)
         {
            const int phase = psg->vol_update_which & 1;
            const int lr = ((psg->vol_update_which >> 1) & 1) ^ 1;
            const int chnum = psg->vol_update_which >> 2;

            if(!phase)
            {
               if(chnum < 6)
                  psg->vol_update_vllatch = PCEFast_PSG_GetVL(psg, chnum, lr);
            }
            else
            {
               if(chnum < 6)
                  psg->channel[chnum].vl[lr] = psg->vol_update_vllatch;
            }
            psg->vol_update_which = (psg->vol_update_which + 1) & 0x1F;

            if(psg->vol_update_which)
               psg->vol_update_counter = phase ? 1 : 255;
            else if(psg->vol_pending)
            {
               psg->vol_update_counter = phase ? 1 : 255;
               psg->vol_pending = false;
            }
         }
      }

      psg->lastts = running_timestamp;
   }
}

void PCEFast_PSG_EndFrame(PCEFast_PSG *psg, int32 timestamp)
{
   int chc;
   PCEFast_PSG_Update(psg, timestamp);
   psg->lastts = 0;
   for(chc = 0; chc < 6; chc++)
      psg->channel[chc].lastts = 0;
}

void PCEFast_PSG_Power(PCEFast_PSG *psg, const int32 timestamp)
{
   int ch;
   /* Not sure about power-on values, these are mostly just intuitive
    * guesses (with some laziness thrown in). */
   if(timestamp != psg->lastts)
      PCEFast_PSG_Update(psg, timestamp);

   memset(&psg->channel, 0, sizeof(psg->channel));

   psg->select = 0;
   psg->globalbalance = 0;
   psg->lfofreq = 0;
   psg->lfoctrl = 0;

   for(ch = 0; ch < 6; ch++)
   {
      psg->channel[ch].frequency = 0;
      psg->channel[ch].control = 0x00;
      psg->channel[ch].balance = 0;
      psg->channel[ch].user_volume = 100;
      memset(psg->channel[ch].waveform, 0, 32);
      psg->channel[ch].samp_accum = 0;

      psg->channel[ch].waveform_index = 0;
      psg->channel[ch].dda = 0x00;
      psg->channel[ch].noisectrl = 0x00;

      psg->channel[ch].vl[0] = 0x1F;
      psg->channel[ch].vl[1] = 0x1F;

      psg->channel[ch].samp_accum = 0;

      PCEFast_PSG_RecalcFreqCache(psg, ch);
      PCEFast_PSG_RecalcUOFunc(psg, ch);

      psg->channel[ch].counter = psg->channel[ch].freq_cache;

      if(ch >= 4)
      {
         PCEFast_PSG_RecalcNoiseFreqCache(psg, ch);
         psg->channel[ch].noisecount = 1;
         psg->channel[ch].lfsr = 1;
      }
   }

   psg->vol_pending = false;
   psg->vol_update_counter = 0;
   psg->vol_update_which = 0;
}

int PCEFast_PSG_StateAction(PCEFast_PSG *psg, StateMem *sm, int load, int data_only)
{
   int ret = 1;
   int ch;

   for(ch = 0; ch < 6; ch++)
   {
      char tmpstr[5] = "SCHx";
      struct psg_channel *pt = &psg->channel[ch];

      SFORMAT CH_StateRegs[] =
      {
         SFVARN(pt->counter, "counter"),
         SFVARN(pt->frequency, "frequency"),
         SFVARN(pt->control, "control"),
         SFVARN(pt->balance, "balance"),
         SFARRAYN(pt->waveform, 32, "waveform"),
         SFVARN(pt->waveform_index, "waveform_index"),
         SFVARN(pt->dda, "dda"),
         SFVARN(pt->noisectrl, "noisectrl"),
         SFVARN(pt->noisecount, "noisecount"),
         SFVARN(pt->lfsr, "lfsr"),
         SFARRAY32N(pt->vl, 2, "vl"),
         SFEND
      };
      tmpstr[3] = '0' + ch;
      ret &= MDFNSS_StateAction(sm, load, data_only, CH_StateRegs, tmpstr, false);
   }

   {
      SFORMAT PSG_StateRegs[] =
      {
         SFVARN(psg->select, "select"),
         SFVARN(psg->globalbalance, "globalbalance"),
         SFVARN(psg->lfofreq, "lfofreq"),
         SFVARN(psg->lfoctrl, "lfoctrl"),

         SFVARN(psg->vol_update_counter, "vol_update_counter"),
         SFVARN(psg->vol_update_which, "vol_update_which"),
         SFVARN(psg->vol_update_vllatch, "vol_update_vllatch"),
         SFVAR_BOOL(psg->vol_pending),
         SFEND
      };

      ret &= MDFNSS_StateAction(sm, load, data_only, PSG_StateRegs, "PSG", false);
   }

   if(load)
   {
      psg->vol_update_which &= 0x1F;

      if(!psg->channel[4].lfsr)
         psg->channel[4].lfsr = 1;

      if(!psg->channel[5].lfsr)
         psg->channel[5].lfsr = 1;

      for(ch = 0; ch < 6; ch++)
      {
         int wi;
         int lr;
         psg->channel[ch].samp_accum = 0;
         for(wi = 0; wi < 32; wi++)
         {
            psg->channel[ch].waveform[wi] &= 0x1F;
            psg->channel[ch].samp_accum += psg->channel[ch].waveform[wi];
         }

         for(lr = 0; lr < 2; lr++)
            psg->channel[ch].vl[lr] &= 0x1F;

         if(!psg->channel[ch].noisecount && ch >= 4)
            psg->channel[ch].noisecount = 1;

         if(psg->channel[ch].counter <= 0)
            psg->channel[ch].counter = 1;

         if(ch >= 4)
            PCEFast_PSG_RecalcNoiseFreqCache(psg, ch);
         PCEFast_PSG_RecalcFreqCache(psg, ch);
         PCEFast_PSG_RecalcUOFunc(psg, ch);
      }
   }
   return(ret);
}
