#include "vdc.h"
#include "vdc_psp_utils.h"


bool pce_do_hw_render;
static int cache_update_count = 0;



static unsigned int __attribute__((aligned(64))) d_list[4 * 1024 * 1024];
static psp1_sprite_t __attribute__((aligned(64))) tile_coords_bg[2 * 1024];
static psp1_sprite_t __attribute__((aligned(64))) tile_coords_sprites[32][1024];

static PspGeContext main_context_buffer;

static u16* const pce_palette_cache = PCE_PALETTE_CACHE;

#define PCE_DISPLAY_LIST_ID   0x3C00

static int frame_count = 0;
static inline void list_finish_callback(int id)
{
   if (id != PCE_DISPLAY_LIST_ID)
      return;

   SceCtrlData pad;
   sceCtrlPeekBufferPositive(&pad, 1);
   debug_setpos(0, 0);
   debug_printf("cache_update_count : %i", cache_update_count);
   //   debug_printf("debug test\n");
   if (pad.Ly > 200)
      debug_printf("frame :%u\n", frame_count);

   sceGeRestoreContext(&main_context_buffer);

}

typedef union
{
   struct
   {
      unsigned CGX : 1;
      unsigned CGY : 2;
      unsigned flip_x : 1;
      unsigned flip_y : 1;
   };
   unsigned val;

} pce_sprite_shape_t;

static inline psp1_sprite_t* pce_create_tile_coords_sprite(
   psp1_sprite_t* tile, int tile_id, pce_sprite_shape_t shape)
{
   int x, y;

   int i = (tile_id & 31) << 1;
   int j = tile_id >> 5;

   int width = shape.CGX ? 32 : 16;
   int height = shape.CGY ? shape.CGY & 0x2 ? 64 : 32 : 16;

   int start_x = 0;
   int start_y = 0;
   int max_x   = width;
   int max_y   = height;
   int inc_x = 16;
   int inc_y = 8;

   if (shape.flip_x)
   {
      max_x   = 0;
      start_x = width;
      inc_x   = -16;
   }

   if (shape.flip_y)
   {
      max_y   = 0;
      start_y = height;
      inc_y   = -8;
   }

   //   printf("tile_id : %u\n", tile_id);

   for (y = start_y; y != max_y; y += inc_y)
   {
      for (x = start_x; x != max_x; x += inc_x)
      {
         tile->v0.x = x;
         tile->v0.y = y;
         tile->v0.u = ((y >> 3) <<  1) + (x >> 3) + i;
         tile->v0.v = ((x >> 3) & 0x1)            + j;

         tile->v1.x = x + inc_x;
         tile->v1.y = y + inc_y;
         tile->v1.u = ((y >> 3) <<  1) + (x >> 3)    + (inc_x / 8) + i;
         tile->v1.v = ((x >> 3) & 0x1) + (inc_y / 8)               + j;

         if ((shape.val == 0) && (tile_id < 64))
         {
            printf("(%u,%u,%u,%u)->(%u,%u,%u,%u)\n",
                   (u32)tile->v0.x, (u32)tile->v0.y, (u32)tile->v0.u, (u32)tile->v0.v,
                   (u32)tile->v1.x, (u32)tile->v1.y, (u32)tile->v1.u, (u32)tile->v1.v);
         }

         tile++;


      }

   }


   return tile;
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

   for (shape.val = 0; shape.val < 32; shape.val++)
   {
      psp1_sprite_t* first_tile = (psp1_sprite_t*)(((u32)
                                  tile_coords_sprites[shape.val]) | 0x40000000);
      tile = first_tile;

      while ((tile - first_tile) < 1024)
         tile = pce_create_tile_coords_sprite(tile,
                                              tile - first_tile, shape);

   }

}

static inline  void fix_tile_cache_sprites(uint16 A)
{
   u64* line_ge = ((u64*)PCE_VRAMTEXTURE_SPRITE) + ((A >> 6) << 4) +
                  ((A & 0x7) << 1) + ((A >> 3) & 0x1);

   union
   {
      struct __attribute((packed))
      {
         unsigned p15: 1, p14: 1, p13: 1, p12: 1, p11: 1, p10: 1, p9 : 1, p8 : 1;
         unsigned p7 : 1, p6 : 1, p5 : 1, p4 : 1, p3 : 1, p2 : 1, p1 : 1, p0 : 1;
      };
      u16 val;
   } src_line;

   union
   {
      struct __attribute((packed))
      {
         unsigned p0_b0: 1, p0_b1: 1, p0_b2: 1, p0_b3: 1;
         unsigned p1_b0: 1, p1_b1: 1, p1_b2: 1, p1_b3: 1;
         unsigned p2_b0: 1, p2_b1: 1, p2_b2: 1, p2_b3: 1;
         unsigned p3_b0: 1, p3_b1: 1, p3_b2: 1, p3_b3: 1;
         unsigned p4_b0: 1, p4_b1: 1, p4_b2: 1, p4_b3: 1;
         unsigned p5_b0: 1, p5_b1: 1, p5_b2: 1, p5_b3: 1;
         unsigned p6_b0: 1, p6_b1: 1, p6_b2: 1, p6_b3: 1;
         unsigned p7_b0: 1, p7_b1: 1, p7_b2: 1, p7_b3: 1;
         unsigned p8_b0: 1, p8_b1: 1, p8_b2: 1, p8_b3: 1;
         unsigned p9_b0: 1, p9_b1: 1, p9_b2: 1, p9_b3: 1;
         unsigned p10_b0: 1, p10_b1: 1, p10_b2: 1, p10_b3: 1;
         unsigned p11_b0: 1, p11_b1: 1, p11_b2: 1, p11_b3: 1;
         unsigned p12_b0: 1, p12_b1: 1, p12_b2: 1, p12_b3: 1;
         unsigned p13_b0: 1, p13_b1: 1, p13_b2: 1, p13_b3: 1;
         unsigned p14_b0: 1, p14_b1: 1, p14_b2: 1, p14_b3: 1;
         unsigned p15_b0: 1, p15_b1: 1, p15_b2: 1, p15_b3: 1;
      };

      u64 val;
   } dst_line;

   src_line.val = vdc->VRAM[A];
   dst_line.val = *line_ge;

   switch ((A >> 4) & 0x3)
   {
   case 0:
      dst_line.p0_b0 = src_line.p0;
      dst_line.p1_b0 = src_line.p1;
      dst_line.p2_b0 = src_line.p2;
      dst_line.p3_b0 = src_line.p3;
      dst_line.p4_b0 = src_line.p4;
      dst_line.p5_b0 = src_line.p5;
      dst_line.p6_b0 = src_line.p6;
      dst_line.p7_b0 = src_line.p7;
      dst_line.p8_b0 = src_line.p8;
      dst_line.p9_b0 = src_line.p9;
      dst_line.p10_b0 = src_line.p10;
      dst_line.p11_b0 = src_line.p11;
      dst_line.p12_b0 = src_line.p12;
      dst_line.p13_b0 = src_line.p13;
      dst_line.p14_b0 = src_line.p14;
      dst_line.p15_b0 = src_line.p15;
      break;
   case 1:
      dst_line.p0_b1 = src_line.p0;
      dst_line.p1_b1 = src_line.p1;
      dst_line.p2_b1 = src_line.p2;
      dst_line.p3_b1 = src_line.p3;
      dst_line.p4_b1 = src_line.p4;
      dst_line.p5_b1 = src_line.p5;
      dst_line.p6_b1 = src_line.p6;
      dst_line.p7_b1 = src_line.p7;
      dst_line.p8_b1 = src_line.p8;
      dst_line.p9_b1 = src_line.p9;
      dst_line.p10_b1 = src_line.p10;
      dst_line.p11_b1 = src_line.p11;
      dst_line.p12_b1 = src_line.p12;
      dst_line.p13_b1 = src_line.p13;
      dst_line.p14_b1 = src_line.p14;
      dst_line.p15_b1 = src_line.p15;
      break;
   case 2:
      dst_line.p0_b2 = src_line.p0;
      dst_line.p1_b2 = src_line.p1;
      dst_line.p2_b2 = src_line.p2;
      dst_line.p3_b2 = src_line.p3;
      dst_line.p4_b2 = src_line.p4;
      dst_line.p5_b2 = src_line.p5;
      dst_line.p6_b2 = src_line.p6;
      dst_line.p7_b2 = src_line.p7;
      dst_line.p8_b2 = src_line.p8;
      dst_line.p9_b2 = src_line.p9;
      dst_line.p10_b2 = src_line.p10;
      dst_line.p11_b2 = src_line.p11;
      dst_line.p12_b2 = src_line.p12;
      dst_line.p13_b2 = src_line.p13;
      dst_line.p14_b2 = src_line.p14;
      dst_line.p15_b2 = src_line.p15;
      break;
   case 3:
   default:
      dst_line.p0_b3 = src_line.p0;
      dst_line.p1_b3 = src_line.p1;
      dst_line.p2_b3 = src_line.p2;
      dst_line.p3_b3 = src_line.p3;
      dst_line.p4_b3 = src_line.p4;
      dst_line.p5_b3 = src_line.p5;
      dst_line.p6_b3 = src_line.p6;
      dst_line.p7_b3 = src_line.p7;
      dst_line.p8_b3 = src_line.p8;
      dst_line.p9_b3 = src_line.p9;
      dst_line.p10_b3 = src_line.p10;
      dst_line.p11_b3 = src_line.p11;
      dst_line.p12_b3 = src_line.p12;
      dst_line.p13_b3 = src_line.p13;
      dst_line.p14_b3 = src_line.p14;
      dst_line.p15_b3 = src_line.p15;
      break;

   }

   *line_ge = dst_line.val;
}

static inline  void fix_tile_cache_bg(uint16 A)
{
   u32* line_ge = ((u32*)PCE_VRAMTEXTURE_BG) + ((A >> 6) << 5) +
                  ((A & 0x7) << 2) + ((A >> 4) & 0x3);
   union
   {
      struct __attribute((packed))
      {
         unsigned p7_b0: 1, p6_b0: 1, p5_b0: 1, p4_b0: 1, p3_b0: 1, p2_b0: 1, p1_b0: 1,
                  p0_b0: 1;
         unsigned p7_b1: 1, p6_b1: 1, p5_b1: 1, p4_b1: 1, p3_b1: 1, p2_b1: 1, p1_b1: 1,
                  p0_b1: 1;


      };
      u16 val;
   } src_line;
   union
   {
      struct __attribute((packed))
      {
         unsigned p0_b0: 1, p0_b1: 1, p0_b2: 1, p0_b3: 1;
         unsigned p1_b0: 1, p1_b1: 1, p1_b2: 1, p1_b3: 1;
         unsigned p2_b0: 1, p2_b1: 1, p2_b2: 1, p2_b3: 1;
         unsigned p3_b0: 1, p3_b1: 1, p3_b2: 1, p3_b3: 1;
         unsigned p4_b0: 1, p4_b1: 1, p4_b2: 1, p4_b3: 1;
         unsigned p5_b0: 1, p5_b1: 1, p5_b2: 1, p5_b3: 1;
         unsigned p6_b0: 1, p6_b1: 1, p6_b2: 1, p6_b3: 1;
         unsigned p7_b0: 1, p7_b1: 1, p7_b2: 1, p7_b3: 1;
      };
      u32 val;
   } dst_line;

   src_line.val = vdc->VRAM[A];
   dst_line.val = *line_ge;

   if (A & 0x8) //bp 23
   {
      dst_line.p0_b2 = src_line.p0_b0;
      dst_line.p1_b2 = src_line.p1_b0;
      dst_line.p2_b2 = src_line.p2_b0;
      dst_line.p3_b2 = src_line.p3_b0;
      dst_line.p4_b2 = src_line.p4_b0;
      dst_line.p5_b2 = src_line.p5_b0;
      dst_line.p6_b2 = src_line.p6_b0;
      dst_line.p7_b2 = src_line.p7_b0;

      dst_line.p0_b3 = src_line.p0_b1;
      dst_line.p1_b3 = src_line.p1_b1;
      dst_line.p2_b3 = src_line.p2_b1;
      dst_line.p3_b3 = src_line.p3_b1;
      dst_line.p4_b3 = src_line.p4_b1;
      dst_line.p5_b3 = src_line.p5_b1;
      dst_line.p6_b3 = src_line.p6_b1;
      dst_line.p7_b3 = src_line.p7_b1;
   }

   else // bp 01
   {
      dst_line.p0_b0 = src_line.p0_b0;
      dst_line.p1_b0 = src_line.p1_b0;
      dst_line.p2_b0 = src_line.p2_b0;
      dst_line.p3_b0 = src_line.p3_b0;
      dst_line.p4_b0 = src_line.p4_b0;
      dst_line.p5_b0 = src_line.p5_b0;
      dst_line.p6_b0 = src_line.p6_b0;
      dst_line.p7_b0 = src_line.p7_b0;

      dst_line.p0_b1 = src_line.p0_b1;
      dst_line.p1_b1 = src_line.p1_b1;
      dst_line.p2_b1 = src_line.p2_b1;
      dst_line.p3_b1 = src_line.p3_b1;
      dst_line.p4_b1 = src_line.p4_b1;
      dst_line.p5_b1 = src_line.p5_b1;
      dst_line.p6_b1 = src_line.p6_b1;
      dst_line.p7_b1 = src_line.p7_b1;
   }

   *line_ge = dst_line.val;

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
   //   sceGuTexMode(GU_PSM_5551, 0, 0, GU_TRUE);
   sceGuClutMode(GU_PSM_5551, 0, 0xF, 0);
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

         sceGuClutMode(GU_PSM_5551, 0, 0x0F, bat->palette_id);
         sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                        GU_TRANSFORM_3D, 2, NULL, tile_coords_bg + bat->tile_id);
         bat++;
      }

   }




}
#define TO_PSP_5551(val) (((val&0x001F)<<10)|((val&0x07C0)>>1)|((val&0xF800)>>11))

static int current_scanline = 0;
static inline void pce_start_frame_ge(void)
{
   frame_count ++;
   current_scanline = -19;

   RETRO_PERFORMANCE_INIT(gu_sync_time);
   RETRO_PERFORMANCE_START(gu_sync_time);
   sceGuSync(0, 0);
   RETRO_PERFORMANCE_STOP(gu_sync_time);

   sceGeSaveContext(&main_context_buffer);
   sceGuSetCallback(GU_CALLBACK_FINISH, list_finish_callback);


   int i;
   for (i = 0; i < 512; i++)
      pce_palette_cache[i] = TO_PSP_5551(vce.color_table_cache[i]);

   //   for (i = 0; i < 512; i++)
   //      PCE_PALETTE_CACHE[i] = 0xFFFF;

   sceGuStart(GU_DIRECT, d_list);

   init_3Dprojection();
   setup_3Dprojection_16bit();
   sceGuDisable(GU_DEPTH_TEST);
   sceGuDisable(GU_CULL_FACE);
   sceGuDisable(GU_CLIP_PLANES);
   sceGuDisable(GU_BLEND);

   //   sceGuTexFilter(GU_NEAREST,GU_NEAREST);


   //   sceGuDrawBufferList(GU_PSM_5551, GBA_FRAME_TEXTURE_GU, GBA_LINE_SIZE);
   sceGuDrawBufferList(GU_PSM_5551, PCE_FRAME_TEXTURE, PCE_LINE_SIZE);

   sceGuScissor(0, 0, PCE_FRAME_WIDTH, PCE_FRAME_HEIGHT);
   //   sceGuScissor(0, 100, 256, 101);
   //   sceGuScissor(0,0,256,242);
   sceGuEnable(GU_SCISSOR_TEST);


   sceGuClearColor(0x000000FF);
   //   sceGuClearColor(GU_COLOR(((palette_ram[0]>> 0) & 31) / 31.0f,
   //                            ((palette_ram[0]>> 5) & 31) / 31.0f,
   //                            ((palette_ram[0]>>10) & 31) / 31.0f,
   //                            1.0));
   sceGuClear(GU_COLOR_BUFFER_BIT);


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

}

static inline void pce_draw_scanline_ge(int scanline)
{

   int width_lut[4] = {32, 64, 128, 128};
   int height_lut[2] = {32, 64};
   int width = width_lut[(vdc->MWR >> 4) & 3];
   int height = height_lut[(vdc->MWR >> 6) & 1];

   //   current_scanline=scanline;

   if (current_scanline >= PCE_FRAME_HEIGHT)
      return;

   //   RETRO_PERFORMANCE_INIT(pce_draw_scanline_ge_func);
   //   RETRO_PERFORMANCE_START(pce_draw_scanline_ge_func);

   sceGuScissor(0, current_scanline, PCE_FRAME_WIDTH, current_scanline + 1);



   //   int start_x = vdc->BXR & ((width << 3) - 1);
   //   int start_y = (vdc->BYR + current_scanline) & ((height << 3) - 1);

   int start_x = vdc->BG_XOffset & ((width << 3) - 1);
   int start_y = (vdc->BG_YOffset) & ((height << 3) - 1);

   //   sceGuScissor(0, start_y, PCE_FRAME_WIDTH, start_y + 1);

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
   while (x < PCE_FRAME_WIDTH)
   {
      //      sceGuOffset(-x, start_y);
      //      sceGuOffset(-(x&~0x7), -(((vdc->BYR + current_scanline)&0x7)+(current_scanline&~0x7)));
      sceGuOffset(-(x), -((current_scanline - (start_y & 0x7))));
      //      sceGuOffset(-(x), -(start_y) );

      sceGuClutMode(GU_PSM_5551, 0, 0x0F, bat->palette_id);
      sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                     GU_TRANSFORM_3D, 2, NULL, tile_coords_bg + bat->tile_id);
      x += 8;
      bat++;
      if (bat == (bat_base + width))
         bat = bat_base;
      //      printf("x :%i\n",x);
   }

   update_stall_addr();
   current_scanline ++;
   //   printf("current_scanline :%i\n",current_scanline);

   //   RETRO_PERFORMANCE_STOP(pce_draw_scanline_ge_func);


}

static inline void pce_draw_sprites(void)
{
   sceGuScissor(0, 0, PCE_FRAME_WIDTH, PCE_FRAME_HEIGHT);
   //   sceGuTexMode(GU_PSM_T4, 0, 0, GU_TRUE);
   //   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGBA);
   sceGuTexImage(0, 512, 256, 512, PCE_VRAMTEXTURE_SPRITE);
   sceGuTexScale_8bit(64.0, 32.0);
   sceGuClutLoad(32, pce_palette_cache + 256);

   typedef struct
   {
      unsigned y           : 10;
      unsigned             :  6;

      unsigned x           : 10;
      unsigned             :  6;

      unsigned cg_mode     :  1;
      unsigned tile_id     :  9;
      unsigned id_invalid  :  1;
      unsigned             :  5;

      unsigned palette_id  :  4;
      unsigned             :  3;
      unsigned prio        :  1;
      unsigned width       :  1;
      unsigned             :  2;
      unsigned h_flip      :  1;
      unsigned height      :  2;
      unsigned             :  1;
      unsigned v_flip      :  1;

   } pce_sat_attr_t;

   pce_sat_attr_t* sprites = (pce_sat_attr_t*)(vdc->SAT);

   int i;

   for (i = 0; i < 64; i++)
   {
      pce_sat_attr_t* sprite = &sprites[i];
      sceGuOffset(32 - sprite->x, 64 - sprite->y);

      sceGuClutMode(GU_PSM_5551, 0, 0x0F, sprite->palette_id);

      pce_sprite_shape_t shape;
      shape.val = 0;
      shape.CGX = sprite->width;
      shape.CGY = sprite->height;
      shape.flip_x = sprite->h_flip;
      shape.flip_y = sprite->v_flip;

      int vertex_count = (shape.CGX ? 2 : 1) * (shape.CGY ? shape.CGY & 0x2 ? 8 : 4 :
                         2) * 2;

      int tile_id = sprite->tile_id & ~(((sprite->width ? 2 : 1) *
                                         (sprite->height ? sprite->height & 0x2 ? 4 : 2 : 1)) - 1);
      tile_id <<= 1;


      sceGuDrawArray(GU_SPRITES, GU_TEXTURE_8BIT | GU_VERTEX_16BIT |
                     GU_TRANSFORM_3D, vertex_count, NULL,
                     &tile_coords_sprites[shape.val][tile_id]);
      //      printf("shape.val : %u\n", shape.val);
      //      printf("tile_id : %u\n", tile_id);
      //      printf("sprite->tile_id : %u\n", sprite->tile_id);


   }





}


static inline void pce_end_frame_ge(void)
{

   pce_draw_sprites();


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

   sceGuTexMode(GU_PSM_5551, 0, 0, GU_FALSE);

   //   sceGuTexMode(GU_PSM_T16, 0, 0, GU_FALSE);
   //   sceGuClutMode(GU_PSM_5551,0,0xFF,0);
   //   sceGuClutLoad(32, palette_ram+256);
   sceGuClearColor(0x00000000);
   sceGuDisable(GU_BLEND);
   sceGuFinish();
}
