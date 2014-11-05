#include "vdc.h"
#include "vdc_psp_utils.h"


bool pce_soft_renderer_active;




static unsigned int __attribute__((aligned(64))) d_list[4*1024*1024];

static PspGeContext main_context_buffer;

#define PCE_DISPLAY_LIST_ID   0x3C00

static int frame_count = 0;
void list_finish_callback(int id)
{
   if (id != PCE_DISPLAY_LIST_ID)
      return;

   SceCtrlData pad;
   sceCtrlPeekBufferPositive(&pad,1);
   debug_setpos(0,0);
   debug_printf("debug test\n");
   if (pad.Ly > 200)
   {
      debug_printf("frame :%u\n", frame_count);
   }

   sceGeRestoreContext(&main_context_buffer);

}
void init_video_ge(void)
{

}

void update_scanline_ge(void)
{

}

void update_frame_ge(void)
{
   frame_count ++;

   RETRO_PERFORMANCE_INIT(gu_sync_time);
   RETRO_PERFORMANCE_START(gu_sync_time);
   sceGuSync(0,0);
   RETRO_PERFORMANCE_STOP(gu_sync_time);

   sceGeSaveContext(&main_context_buffer);
   sceGuSetCallback(GU_CALLBACK_FINISH, list_finish_callback);


   sceGuStart(GU_DIRECT, d_list);

   init_3Dprojection();
   setup_3Dprojection_16bit();
   sceGuDisable(GU_DEPTH_TEST);
   sceGuDisable(GU_CULL_FACE);
   sceGuDisable(GU_CLIP_PLANES);

//   sceGuTexFilter(GU_NEAREST,GU_NEAREST);


//   sceGuDrawBufferList(GU_PSM_5551, GBA_FRAME_TEXTURE_GU, GBA_LINE_SIZE);
   sceGuDrawBufferList(GU_PSM_5551, PCE_FRAME_TEXTURE, PCE_LINE_SIZE);

   sceGuScissor(0,0,PCE_FRAME_WIDTH,PCE_FRAME_HEIGHT);
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
//   gba_draw_bg_mode0();
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
   sceGuTexFunc(GU_TFX_REPLACE,GU_TCC_RGB);
   sceGuTexImage(0, PCE_LINE_SIZE, 256, PCE_LINE_SIZE, PCE_FRAME_TEXTURE);

   sceGuTexMode(GU_PSM_5551, 0, 0, GU_FALSE);

//   sceGuTexMode(GU_PSM_T16, 0, 0, GU_FALSE);
//   sceGuClutMode(GU_PSM_5551,0,0xFF,0);
//   sceGuClutLoad(32, palette_ram+256);
   sceGuClearColor(0x00000000);
   sceGuDisable(GU_BLEND);
   sceGuFinish();
}
