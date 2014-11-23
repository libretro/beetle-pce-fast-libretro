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

#include "mednafen.h"

//#include "pce.h"
//#include "huc.h"
#include "arcade_card.h"

#include <errno.h>
#include <string.h>

ArcadeCard arcade_card;

static INLINE void ArcadeCard_AutoIncrement(ACPort_t* port)
{
   if (port->control & 0x1)
   {
      if (port->control & 0x10)
      {
         //if(port->control & 0x4)
         //{
         // printf("BOONY: %04x\n", port->increment);
         // port->base = (port->base + port->increment + 0xFF0000) & 0xFFFFFF;
         // printf("%04x\n", port->base);
         //}
         //else
         port->base = (port->base + port->increment) & 0xFFFFFF;
      }
      else
         port->offset = (port->offset + port->increment) & 0xFFFF;
   }
}

uint8 ArcadeCard_Read(uint32 A, bool peek)
{
   //printf("AC Read: %04x\n", A);
   if ((A & 0x1F00) != 0x1A00)
   {
      //if(!peek)
      // printf("AC unknown read: %08x\n", A);
      return (0xFF);
   }
   if (A < 0x1A80)
   {
      ACPort_t* port = &arcade_card.AC.ports[(A >> 4) & 0x3];

      // if(!peek)
      //  if(A & 0x40)
      //   printf("AC mirrored port read: %08x\n", A); // Madou Monogatari does!

      switch (A & 0xF)
      {
      case 0x00:
      case 0x01:
      {
         uint32 aci;
         uint8 ret;

         aci = port->base;
         if (port->control & 0x2)
         {
            aci += port->offset;
            if (port->control & 0x8)
               aci += 0xFF0000;
         }
         aci &= 0x1FFFFF;
         ret = arcade_card.ACRAM[aci];
         if (!peek)
            ArcadeCard_AutoIncrement(port);
         return (ret);
      }
      case 0x02:
         return (port->base >> 0);
      case 0x03:
         return (port->base >> 8);
      case 0x04:
         return (port->base >> 16);

      case 0x05:
         return (port->offset >> 0);
      case 0x06:
         return (port->offset >> 8);

      case 0x07:
         return (port->increment >> 0);
      case 0x08:
         return (port->increment >> 8);
      case 0x09:
         return (port->control);
      }
   }
   else if (A >= 0x1AE0)
   {
      switch (A & 0x1F)
      {
      case 0x00:
      case 0x01:
      case 0x02:
      case 0x03:
         return ((arcade_card.AC.shift_latch >> (A & 3) * 8) & 0xFF);

      case 0x04:
         return (arcade_card.AC.shift_bits);

      case 0x05:
         return (arcade_card.AC.rotate_bits);

      case 0x1C:
         return (0x00);

      case 0x1D:
         return (0x00);

      case 0x1E:
         return (0x10); // Version number.  We should verify this!

      case 0x1F:
         return (0x51); // Arcade Card ID
      }
   }

   //if(!peek)
   // printf("AC unknown read: %08x\n", A);
   return (0xFF);
}

void ArcadeCard_Write(uint32 A, uint8 V)
{
   //printf("AC Write: %04x %02x\n", A, V);
   if ((A & 0x1F00) != 0x1A00)
   {
      //printf("AC unknown write: %08x:%02x\n", A, V);
      return;
   }

   if (A < 0x1A80)
   {
      ACPort_t* port = &arcade_card.AC.ports[(A >> 4) & 0x3];

      switch (A & 0xF)
      {
      default:   //printf("AC unknown write: %08x:%02x\n", A, V);
         break;

      case 0x00:
      case 0x01:
      {
         uint32 aci;

         aci = port->base;
         if (port->control & 0x2)
         {
            aci += port->offset;
            if (port->control & 0x8)
               aci += 0xFF0000;
         }
         aci &= 0x1FFFFF;

         arcade_card.ACRAMUsed = true;
         arcade_card.ACRAM[aci] = V;
         ArcadeCard_AutoIncrement(port);
      }
      break;

      case 0x02:
         port->base &= ~0xFF;
         port->base |= V << 0;
         break;

      case 0x03:
         port->base &= ~0xFF00;
         port->base |= V << 8;
         break;

      case 0x04:
         port->base &= ~0xFF0000;
         port->base |= V << 16;
         break;

      case 0x05:
         port->offset &= ~0xFF;
         port->offset |= V << 0;
         if ((port->control & 0x60) == 0x20)
         {
            if (port->control & 0x08)
               port->base += 0xFF0000;

            port->base = (port->base + port->offset) & 0xFFFFFF;
         }
         break;

      case 0x06:
         port->offset &= ~0xFF00;
         port->offset |= V << 8;
         if ((port->control & 0x60) == 0x40)
         {
            if (port->control & 0x08)
               port->base += 0xFF0000;

            port->base = (port->base + port->offset) & 0xFFFFFF;
         }
         break;

      case 0x07:
         port->increment &= ~0xFF;
         port->increment |= V << 0;
         break;

      case 0x08:
         port->increment &= ~0xFF00;
         port->increment |= V << 8;
         break;

      case 0x09:
         port->control = V & 0x7F;
         break;

      case 0x0A:
         if ((port->control & 0x60) == 0x60)
         {
            if (port->control & 0x08)
               port->base += 0xFF0000;

            port->base = (port->base + port->offset) & 0xFFFFFF;
         }
         break;
      }

      //if(A & 0x40)
      // printf("AC mirrored port write: %08x:%02x\n", A, V);
   }
   else if (A >= 0x1AE0)
   {
      switch (A & 0x1F)
      {
      default: //printf("Unknown AC write: %04x %02x\n", A, V);
         break;

      case 0x00:
      case 0x01:
      case 0x02:
      case 0x03:
         arcade_card.AC.shift_latch &= ~(0xFF << (A & 3) * 8);
         arcade_card.AC.shift_latch |= (V << (A & 3) * 8);
         break;

      case 0x04:
         arcade_card.AC.shift_bits = V & 0xF;
         if (arcade_card.AC.shift_bits)
         {
            if (arcade_card.AC.shift_bits & 0x8)
               arcade_card.AC.shift_latch >>= 16 - arcade_card.AC.shift_bits;
            else
               arcade_card.AC.shift_latch <<= arcade_card.AC.shift_bits;
         }
         break;

      case 0x05:
         arcade_card.AC.rotate_bits = V & 0xF;   // Untested code follows:
         if (arcade_card.AC.rotate_bits)
         {
            if (arcade_card.AC.rotate_bits & 0x8)
            {
               unsigned int sa = 16 - arcade_card.AC.rotate_bits;
               unsigned int orv;

               orv = arcade_card.AC.shift_latch << (32 - sa);

               arcade_card.AC.shift_latch = (arcade_card.AC.shift_latch >> sa) | orv;
            }
            else
            {
               unsigned int sa = arcade_card.AC.rotate_bits;
               unsigned int orv;

               orv = (arcade_card.AC.shift_latch >> (32 - sa)) & ((1 << sa) - 1);

               arcade_card.AC.shift_latch = (arcade_card.AC.shift_latch << sa) | orv;
            }
         }
         break;
      }
   }
}

void ArcadeCard_init(void)
{
   arcade_card.ACRAMUsed = false;

   memset(&arcade_card.AC, 0, sizeof(arcade_card.AC));

   memset(arcade_card.ACRAM, 0, sizeof(arcade_card.ACRAM));
}

void ArcadeCard_Power(void)
{
   memset(arcade_card.ACRAM, 0, 0x200000);
   arcade_card.ACRAMUsed = false;
}

int ArcadeCard_StateAction(StateMem* sm, int load)
{
   SFORMAT ACUsedRegs[] =
   {
      SFVAR_BOOL(arcade_card.ACRAMUsed),
      SFEND
   };

   if (!MDFNSS_StateAction(sm, load, ACUsedRegs, "ArcadeCardUsed"))
      return (0);

   SFORMAT ACStateRegs[] =
   {
      SFVARN(arcade_card.AC.ports[0].base, "AC[0].base"), SFVARN(arcade_card.AC.ports[0].offset, "AC[0].offset"),
      SFVARN(arcade_card.AC.ports[0].increment, "AC[0].increment"), SFVARN(arcade_card.AC.ports[0].control, "AC[0].control"),

      SFVARN(arcade_card.AC.ports[1].base, "AC[1].base"), SFVARN(arcade_card.AC.ports[1].offset, "AC[1].offset"),
      SFVARN(arcade_card.AC.ports[1].increment, "AC[1].increment"), SFVARN(arcade_card.AC.ports[1].control, "AC[1].control"),

      SFVARN(arcade_card.AC.ports[2].base, "AC[2].base"), SFVARN(arcade_card.AC.ports[2].offset, "AC[2].offset"),
      SFVARN(arcade_card.AC.ports[2].increment, "AC[2].increment"), SFVARN(arcade_card.AC.ports[2].control, "AC[2].control"),

      SFVARN(arcade_card.AC.ports[3].base, "AC[3].base"), SFVARN(arcade_card.AC.ports[3].offset, "AC[3].offset"),
      SFVARN(arcade_card.AC.ports[3].increment, "AC[3].increment"), SFVARN(arcade_card.AC.ports[3].control, "AC[3].control"),

      SFVARN(arcade_card.AC.shift_bits, "ACShiftBits"),
      SFVARN(arcade_card.AC.shift_latch, "ACShift"),
      SFVARN(arcade_card.AC.rotate_bits, "ACRotateBits"),
      SFARRAY(arcade_card.ACRAM, arcade_card.ACRAMUsed ? 0x200000 : 0x0),
      SFEND
   };
   int ret = MDFNSS_StateAction(sm, load, ACStateRegs, "ArcadeCard");


   return (ret);
}


void ArcadeCard_PeekRAM(uint32 Address, uint32 Length, uint8* Buffer)
{
   while (Length--)
   {
      Address &= (1 << 21) - 1;

      *Buffer = arcade_card.ACRAM[Address];

      Address++;
      Buffer++;
   }
}

void ArcadeCard_PokeRAM(uint32 Address, uint32 Length, const uint8* Buffer)
{
   uint8 used = 0;

   while (Length--)
   {
      Address &= (1 << 21) - 1;

      arcade_card.ACRAM[Address] = *Buffer;
      used |= arcade_card.ACRAM[Address];

      Address++;
      Buffer++;
   }

   if (used)
      arcade_card.ACRAMUsed = true;
}

