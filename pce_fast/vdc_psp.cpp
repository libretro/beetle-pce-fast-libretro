#include "vdc.h"
#include "vdc_psp_utils.h"

#ifndef DISABLE_SW_RENDER
bool pce_do_hw_render;
#endif
static int cache_update_count = 0;

#ifdef PSP_PROFILER
unsigned int threadProfilerCallCount;
#endif


static unsigned int __attribute__((aligned(64))) d_list[128 * 1024];
static psp1_sprite_t __attribute__((aligned(64))) tile_coords_bg[2 * 1024];
static psp1_sprite_t __attribute__((aligned(64))) tile_coords_sprites[32][1024];

static __attribute__((aligned(64))) const u32 bitplane_lut[256] =
{
   0x00000000, 0x10000000, 0x01000000, 0x11000000, 0x00100000, 0x10100000, 0x01100000, 0x11100000,
   0x00010000, 0x10010000, 0x01010000, 0x11010000, 0x00110000, 0x10110000, 0x01110000, 0x11110000,
   0x00001000, 0x10001000, 0x01001000, 0x11001000, 0x00101000, 0x10101000, 0x01101000, 0x11101000,
   0x00011000, 0x10011000, 0x01011000, 0x11011000, 0x00111000, 0x10111000, 0x01111000, 0x11111000,

   0x00000100, 0x10000100, 0x01000100, 0x11000100, 0x00100100, 0x10100100, 0x01100100, 0x11100100,
   0x00010100, 0x10010100, 0x01010100, 0x11010100, 0x00110100, 0x10110100, 0x01110100, 0x11110100,
   0x00001100, 0x10001100, 0x01001100, 0x11001100, 0x00101100, 0x10101100, 0x01101100, 0x11101100,
   0x00011100, 0x10011100, 0x01011100, 0x11011100, 0x00111100, 0x10111100, 0x01111100, 0x11111100,

   0x00000010, 0x10000010, 0x01000010, 0x11000010, 0x00100010, 0x10100010, 0x01100010, 0x11100010,
   0x00010010, 0x10010010, 0x01010010, 0x11010010, 0x00110010, 0x10110010, 0x01110010, 0x11110010,
   0x00001010, 0x10001010, 0x01001010, 0x11001010, 0x00101010, 0x10101010, 0x01101010, 0x11101010,
   0x00011010, 0x10011010, 0x01011010, 0x11011010, 0x00111010, 0x10111010, 0x01111010, 0x11111010,

   0x00000110, 0x10000110, 0x01000110, 0x11000110, 0x00100110, 0x10100110, 0x01100110, 0x11100110,
   0x00010110, 0x10010110, 0x01010110, 0x11010110, 0x00110110, 0x10110110, 0x01110110, 0x11110110,
   0x00001110, 0x10001110, 0x01001110, 0x11001110, 0x00101110, 0x10101110, 0x01101110, 0x11101110,
   0x00011110, 0x10011110, 0x01011110, 0x11011110, 0x00111110, 0x10111110, 0x01111110, 0x11111110,

   0x00000001, 0x10000001, 0x01000001, 0x11000001, 0x00100001, 0x10100001, 0x01100001, 0x11100001,
   0x00010001, 0x10010001, 0x01010001, 0x11010001, 0x00110001, 0x10110001, 0x01110001, 0x11110001,
   0x00001001, 0x10001001, 0x01001001, 0x11001001, 0x00101001, 0x10101001, 0x01101001, 0x11101001,
   0x00011001, 0x10011001, 0x01011001, 0x11011001, 0x00111001, 0x10111001, 0x01111001, 0x11111001,

   0x00000101, 0x10000101, 0x01000101, 0x11000101, 0x00100101, 0x10100101, 0x01100101, 0x11100101,
   0x00010101, 0x10010101, 0x01010101, 0x11010101, 0x00110101, 0x10110101, 0x01110101, 0x11110101,
   0x00001101, 0x10001101, 0x01001101, 0x11001101, 0x00101101, 0x10101101, 0x01101101, 0x11101101,
   0x00011101, 0x10011101, 0x01011101, 0x11011101, 0x00111101, 0x10111101, 0x01111101, 0x11111101,

   0x00000011, 0x10000011, 0x01000011, 0x11000011, 0x00100011, 0x10100011, 0x01100011, 0x11100011,
   0x00010011, 0x10010011, 0x01010011, 0x11010011, 0x00110011, 0x10110011, 0x01110011, 0x11110011,
   0x00001011, 0x10001011, 0x01001011, 0x11001011, 0x00101011, 0x10101011, 0x01101011, 0x11101011,
   0x00011011, 0x10011011, 0x01011011, 0x11011011, 0x00111011, 0x10111011, 0x01111011, 0x11111011,

   0x00000111, 0x10000111, 0x01000111, 0x11000111, 0x00100111, 0x10100111, 0x01100111, 0x11100111,
   0x00010111, 0x10010111, 0x01010111, 0x11010111, 0x00110111, 0x10110111, 0x01110111, 0x11110111,
   0x00001111, 0x10001111, 0x01001111, 0x11001111, 0x00101111, 0x10101111, 0x01101111, 0x11101111,
   0x00011111, 0x10011111, 0x01011111, 0x11011111, 0x00111111, 0x10111111, 0x01111111, 0x11111111
};
/*
   bitplane_lut[i] = (((i >> 0x7) & 0x1) << (0 + 0)) |
                     (((i >> 0x6) & 0x1) << (0 + 4)) |
                     (((i >> 0x5) & 0x1) << (0 + 8)) |
                     (((i >> 0x4) & 0x1) << (0 + 12)) |
                     (((i >> 0x3) & 0x1) << (0 + 16)) |
                     (((i >> 0x2) & 0x1) << (0 + 20)) |
                     (((i >> 0x1) & 0x1) << (0 + 24)) |
                     (((i >> 0x0) & 0x1) << (0 + 28));

*/


static PspGeContext main_context_buffer;

static u16* const pce_palette_cache = PCE_PALETTE_CACHE;

static vdc_flags_t* vdc_flags = NULL;

#define PCE_DISPLAY_LIST_ID   0x3C00

#define PCE_RED(val)                (((val)>>3)&0x7)
#define PCE_GREEN(val)              (((val)>>6)&0x7)
#define PCE_BLUE(val)               (((val)>>0)&0x7)

#define PCE_TO_4bit_COLOR(val)      (((val)<<1)|((val)>>2))
#define PCE_TO_8bit_COLOR(val)      (((val)<<5)|((val)<<2)|((val)>>1))

#define PCE_RED4(val)               PCE_TO_4bit_COLOR(PCE_RED(val))
#define PCE_GREEN4(val)             PCE_TO_4bit_COLOR(PCE_GREEN(val))
#define PCE_BLUE4(val)              PCE_TO_4bit_COLOR(PCE_BLUE(val))
#define PCE_RED8(val)               PCE_TO_8bit_COLOR(PCE_RED(val))
#define PCE_GREEN8(val)             PCE_TO_8bit_COLOR(PCE_GREEN(val))
#define PCE_BLUE8(val)              PCE_TO_8bit_COLOR(PCE_BLUE(val))

#define PSP_BUILD_4444(R,G,B)       ((R)|((G)<<4)|((B)<<8))
#define PSP_BUILD_8888(R,G,B)       ((R)|((G)<<8)|((B)<<16))

#define PCE_TO_PSP4444(val, alpha)  (PSP_BUILD_4444(PCE_RED4(val),PCE_GREEN4(val),PCE_BLUE4(val))|(((alpha)&0x0F)<<12))
#define PCE_TO_PSP8888(val, alpha)  (PSP_BUILD_8888(PCE_RED8(val),PCE_GREEN8(val),PCE_BLUE8(val))|(((alpha)&0xFF)<<24))


psp1_sprite_t scanline_coords = { {{0, 0, 0, 0, 0}}, {{0, 0, 512, 0, 0}}};


static int frame_count = 0;
static inline void list_finish_callback(int id)
{
   if (id != PCE_DISPLAY_LIST_ID)
      return;

   //   SceCtrlData pad;
   //   sceCtrlPeekBufferPositive(&pad, 1);
   //   debug_setpos(0, 0);
   //   debug_printf("cache_update_count : %i\n", cache_update_count);
   //   debug_printf("\n\n\n\n\nVRAM[100+100*512] = 0x%08X\n",
   //                (u32)(PCE_FRAME_TEXTURE[100 + 100 * 512]));
   //   debug_printf("debug test\n");
   //   if (pad.Ly > 200)
   //      debug_printf("frame :%u\n", frame_count);

   sceGeRestoreContext(&main_context_buffer);

}

typedef union
{
   struct
   {
      unsigned CGX      : 1;
      unsigned CGY      : 2;
      unsigned flip_x   : 1;
      unsigned flip_y   : 1;
   };
   unsigned val;

} pce_sprite_shape_t;

typedef struct
{
   psp1_sprite_t part[2];
} pce_sprite_t;

typedef struct
{
   pce_sprite_t sprite[8];
} pce_sprite_block_t;

static inline void pce_sprite_flip_x_coords(psp1_sprite_t* coords)
{
   int temp;
   temp = coords->v0.u;
   coords->v0.u = coords->v1.u;
   coords->v1.u = temp;
}

static inline void pce_sprite_flip_y_coords(psp1_sprite_t* coords)
{
   int temp;
   temp = coords->v0.v;
   coords->v0.v = coords->v1.v;
   coords->v1.v = temp;
}

static inline void pce_sprite_swap_parts(pce_sprite_t* sprite)
{
   psp1_sprite_t temp = sprite->part[0];
   sprite->part[0].v0.u = sprite->part[1].v0.u;
   sprite->part[0].v0.v = sprite->part[1].v0.v;
   sprite->part[0].v1.u = sprite->part[1].v1.u;
   sprite->part[0].v1.v = sprite->part[1].v1.v;
   sprite->part[1].v0.u = temp.v0.u;
   sprite->part[1].v0.v = temp.v0.v;
   sprite->part[1].v1.u = temp.v1.u;
   sprite->part[1].v1.v = temp.v1.v;
}
static inline void pce_sprite_flip_x(pce_sprite_t* sprite)
{
   pce_sprite_flip_x_coords(&sprite->part[0]);
   pce_sprite_flip_x_coords(&sprite->part[1]);
}
static inline void pce_sprite_flip_y(pce_sprite_t* sprite)
{
   pce_sprite_swap_parts(sprite);
   pce_sprite_flip_y_coords(&sprite->part[0]);
   pce_sprite_flip_y_coords(&sprite->part[1]);
}

static inline void pce_sprite_swap(pce_sprite_t* sprite1, pce_sprite_t* sprite2)
{
   pce_sprite_t temp = *sprite1;

   sprite1->part[0].v0.u = sprite2->part[0].v0.u;
   sprite1->part[0].v0.v = sprite2->part[0].v0.v;
   sprite1->part[0].v1.u = sprite2->part[0].v1.u;
   sprite1->part[0].v1.v = sprite2->part[0].v1.v;
   sprite1->part[1].v0.u = sprite2->part[1].v0.u;
   sprite1->part[1].v0.v = sprite2->part[1].v0.v;
   sprite1->part[1].v1.u = sprite2->part[1].v1.u;
   sprite1->part[1].v1.v = sprite2->part[1].v1.v;

   sprite2->part[0].v0.u = temp.part[0].v0.u;
   sprite2->part[0].v0.v = temp.part[0].v0.v;
   sprite2->part[0].v1.u = temp.part[0].v1.u;
   sprite2->part[0].v1.v = temp.part[0].v1.v;
   sprite2->part[1].v0.u = temp.part[1].v0.u;
   sprite2->part[1].v0.v = temp.part[1].v0.v;
   sprite2->part[1].v1.u = temp.part[1].v1.u;
   sprite2->part[1].v1.v = temp.part[1].v1.v;

}


static inline void pce_create_sprite_tile_coords(
   pce_sprite_block_t* block, int tile_id, pce_sprite_shape_t shape)
{

   int i, j, x, y, u, id;

   //   if ((shape.val != 0b00010))
   //      return;

   u = 0;
   id = 0;
   if (shape.CGY == 0)
   {
      if (shape.CGX == 0)
      {
         for (i = 0; i < 8; i++)
         {
            for (j = 0; j < 2; j++)
            {
               block->sprite[id].part[j].v0.x = 0;
               block->sprite[id].part[j].v0.y = j << 3;
               block->sprite[id].part[j].v0.u = u;
               block->sprite[id].part[j].v0.v = 0;
               u += 2;

               block->sprite[id].part[j].v1.x = 16;
               block->sprite[id].part[j].v1.y = (j + 1) << 3;
               block->sprite[id].part[j].v1.u = u;
               block->sprite[id].part[j].v1.v = 1;

            }

            if (shape.flip_x)
               pce_sprite_flip_x(&block->sprite[id]);

            if (shape.flip_y)
               pce_sprite_flip_y(&block->sprite[id]);

            id++;
         }

      }
      else
      {

         for (i = 0; i < 4; i++)
         {
            for (x = 0; x < 32; x += 16)
            {
               for (j = 0; j < 2; j++)
               {
                  block->sprite[id].part[j].v0.x = x;
                  block->sprite[id].part[j].v0.y = j << 3;
                  block->sprite[id].part[j].v0.u = u;
                  block->sprite[id].part[j].v0.v = 0;

                  u += 2;

                  block->sprite[id].part[j].v1.x = x + 16;
                  block->sprite[id].part[j].v1.y = (j + 1) << 3;
                  block->sprite[id].part[j].v1.u = u;
                  block->sprite[id].part[j].v1.v = 1;

               }

               if (shape.flip_x)
                  pce_sprite_flip_x(&block->sprite[id]);

               if (shape.flip_y)
                  pce_sprite_flip_y(&block->sprite[id]);

               id++;

            }

            if (shape.flip_x)
               pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 2]);

         }

      }

   }
   else if (shape.CGY == 1)
   {
      if (shape.CGX == 0)
      {
         for (i = 0; i < 4; i++)
         {
            for (y = 0; y < 32; y += 16)
            {
               for (j = 0; j < 2; j++)
               {
                  block->sprite[id].part[j].v0.x = 0;
                  block->sprite[id].part[j].v0.y = y + (j << 3);
                  block->sprite[id].part[j].v0.u = u;
                  block->sprite[id].part[j].v0.v = 0;

                  u += 2;

                  block->sprite[id].part[j].v1.x = 16;
                  block->sprite[id].part[j].v1.y = y + ((j + 1) << 3);
                  block->sprite[id].part[j].v1.u = u;
                  block->sprite[id].part[j].v1.v = 1;
               }
               u += 4;

               if (shape.flip_x)
                  pce_sprite_flip_x(&block->sprite[id]);

               if (shape.flip_y)
                  pce_sprite_flip_y(&block->sprite[id]);

               id++;

            }
            if (i & 0x1)
               u -= 4;
            else
               u -= 12;
            if (shape.flip_y)
               pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 2]);
         }
      }
      else
      {
         for (i = 0; i < 2; i++)
         {
            for (y = 0; y < 32; y += 16)
            {
               for (x = 0; x < 32; x += 16)
               {
                  for (j = 0; j < 2; j++)
                  {
                     block->sprite[id].part[j].v0.x = x;
                     block->sprite[id].part[j].v0.y = y + (j << 3);
                     block->sprite[id].part[j].v0.u = u;
                     block->sprite[id].part[j].v0.v = 0;

                     u += 2;

                     block->sprite[id].part[j].v1.x = x + 16;
                     block->sprite[id].part[j].v1.y = y + ((j + 1) << 3);
                     block->sprite[id].part[j].v1.u = u;
                     block->sprite[id].part[j].v1.v = 1;

                  }

                  if (shape.flip_x)
                     pce_sprite_flip_x(&block->sprite[id]);

                  if (shape.flip_y)
                     pce_sprite_flip_y(&block->sprite[id]);

                  id++;
               }

               if (shape.flip_x)
                  pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 2]);
            }
            if (shape.flip_y)
            {
               pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 3]);
               pce_sprite_swap(&block->sprite[id - 2], &block->sprite[id - 4]);
            }
         }
      }
   }
   else
   {
      if (shape.CGX == 0)
      {
         for (i = 0; i < 2; i++)
         {
            for (y = 0; y < 64; y += 16)
            {
               for (j = 0; j < 2; j++)
               {
                  block->sprite[id].part[j].v0.x = 0;
                  block->sprite[id].part[j].v0.y = y + (j << 3);
                  block->sprite[id].part[j].v0.u = u;
                  block->sprite[id].part[j].v0.v = 0;

                  u += 2;

                  block->sprite[id].part[j].v1.x = 16;
                  block->sprite[id].part[j].v1.y = y + ((j + 1) << 3);
                  block->sprite[id].part[j].v1.u = u;
                  block->sprite[id].part[j].v1.v = 1;
               }
               u += 4;

               if (shape.flip_x)
                  pce_sprite_flip_x(&block->sprite[id]);

               if (shape.flip_y)
                  pce_sprite_flip_y(&block->sprite[id]);

               id++;

            }
            u -= 28;
            if (shape.flip_y)
            {
               pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 4]);
               pce_sprite_swap(&block->sprite[id - 2], &block->sprite[id - 3]);
            }
         }

      }
      else
      {
         for (y = 0; y < 64; y += 16)
         {
            for (x = 0; x < 32; x += 16)
            {
               for (j = 0; j < 2; j++)
               {
                  block->sprite[id].part[j].v0.x = x;
                  block->sprite[id].part[j].v0.y = y + (j << 3);
                  block->sprite[id].part[j].v0.u = u;
                  block->sprite[id].part[j].v0.v = 0;

                  u += 2;

                  block->sprite[id].part[j].v1.x = x + 16;
                  block->sprite[id].part[j].v1.y = y + ((j + 1) << 3);
                  block->sprite[id].part[j].v1.u = u;
                  block->sprite[id].part[j].v1.v = 1;

               }

               if (shape.flip_x)
                  pce_sprite_flip_x(&block->sprite[id]);

               if (shape.flip_y)
                  pce_sprite_flip_y(&block->sprite[id]);

               id++;

            }

            if (shape.flip_x)
               pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 2]);

         }
         if (shape.flip_y)
         {
            pce_sprite_swap(&block->sprite[id - 1], &block->sprite[id - 7]);
            pce_sprite_swap(&block->sprite[id - 2], &block->sprite[id - 8]);
            pce_sprite_swap(&block->sprite[id - 3], &block->sprite[id - 5]);
            pce_sprite_swap(&block->sprite[id - 4], &block->sprite[id - 6]);
         }

      }
   }


   int origin_u = ((tile_id) & 15) << 2;
   int origin_v = (tile_id >> 4);

   //   printf("tile_id : %i, origin_u : %i, origin_v : %i\n", tile_id, origin_u,
   //          origin_v);

   //   if ((shape.val == 0b00010) && (tile_id == 0))
   //   {
   //      for (i = 0; i < 8; i++)
   //      {
   //         printf("%i: (%2i,%2i,%2i,%2i) , (%2i,%2i,%2i,%2i) + (%2i,%2i,%2i,%2i) , (%2i,%2i,%2i,%2i)\n",
   //                i,
   //                (s32)block->sprite[i].part[0].v0.x, (s32)block->sprite[i].part[0].v0.y,
   //                (s32)block->sprite[i].part[0].v0.u, (s32)block->sprite[i].part[0].v0.v,
   //                (s32)block->sprite[i].part[0].v1.x, (s32)block->sprite[i].part[0].v1.y,
   //                (s32)block->sprite[i].part[0].v1.u, (s32)block->sprite[i].part[0].v1.v,

   //                (s32)block->sprite[i].part[1].v0.x, (s32)block->sprite[i].part[1].v0.y,
   //                (s32)block->sprite[i].part[1].v0.u, (s32)block->sprite[i].part[1].v0.v,
   //                (s32)block->sprite[i].part[1].v1.x, (s32)block->sprite[i].part[1].v1.y,
   //                (s32)block->sprite[i].part[1].v1.u, (s32)block->sprite[i].part[1].v1.v);
   //      }

   //   }

   for (i = 0; i < 8; i++)
   {
      for (j = 0; j < 2; j++)
      {
         block->sprite[i].part[j].v0.u += origin_u;
         block->sprite[i].part[j].v0.v += origin_v;

         block->sprite[i].part[j].v1.u += origin_u;
         block->sprite[i].part[j].v1.v += origin_v;
      }
   }

}

static inline void init_video_ge(void)
{
   psp1_sprite_t* tile = (psp1_sprite_t*)(((u32)tile_coords_bg) | 0x40000000);
   int i, j;
   for (j = 0; j < 32; j++)
   {
      for (i = 0; i < 64; i++)
      {
         tile->v0.x = 0;
         tile->v0.y = 0;
         tile->v0.u = i;
         tile->v0.v = j;

         tile->v1.x = 8;
         tile->v1.y = 8;
         tile->v1.u = i + 1;
         tile->v1.v = j + 1;

         tile++;
      }
   }



   pce_sprite_shape_t shape;
   pce_sprite_block_t* block;

   for (shape.val = 0; shape.val < 32; shape.val++)
   {
      block = (pce_sprite_block_t*)tile_coords_sprites[shape.val];
      for (i = 0; i < 64; i++)
      {
         pce_create_sprite_tile_coords(block, i << 3, shape);
         block++;
      }
   }

   sceKernelDcacheWritebackInvalidateAll();

   vdc_flags = (vdc_flags_t*)vdc;

}

static inline void fix_tile_cache_sprites(uint16 A)
{
   u64* line_ge = ((u64*)PCE_VRAMTEXTURE_SPRITE) + ((A >> 6) << 4) +
                  ((A & 0x7) << 1) + ((A >> 3) & 0x1);
   u16 src_line = vdc->VRAM[A];
   u64  dst_line = *line_ge;

   dst_line &= ~(0x1111111111111111ULL << ((A >> 4) & 0x3));
   dst_line |= bitplane_lut[src_line >> 8] << ((A >> 4) & 0x3);
   dst_line |= (u64)bitplane_lut[src_line & 0xFF] << (((A >> 4) & 0x3) + 32);

   *line_ge = dst_line;
}

static inline  void fix_tile_cache_bg(uint16 A)
{
   u32* line_ge = ((u32*)PCE_VRAMTEXTURE_BG) + ((A >> 6) << 5) +
                  ((A & 0x7) << 2) + ((A >> 4) & 0x3);
   u16 src_line = vdc->VRAM[A];
   u32 dst_line = *line_ge;

   if (A & 0x8) //bp 23
   {
      dst_line &= 0x33333333;
      dst_line |= bitplane_lut[src_line & 0xFF] << 2;
      dst_line |= bitplane_lut[src_line >> 8] << 3;
   }
   else // bp 01
   {
      dst_line &= 0xCCCCCCCC;
      dst_line |= bitplane_lut[src_line & 0xFF];
      dst_line |= bitplane_lut[src_line >> 8] << 1;
   }

   *line_ge = dst_line;
}

static inline  void pce_fix_tile_cache_ge(uint16 A)
{
   cache_update_count++;
   fix_tile_cache_bg(A);
   fix_tile_cache_sprites(A);
}

static inline void pce_draw_tilemap(void)
{

   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGB);
   //   sceGuTexImage(0, 256, 256, 256, PCE_VRAMTEXTURE_BG);
   sceGuTexImage(0, 256, 256, 256, PCE_VRAMTEXTURE_SPRITE + 16 * 1024);
   //   sceGuTexImage(0, 256, 256, 256, vdc->bg_tile_cache[0]);

   sceGuTexMode(GU_PSM_T4, 0, 0, GU_TRUE);
   //   sceGuTexMode(GU_PSM_4444, 0, 0, GU_TRUE);
   sceGuClutMode(GU_PSM_4444, 0, 0xF, 0);
   sceGuClutLoad(32, pce_palette_cache);

   psp1_sprite_uv16bit_t* tilemap_coords =
      (psp1_sprite_uv16bit_t*) sceGuGetMemory(sizeof(psp1_sprite_uv16bit_t));

   tilemap_coords->v0.x = 0;
   tilemap_coords->v0.y = 0;
   tilemap_coords->v0.u = 0;
   tilemap_coords->v0.v = 0;

   tilemap_coords->v1.x = 256;
   tilemap_coords->v1.y = 256;
   tilemap_coords->v1.u = 256;
   tilemap_coords->v1.v = 256;

   sceGuDrawArray(GU_SPRITES, GU_TEXTURE_16BIT | GU_VERTEX_16BIT |
                  GU_TRANSFORM_2D, 2, NULL, (void*)tilemap_coords);


}

static inline void pce_draw_bg(void)
{
   //      pce_draw_tilemap();
   int width_lut[4] = {32, 64, 128, 128};
   int height_lut[2] = {32, 64};
   int width = width_lut[(vdc->MWR >> 4) & 3];
   int height = height_lut[(vdc->MWR >> 6) & 1];


   int start_x = vdc->BXR % ((width << 3) - 1);
   int start_y = vdc->BYR % ((height << 3) - 1);

   sceGuTexMode(GU_PSM_T4, 0, 0, GU_TRUE);
   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGBA);

   sceGuTexImage(0, 512, 256, 512, PCE_VRAMTEXTURE_BG);
   sceGuTexScale_8bit(64.0, 32.0);
   sceGuClutLoad(32, pce_palette_cache);

   int i, j;

   typedef struct __attribute((packed))
   {
      unsigned tile_id    : 11;
      unsigned unused     : 1;
      unsigned palette_id : 4;
   }
   pce_bat_t;

   pce_bat_t* bat = (pce_bat_t*)vdc->VRAM;

   for (j = 0; j < height ; j++)
   {
      for (i = 0; i < width ; i++)
      {
         sceGuOffset(start_x - (i << 3), start_y - (j << 3));

         sceGuClutMode(GU_PSM_4444, 0, 0x0F, bat->palette_id);
         sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                        GU_TRANSFORM_3D, 2, NULL, tile_coords_bg + bat->tile_id);
         bat++;
      }

   }




}

static int current_scanline = 0;
static bool burst_mode = false;

static int scroll_y = 0;



static inline void pce_start_frame_ge(void)
{
#ifndef DISABLE_HW_RENDER
   frame_count ++;
   current_scanline = -vdc_flags->VSR.VDS - vdc_flags->VSR.VSW - 1;
   current_scanline = -vdc_flags->VSR.VDS - vdc_flags->VSR.VSW - 22;
   current_scanline = -1;

   //   burst_mode = !(vdc_flags->CR.bg_sprite_enable_mask);

   //   if (burst_mode)
   //      printf("burst mode !!\n");


   RETRO_PERFORMANCE_INIT(gu_sync_time);
   RETRO_PERFORMANCE_START(gu_sync_time);
   sceGuSync(0, 0);
   RETRO_PERFORMANCE_STOP(gu_sync_time);

   sceGeSaveContext(&main_context_buffer);
   sceGuSetCallback(GU_CALLBACK_FINISH, list_finish_callback);


   int i;
   for (i = 0; i < 512; i++)
      if (i & 0xF)
         pce_palette_cache[i] = PCE_TO_PSP4444(vce.color_table[i], 0xF);
      else
         pce_palette_cache[i] = PCE_TO_PSP4444(vce.color_table[i], 0x0);


   sceGuStart(GU_DIRECT, d_list);

   init_3Dprojection();
   setup_3Dprojection_16bit();
   sceGuDisable(GU_DEPTH_TEST);
   sceGuDisable(GU_CULL_FACE);
   sceGuDisable(GU_CLIP_PLANES);
   sceGuDisable(GU_BLEND);

   //   sceGuTexFilter(GU_NEAREST,GU_NEAREST);


   sceGuDrawBufferList(GU_PSM_4444, PCE_FRAME_TEXTURE, PCE_LINE_SIZE);

   sceGuClearStencil(0);

   sceGuScissor(0, 0, 512, 256);
   sceGuEnable(GU_SCISSOR_TEST);

   sceGuClearColor(PCE_TO_PSP8888(vce.color_table[256], 0xFF));
   sceGuClear(GU_COLOR_BUFFER_BIT);


   //   if (burst_mode)
   //      return;

   //   sceGuScissor(0, 0, 512, PCE_FRAME_HEIGHT);
   //   sceGuClearColor(PCE_TO_PSP8888(vce.color_table[0], 0xFF));
   //   sceGuClear(GU_COLOR_BUFFER_BIT | GU_STENCIL_BUFFER_BIT);

   sceGuColor(PCE_TO_PSP8888(vce.color_table[0], 0xFF));

   sceGuEnable(GU_ALPHA_TEST);
   sceGuAlphaFunc(GU_NOTEQUAL, 0x0, 0xFF);



   //   RETRO_PERFORMANCE_INIT(gba_draw_bg_mode0_proc);
   //   RETRO_PERFORMANCE_START(gba_draw_bg_mode0_proc);
   //   pce_draw_bg();
   //   RETRO_PERFORMANCE_STOP(gba_draw_bg_mode0_proc);
   //   update_stall_addr();

   sceGuTexMode(GU_PSM_T4, 0, 0, GU_TRUE);
   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGBA);

   sceGuTexImage(0, 512, 256, 512, PCE_VRAMTEXTURE_BG);
   sceGuTexScale_8bit(64.0, 32.0);
   sceGuClutLoad(32, pce_palette_cache);

   sceGuEnable(GU_STENCIL_TEST);
   sceGuStencilFunc(GU_ALWAYS, 0x80, 0xFF);
   sceGuStencilOp(GU_KEEP, GU_KEEP, GU_REPLACE);

   //   scroll_y = vdc_flags->BYR.scroll_y;
   //   printf("vdc_flags->BYR.scroll_y: %u\n", (u32)vdc_flags->BYR.scroll_y);
   //   display_start_y = vdc_flags->VSR.VDS + vdc_flags->VSR.VSW;
   //   display_end_y   = vdc_flags->VSR.VDS + vdc_flags->VSR.VSW + vdc_flags->VDR.VDW;

   //   pce_sat_attr_t* sprites = (pce_sat_attr_t*)(vdc->SAT);
   //   printf("start :\n");
   //   for (i = 0; i < 64; i++)
   //      printf("%i   ", sprites[i].prio);
   //   printf("\n");

   //   printf("\n");
   //   printf("%u-",(u32)vdc_flags->CR.sprite_enable);

   //   printf("burstmode frame %i: before : %3s", frame_count, vdc->burst_mode?"yes":"no");

   burst_mode = vdc->burst_mode;


   //   for (i=0; i<512; i++)
   //   {
   //      pce_palette_cache[i]=0xFFFF;
   //   }

#endif
}

static inline void pce_draw_scanline_ge(int line_width)
{
#ifndef DISABLE_HW_RENDER
   current_scanline++;

   //   return;

   if (vdc->burst_mode)
   {
      burst_mode = true;
      return;
   }

   if (current_scanline < 0)
      return;

   if (current_scanline >= PCE_FRAME_HEIGHT)
      return;

   if (current_scanline > vdc_flags->VDR.VDW)
      return;


   int width_lut[4] = {32, 64, 128, 128};
   int height_lut[2] = {32, 64};
   int width = width_lut[vdc_flags->MWR.virtual_screen_width];
   int height = height_lut[vdc_flags->MWR.virtual_screen_height];

   if (current_scanline == 0)
   {
      //      printf("vdc_flags->BYR.scroll_y: %u\n", (u32)vdc_flags->BYR.scroll_y);
      scroll_y = vdc_flags->BYR.scroll_y;
   }

   //   current_scanline=scanline;


   //   RETRO_PERFORMANCE_INIT(pce_draw_scanline_ge_func);
   //   RETRO_PERFORMANCE_START(pce_draw_scanline_ge_func);

   sceGuScissor_fast(0, current_scanline, line_width, current_scanline + 1);

   sceGuStencilFunc(GU_ALWAYS, (0x10 >> vdc_flags->CR.sprite_enable), 0xFF);
   sceGuDisableTexture2D();

   //   sceGuColor(0xFF000000);

   sceGuOffset(0, -current_scanline);

   sceGuDrawArray(GU_LINES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                  GU_TRANSFORM_3D, 2, NULL, &scanline_coords);



   //   if (current_scanline == 20)
   //   {

   //      printf("sprite %10s  ",vdc_flags->CR.sprite_enable?"enable":"disable");
   //      printf("bg     %10s\n",vdc_flags->CR.bg_enable?"enable":"disable");
   //   }

   if (!vdc_flags->CR.bg_enable)
      return;

   sceGuEnableTexture2D();
   sceGuStencilFunc(GU_ALWAYS, 0x80 | (0x10 >> vdc_flags->CR.sprite_enable), 0xFF);




   //   printf("vdc->BG_YOffset: %u\n", vdc->BG_YOffset);
   //   printf("vdc->BYR: %u\n", (u32)vdc->BYR);
   //   printf("vdc_flags->BYR.scroll_y: %u\n", (u32)vdc_flags->BYR.scroll_y);




   //   int start_x = vdc->BXR & ((width << 3) - 1);
   //   int start_y = (vdc->BYR + current_scanline) & ((height << 3) - 1);

   //   int start_x = vdc->BG_XOffset & ((width << 3) - 1);
   //   int start_y = (vdc->BG_YOffset) & ((height << 3) - 1);
   //   int start_x = vdc_flags->BXR.scroll_x & ((width << 3) - 1);
   //   int start_y = (current_scanline +vdc_flags->BYR.scroll_y) & ((height << 3) - 1);
   //   int start_y = (current_scanline +vdc->BG_YOffset) & ((height << 3) - 1);
   //   int start_y = (current_scanline + scroll_y) & ((height << 3) - 1);
   //   start_y &= ~0x7;

   int start_x = vdc->BG_XOffset & ((width << 3) - 1);
   int start_y = (vdc->BG_YOffset) & ((height << 3) - 1);

   //      sceGuScissor(0, start_y, PCE_FRAME_WIDTH, start_y + 1);

   typedef struct __attribute((packed))
   {
      unsigned tile_id    : 11;
      unsigned unused     : 1;
      unsigned palette_id : 4;
   }
   pce_bat_t;

   pce_bat_t* bat_base = (pce_bat_t*)vdc->VRAM + ((start_y >> 3) * width);

   pce_bat_t* bat = bat_base + (start_x >> 3);
   int x = -(start_x & 0x7);


   int old_palette_id = -1;
   int vertexCount = 0;


   while (x < line_width)
   {
      //      sceGuOffset(-x, start_y);
      //      sceGuOffset(-(x&~0x7), -(((vdc->BYR + current_scanline)&0x7)+(current_scanline&~0x7)));
      //      sceGuOffset(-(x), -((current_scanline - (start_y & 0x7))));
      sceGuOffset(-(x), -((current_scanline - (start_y & 0x7))));
      //      sceGuOffset(-(x), -(start_y) );

      //      vertexCount += 2;

      if (old_palette_id != bat->palette_id)
      {
         old_palette_id = bat->palette_id;
         sceGuClutMode(GU_PSM_4444, 0, 0x0F, old_palette_id);
      }

      //      sceGuClutMode(GU_PSM_4444, 0, 0x0F, bat->palette_id);
      sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                     GU_TRANSFORM_3D, 2, NULL, tile_coords_bg + bat->tile_id);
      x += 8;
      bat++;
      if (bat == (bat_base + width))
         bat = bat_base;
      //      printf("x :%i\n",x);
   }

   update_stall_addr();
   //   printf("current_scanline :%i\n",current_scanline);

   //   RETRO_PERFORMANCE_STOP(pce_draw_scanline_ge_func);

   //   if (current_scanline == 100)
   //   {
   //      pce_sat_attr_t* sprites = (pce_sat_attr_t*)(vdc->SAT);
   //      int i;
   //      printf("scanline 100 :\n");
   //      for (i=0; i<64; i++)
   //      {
   //         printf("%i   ", sprites[i].prio);
   //      }
   //      printf("\n");
   //   }

   //   printf("%u-",(u32)vdc_flags->CR.sprite_enable);

#endif
}

static inline void pce_draw_sprites(void)
{
   //   printf("\n");
   //   if (burst_mode)

   //   printf("   after : %3s", vdc->burst_mode?"yes":"no");
   //   printf("   local_burst_mode : %3s\n", burst_mode?"yes":"no");

   if (burst_mode)
      return;

   //   if (!vdc_flags->CR.sprite_enable)

   sceGuEnableStencilTest();

   //   sceGuStencilOp(GU_INCR, GU_INCR, GU_INCR);
   sceGuStencilOp(GU_INCR, GU_INCR, GU_INCR);


   //   sceGuScissor(0, 0, PCE_FRAME_WIDTH, PCE_FRAME_HEIGHT);
   //   sceGuTexMode(GU_PSM_T4, 0, 0, GU_TRUE);
   //   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGBA);
   sceGuTexImage(0, 512, 256, 512, PCE_VRAMTEXTURE_SPRITE);
   sceGuTexScale_8bit(64.0, 32.0);
   sceGuClutLoad(32, pce_palette_cache + 256);
   //   sceGuClutLoad(32, pce_palette_cache);

   pce_sat_attr_t* sprites = (pce_sat_attr_t*)(vdc->SAT);

   sceGuEnableTexture2D();

   int i;

   for (i = 0; i < 64; i++)
   {
      pce_sat_attr_t* sprite = &sprites[i];

      //      if (!sprite->x || !sprite->y)
      //         continue;

      //      printf("i: %3i, sprite->x : %3u, sprite->y : %3u\n",i ,sprite->x, sprite->y);

      sceGuOffset(32 - sprite->x, 64 - sprite->y);

      sceGuClutMode(GU_PSM_4444, 0, 0x0F, sprite->palette_id);
      if (sprite->prio)
         sceGuStencilFunc(GU_EQUAL, 0, 0x70);
      else
         sceGuStencilFunc(GU_EQUAL, 0, 0xF0);

      // sceGuStencilFunc(GU_EQUAL, 0x10, 0xF0);

      pce_sprite_shape_t shape;
      shape.val = 0;
      shape.CGX = sprite->width;
      shape.CGY = sprite->height;
      shape.flip_x = sprite->h_flip;
      shape.flip_y = sprite->v_flip;

      //      if (shape.val != 0b00010)
      //      if (!(shape.val & 0b00010))
      //         continue;

      int vertex_count = (shape.CGX ? 2 : 1) * (shape.CGY ? shape.CGY & 0x2 ? 8 : 4 :
                         2) * 2;

      //      printf("vertex_count : %i\n", vertex_count);

      int tile_id = sprite->tile_id & ~0x7;

      int offset;
      if (sprite->width == 0)
      {
         if (sprite->height == 0)
            offset = sprite->tile_id & 0b111;
         else if (sprite->height == 1)
            offset = (sprite->tile_id & 0b100) | ((sprite->tile_id & 0b001) << 1);
         else
            offset = ((sprite->tile_id & 0b001) << 2);
      }
      else
      {
         if (sprite->height == 0)
            offset = sprite->tile_id & 0b110;
         else if (sprite->height == 1)
            offset = sprite->tile_id & 0b100;
         else
            offset = 0;
      }
      tile_id += offset;
      tile_id <<= 1;

      //      if ((shape.CGX == 0) && (shape.CGY & 0b10) && (shape.flip_x || shape.flip_y))
      //         printf("tall sprite found !!!\n");


      sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                     GU_TRANSFORM_3D, vertex_count, NULL,
                     &tile_coords_sprites[shape.val][tile_id]);
      //      printf("shape.val : %u\n", shape.val);
      //      printf("tile_id : %u\n", tile_id);
      //      printf("sprite->tile_id : %u\n", sprite->tile_id);


   }





}


static inline void pce_end_frame_ge(int width, int height)
{
#ifndef DISABLE_HW_RENDER
   sceGuScissor_fast(0, 0, width, height);

   //   RETRO_PERFORMANCE_INIT(draw_sprites_time);
   //   RETRO_PERFORMANCE_START(draw_sprites_time);
   pce_draw_sprites();
   //   RETRO_PERFORMANCE_STOP(draw_sprites_time);

   //      pce_sat_attr_t* sprites = (pce_sat_attr_t*)(vdc->SAT);
   //      int i;
   //      printf("end :\n");

   //      for (i=0; i<64; i++)
   //      {
   //         printf("%i-", sprites[i].prio);
   //      }
   //      printf("\n");


   //   sceGuFinish();
   sceGuFinishId(PCE_DISPLAY_LIST_ID);

   //   RETRO_PERFORMANCE_INIT(gu_sync_time);
   //   RETRO_PERFORMANCE_START(gu_sync_time);
   //   sceGuSync(0,0);
   //   RETRO_PERFORMANCE_STOP(gu_sync_time);



   static unsigned int __attribute__((aligned(64))) final_d_list[1024];

   sceGuStart(GU_DIRECT, final_d_list);
   sceGuEnable(GU_TEXTURE_2D);
   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGB);
   sceGuTexImage(0, PCE_LINE_SIZE, 256, PCE_LINE_SIZE, PCE_FRAME_TEXTURE);

   sceGuTexMode(GU_PSM_4444, 0, 0, GU_FALSE);

   //   sceGuTexMode(GU_PSM_T16, 0, 0, GU_FALSE);
   //   sceGuClutMode(GU_PSM_4444,0,0xFF,0);
   //   sceGuClutLoad(32, palette_ram+256);
   sceGuClearColor(0x00000000);
   sceGuDisable(GU_BLEND);
   sceGuFinish();
#endif
}
