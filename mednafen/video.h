#ifndef __MDFN_VIDEO_H
#define __MDFN_VIDEO_H

#include <stdint.h>

#if defined(WANT_32BPP)
#define RED_SHIFT 16
#define GREEN_SHIFT 8
#define BLUE_SHIFT 0
#define ALPHA_SHIFT 24
#define MAKECOLOR(r, g, b, a) ((r << RED_SHIFT) | (g << GREEN_SHIFT) | (b << BLUE_SHIFT) | (a << ALPHA_SHIFT))
typedef uint32_t bpp_t;
#elif defined(FRONTEND_SUPPORTS_RGB565)
/* 16bit color - RGB565 */
#define RED_MASK  0xf800
#define GREEN_MASK 0x7e0
#define BLUE_MASK 0x1f
#define RED_EXPAND 3
#define GREEN_EXPAND 2
#define BLUE_EXPAND 3
#define RED_SHIFT 11
#define GREEN_SHIFT 5
#define BLUE_SHIFT 0
#define MAKECOLOR(r, g, b, a) (((r >> RED_EXPAND) << RED_SHIFT) | ((g >> GREEN_EXPAND) << GREEN_SHIFT) | ((b >> BLUE_EXPAND) << BLUE_SHIFT))
typedef uint16_t bpp_t;
#else
/* 16bit color - RGB555 */
#define RED_MASK  0x7c00
#define GREEN_MASK 0x3e0
#define BLUE_MASK 0x1f
#define RED_EXPAND 3
#define GREEN_EXPAND 3
#define BLUE_EXPAND 3
#define RED_SHIFT 10
#define GREEN_SHIFT 5
#define BLUE_SHIFT 0
#define MAKECOLOR(r, g, b, a) (((r >> RED_EXPAND) << RED_SHIFT) | ((g >> GREEN_EXPAND) << GREEN_SHIFT) | ((b >> BLUE_EXPAND) << BLUE_SHIFT))
typedef uint16_t bpp_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
 int32_t x, y, w, h;
} MDFN_Rect;

typedef struct
{
   unsigned int colorspace;
   uint8_t r_shift;
   uint8_t g_shift;
   uint8_t b_shift;
   uint8_t a_shift;
} MDFN_PixelFormat;

typedef struct
{
   bpp_t *pixels;
   int32_t width;
   int32_t height;
   int32_t pitch;
} MDFN_Surface;

#ifdef __cplusplus
}
#endif

#endif
