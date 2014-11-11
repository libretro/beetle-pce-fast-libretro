#ifndef VDC_PSP_H
#define VDC_PSP_H

#include "vdc.h"
extern bool pce_do_hw_render;

//void init_video_ge(void);

//void pce_start_frame_ge(void);
//void pce_draw_scanline_ge(int width);
//void pce_end_frame_ge(void);

//void pce_fix_tile_cache_ge(uint16 A);

#if 0
typedef union __attribute((packed))
{
   struct
   {
      unsigned sprite0_int_enable         : 1;
      unsigned sprite_overflow_int_enable : 1;
      unsigned raster_compare_int_enable  : 1;
      unsigned vblank_int_enable          : 1;
      unsigned external_sync              : 2;
      unsigned sprite_enable              : 1;
      unsigned bg_enable                  : 1;

      unsigned DISP_terminal_output_mode  : 2;
      unsigned DRAM_refresh_enable        : 1;
      unsigned increment_width_select     : 2;
      unsigned                            : 3;
   };
   struct
   {
      unsigned                            : 6;
      unsigned bg_sprite_enable_mask      : 2;
      unsigned                            : 8;
   };
} PCE_CR_t;
#else

typedef union __attribute((packed))
{
   struct __attribute((packed))
   {
      unsigned                            : 6;
      unsigned sprite_enable              : 1;
      unsigned bg_enable                  : 1;

      unsigned                            : 3;
      unsigned increment_width_select     : 2;
      unsigned                            : 3;
   };
   struct __attribute((packed))
   {
      unsigned                            : 6;
      unsigned bg_sprite_enable_mask      : 2;
      unsigned                            : 8;
   };
}
PCE_CR_t;
#endif

typedef struct __attribute((packed))
{
   unsigned VRAM_dot_width             : 2;
   unsigned sprite_dot_period          : 2;
   unsigned virtual_screen_width       : 2;
   unsigned virtual_screen_height      : 1;
   unsigned CG_mode                    : 1;
   unsigned                            : 8;
} PCE_MWR_t;

typedef struct __attribute((packed))
{
   unsigned scroll_x                   : 10;
   unsigned                            : 6;
} PCE_BXR_t;

typedef struct __attribute((packed))
{
   unsigned scroll_y                   : 9;
   unsigned                            : 7;
} PCE_BYR_t;

typedef struct __attribute((packed))
{
   unsigned HSW                        : 5;
   unsigned                            : 3;
   unsigned HDS                        : 7;
   unsigned                            : 1;
} PCE_HSR_t;

typedef struct __attribute((packed))
{
   unsigned HDW                        : 7;
   unsigned                            : 1;
   unsigned HDE                        : 7;
   unsigned                            : 1;
} PCE_HDR_t;

typedef struct __attribute((packed))
{
   unsigned VSW                        : 5;
   unsigned                            : 3;
   unsigned VDS                        : 8;
} PCE_VSR_t;

typedef struct __attribute((packed))
{
   unsigned VDW                        :9;
   unsigned                            :7;
}PCE_VDR_t;

typedef struct __attribute((packed))
{
   unsigned VDE                        :8;
   unsigned                            :8;
}PCE_VCR_t;

typedef struct
{
        uint32 display_counter;
        int32 sat_dma_slcounter;
        uint8 select;
        uint16 MAWR;    // Memory Address Write Register
        uint16 MARR;    // Memory Address Read Register
        PCE_CR_t CR;      // Control Register
        uint16 RCR;     // Raster Compare Register
        PCE_BXR_t BXR;     // Background X-Scroll Register
        PCE_BYR_t BYR;     // Background Y-Scroll Register
        PCE_MWR_t MWR;     // Memory Width Register
        PCE_HSR_t HSR;     // Horizontal Sync Register
        PCE_HDR_t HDR;     // Horizontal Display Register
        PCE_VSR_t VSR;
        PCE_VDR_t VDR;
        PCE_VCR_t VCR;
        uint16 DCR;
} vdc_flags_t;


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


#endif // VDC_PSP_H
