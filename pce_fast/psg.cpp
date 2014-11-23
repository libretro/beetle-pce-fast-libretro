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

#include "mednafen.h"
#include "psg.h"

#include <math.h>
#include <string.h>

PCEFast_PSG psg = {0};

void PSG_SetVolume(double new_volume)
{
   psg.OutputVolume = new_volume;

   Blip_Synth_set_volume(&psg.Synth, psg.OutputVolume / 6, 0x2000);
}

void PSG_UpdateOutput_Norm(const int32 timestamp, psg_channel* ch)
{
   int32 samp[2];
   int sv = ch->dda;

   samp[0] = psg.dbtable[ch->vl[0]][sv];
   samp[1] = psg.dbtable[ch->vl[1]][sv];

   Blip_Synth_offset(&psg.Synth, timestamp, samp[0] - ch->blip_prev_samp[0], psg.sbuf[0]);
   Blip_Synth_offset(&psg.Synth, timestamp, samp[1] - ch->blip_prev_samp[1], psg.sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

void PSG_UpdateOutput_Noise(const int32 timestamp, psg_channel* ch)
{
   int32 samp[2];
   int sv = ((ch->lfsr & 1) << 5) - (ch->lfsr & 1); //(ch->lfsr & 0x1) ? 0x1F : 0;

   samp[0] = psg.dbtable[ch->vl[0]][sv];
   samp[1] = psg.dbtable[ch->vl[1]][sv];

   Blip_Synth_offset(&psg.Synth, timestamp, samp[0] - ch->blip_prev_samp[0], psg.sbuf[0]);
   Blip_Synth_offset(&psg.Synth, timestamp, samp[1] - ch->blip_prev_samp[1], psg.sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

void PSG_UpdateOutput_Off(const int32 timestamp, psg_channel* ch)
{
   int32 samp[2];

   samp[0] = samp[1] = 0;

   Blip_Synth_offset(&psg.Synth, timestamp, samp[0] - ch->blip_prev_samp[0], psg.sbuf[0]);
   Blip_Synth_offset(&psg.Synth, timestamp, samp[1] - ch->blip_prev_samp[1], psg.sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}


void PSG_UpdateOutput_Accum(const int32 timestamp, psg_channel* ch)
{
   int32 samp[2];

   samp[0] = ((int32)psg.dbtable_volonly[ch->vl[0]] * ((int32)ch->samp_accum - 496))
             >> (8 + 5);
   samp[1] = ((int32)psg.dbtable_volonly[ch->vl[1]] * ((int32)ch->samp_accum - 496))
             >> (8 + 5);

   Blip_Synth_offset(&psg.Synth, timestamp, samp[0] - ch->blip_prev_samp[0], psg.sbuf[0]);
   Blip_Synth_offset(&psg.Synth, timestamp, samp[1] - ch->blip_prev_samp[1], psg.sbuf[1]);

   ch->blip_prev_samp[0] = samp[0];
   ch->blip_prev_samp[1] = samp[1];
}

// This function should always be called after PSG_RecalcFreqCache() (it's not called from PSG_RecalcFreqCache to avoid redundant code)
void PSG_RecalcUOFunc(int chnum)
{
   psg_channel* ch = &psg.channel[chnum];

   //printf("UO Update: %d, %02x\n", chnum, ch->control);

   if (!(ch->control & 0xC0))
      ch->UpdateOutput = &PSG_UpdateOutput_Off;
   else if (ch->noisectrl & ch->control & 0x80)
      ch->UpdateOutput = &PSG_UpdateOutput_Noise;
   // If the control for the channel is in waveform play mode, and the (real) playback frequency is too high, and the channel is either not the LFO modulator channel or
   // if the LFO trigger bit(which halts the LFO modulator channel's waveform incrementing when set) is clear
   else if ((ch->control & 0xC0) == 0x80 && ch->freq_cache <= 0xA && (chnum != 1
            || !(psg.lfoctrl & 0x80)))
      ch->UpdateOutput = &PSG_UpdateOutput_Accum;
   else
      ch->UpdateOutput = &PSG_UpdateOutput_Norm;
}


void PSG_RecalcFreqCache(int chnum)
{
   psg_channel* ch = &psg.channel[chnum];

   if (chnum == 0 && (psg.lfoctrl & 0x03))
   {
      const uint32 shift = (((psg.lfoctrl & 0x3) - 1) << 1);
      uint8 la = psg.channel[1].dda;
      int32 tmp_freq = ((int32)ch->frequency + ((la - 0x10) << shift)) & 0xFFF;

      ch->freq_cache = (tmp_freq ? tmp_freq : 4096) << 1;
   }
   else
   {
      ch->freq_cache = (ch->frequency ? ch->frequency : 4096) << 1;

      if (chnum == 1 && (psg.lfoctrl & 0x03))
         ch->freq_cache *= psg.lfofreq ? psg.lfofreq : 256;
   }
}

void PSG_RecalcNoiseFreqCache(int chnum)
{
   psg_channel* ch = &psg.channel[chnum];
   int32 freq = 0x1F - (ch->noisectrl & 0x1F);

   if (!freq)
      freq = 0x20;
   else
      freq <<= 6;

   freq <<= 1;

   ch->noise_freq_cache = freq;
}

void PSG_init(Blip_Buffer* bb_l, Blip_Buffer* bb_r)
{
   //printf("Test: %u, %u\n", sizeof(psg_channel), (uint8*)&psg.channel[0].balance - (uint8*)&psg.channel[0].waveform[0]);

   psg.sbuf[0] = bb_l;
   psg.sbuf[1] = bb_r;

   psg.lastts = 0;
   for (int ch = 0; ch < 6; ch++)
   {
      psg.channel[ch].blip_prev_samp[0] = 0;
      psg.channel[ch].blip_prev_samp[1] = 0;
      psg.channel[ch].lastts = 0;
   }

   PSG_SetVolume(1.0);

   for (int vl = 0; vl < 32; vl++)
   {
      double flub = 1;

      if (vl)
         flub /= powf(2, (double)1 / 4 *
                      vl);                  // ~1.5dB reduction per increment of vl

      if (vl == 0x1F)
         flub = 0;

      for (int samp = 0; samp < 32; samp++)
      {
         int eff_samp = samp * 2 - 0x1F;

         psg.dbtable[vl][samp] = (int32)(flub * eff_samp * 128);
         psg.dbtable_volonly[vl] = (int32)(flub * 65536);
      }
   }

   PSG_Power(0);
}

int32 PSG_GetVL(const int chnum, const int lr)
{
   // Note: Changing the 0x1F(not that there should be) would require changing the channel pseudo-off volume check logic later on.
   static const uint8 scale_tab[] =
   {
      0x00, 0x03, 0x05, 0x07, 0x09, 0x0B, 0x0D, 0x0F,
      0x10, 0x13, 0x15, 0x17, 0x19, 0x1B, 0x1D, 0x1F
   };

   psg_channel* ch = &psg.channel[chnum];

   const int gbal = 0x1F - scale_tab[(psg.globalbalance >> (lr ? 0 : 4)) & 0xF];
   const int bal = 0x1F - scale_tab[(ch->balance >> (lr ? 0 : 4)) & 0xF];
   const int al = 0x1F - (ch->control & 0x1F);
   int vol_reduction;

   vol_reduction = gbal + bal + al;

   if (vol_reduction > 0x1F)
      vol_reduction = 0x1F;

   return (vol_reduction);
}

void PSG_Write(int32 timestamp, uint8 A, uint8 V)
{
   A &= 0x0F;

   if (A == 0x00)
   {
      psg.select = (V & 0x07);
      return;
   }

   PSG_Update(timestamp);

   psg_channel* ch = &psg.channel[psg.select];

   //if(A == 0x01 || psg.select == 5)
   // printf("Write Ch: %d %04x %02x, %d\n", psg.select, A, V, timestamp);

   switch (A)
   {
   default:
      break;

   case 0x01: /* Global sound balance */
      psg.globalbalance = V;
      psg.vol_pending = true;
      break;

   case 0x02: /* Channel frequency (LSB) */
      if (psg.select > 5) return; // no more than 6 channels, silly game.

      ch->frequency = (ch->frequency & 0x0F00) | V;
      PSG_RecalcFreqCache(psg.select);
      PSG_RecalcUOFunc(psg.select);
      break;

   case 0x03: /* Channel frequency (MSB) */
      if (psg.select > 5) return; // no more than 6 channels, silly game.

      ch->frequency = (ch->frequency & 0x00FF) | ((V & 0x0F) << 8);
      PSG_RecalcFreqCache(psg.select);
      PSG_RecalcUOFunc(psg.select);
      break;

   case 0x04: /* Channel enable, DDA, volume */
      if (psg.select > 5) return; // no more than 6 channels, silly game.

      if ((ch->control & 0x40) && !(V & 0x40))
      {
         ch->waveform_index = 0;
         ch->dda = ch->waveform[ch->waveform_index];
         ch->counter = ch->freq_cache;
      }

      if (!(ch->control & 0x80) && (V & 0x80))
      {
         if (!(V & 0x40))
         {
            ch->waveform_index = (ch->waveform_index + 1) & 0x1F;
            ch->dda = ch->waveform[ch->waveform_index];
         }
      }

      ch->control = V;
      PSG_RecalcFreqCache(psg.select);
      PSG_RecalcUOFunc(psg.select);

      psg.vol_pending = true;
      break;

   case 0x05: /* Channel balance */
      if (psg.select > 5) return; // no more than 6 channels, silly game.
      ch->balance = V;

      psg.vol_pending = true;
      break;

   case 0x06: /* Channel waveform data */
      if (psg.select > 5) return; // no more than 6 channels, silly game.
      V &= 0x1F;

      if (!(ch->control & 0x40))
      {
         ch->samp_accum -= ch->waveform[ch->waveform_index];
         ch->waveform[ch->waveform_index] = V;
         ch->samp_accum += ch->waveform[ch->waveform_index];
      }

      if ((ch->control & 0xC0) == 0x00)
         ch->waveform_index = ((ch->waveform_index + 1) & 0x1F);

      if (ch->control & 0x80)
      {
         // According to my tests(on SuperGrafx), writing to this psg.channel
         // will update the waveform value cache/latch regardless of DDA mode being enabled.
         ch->dda = V;
      }
      break;

   case 0x07: /* Noise enable and frequency */
      if (psg.select > 5) return; // no more than 6 channels, silly game.
      if (psg.select >= 4)
      {
         ch->noisectrl = V;
         PSG_RecalcNoiseFreqCache(psg.select);
         PSG_RecalcUOFunc(psg.select);
      }
      break;

   case 0x08: /* LFO frequency */
      psg.lfofreq = V & 0xFF;
      //printf("LFO Freq: %02x\n", V);
      break;

   case 0x09: /* LFO trigger and control */
      //printf("LFO Ctrl: %02x\n", V);
      if (V & 0x80)
      {
         psg.channel[1].waveform_index = 0;
         psg.channel[1].dda = psg.channel[1].waveform[psg.channel[1].waveform_index];
         psg.channel[1].counter = psg.channel[1].freq_cache;
      }
      psg.lfoctrl = V;
      PSG_RecalcFreqCache(0);
      PSG_RecalcUOFunc(0);
      PSG_RecalcFreqCache(1);
      PSG_RecalcUOFunc(1);
      break;
   }
}

// Don't use INLINE, which has always_inline in it, due to gcc's inability to cope with the type of recursion
// used in this function.
template<bool LFO_On>
void PSG_RunChannel(int chc, int32 timestamp)
{
   psg_channel* ch = &psg.channel[chc];
   int32 running_timestamp = ch->lastts;
   int32 run_time = timestamp - ch->lastts;

   ch->lastts = timestamp;

   if (!run_time)
      return;

   ch->UpdateOutput(running_timestamp, ch);

   if (chc >= 4)
   {
      int32 freq = ch->noise_freq_cache;

      ch->noisecount -= run_time;

#define CLOCK_LFSR(lfsr) { unsigned int newbit = ((lfsr >> 0) ^ (lfsr >> 1) ^ (lfsr >> 11) ^ (lfsr >> 12) ^ (lfsr >> 17)) & 1; lfsr = (lfsr >> 1) | (newbit << 17); }
      if (&PSG_UpdateOutput_Noise == ch->UpdateOutput)
      {
         while (ch->noisecount <= 0)
         {
            CLOCK_LFSR(ch->lfsr);
            PSG_UpdateOutput_Noise(timestamp + ch->noisecount, ch);
            ch->noisecount += freq;
         }
      }
      else
      {
         while (ch->noisecount <= 0)
         {
            CLOCK_LFSR(ch->lfsr);
            ch->noisecount += freq;
         }
      }
#undef CLOCK_LFSR
   }

   // D7 of control is 0, don't clock the counter at all.
   // D7 of lfocontrol is 1(and chc == 1), don't clock the counter at all(not sure about this)
   // In DDA mode, don't clock the counter.
   // (Noise being enabled isn't handled here since AFAIK it doesn't disable clocking of the waveform portion, its sound just overrides the sound from
   //  the waveform portion when the noise enable bit is set, which is handled in our PSG_RecalcUOFunc).
   if (!(ch->control & 0x80) || (chc == 1 && (psg.lfoctrl & 0x80))
         || (ch->control & 0x40))
      return;

   ch->counter -= run_time;

   if (!LFO_On && ch->freq_cache <= 0xA)
   {
      if (ch->counter <= 0)
      {
         const int32 inc_count = ((0 - ch->counter) / ch->freq_cache) + 1;

         ch->counter += inc_count * ch->freq_cache;

         ch->waveform_index = (ch->waveform_index + inc_count) & 0x1F;
         ch->dda = ch->waveform[ch->waveform_index];
      }
   }

   while (ch->counter <= 0)
   {
      ch->waveform_index = (ch->waveform_index + 1) & 0x1F;
      ch->dda = ch->waveform[ch->waveform_index];

      ch->UpdateOutput(timestamp + ch->counter, ch);

      if (LFO_On)
      {
         PSG_RunChannel<false>(1, timestamp + ch->counter);
         PSG_RecalcFreqCache(0);
         PSG_RecalcUOFunc(0);

         ch->counter += (ch->freq_cache <= 0xA) ? 0xA :
                        ch->freq_cache; // Not particularly accurate, but faster.
      }
      else
         ch->counter += ch->freq_cache;
   }
}

INLINE void PSG_UpdateSubLFO(int32 timestamp)
{
   PSG_RunChannel<true>(0, timestamp);

   for (int chc = 1; chc < 6; chc++)
      PSG_RunChannel<false>(chc, timestamp);
}

INLINE void PSG_UpdateSubNonLFO(int32 timestamp)
{
   for (int chc = 0; chc < 6; chc++)
      PSG_RunChannel<false>(chc, timestamp);
}

//static int32 last_read;
//static int32 last_apply;

void PSG_Update(int32 timestamp)
{
   int32 run_time = timestamp - psg.lastts;

   if (psg.vol_pending && !psg.vol_update_counter && !psg.vol_update_which)
   {
      psg.vol_update_counter = 1;
      psg.vol_pending = false;
   }

   bool lfo_on = (bool)(psg.lfoctrl & 0x03);

   if (lfo_on)
   {
      if (!(psg.channel[1].control & 0x80) || (psg.lfoctrl & 0x80))
      {
         lfo_on = 0;
         PSG_RecalcFreqCache(0);
         PSG_RecalcUOFunc(0);
      }
   }

   int32 clocks = run_time;
   int32 running_timestamp = psg.lastts;

   while (clocks > 0)
   {
      int32 chunk_clocks = clocks;

      if (psg.vol_update_counter > 0 && chunk_clocks > psg.vol_update_counter)
         chunk_clocks = psg.vol_update_counter;

      running_timestamp += chunk_clocks;
      clocks -= chunk_clocks;

      if (lfo_on)
         PSG_UpdateSubLFO(running_timestamp);
      else
         PSG_UpdateSubNonLFO(running_timestamp);

      if (psg.vol_update_counter > 0)
      {
         psg.vol_update_counter -= chunk_clocks;
         if (!psg.vol_update_counter)
         {
            const int phase = psg.vol_update_which & 1;
            const int lr = ((psg.vol_update_which >> 1) & 1) ^ 1;
            const int chnum = psg.vol_update_which >> 2;

            if (!phase)
            {
               //printf("Volume update(Read, %d since last): ch=%d, lr=%d, ts=%d\n", running_timestamp - last_read, chnum, lr, running_timestamp);

               if (chnum < 6)
                  psg.vol_update_vllatch = PSG_GetVL(chnum, lr);
               //last_read = running_timestamp;
            }
            else
            {
               // printf("Volume update(Apply): ch=%d, lr=%d, ts=%d\n", chnum, lr, running_timestamp);
               if (chnum < 6)
                  psg.channel[chnum].vl[lr] = psg.vol_update_vllatch;
               //last_apply = running_timestamp;
            }
            psg.vol_update_which = (psg.vol_update_which + 1) & 0x1F;

            if (psg.vol_update_which)
               psg.vol_update_counter = phase ? 1 : 255;
            else if (psg.vol_pending)
            {
               psg.vol_update_counter = phase ? 1 : 255;
               psg.vol_pending = false;
            }
         }
      }

      psg.lastts = running_timestamp;
   }
}

void PSG_EndFrame(int32 timestamp)
{
   PSG_Update(timestamp);
   psg.lastts = 0;
   for (int chc = 0; chc < 6; chc++)
      psg.channel[chc].lastts = 0;
}

void PSG_Power(const int32 timestamp)
{
   // Not sure about power-on values, these are mostly just intuitive guesses(with some laziness thrown in).
   if (timestamp != psg.lastts)
      PSG_Update(timestamp);

   memset(&psg.channel, 0, sizeof(psg.channel));

   psg.select = 0;
   psg.globalbalance = 0;
   psg.lfofreq = 0;
   psg.lfoctrl = 0;

   for (int ch = 0; ch < 6; ch++)
   {
      psg.channel[ch].frequency = 0;
      psg.channel[ch].control = 0x00;
      psg.channel[ch].balance = 0;
      memset(psg.channel[ch].waveform, 0, 32);
      psg.channel[ch].samp_accum = 0;

      psg.channel[ch].waveform_index = 0;
      psg.channel[ch].dda = 0x00;
      psg.channel[ch].noisectrl = 0x00;

      psg.channel[ch].vl[0] = 0x1F;
      psg.channel[ch].vl[1] = 0x1F;

      psg.channel[ch].samp_accum = 0;

      PSG_RecalcFreqCache(ch);
      PSG_RecalcUOFunc(ch);

      psg.channel[ch].counter = psg.channel[ch].freq_cache;

      if (ch >= 4)
      {
         PSG_RecalcNoiseFreqCache(ch);
         psg.channel[ch].noisecount = 1;
         psg.channel[ch].lfsr = 1;
      }
   }

   psg.vol_pending = false;
   psg.vol_update_counter = 0;
   psg.vol_update_which = 0;
}

int PSG_StateAction(StateMem* sm, int load)
{
   int ret = 1;

   for (int ch = 0; ch < 6; ch++)
   {
      char tmpstr[5] = "SCHx";
      psg_channel* pt = &psg.channel[ch];

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
         SFARRAY32N(pt->vl, 2, "vl"), // TODO
         SFEND
      };
      tmpstr[3] = '0' + ch;
      ret &= MDFNSS_StateAction(sm, load, CH_StateRegs, tmpstr);
   }

   SFORMAT PSG_StateRegs[] =
   {
      SFVAR(psg.select),
      SFVAR(psg.globalbalance),
      SFVAR(psg.lfofreq),
      SFVAR(psg.lfoctrl),

      SFVAR(psg.vol_update_counter),
      SFVAR(psg.vol_update_which),
      SFVAR(psg.vol_pending),
      SFEND
   };

   ret &= MDFNSS_StateAction(sm, load, PSG_StateRegs, "PSG");

   if (load)
   {
      psg.vol_update_which &= 0x1F;

      if (!psg.channel[4].lfsr)
         psg.channel[4].lfsr = 1;

      if (!psg.channel[5].lfsr)
         psg.channel[5].lfsr = 1;

      for (int ch = 0; ch < 6; ch++)
      {
         psg.channel[ch].samp_accum = 0;
         for (int wi = 0; wi < 32; wi++)
         {
            psg.channel[ch].waveform[wi] &= 0x1F;
            psg.channel[ch].samp_accum += psg.channel[ch].waveform[wi];
         }

         for (int lr = 0; lr < 2; lr++)
            psg.channel[ch].vl[lr] &= 0x1F;

         if (!psg.channel[ch].noisecount && ch >= 4)
         {
            printf("ch=%d, noisecount == 0\n", ch);
            psg.channel[ch].noisecount = 1;
         }

         if (psg.channel[ch].counter <= 0)
         {
            printf("ch=%d, counter <= 0\n", ch);
            psg.channel[ch].counter = 1;
         }

         if (ch >= 4)
            PSG_RecalcNoiseFreqCache(ch);
         PSG_RecalcFreqCache(ch);
         PSG_RecalcUOFunc(ch);
      }
   }
   return (ret);
}
