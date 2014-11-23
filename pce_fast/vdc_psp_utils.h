#ifndef VDC_PSP_UTILS_H
#define VDC_PSP_UTILS_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <pspthreadman.h>
#include <pspkernel.h>
#include <pspgu.h>
#include <pspdisplay.h>
#include <stddef.h>
#include <libretro.h>

#include "pce.h"

#define TO_UNCACHED_PTR(ptr)     ((void *)((u32)(ptr)|0x40000000))
#define TO_CACHED_PTR(ptr)       ((void *)((u32)(ptr)&~0x40000000))

#define FROM_GU_POINTER(ptr)     ((void *)((u32)(ptr)|0x44000000))
#define TO_GU_POINTER(ptr)       ((void *)((u32)(ptr)&~0x44000000))


#define PCE_FRAME_WIDTH    512
#define PCE_FRAME_HEIGHT   256
#define PCE_LINE_SIZE      512

#define PSP_VRAM_MAX             ((u16*)0x44200000)
#define PCE_VRAMTEXTURE_BG       (PSP_VRAM_MAX           - (32*1024))
#define PCE_VRAMTEXTURE_SPRITE   (PCE_VRAMTEXTURE_BG     - (32*1024))
#define PCE_FRAME_TEXTURE        (PCE_VRAMTEXTURE_SPRITE     - (PCE_LINE_SIZE * PCE_FRAME_HEIGHT))
#define PCE_PALETTE_CACHE        (PCE_FRAME_TEXTURE     - 512)

typedef union psp1_vertex
{
   struct
   {
      s8 u, v;
      s16 x, y, z;
   };
   u64 val;
} psp1_vertex_t;

typedef struct psp1_sprite
{
   psp1_vertex_t v0;
   psp1_vertex_t v1;

} psp1_sprite_t;

typedef struct __attribute__((packed)) psp1_vertex_uv16bit
{
   s16 u, v;
   s16 x, y, z;
} psp1_vertex_uv16bit_t;
typedef struct __attribute__((packed)) psp1_sprite_uv16bit
{
   psp1_vertex_uv16bit_t v0;
   psp1_vertex_uv16bit_t v1;

} psp1_sprite_uv16bit_t;
static inline void sceGuTexScale_8bit(float u, float v)
{
   sceGuTexScale(128.0 / u, 128.0 / v);
}

static inline void sceGuTexScale_16bit(float u, float v)
{
   sceGuTexScale(32768.0 * u, 32768.0 * v);
}

static inline void init_3Dprojection(void)
{
   ScePspFMatrix4 m_identity =
   {
      {1.0f, 0.0f, 0.0f, 0.0f},
      {0.0f, 1.0f, 0.0f, 0.0f},
      {0.0f, 0.0f, 1.0f, 0.0f},
      {0.0f, 0.0f, 0.0f, 1.0f},
   };

   sceGuOffset(2048, 2048);
   sceGuViewport(2048, 2048, 4096, -4096);
   sceGuSetMatrix(GU_VIEW, &m_identity);
   sceGuSetMatrix(GU_MODEL, &m_identity);

}



static inline void setup_3Dprojection_8bit(void)
{
   static ScePspFMatrix4 m_proj8bit =
   {
      {128.0f / 2048.0f, 0.0f, 0.0f, 0.0f},
      {0.0f, 128.0f / 2048.0f, 0.0f, 0.0f},
      {0.0f, 0.0f, 128.0f / 65536.0f, 0.0f},
      {0.0f, 0.0f, 0.0f, 1.0f},
   };

   sceGuSetMatrix(GU_PROJECTION, &m_proj8bit);
}

static inline void setup_3Dprojection_16bit(void)
{
   static ScePspFMatrix4 m_proj16bit =
   {
      {32768.0f / 2048.0f, 0.0f, 0.0f, 0.0f},
      {0.0f, 32768.0f / 2048.0f, 0.0f, 0.0f},
      {0.0f, 0.0f, 32768.0f / 65536.0f, 0.0f},
      {0.0f, 0.0f, 0.0f, 1.0f},
   };

   sceGuSetMatrix(GU_PROJECTION, &m_proj16bit);
}

static inline void setup_3Dprojection_32bit(void)
{
   static ScePspFMatrix4 m_proj32bit =
   {
      {1.0f / 2048.0f, 0.0f, 0.0f, 0.0f},
      {0.0f, 1.0f / 2048.0f, 0.0f, 0.0f},
      {0.0f, 0.0f, 1.0f / 65536.0f, 0.0f},
      {0.0f, 0.0f, 0.0f, 1.0f},
   };

   sceGuSetMatrix(GU_PROJECTION, &m_proj32bit);
}


typedef struct
{
   unsigned int* start;
   unsigned int* current;
   int parent_context;
} GuDisplayList;
extern GuDisplayList* gu_list;
extern int ge_list_executed[2];

#if 1
#define sendCommandi sendCommandi_
#define sendCommandf sendCommandf_
#else
void sendCommandi(int cmd, int argument);
void sendCommandiStall(int cmd, int argument);
void sendCommandf(int cmd, float argument);
#endif

static inline void sendCommandi_(int cmd, int argument)
{
   *(gu_list->current++) = (cmd << 24) | (argument & 0xffffff);
}

static inline void sendCommandf_(int cmd, float argument)
{
   union
   {
      float f;
      unsigned int i;
   } t;
   t.f = argument;

   sendCommandi_(cmd, t.i >> 8);
}


#define sceGuDrawArray  sceGuDrawArray_
#define sceGuClutLoad   sceGuClutLoad_
#define sceGuClutMode   sceGuClutMode_
#define sceGuTexImage   sceGuTexImage_
#define sceGuStencilFunc sceGuStencilFunc_
#define sceGuStencilOp sceGuStencilOp_

#define sceGuEnableStencilTest() sendCommandi(36,1)
#define sceGuDisableStencilTest() sendCommandi(36,0)
#define sceGuEnableTexture2D() sendCommandi(30,1)
#define sceGuDisableTexture2D() sendCommandi(30,0)

static inline void sceGuScissor_fast(int x, int y, int w, int h)
{
   sendCommandi(212, (y << 10) | x);
   sendCommandi(213, ((h - 1) << 10) | (w - 1));
}

static inline void sceGuStencilFunc_(int func, int ref, int mask)
{
   sendCommandi(220, func | ((ref & 0xff) << 8) | ((mask & 0xff) << 16));
}
static inline void sceGuStencilOp(int fail, int zfail, int zpass)
{
   sendCommandi(221, fail | (zfail << 8) | (zpass << 16));
}

static inline void sceGuDrawArray_(int prim, int vtype, int count,
                                   const void* indices, const void* vertices)
{
   sendCommandi(18, vtype);
   sendCommandi(16, (((unsigned int)indices) >> 8) & 0xf0000);
   sendCommandi(2, ((unsigned int)indices) & 0xffffff);
   sendCommandi(16, (((unsigned int)vertices) >> 8) & 0xf0000);
   sendCommandi(1, ((unsigned int)vertices) & 0xffffff);
   sendCommandi(4, (prim << 16) | count);
}

static inline void sceGuClutLoad_(int num_blocks, const void* cbp)
{
   sendCommandi(176, ((unsigned int)cbp) & 0xffffff);
   sendCommandi(177, (((unsigned int)cbp) >> 8) & 0xf0000);
   sendCommandi(196, num_blocks);
}
static inline void sceGuClutMode_(unsigned int cpsm, unsigned int shift,
                                  unsigned int mask, unsigned int a3)
{
   unsigned int argument = (cpsm) | (shift << 2) | (mask << 8) | (a3 << 16);
   sendCommandi(197, argument);
}

static inline int getExp_(int val)
{
   unsigned int i;
   __asm__("clz %0, %1\n":"=r"(i):"r"(val&0x3FF));
   return 31 - i;
}

static inline void sceGuTexImage_(int mipmap, int width, int height, int tbw,
                           const void* tbp)
{
   sendCommandi(0xa0, ((unsigned int)tbp) & 0xffffff);
   sendCommandi(0xa8, ((((unsigned int)tbp) >> 8) & 0x0f0000) | tbw);
   sendCommandi(0xb8, (getExp_(height) << 8) | (getExp_(width)));

   //sceGuTexFlush
   sendCommandf(203, 0.0f);
}

#define sceGuOffset(X,Y) sceGuOffset_(2048+(X),2048+(Y))

static inline void sceGuOffset_(unsigned int x, unsigned int y)
{
   sendCommandi(76, x << 4);
   sendCommandi(77, y << 4);
}

static inline void update_stall_addr(void)
{
   sceGeListUpdateStallAddr(ge_list_executed[0], gu_list->current);
}

extern u8 msx[];

static void debug_put_char(int x, int y, u8 ch)
{
   int   i, j, l;
   u8* font;
   u16* vram_ptr;
   u16* vram;

   vram = PCE_FRAME_TEXTURE;
   vram += x;
   vram += (y * PCE_LINE_SIZE);

   font = &msx[(int)ch * 8];
   for (i = l = 0; i < 8; i++, l += 8, font++)
   {
      vram_ptr  = vram;
      for (j = 0; j < 8; j++)
      {
         if ((*font & (128 >> j)))
            *vram_ptr = 0xFFFF;
         else
            *vram_ptr = 0x0000;

         vram_ptr++;
      }
      vram += PCE_LINE_SIZE;
   }
}

#include <stdarg.h>

static int debug_X = 0;
static int debug_Y = 0;

static void debug_printf(const char* format, ...)
{
   va_list  opt;
   char     buff[2048], c;
   int      size, i, j;

   va_start(opt, format);
   size = vsnprintf(buff, (size_t) sizeof(buff), format, opt);

   for (i = 0; i < size; i++)
   {
      c = buff[i];
      switch (c)
      {
      case '\r':
         debug_X = 0;
         break;
      case '\n':
         debug_X = 0;
         debug_Y += 8;
         if (debug_Y >= PCE_FRAME_HEIGHT)
            debug_Y = 0;
         break;
      case '\t':
         for (j = 0; j < 5; j++)
         {
            debug_put_char(debug_X , debug_Y, ' ');
            debug_X += 7;
         }
         break;
      default:
         debug_put_char(debug_X, debug_Y, c);
         debug_X += 7;
         if (debug_X >= PCE_FRAME_WIDTH)
         {
            debug_X = 0;
            debug_Y += 8;
            if (debug_Y >= PCE_FRAME_HEIGHT)
               debug_Y = 0;
         }
      }
   }
}

static void debug_setpos(int X, int Y)
{
   debug_X = X;
   debug_Y = Y;
}
#include <pspctrl.h>

unsigned int read_system_buttons(void);


#endif // VDC_PSP_UTILS_H
