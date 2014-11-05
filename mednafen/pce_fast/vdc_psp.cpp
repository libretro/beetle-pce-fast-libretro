#include "vdc.h"
#include "vdc_psp_utils.h"


bool pce_soft_renderer_active;




static unsigned int __attribute__((aligned(64))) d_list[4 * 1024 * 1024];

static PspGeContext main_context_buffer;

static u16* const pce_palette_cache = PCE_PALETTE_CACHE;

#define PCE_DISPLAY_LIST_ID   0x3C00

static int frame_count = 0;
void list_finish_callback(int id)
{
   if (id != PCE_DISPLAY_LIST_ID)
      return;

   SceCtrlData pad;
   sceCtrlPeekBufferPositive(&pad, 1);
   debug_setpos(0, 0);
   debug_printf("debug test\n");
   if (pad.Ly > 200)
      debug_printf("frame :%u\n", frame_count);

   sceGeRestoreContext(&main_context_buffer);

}
void init_video_ge(void)
{

}

void fix_tile_cache_sprites(uint16 A)
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

   switch ((A>>4)&0x3)
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

void fix_tile_cache_bg(uint16 A)
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

void fix_tile_cache_ge(uint16 A)
{
   fix_tile_cache_bg(A);
   fix_tile_cache_sprites(A);
}

void pce_draw_tilemap(void)
{

   sceGuTexFunc(GU_TFX_REPLACE, GU_TCC_RGB);
//   sceGuTexImage(0, 256, 256, 256, PCE_VRAMTEXTURE_BG);
   sceGuTexImage(0, 256, 256, 256, PCE_VRAMTEXTURE_SPRITE+16*1024);
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

void pce_draw_bg(void)
{
   pce_draw_tilemap();
}

void update_scanline_ge(void)
{

}



void update_frame_ge(void)
{
   frame_count ++;

   RETRO_PERFORMANCE_INIT(gu_sync_time);
   RETRO_PERFORMANCE_START(gu_sync_time);
   sceGuSync(0, 0);
   RETRO_PERFORMANCE_STOP(gu_sync_time);

   sceGeSaveContext(&main_context_buffer);
   sceGuSetCallback(GU_CALLBACK_FINISH, list_finish_callback);


   int i;
   for (i = 0; i < 512; i++)
      pce_palette_cache[i] = vce.color_table_cache[i];

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
   //   sceGuScissor(0,0,256,242);
   sceGuEnable(GU_SCISSOR_TEST);


   sceGuClearColor(0x000000FF);
   //   sceGuClearColor(GU_COLOR(((palette_ram[0]>> 0) & 31) / 31.0f,
   //                            ((palette_ram[0]>> 5) & 31) / 31.0f,
   //                            ((palette_ram[0]>>10) & 31) / 31.0f,
   //                            1.0));
   sceGuClear(GU_COLOR_BUFFER_BIT);


   RETRO_PERFORMANCE_INIT(gba_draw_bg_mode0_proc);
   RETRO_PERFORMANCE_START(gba_draw_bg_mode0_proc);
   pce_draw_bg();
   RETRO_PERFORMANCE_STOP(gba_draw_bg_mode0_proc);

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
