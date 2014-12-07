#ifndef _PCE_H
#define _PCE_H

#include "mednafen-types.h"
#include "mednafen.h"
#include "state.h"
#ifdef __cplusplus
#include "general.h"
#endif
#include "mednafen-memory.h"

#define PCE_MASTER_CLOCK        21477272.727273

#define DECLFR(x) uint8 MDFN_FASTCALL x (uint32 A)
#define DECLFW(x) void MDFN_FASTCALL x (uint32 A, uint8 V)

extern uint8 ROMSpace[0x88 * 8192 + 8192];

typedef void (MDFN_FASTCALL* writefunc)(uint32 A, uint8 V);
typedef uint8(MDFN_FASTCALL* readfunc)(uint32 A);

extern uint8 PCEIODataBuffer;
extern bool PCE_IsCD;

bool PCE_InitCD(void);

extern bool PCE_ACEnabled; // Arcade Card emulation enabled?
void PCE_Power(void);

extern readfunc PCERead[0x100];
extern writefunc PCEWrite[0x100];
extern int pce_overclocked;

extern uint8 BaseRAM[32768 + 8192];

#include "huc6280.h"


//#define DISABLE_HW_RENDER
//#define DISABLE_HW_RENDER_VRAM_CACHING
//#define DISABLE_SW_RENDER
//#define RUN_FOR_X_FRAMES 100
//#define PERF_TEST
//#define DUMP_FRAME_TIMES
//#define PSP_PROFILER
//#define PSP_PROFILER_START_FRAME    10
//#define PSP_PROFILER_END_FRAME      50
//#define PCE_FAST_CD_SPEEDHACK

#ifdef PERF_TEST

extern struct retro_perf_callback perf_cb;

#define RETRO_PERFORMANCE_INIT(X) \
   static struct retro_perf_counter X = {#X}; \
   do { \
      if (!(X).registered) \
         perf_cb.perf_register(&(X)); \
   } while(0)

#define RETRO_PERFORMANCE_START(X) perf_cb.perf_start(&(X))
#define RETRO_PERFORMANCE_STOP(X) perf_cb.perf_stop(&(X))
#else
#define RETRO_PERFORMANCE_INIT(X)
#define RETRO_PERFORMANCE_START(X)
#define RETRO_PERFORMANCE_STOP(X)

#endif


#if defined(PSP_PROFILER) && defined(PSP)
#include <psptypes.h>
#include <pspkerneltypes.h>
#include <pspdebug.h>
#include <pspthreadman.h>
extern unsigned int threadProfilerCallCount;


#define PROFILER_REGS sceKernelReferThreadProfiler()
//#define PROFILER_REGS sceKernelReferGlobalProfiler()

#define PSPPROF_INIT \
   {\
      threadProfilerCallCount = 0;\
      PROFILER_REGS->enable = 0;\
      PROFILER_REGS->systemck = 0;\
      PROFILER_REGS->cpuck = 0;\
      PROFILER_REGS->internal = 0;\
      PROFILER_REGS->memory = 0;\
      PROFILER_REGS->copz = 0;\
      PROFILER_REGS->vfpu = 0;\
      PROFILER_REGS->sleep = 0;\
      PROFILER_REGS->bus_access = 0;\
      PROFILER_REGS->uncached_load = 0;\
      PROFILER_REGS->uncached_store = 0;\
      PROFILER_REGS->cached_load = 0;\
      PROFILER_REGS->cached_store = 0;\
      PROFILER_REGS->i_miss = 0;\
      PROFILER_REGS->d_miss = 0;\
      PROFILER_REGS->d_writeback = 0;\
      PROFILER_REGS->cop0_inst = 0;\
      PROFILER_REGS->fpu_inst = 0;\
      PROFILER_REGS->vfpu_inst = 0;\
      PROFILER_REGS->local_bus = 0;\
   }while(0)

#define PSPPROF_DUMP \
   {\
      printf ( "********** Profile ***********\n" );\
      printf ( "Calls          : %10u\n",          threadProfilerCallCount );\
      printf ( "ck/Call        : %10u(%10u)\n",          PROFILER_REGS->systemck/threadProfilerCallCount, (PROFILER_REGS->systemck - threadProfilerCallCount*166)/threadProfilerCallCount);\
      printf ( "us/Call        : %10u(%10u)\n",          PROFILER_REGS->systemck/(threadProfilerCallCount * 333), (PROFILER_REGS->systemck - threadProfilerCallCount*166)/(threadProfilerCallCount * 333));\
      printf ( "enable         : %10u\n",          PROFILER_REGS->enable);\
      printf ( "systemck       : %10u(%10u) [cycles]\n", PROFILER_REGS->systemck ,PROFILER_REGS->systemck - threadProfilerCallCount*166);\
      printf ( "cpu ck         : %10u(%10u) [cycles]\n", PROFILER_REGS->cpuck ,PROFILER_REGS->cpuck - threadProfilerCallCount*166);\
      printf ( "stall          : %10u(%10u) [cycles]\n", PROFILER_REGS->internal + PROFILER_REGS->memory + PROFILER_REGS->copz + PROFILER_REGS->vfpu ,PROFILER_REGS->internal + PROFILER_REGS->memory + PROFILER_REGS->copz + PROFILER_REGS->vfpu - threadProfilerCallCount*21);\
      printf ( "+(internal)    : %10u(%10u) [cycles]\n", PROFILER_REGS->internal, PROFILER_REGS->internal - threadProfilerCallCount*17 );\
      printf ( "+--(memory)    : %10u(%10u) [cycles]\n", PROFILER_REGS->memory, PROFILER_REGS->memory );\
      printf ( "+----(COPz)    : %10u(%10u) [cycles]\n", PROFILER_REGS->copz , PROFILER_REGS->copz - threadProfilerCallCount*4 );\
      printf ( "+----(VFPU)    : %10u(%10u) [cycles]\n", PROFILER_REGS->vfpu, PROFILER_REGS->vfpu );\
      printf ( "sleep          : %10u(%10u) [cycles]\n", PROFILER_REGS->sleep, PROFILER_REGS->sleep );\
      printf ( "bus access     : %10u(%10u) [cycles]\n", PROFILER_REGS->bus_access, PROFILER_REGS->bus_access - threadProfilerCallCount*8 );\
      printf ( "uncached load  : %10u(%10u) [times]\n",  PROFILER_REGS->uncached_load,  PROFILER_REGS->uncached_load );\
      printf ( "uncached store : %10u(%10u) [times]\n",  PROFILER_REGS->uncached_store,  PROFILER_REGS->uncached_store - threadProfilerCallCount );\
      printf ( "cached load    : %10u(%10u) [times]\n",  PROFILER_REGS->cached_load , PROFILER_REGS->cached_load - threadProfilerCallCount*13 );\
      printf ( "cached store   : %10u(%10u) [times]\n",  PROFILER_REGS->cached_store,  PROFILER_REGS->cached_store - threadProfilerCallCount*11 );\
      printf ( "I cache miss   : %10u(%10u) [times]\n",  PROFILER_REGS->i_miss,  PROFILER_REGS->i_miss );\
      printf ( "D cache miss   : %10u(%10u) [times]\n",  PROFILER_REGS->d_miss,  PROFILER_REGS->d_miss );\
      printf ( "D cache wb     : %10u(%10u) [times]\n",  PROFILER_REGS->d_writeback,  PROFILER_REGS->d_writeback );\
      printf ( "COP0 inst.     : %10u(%10u) [inst.]\n",  PROFILER_REGS->cop0_inst,  PROFILER_REGS->cop0_inst - threadProfilerCallCount*29 );\
      printf ( "FPU  inst.     : %10u(%10u) [inst.]\n",  PROFILER_REGS->fpu_inst,  PROFILER_REGS->fpu_inst - threadProfilerCallCount*5 );\
      printf ( "VFPU inst.     : %10u(%10u) [inst.]\n",  PROFILER_REGS->vfpu_inst,  PROFILER_REGS->vfpu_inst );\
      printf ( "local bus      : %10u(%10u) [cycles]\n", PROFILER_REGS->local_bus, PROFILER_REGS->local_bus );\
   }while(0)

#define PSPPROF_START      PROFILER_REGS->enable = 1
#define PSPPROF_STOP       {PROFILER_REGS->enable = 0;threadProfilerCallCount++; }while(0)
#else
#define PSPPROF_INIT
#define PSPPROF_DUMP
#define PSPPROF_START
#define PSPPROF_STOP

#endif
#endif
