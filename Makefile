TARGET_NAME := mednafen_pce_fast_libretro

DEBUG = 0
FRONTEND_SUPPORTS_RGB565 = 1


ifeq ($(platform),)
platform = unix
ifeq ($(shell uname -a),)
   platform = win
else ifneq ($(findstring Darwin,$(shell uname -a)),)
   platform = osx
   arch = intel
ifeq ($(shell uname -p),powerpc)
   arch = ppc
endif
else ifneq ($(findstring MINGW,$(shell uname -a)),)
   platform = win
endif
endif

ifneq ($(platform), osx)
   PTHREAD_FLAGS = -pthread
endif

arch = intel
ifeq ($(shell uname -p),powerpc)
arch = ppc
endif

ifeq ($(platform), unix)
   TARGET := $(TARGET_NAME).so
   fpic := -fPIC
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   ENDIANNESS_DEFINES := -DLSB_FIRST
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS) -DHAVE_MKDIR
else ifeq ($(platform), osx)
   TARGET := $(TARGET_NAME).dylib
   fpic := -fPIC
   SHARED := -dynamiclib
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS) -DHAVE_MKDIR
ifeq ($(arch),ppc)
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
else
   ENDIANNESS_DEFINES := -DLSB_FIRST
endif
   OSXVER = `sw_vers -productVersion | cut -d. -f 2`
   OSX_LT_MAVERICKS = `(( $(OSXVER) <= 9)) && echo "YES"`
ifeq ($(OSX_LT_MAVERICKS),"YES")
   fpic += -mmacosx-version-min=10.5
endif
else ifeq ($(platform), ios)
   TARGET := $(TARGET_NAME)_ios.dylib
   fpic := -fPIC
   SHARED := -dynamiclib
   ENDIANNESS_DEFINES := -DLSB_FIRST
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS)

ifeq ($(IOSSDK),)
   IOSSDK := $(shell xcrun -sdk iphoneos -show-sdk-path)
endif

   CC = clang -arch armv7 -isysroot $(IOSSDK)
   CXX = clang++ -arch armv7 -isysroot $(IOSSDK)
   OSXVER = `sw_vers -productVersion | cut -d. -f 2`
   OSX_IS_LEOPARD   = `(( $(OSXVER) == 5)) && echo "YES"`
   OSX_LT_MAVERICKS = `(( $(OSXVER) <= 9)) && echo "YES"`
IPHONEMINVER :=
ifeq ($(OSX_IS_LEOPARD),"YES")
   IPHONEMINVER = -miphone-version-min=5.0
endif
ifeq ($(OSX_LT_MAVERICKS),"YES")
	IPHONEMINVER = -miphoneos-version-min=5.0
endif
   LDFLAGS += $(IPHONEMINVER)
   FLAGS += $(IPHONEMINVER)
   CC += $(IPHONEMINVER)
   CXX += $(IPHONEMINVER)
else ifeq ($(platform), qnx)
   TARGET := $(TARGET_NAME)_qnx.so
   fpic := -fPIC
   SHARED := -lcpp -lm -shared -Wl,--no-undefined -Wl,--version-script=link.T
   ENDIANNESS_DEFINES := -DLSB_FIRST
   #LDFLAGS += $(PTHREAD_FLAGS)
   #FLAGS += $(PTHREAD_FLAGS) -DHAVE_MKDIR
   FLAGS += -DHAVE_MKDIR
   CC = qcc -Vgcc_ntoarmv7le
   CXX = QCC -Vgcc_ntoarmv7le_cpp
   AR = QCC -Vgcc_ntoarmv7le
   FLAGS += -D__BLACKBERRY_QNX__ -marm -mcpu=cortex-a9 -mfpu=neon -mfloat-abi=softfp
else ifeq ($(platform), ps3)
   TARGET := $(TARGET_NAME)_ps3.a
   CC = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-gcc.exe
   CXX = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-g++.exe
   AR = $(CELL_SDK)/host-win32/ppu/bin/ppu-lv2-ar.exe
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   FLAGS += -DHAVE_MKDIR -DARCH_POWERPC_ALTIVEC
   STATIC_LINKING = 1
else ifeq ($(platform), sncps3)
   TARGET := $(TARGET_NAME)_ps3.a
   CC = $(CELL_SDK)/host-win32/sn/bin/ps3ppusnc.exe
   CXX = $(CELL_SDK)/host-win32/sn/bin/ps3ppusnc.exe
   AR = $(CELL_SDK)/host-win32/sn/bin/ps3snarl.exe
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   CXXFLAGS += -Xc+=exceptions
   NO_GCC := 1
   FLAGS += -DHAVE_MKDIR -DARCH_POWERPC_ALTIVEC
   STATIC_LINKING = 1
else ifeq ($(platform), psl1ght)
   TARGET := $(TARGET_NAME)_psl1ght.a
   CC = $(PS3DEV)/ppu/bin/ppu-gcc$(EXE_EXT)
   CXX = $(PS3DEV)/ppu/bin/ppu-g++$(EXE_EXT)
   AR = $(PS3DEV)/ppu/bin/ppu-ar$(EXE_EXT)
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   FLAGS += -DHAVE_MKDIR -DBYTE_ORDER=BIG_ENDIAN
   STATIC_LINKING = 1
else ifeq ($(platform), psp1)
   TARGET := $(TARGET_NAME)_psp1.a
   CC = psp-gcc$(EXE_EXT)
   CXX = psp-g++$(EXE_EXT)
   AR = psp-ar$(EXE_EXT)
   ENDIANNESS_DEFINES := -DLSB_FIRST
   FLAGS += -DPSP -G0
   FLAGS += -DHAVE_MKDIR
   STATIC_LINKING = 1
   EXTRA_INCLUDES := -I$(shell psp-config --pspsdk-path)/include
else ifeq ($(platform), xenon)
   TARGET := $(TARGET_NAME)_xenon360.a
   CC = xenon-gcc$(EXE_EXT)
   CXX = xenon-g++$(EXE_EXT)
   AR = xenon-ar$(EXE_EXT)
   ENDIANNESS_DEFINES += -D__LIBXENON__ -m32 -D__ppc__ -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   LIBS := $(PTHREAD_FLAGS)
   FLAGS += -DHAVE_MKDIR
   STATIC_LINKING = 1
else ifeq ($(platform), ngc)
   TARGET := $(TARGET_NAME)_ngc.a
   CC = $(DEVKITPPC)/bin/powerpc-eabi-gcc$(EXE_EXT)
   CXX = $(DEVKITPPC)/bin/powerpc-eabi-g++$(EXE_EXT)
   AR = $(DEVKITPPC)/bin/powerpc-eabi-ar$(EXE_EXT)
   ENDIANNESS_DEFINES += -DGEKKO -DHW_DOL -mrvl -mcpu=750 -meabi -mhard-float -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN

   EXTRA_INCLUDES := -I$(DEVKITPRO)/libogc/include
   FLAGS += -DHAVE_MKDIR
   STATIC_LINKING = 1
else ifeq ($(platform), wii)
   TARGET := $(TARGET_NAME)_wii.a
   CC = $(DEVKITPPC)/bin/powerpc-eabi-gcc$(EXE_EXT)
   CXX = $(DEVKITPPC)/bin/powerpc-eabi-g++$(EXE_EXT)
   AR = $(DEVKITPPC)/bin/powerpc-eabi-ar$(EXE_EXT)
   ENDIANNESS_DEFINES += -DGEKKO -DHW_RVL -mrvl -mcpu=750 -meabi -mhard-float -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN

   EXTRA_INCLUDES := -I$(DEVKITPRO)/libogc/include
   FLAGS += -DHAVE_MKDIR
   STATIC_LINKING = 1
else ifneq (,$(findstring armv,$(platform)))
   TARGET := $(TARGET_NAME).so
   fpic := -fPIC
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   ENDIANNESS_DEFINES := -DLSB_FIRST
   CC = gcc
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS) -DHAVE_MKDIR
ifneq (,$(findstring cortexa8,$(platform)))
   FLAGS += -marm -mcpu=cortex-a8
   ASFLAGS += -mcpu=cortex-a8
else ifneq (,$(findstring cortexa9,$(platform)))
   FLAGS += -marm -mcpu=cortex-a9
   ASFLAGS += -mcpu=cortex-a9
endif
   FLAGS += -marm
ifneq (,$(findstring neon,$(platform)))
   FLAGS += -mfpu=neon
   ASFLAGS += -mfpu=neon
   HAVE_NEON = 1
endif
ifneq (,$(findstring softfloat,$(platform)))
   FLAGS += -mfloat-abi=softfp
else ifneq (,$(findstring hardfloat,$(platform)))
   FLAGS += -mfloat-abi=hard
endif
   FLAGS += -DARM
else
   TARGET := $(TARGET_NAME).dll
   CC = gcc
   CXX = g++
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   LDFLAGS += -static-libgcc -static-libstdc++ -lwinmm
   ENDIANNESS_DEFINES := -DLSB_FIRST
   FLAGS += -DHAVE__MKDIR
endif

MEDNAFEN_DIR := mednafen
LIBRETRO_SOURCES :=
CORE_DIR := $(MEDNAFEN_DIR)/pce_fast

CORE_SOURCES := $(CORE_DIR)/huc6280.cpp
CORE_SOURCES += $(CORE_DIR)/input.cpp
CORE_SOURCES += $(CORE_DIR)/pcecd.cpp
CORE_SOURCES += $(CORE_DIR)/pcecd_drive.cpp
CORE_SOURCES += $(CORE_DIR)/psg.cpp
CORE_SOURCES += $(CORE_DIR)/vdc.cpp

HW_MISC_SOURCES += $(MEDNAFEN_DIR)/hw_misc/arcade_card/arcade_card.cpp

OKIADPCM_SOURCES += $(MEDNAFEN_DIR)/okiadpcm.cpp

RESAMPLER_SOURCES += $(MEDNAFEN_DIR)/sound/Blip_Buffer.cpp

THREAD_SOURCES += thread.c

LIBRETRO_SOURCES += scrc32.cpp

CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/CDAccess.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/CDAccess_Image.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/CDAccess_CCD.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/CDUtility.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/lec.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/SimpleFIFO.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/galois.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/recover-raw.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/l-ec.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/crc32.cpp
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/cdromif.cpp


MEDNAFEN_SOURCES := $(MEDNAFEN_DIR)/error.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/math_ops.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/settings.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/general.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/FileWrapper.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/FileStream.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/MemoryStream.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/Stream.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/state.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/endian.cpp
MEDNAFEN_SOURCES += $(CDROM_SOURCES)
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/mempatcher.cpp
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/video/surface.cpp
MEDNAFEN_SOURCES += $(RESAMPLER_SOURCES)
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/file.cpp
MEDNAFEN_SOURCES += $(OKIADPCM_SOURCES)
MEDNAFEN_SOURCES += $(MEDNAFEN_DIR)/md5.cpp

LIBRETRO_SOURCES += libretro.cpp 
TRIO_SOURCES += $(MEDNAFEN_DIR)/trio/trio.c $(MEDNAFEN_DIR)/trio/triostr.c

SOURCES_C := 	$(TREMOR_SRC) $(LIBRETRO_SOURCES_C) $(TRIO_SOURCES) $(THREAD_SOURCES)
SOURCES := $(LIBRETRO_SOURCES) $(CORE_SOURCES) $(MEDNAFEN_SOURCES) $(HW_CPU_SOURCES) $(HW_MISC_SOURCES) $(HW_VIDEO_SOURCES)

FLAGS += -DNEED_TREMOR
FLAGS += -DNEED_CD
FLAGS += -DWANT_THREADING
FLAGS += -DWANT_CRC32

ifneq ($(NO_GCC),1)
WARNINGS := -Wall
WARNINGS += -Wno-sign-compare
WARNINGS += -Wno-unused-variable
WARNINGS += -Wno-unused-function
WARNINGS += -Wno-uninitialized
WARNINGS += $(NEW_GCC_WARNING_FLAGS)
WARNINGS += -Wno-strict-aliasing

EXTRA_GCC_FLAGS := -funroll-loops
endif


OBJECTS := $(SOURCES:.cpp=.o) $(SOURCES_C:.c=.o)

all: $(TARGET)

ifeq ($(DEBUG),1)
   FLAGS += -O0 -g
else
   FLAGS += -O3 -g -DNDEBUG
endif

LDFLAGS += $(fpic) $(SHARED)
FLAGS += $(fpic)
FLAGS += -I. -Imednafen -Imednafen/include -Imednafen/intl -Imednafen/hw_misc -Imednafen/hw_cpu -I$(CORE_DIR)

FLAGS += $(ENDIANNESS_DEFINES) -DSIZEOF_DOUBLE=8 $(WARNINGS) -DMEDNAFEN_VERSION=\"0.9.31\" -DPACKAGE=\"mednafen\"
FLAGS += -DMEDNAFEN_VERSION_NUMERIC=931 -DPSS_STYLE=1 -DMPC_FIXED_POINT -DSTDC_HEADERS -D__STDC_LIMIT_MACROS
FLAGS += -D__LIBRETRO__ -D_LOW_ACCURACY_ $(EXTRA_INCLUDES)

ifeq ($(FRONTEND_SUPPORTS_RGB565), 1)
FLAGS += -DFRONTEND_SUPPORTS_RGB565
endif

CXXFLAGS += $(FLAGS)
CFLAGS += $(FLAGS)

$(TARGET): $(OBJECTS)
ifeq ($(STATIC_LINKING), 1)
	$(AR) rcs $@ $(OBJECTS)
else
	$(CXX) -o $@ $^ $(LDFLAGS)
endif

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: clean

$(CORE_DIR)/vdc.o: $(CORE_DIR)/vdc_psp.cpp $(CORE_DIR)/vdc_psp.h $(CORE_DIR)/vdc_psp_utils.h $(CORE_DIR)/pce.h
libretro.o: $(CORE_DIR)/vdc_psp.h $(CORE_DIR)/vdc_psp_utils.h $(CORE_DIR)/pce.h
thread.o: thread/psp_pthread.h
$(CORE_DIR)/pcecd.o: $(CORE_DIR)/pce.h
