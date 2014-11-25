#ifndef __MDFN_CDROM_CDUTILITY_H
#define __MDFN_CDROM_CDUTILITY_H

#include "mednafen-types.h"
#include "string.h"

// Quick definitions here:
//
// ABA - Absolute block address, synonymous to absolute MSF
//  aba = (m_a * 60 * 75) + (s_a * 75) + f_a
//
// LBA - Logical block address(related: data CDs are required to have a pregap of 2 seconds, IE 150 frames/sectors)
//  lba = aba - 150


enum
{
   ADR_NOQINFO = 0x00,
   ADR_CURPOS  = 0x01,
   ADR_MCN     = 0x02,
   ADR_ISRC    = 0x03
};

// SubQ control field flags.
enum
{
   SUBQ_CTRLF_PRE  = 0x01,  // With 50/15us pre-emphasis.
   SUBQ_CTRLF_DCP  = 0x02,  // Digital copy permitted.
   SUBQ_CTRLF_DATA = 0x04,  // Data track.
   SUBQ_CTRLF_4CH  = 0x08,  // 4-channel CD-DA.
};

enum
{
   DISC_TYPE_CDDA_OR_M1 = 0x00,
   DISC_TYPE_CD_I       = 0x10,
   DISC_TYPE_CD_XA      = 0x20
};

typedef struct
{
   uint8 adr;
   uint8 control;
   uint32 lba;
} CDUtility_TOC_Track;

typedef struct
{
   uint8 first_track;
   uint8 last_track;
   uint8 disc_type;

   // [0] is unused, [100] is for the leadout track.
   // Also, for convenience, tracks[last_track + 1] will always refer
   // to the leadout track(even if last_track < 99, IE the leadout track details are duplicated).
   CDUtility_TOC_Track tracks[100 +1];

} CDUtility_TOC;

inline void CDUtility_Clear_TOC(CDUtility_TOC* toc)
{
   toc->first_track = toc->last_track = 0;
   toc->disc_type = 0;
   memset(toc->tracks, 0, sizeof(toc->tracks));
}

inline int CDUtility_FindTrackByLBA(CDUtility_TOC* toc, uint32 LBA)
{
   for (int32 track = toc->first_track; track <= (toc->last_track + 1); track++)
   {
      if (track == (toc->last_track + 1))
      {
         if (LBA < toc->tracks[100].lba)
            return (track - 1);
      }
      else
      {
         if (LBA < toc->tracks[track].lba)
            return (track - 1);
      }
   }
   return (0);
}

//
// Address conversion functions.
//
static inline uint32 AMSF_to_ABA(int32 m_a, int32 s_a, int32 f_a)
{
   return (f_a + 75 * s_a + 75 * 60 * m_a);
}

static inline void ABA_to_AMSF(uint32 aba, uint8* m_a, uint8* s_a, uint8* f_a)
{
   *m_a = aba / 75 / 60;
   *s_a = (aba - *m_a * 75 * 60) / 75;
   *f_a = aba - (*m_a * 75 * 60) - (*s_a * 75);
}

static inline int32 ABA_to_LBA(uint32 aba)
{
   return (aba - 150);
}

static inline uint32 LBA_to_ABA(int32 lba)
{
   return (lba + 150);
}

static inline int32 AMSF_to_LBA(uint8 m_a, uint8 s_a, uint8 f_a)
{
   return (ABA_to_LBA(AMSF_to_ABA(m_a, s_a, f_a)));
}

static inline void LBA_to_AMSF(int32 lba, uint8* m_a, uint8* s_a, uint8* f_a)
{
   ABA_to_AMSF(LBA_to_ABA(lba), m_a, s_a, f_a);
}

//
// BCD conversion functions
//


static inline uint8 BCD_to_U8(uint8 bcd_number)
{
   return (((bcd_number >> 4) * 10) + (bcd_number & 0x0F));
}

static inline uint8 U8_to_BCD(uint8 num)
{
   return (((num / 10) << 4) + (num % 10));
}

#endif
