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
/*
 Arcade Card emulation based on information provided by Ki and David Shadoff
*/

#include <stdlib.h>
#include <string.h>

#include "../../mednafen-types.h"
#include "../../state.h"
#include "../../state_helpers.h"
#include "arcade_card.h"

static INLINE void ACAutoIncrement(ACPort_t *port)
{
 if(port->control & 0x1)
 {
  if(port->control & 0x10)
   port->base = (port->base + port->increment) & 0xFFFFFF;
  else
   port->offset = (port->offset + port->increment) & 0xFFFF;
 }
}

uint8 ArcadeCard_Read(ArcadeCard *ac, uint32 A, bool peek)
{
 if((A & 0x1F00) != 0x1A00)
  return(0xFF);
 if(A < 0x1A80)
 {
  ACPort_t *port = &ac->AC.ports[(A >> 4) & 0x3];

  switch(A & 0xF)
  {
   case 0x00:
   case 0x01:
             {
	      uint32 aci;
              uint8 ret;

	      aci = port->base;
	      if(port->control & 0x2)
	      {
	       aci += port->offset;
	       if(port->control & 0x8)
                aci += 0xFF0000;
	      }
	      aci &= 0x1FFFFF;
	      ret = ac->ACRAM[aci];
	      if(!peek)
               ACAutoIncrement(port);
              return(ret);
             }
   case 0x02: return(port->base >> 0);
   case 0x03: return(port->base >> 8);
   case 0x04: return(port->base >> 16);

   case 0x05: return(port->offset >> 0);
   case 0x06: return(port->offset >> 8);

   case 0x07: return(port->increment >> 0);
   case 0x08: return(port->increment >> 8);
   case 0x09: return(port->control);
  }
 }
 else if(A >= 0x1AE0)
 {
  switch(A & 0x1F)
  {
   case 0x00:
   case 0x01:
   case 0x02:
   case 0x03: return((ac->AC.shift_latch >> (A & 3) * 8) & 0xFF);

   case 0x04: return(ac->AC.shift_bits);

   case 0x05: return(ac->AC.rotate_bits);

   case 0x1C: return(0x00);

   case 0x1D: return(0x00);

   case 0x1E: return(0x10); /* Version number.  We should verify this! */

   case 0x1F: return(0x51); /* Arcade Card ID */
  }
 }

 return(0xFF);
}

void ArcadeCard_Write(ArcadeCard *ac, uint32 A, uint8 V)
{
 if((A & 0x1F00) != 0x1A00)
  return;

 if(A < 0x1A80)
 {
  ACPort_t *port = &ac->AC.ports[(A >> 4) & 0x3];

  switch(A & 0xF)
  {
   default:
	      break;

   case 0x00:
   case 0x01:
	     {
	      uint32 aci;

              aci = port->base;
              if(port->control & 0x2)
              {
               aci += port->offset;
               if(port->control & 0x8)
                aci += 0xFF0000;
              }
              aci &= 0x1FFFFF;

              ac->ACRAMUsed = true;
              ac->ACRAM[aci] = V;
              ACAutoIncrement(port);
	     }
             break;

   case 0x02: port->base &= ~0xFF;
              port->base |= V << 0;
              break;

   case 0x03: port->base &= ~0xFF00;
              port->base |= V << 8;
              break;

   case 0x04: port->base &= ~0xFF0000;
              port->base |= V << 16;
              break;

   case 0x05: port->offset &= ~0xFF;
              port->offset |= V << 0;
              if((port->control & 0x60) == 0x20)
              {
               if(port->control & 0x08)
                port->base += 0xFF0000;

               port->base = (port->base + port->offset) & 0xFFFFFF;
              }
              break;

   case 0x06: port->offset &= ~0xFF00;
              port->offset |= V << 8;
              if((port->control & 0x60) == 0x40)
              {
               if(port->control & 0x08)
                port->base += 0xFF0000;

               port->base = (port->base + port->offset) & 0xFFFFFF;
              }
              break;

   case 0x07: port->increment &= ~0xFF;
              port->increment |= V << 0;
              break;

   case 0x08: port->increment &= ~0xFF00;
              port->increment |= V << 8;
              break;

   case 0x09: port->control = V & 0x7F;
              break;

   case 0x0A: if((port->control & 0x60) == 0x60)
              {
               if(port->control & 0x08)
                port->base += 0xFF0000;

               port->base = (port->base + port->offset) & 0xFFFFFF;
              }
              break;
  }
 }
 else if(A >= 0x1AE0)
 {
  switch(A & 0x1F)
  {
   default:
	    break;

   case 0x00:
   case 0x01:
   case 0x02:
   case 0x03: ac->AC.shift_latch &= ~(0xFF << (A & 3) * 8);
              ac->AC.shift_latch |= (V << (A & 3) * 8);
              break;

   case 0x04: ac->AC.shift_bits = V & 0xF;
              if(ac->AC.shift_bits)
              {
               if(ac->AC.shift_bits & 0x8)
                ac->AC.shift_latch >>= 16 - ac->AC.shift_bits;
               else
                ac->AC.shift_latch <<= ac->AC.shift_bits;
              }
              break;

   case 0x05: ac->AC.rotate_bits = V & 0xF;	/* Untested code follows: */
              if(ac->AC.rotate_bits)
              {
               if(ac->AC.rotate_bits & 0x8)
	       {
		unsigned int sa = 16 - ac->AC.rotate_bits;
		unsigned int orv;

		orv = ac->AC.shift_latch << (32 - sa);

                ac->AC.shift_latch = (ac->AC.shift_latch >> sa) | orv;
	       }
               else
	       {
		unsigned int sa = ac->AC.rotate_bits;
		unsigned int orv;

		orv = (ac->AC.shift_latch >> (32 - sa)) & ((1 << sa) - 1);

                ac->AC.shift_latch = (ac->AC.shift_latch << sa) | orv;
	       }
              }
              break;
  }
 }
}

ArcadeCard *ArcadeCard_new(void)
{
 ArcadeCard *ac = (ArcadeCard *)calloc(1, sizeof(*ac));

 if(!ac)
  return NULL;

 ac->ACRAMUsed = false;

 memset(&ac->AC, 0, sizeof(ac->AC));

 memset(ac->ACRAM, 0, sizeof(ac->ACRAM));

 return ac;
}

void ArcadeCard_free(ArcadeCard *ac)
{
 if(ac)
  free(ac);
}

void ArcadeCard_Power(ArcadeCard *ac)
{
 memset(ac->ACRAM, 0, 0x200000);
 ac->ACRAMUsed = false;
}

int ArcadeCard_StateAction(ArcadeCard *ac, StateMem *sm, int load, int data_only)
{
 int ret;
 SFORMAT ACUsedRegs[] =
 {
  SFVAR_BOOL(ac->ACRAMUsed),
  SFEND
 };

 if(!MDFNSS_StateAction(sm, load, data_only, ACUsedRegs, "ArcadeCardUsed", false))
  return(0);

 {
  SFORMAT ACStateRegs[] =
  {
   SFVARN(ac->AC.ports[0].base, "AC[0].base"),
   SFVARN(ac->AC.ports[0].offset, "AC[0].offset"),
   SFVARN(ac->AC.ports[0].increment, "AC[0].increment"),
   SFVARN(ac->AC.ports[0].control, "AC[0].control"),
   SFVARN(ac->AC.ports[1].base, "AC[1].base"),
   SFVARN(ac->AC.ports[1].offset, "AC[1].offset"),
   SFVARN(ac->AC.ports[1].increment, "AC[1].increment"),
   SFVARN(ac->AC.ports[1].control, "AC[1].control"),
   SFVARN(ac->AC.ports[2].base, "AC[2].base"),
   SFVARN(ac->AC.ports[2].offset, "AC[2].offset"),
   SFVARN(ac->AC.ports[2].increment, "AC[2].increment"),
   SFVARN(ac->AC.ports[2].control, "AC[2].control"),
   SFVARN(ac->AC.ports[3].base, "AC[3].base"),
   SFVARN(ac->AC.ports[3].offset, "AC[3].offset"),
   SFVARN(ac->AC.ports[3].increment, "AC[3].increment"),
   SFVARN(ac->AC.ports[3].control, "AC[3].control"),
   SFVARN(ac->AC.shift_bits, "ACShiftBits"),
   SFVARN(ac->AC.shift_latch, "ACShift"),
   SFVARN(ac->AC.rotate_bits, "ACRotateBits"),
   SFARRAY(ac->ACRAM, ac->ACRAMUsed ? 0x200000 : 0x0),
   SFEND
  };
  ret = MDFNSS_StateAction(sm, load, data_only, ACStateRegs, "ArcadeCard", false);
 }

 return(ret);
}


void ArcadeCard_PeekRAM(ArcadeCard *ac, uint32 Address, uint32 Length, uint8 *Buffer)
{
 while(Length--)
 {
  Address &= (1 << 21) - 1;

  *Buffer = ac->ACRAM[Address];

  Address++;
  Buffer++;
 }
}

void ArcadeCard_PokeRAM(ArcadeCard *ac, uint32 Address, uint32 Length, const uint8 *Buffer)
{
 uint8 used = 0;

 while(Length--)
 {
  Address &= (1 << 21) - 1;

  ac->ACRAM[Address] = *Buffer;
  used |= ac->ACRAM[Address];

  Address++;
  Buffer++;
 }

 if(used)
  ac->ACRAMUsed = true;
}
