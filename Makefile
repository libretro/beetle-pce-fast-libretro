DEBUG = 0
FRONTEND_SUPPORTS_RGB565 = 1

MEDNAFEN_DIR := mednafen
NEED_TREMOR = 0
LIBRETRO_SOURCES :=

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

# If you have a system with 1GB RAM or more - cache the whole 
# CD for CD-based systems in order to prevent file access delays/hiccups
CACHE_CD = 0

ifneq ($(platform), osx)
   PTHREAD_FLAGS = -pthread
endif
   HAVE_HES = 0
   NEED_BPP = 32
   NEED_TREMOR = 1
   NEED_BLIP = 1
   NEED_CD = 1
   NEED_THREADING = 1
   NEED_CRC32 = 1
	WANT_NEW_API = 1
   CORE_DEFINE := -DWANT_PCE_FAST_EMU -DWANT_STEREO_SOUND
   CORE_DIR := $(MEDNAFEN_DIR)/pce_fast

CORE_SOURCES := $(CORE_DIR)/huc6280.cpp \
	$(CORE_DIR)/input.cpp \
	$(CORE_DIR)/pcecd.cpp \
	$(CORE_DIR)/pcecd_drive.cpp \
	$(CORE_DIR)/psg.cpp \
	$(CORE_DIR)/vdc.cpp

ifeq ($(HAVE_HES),1)
CORE_SOURCES += $(CORE_DIR)/hes.cpp
endif
TARGET_NAME := mednafen_pce_fast_libretro

arch = intel
ifeq ($(shell uname -p),powerpc)
arch = ppc
endif

HW_MISC_SOURCES += $(MEDNAFEN_DIR)/hw_misc/arcade_card/arcade_card.cpp
OKIADPCM_SOURCES += $(MEDNAFEN_DIR)/okiadpcm.cpp

ifeq ($(NEED_BLIP), 1)
RESAMPLER_SOURCES += $(MEDNAFEN_DIR)/sound/Blip_Buffer.cpp
endif

CORE_INCDIR := -I$(CORE_DIR)

ifeq ($(platform), unix)
   TARGET := $(TARGET_NAME).so
   fpic := -fPIC
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   ifneq ($(shell uname -p | grep -E '((i.|x)86|amd64)'),)
      IS_X86 = 1
   endif
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
   OLD_GCC := 1
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
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS)

ifeq ($(IOSSDK),)
   IOSSDK := $(shell xcodebuild -version -sdk iphoneos Path)
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
   OLD_GCC := 1
   FLAGS += -DHAVE_MKDIR -DARCH_POWERPC_ALTIVEC
   STATIC_LINKING = 1
else ifeq ($(platform), sncps3)
   TARGET := $(TARGET_NAME)_ps3.a
   CC = $(CELL_SDK)/host-win32/sn/bin/ps3ppusnc.exe
   CXX = $(CELL_SDK)/host-win32/sn/bin/ps3ppusnc.exe
   AR = $(CELL_SDK)/host-win32/sn/bin/ps3snarl.exe
   ENDIANNESS_DEFINES := -DMSB_FIRST -DBYTE_ORDER=BIG_ENDIAN
   CXXFLAGS += -Xc+=exceptions
   OLD_GCC := 1
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
   CC = gcc
   LDFLAGS += $(PTHREAD_FLAGS)
   FLAGS += $(PTHREAD_FLAGS) -DHAVE_MKDIR
   IS_X86 = 0
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
   IS_X86 = 1
   SHARED := -shared -Wl,--no-undefined -Wl,--version-script=link.T
   LDFLAGS += -static-libgcc -static-libstdc++ -lwinmm
   FLAGS += -DHAVE__MKDIR
endif

ifeq ($(NEED_THREADING), 1)
   FLAGS += -DWANT_THREADING
	THREAD_SOURCES += thread.c
endif

ifeq ($(NEED_CRC32), 1)
   FLAGS += -DWANT_CRC32
	LIBRETRO_SOURCES += scrc32.cpp
endif

ifeq ($(NEED_CD), 1)
CDROM_SOURCES += $(MEDNAFEN_DIR)/cdrom/CDAccess.cpp \
	$(MEDNAFEN_DIR)/cdrom/CDAccess_Image.cpp \
	$(MEDNAFEN_DIR)/cdrom/CDAccess_CCD.cpp \
	$(MEDNAFEN_DIR)/cdrom/CDUtility.cpp \
	$(MEDNAFEN_DIR)/cdrom/lec.cpp \
	$(MEDNAFEN_DIR)/cdrom/SimpleFIFO.cpp \
	$(MEDNAFEN_DIR)/cdrom/audioreader.cpp \
	$(MEDNAFEN_DIR)/cdrom/galois.cpp \
	$(MEDNAFEN_DIR)/cdrom/recover-raw.cpp \
	$(MEDNAFEN_DIR)/cdrom/l-ec.cpp \
	$(MEDNAFEN_DIR)/cdrom/crc32.cpp \
	$(MEDNAFEN_DIR)/cdrom/cdromif.cpp
   FLAGS += -DNEED_CD
endif

ifeq ($(NEED_TREMOR), 1)
   TREMOR_SRC := $(wildcard $(MEDNAFEN_DIR)/tremor/*.c)
   FLAGS += -DNEED_TREMOR
endif


MEDNAFEN_SOURCES := $(MEDNAFEN_DIR)/error.cpp \
	$(MEDNAFEN_DIR)/settings.cpp \
	$(MEDNAFEN_DIR)/general.cpp \
	$(MEDNAFEN_DIR)/FileWrapper.cpp \
	$(MEDNAFEN_DIR)/FileStream.cpp \
	$(MEDNAFEN_DIR)/MemoryStream.cpp \
	$(MEDNAFEN_DIR)/Stream.cpp \
	$(MEDNAFEN_DIR)/state.cpp \
	$(CDROM_SOURCES) \
	$(MEDNAFEN_DIR)/mempatcher.cpp \
	$(RESAMPLER_SOURCES) \
	$(MEDNAFEN_DIR)/file.cpp \
	$(OKIADPCM_SOURCES) \
	$(MEDNAFEN_DIR)/md5.cpp

MEDNAFEN_SOURCES_C := $(MEDNAFEN_DIR)/mednafen-endian.c

LIBRETRO_SOURCES += libretro.cpp 

TRIO_SOURCES += $(MEDNAFEN_DIR)/trio/trio.c $(MEDNAFEN_DIR)/trio/triostr.c

SOURCES_C := 	$(TREMOR_SRC) $(LIBRETRO_SOURCES_C) $(TRIO_SOURCES) $(THREAD_SOURCES) $(MEDNAFEN_SOURCES_C)

SOURCES := $(LIBRETRO_SOURCES) $(CORE_SOURCES) $(MEDNAFEN_SOURCES) $(HW_CPU_SOURCES) $(HW_MISC_SOURCES) $(HW_VIDEO_SOURCES)

WARNINGS := -Wall \
	-Wno-sign-compare \
	-Wno-unused-variable \
	-Wno-unused-function \
	-Wno-uninitialized \
	$(NEW_GCC_WARNING_FLAGS) \
	-Wno-strict-aliasing

EXTRA_GCC_FLAGS := -funroll-loops

ifeq ($(NO_GCC),1)
	EXTRA_GCC_FLAGS :=
	WARNINGS :=
else
	EXTRA_GCC_FLAGS := -g
endif


OBJECTS := $(SOURCES:.cpp=.o) $(SOURCES_C:.c=.o)

all: $(TARGET)

ifeq ($(DEBUG),0)
   FLAGS += -O2 $(EXTRA_GCC_FLAGS)
else
   FLAGS += -O0
endif

LDFLAGS += $(fpic) $(SHARED)
FLAGS += $(fpic) $(NEW_GCC_FLAGS)
FLAGS += -I. -Imednafen -Imednafen/include -Imednafen/intl -Imednafen/hw_misc -Imednafen/hw_cpu $(CORE_INCDIR) $(EXTRA_CORE_INCDIR)

FLAGS += $(ENDIANNESS_DEFINES) -DSIZEOF_DOUBLE=8 $(WARNINGS) -DMEDNAFEN_VERSION=\"0.9.31\" -DPACKAGE=\"mednafen\" -DMEDNAFEN_VERSION_NUMERIC=931 -DPSS_STYLE=1 -DMPC_FIXED_POINT $(CORE_DEFINE) -DSTDC_HEADERS -D__STDC_LIMIT_MACROS -D__LIBRETRO__ -D_LOW_ACCURACY_ $(EXTRA_INCLUDES) $(SOUND_DEFINE)

ifeq ($(IS_X86), 1)
FLAGS += -DARCH_X86
endif

ifeq ($(CACHE_CD), 1)
FLAGS += -D__LIBRETRO_CACHE_CD__
endif

ifeq ($(NEED_BPP), 16)
FLAGS += -DWANT_16BPP
endif

ifeq ($(FRONTEND_SUPPORTS_RGB565), 1)
FLAGS += -DFRONTEND_SUPPORTS_RGB565
endif

ifeq ($(WANT_NEW_API), 1)
FLAGS += -DWANT_NEW_API
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
