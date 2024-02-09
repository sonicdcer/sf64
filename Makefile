# Build options can be changed by modifying the makefile or by building with 'make SETTING=value'.
# It is also possible to override the settings in Defaults in a file called .make_options as 'SETTING=value'.

-include .make_options

MAKEFLAGS += --no-builtin-rules --no-print-directory

# Returns the path to the command $(1) if exists. Otherwise returns an empty string.
find-command = $(shell which $(1) 2>/dev/null)

#### Defaults ####

# If COMPARE is 1, check the output md5sum after building
COMPARE ?= 1
# If NON_MATCHING is 1, define the NON_MATCHING C flag when building
NON_MATCHING ?= 0
# if WERROR is 1, pass -Werror to CC_CHECK, so warnings would be treated as errors
WERROR ?= 0
# Keep .mdebug section in build
KEEP_MDEBUG ?= 0
# Check code syntax with host compiler
RUN_CC_CHECK ?= 1
CC_CHECK_COMP ?= gcc
# Dump build object files
OBJDUMP_BUILD ?= 0
# Number of threads to compress with
N_THREADS ?= $(shell nproc)
# Whether to colorize build messages
COLOR ?= 1
# Whether to hide commands or not
VERBOSE ?= 0
# Command for printing messages during the make.
PRINT ?= printf

# Set prefix to mips binutils binaries (mips-linux-gnu-ld => 'mips-linux-gnu-') - Change at your own risk!
# Auto-detect prefix for MIPS toolchain
ifneq      ($(call find-command,mips-linux-gnu-ld),)
  MIPS_BINUTILS_PREFIX := mips-linux-gnu-
else ifneq ($(call find-command,mips64-linux-gnu-ld),)
  MIPS_BINUTILS_PREFIX := mips64-linux-gnu-
else ifneq ($(call find-command,mips64-elf-ld),)
  MIPS_BINUTILS_PREFIX := mips64-elf-
else
  $(error Unable to detect a suitable MIPS toolchain installed)
endif

VERSION ?= us

BASEROM              := baserom.$(VERSION).z64
BASEROM_UNCOMPRESSED := baserom.$(VERSION).uncompressed.z64
TARGET               := starfox64

### Output ###

BUILD_DIR := build
TOOLS	  := tools
PYTHON	  := python3
ROM       := $(BUILD_DIR)/$(TARGET).$(VERSION).uncompressed.z64
ROMC 	  := $(BUILD_DIR)/$(TARGET).$(VERSION).z64
ELF       := $(BUILD_DIR)/$(TARGET).$(VERSION).elf
LD_MAP    := $(BUILD_DIR)/$(TARGET).$(VERSION).map
LD_SCRIPT := linker_scripts/$(VERSION)/$(TARGET).ld

#### Setup ####

BUILD_DEFINES ?=

ifeq ($(VERSION),us)
    BUILD_DEFINES   += -DVERSION_US=1
else
$(error Invalid VERSION variable detected. Please use 'us')
endif

ifeq ($(NON_MATCHING),1)
    BUILD_DEFINES   += -DNON_MATCHING -DAVOID_UB
    COMPARE  := 0
endif

MAKE = make
CPPFLAGS += -fno-dollars-in-identifiers -P
LDFLAGS  := --no-check-sections --accept-unknown-input-arch --emit-relocs

UNAME_S := $(shell uname -s)
UNAME_M := $(shell uname -m)
ifeq ($(OS),Windows_NT)
$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Linux)
    DETECTED_OS := linux
    #Detect aarch64 devices (Like Raspberry Pi OS 64-bit)
    #If it's found, then change the compiler to a version that can compile in 32 bit mode.
    ifeq ($(UNAME_M),aarch64)
        CC_CHECK_COMP := arm-linux-gnueabihf-gcc
    endif
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := macos
    MAKE := gmake
    CPPFLAGS += -xc++
endif

# Support python venv's if one is installed.
PYTHON_VENV = .venv/bin/python3
ifneq "$(wildcard $(PYTHON_VENV) )" ""
  PYTHON = $(PYTHON_VENV)
endif

ifeq ($(VERBOSE),0)
  V := @
endif

ifeq ($(COLOR),1)
NO_COL  := \033[0m
RED     := \033[0;31m
GREEN   := \033[0;32m
BLUE    := \033[0;34m
YELLOW  := \033[0;33m
BLINK   := \033[33;5m
endif

# Common build print status function
define print
  @$(PRINT) "$(GREEN)$(1) $(YELLOW)$(2)$(GREEN) -> $(BLUE)$(3)$(NO_COL)\n"
endef

#### Tools ####
ifneq ($(shell type $(MIPS_BINUTILS_PREFIX)ld >/dev/null 2>/dev/null; echo $$?), 0)
$(error Unable to find $(MIPS_BINUTILS_PREFIX)ld. Please install or build MIPS binutils, commonly mips-linux-gnu. (or set MIPS_BINUTILS_PREFIX if your MIPS binutils install uses another prefix))
endif


### Compiler ###

IDO              := $(TOOLS)/ido-recomp/$(DETECTED_OS)/cc
AS              := $(MIPS_BINUTILS_PREFIX)as
LD              := $(MIPS_BINUTILS_PREFIX)ld
OBJCOPY         := $(MIPS_BINUTILS_PREFIX)objcopy
OBJDUMP         := $(MIPS_BINUTILS_PREFIX)objdump
ICONV           := iconv
ASM_PROC        := $(PYTHON) $(TOOLS)/asm-processor/build.py
CAT             := cat

# Prefer clang as C preprocessor if installed on the system
ifneq (,$(call find-command,clang))
  CPP      := clang
  CPPFLAGS := -E -P -x c -Wno-trigraphs -D_LANGUAGE_ASSEMBLY
else
  CPP      := cpp
  CPPFLAGS := -P -Wno-trigraphs -D_LANGUAGE_ASSEMBLY
endif

ASM_PROC_FLAGS  := --input-enc=utf-8 --output-enc=euc-jp --convert-statics=global-with-filename

SPLAT           ?= $(PYTHON) $(TOOLS)/splat/split.py
SPLAT_YAML      ?= $(TARGET).$(VERSION).yaml

COMPTOOL		:= $(TOOLS)/comptool.py
COMPTOOL_DIR	:= baserom
MIO0			:= $(TOOLS)/mio0


IINC := -Iinclude -Ibin/$(VERSION) -I.
IINC += -Ilib/ultralib/include -Ilib/ultralib/include/PR -Ilib/ultralib/include/ido

ifeq ($(KEEP_MDEBUG),0)
  RM_MDEBUG = $(OBJCOPY) --remove-section .mdebug $@
else
  RM_MDEBUG = @:
endif

# Check code syntax with host compiler
CHECK_WARNINGS := -Wall -Wextra -Wimplicit-fallthrough -Wno-unknown-pragmas -Wno-missing-braces -Wno-sign-compare -Wno-uninitialized
# Have CC_CHECK pretend to be a MIPS compiler
MIPS_BUILTIN_DEFS := -DMIPSEB -D_MIPS_FPSET=16 -D_MIPS_ISA=2 -D_ABIO32=1 -D_MIPS_SIM=_ABIO32 -D_MIPS_SZINT=32 -D_MIPS_SZPTR=32
ifneq ($(RUN_CC_CHECK),0)
#   The -MMD flags additionaly creates a .d file with the same name as the .o file.
    CHECK_WARNINGS    := -Wno-unused-variable -Wno-int-conversion
    CC_CHECK          := $(CC_CHECK_COMP)
    CC_CHECK_FLAGS    := -MMD -MP -fno-builtin -fsyntax-only -funsigned-char -fdiagnostics-color -std=gnu89 -DNON_MATCHING -DAVOID_UB -DCC_CHECK=1

    # Ensure that gcc treats the code as 32-bit
    ifeq ($(UNAME_M),aarch64)
        CC_CHECK_FLAGS += -march=armv7-a+fp
    else
        CC_CHECK_FLAGS += -m32
    endif
	ifneq ($(WERROR), 0)
        CHECK_WARNINGS += -Werror
    endif
else
    CC_CHECK          := @:
endif


CFLAGS          += -G 0 -non_shared -Xcpluscomm -nostdinc -Wab,-r4300_mul

WARNINGS        := -fullwarn -verbose -woff 624,649,838,712,516,513,596,564,594,709
ASFLAGS         := -march=vr4300 -32 -G0
COMMON_DEFINES  := -D_MIPS_SZLONG=32
GBI_DEFINES     := -DF3DEX_GBI
RELEASE_DEFINES := -DNDEBUG -D_FINALROM
AS_DEFINES      := -DMIPSEB -D_LANGUAGE_ASSEMBLY -D_ULTRA64
C_DEFINES       := -DLANGUAGE_C -D_LANGUAGE_C -DBUILD_VERSION=VERSION_H
ENDIAN          := -EB

OPTFLAGS        := -O2 -g3
MIPS_VERSION    := -mips2
ICONV_FLAGS     := --from-code=UTF-8 --to-code=EUC-JP

# Use relocations and abi fpr names in the dump
OBJDUMP_FLAGS := --disassemble --reloc --disassemble-zeroes -Mreg-names=32 -Mno-aliases

ifneq ($(OBJDUMP_BUILD), 0)
    OBJDUMP_CMD = $(OBJDUMP) $(OBJDUMP_FLAGS) $@ > $(@:.o=.dump.s)
    OBJCOPY_BIN = $(OBJCOPY) -O binary $@ $@.bin
else
    OBJDUMP_CMD = @:
    OBJCOPY_BIN = @:
endif

# rom compression flags
COMPFLAGS := --threads $(N_THREADS)
ifeq ($(NON_MATCHING),0)
    COMPFLAGS += --matching
endif

#### Files ####

$(shell mkdir -p asm bin linker_scripts/$(VERSION)/auto)

SRC_DIRS      := $(shell find src -type d)
ASM_DIRS      := $(shell find asm/$(VERSION) -type d -not -path "asm/$(VERSION)/nonmatchings/*")
BIN_DIRS      := $(shell find bin -type d)

C_FILES       := $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
S_FILES       := $(foreach dir,$(ASM_DIRS) $(SRC_DIRS),$(wildcard $(dir)/*.s))
BIN_FILES     := $(foreach dir,$(BIN_DIRS),$(wildcard $(dir)/*.bin))
O_FILES       := $(foreach f,$(C_FILES:.c=.o),$(BUILD_DIR)/$f) \
                 $(foreach f,$(S_FILES:.s=.o),$(BUILD_DIR)/$f) \
                 $(foreach f,$(BIN_FILES:.bin=.o),$(BUILD_DIR)/$f)


# Automatic dependency files
DEP_FILES := $(O_FILES:.o=.d) \
             $(O_FILES:.o=.asmproc.d)

# create build directories
$(shell mkdir -p $(BUILD_DIR)/linker_scripts/$(VERSION) $(BUILD_DIR)/linker_scripts/$(VERSION)/auto $(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(BIN_DIRS),$(BUILD_DIR)/$(dir)))


# directory flags

# per-file flags
build/src/main/sys_audio_17650.o:  OPTFLAGS := -O2 -g0
build/src/main/sys_audio_1EB50.o: OPTFLAGS := -O1 -g0
build/src/main/sys_sprintf.o: OPTFLAGS := -O2 -g0
build/src/main/sys_math64.o: OPTFLAGS := -O2 -g0

build/src/libultra/gu/sqrtf.o: OPTFLAGS := -O3 -g0
build/src/libultra/gu/ortho.o: OPTFLAGS := -O3 -g0
build/src/libultra/gu/lookat.o: OPTFLAGS := -O3 -g0
build/src/libultra/gu/perspective.o: OPTFLAGS := -O3 -g0

build/src/libultra/io/cartrominit.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/contquery.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/conteepread.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/contreaddata.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/dpsetstat.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/pidma.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aisetnextbuf.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/pimgr.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/motor.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/controller.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/ai.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aigetlen.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aisetfreq.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/sptaskyielded.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/sptaskyield.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/sptask.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/viblack.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/virepeatline.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/visetmode.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/visetspecial.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/visetevent.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/viswapbuf.o: OPTFLAGS := -O1 -g0

build/src/libultra/libc/ldiv.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/string.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/xlitob.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/ll.o: OPTFLAGS := -O1 -g0
build/src/libultra/libc/ll.o: MIPS_VERSION := -mips3 -32

build/src/libultra/os/createmesgqueue.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/createthread.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/gettime.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/destroythread.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/getactivequeue.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/recvmesg.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/sendmesg.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/startthread.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/stopthread.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/setthreadpri.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/settimer.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/settime.o: OPTFLAGS := -O1 -g0

build/src/libultra/rmon/rmonmem.o: OPTFLAGS := -O1 -g0
build/src/libultra/rmon/rmontask.o: OPTFLAGS := -O1 -g0
build/src/libultra/rmon/rmonregs.o: OPTFLAGS := -O1 -g0
build/src/libultra/rmon/rmonmisc.o: OPTFLAGS := -O1 -g0

# cc & asm-processor
CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(IDO) -- $(AS) $(ASFLAGS) --
build/src/libultra/gu/sqrtf.o: CC := $(IDO)
build/src/libultra/gu/lookat.o: CC := $(IDO)
build/src/libultra/gu/ortho.o: CC := $(IDO)
build/src/libultra/libc/ll.o: CC := $(IDO)
build/src/libultra/gu/perspective.o: CC := $(IDO)

#build/src/%.o: CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(IDO) -- $(AS) $(ASFLAGS) --

all: uncompressed

toolchain:
	@$(MAKE) -s -C tools

init:
	@$(MAKE) clean
	@$(MAKE) decompress
	@$(MAKE) extract -j $(N_THREADS)
	@$(MAKE) uncompressed -j $(N_THREADS)
	@$(MAKE) compressed

SF := ___  ___\n/ __||  _|\n\__ \|  _|\n|___/|_|\n
uncompressed: $(ROM)
ifneq ($(COMPARE),0)
	@echo "$(GREEN)Calculating Rom Header Checksum... $(YELLOW)$<$(NO_COL)"
	@$(PYTHON) $(COMPTOOL) -r $(ROM) .
	@md5sum --status -c $(TARGET).$(VERSION).uncompressed.md5 && \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).uncompressed.z64$(NO_COL): $(GREEN)OK$(NO_COL)\n$(YELLOW) $(SF)" || \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).uncompressed.z64 $(RED)FAILED$(NO_COL)\n\
	$(RED)CAN'T LET YOU DO THAT, STARFOX.$(NO_COL)\n"
	@md5sum --status -c $(TARGET).$(VERSION).uncompressed.md5
endif

compressed: $(ROMC)
ifeq ($(COMPARE),1)
	@echo "$(GREEN)Calculating Rom Header Checksum... $(YELLOW)$<$(NO_COL)"
	@$(PYTHON) $(COMPTOOL) -r $(ROMC) .
	@md5sum --status -c $(TARGET).$(VERSION).md5 && \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).z64$(NO_COL): $(GREEN)OK$(NO_COL)\n" || \
	$(PRINT) "$(BLUE)$(TARGET).$(VERSION).z64 $(RED)FAILED$(NO_COL)\n"
	@md5sum --status -c $(TARGET).$(VERSION).uncompressed.md5
endif

#### Main Targets ###

decompress: $(BASEROM)
	@echo "Decompressing ROM..."
	@$(PYTHON) $(COMPTOOL) -de $(COMPTOOL_DIR) -m $(MIO0) $(BASEROM) $(BASEROM_UNCOMPRESSED)

extract:
	@$(RM) -r asm/$(VERSION) bin/$(VERSION)
	@echo "Unifying yamls..."
	@$(CAT) yamls/$(VERSION)/header.yaml yamls/$(VERSION)/main.yaml yamls/$(VERSION)/assets.yaml yamls/$(VERSION)/overlays.yaml > $(SPLAT_YAML)
	@echo "Extracting..."
	@$(SPLAT) $(SPLAT_YAML)

clean:
	@git clean -fdx asm/
	@git clean -fdx assets/
	@git clean -fdx bin/
	@git clean -fdx build/
	@git clean -fdx linker_scripts/*.ld

format:
	@$(PYTHON) $(TOOLS)/format.py -j $(N_THREADS)

checkformat:
	@$(TOOLS)/check_format.sh -j $(N_THREADS)

# asm-differ expected object files
expected:
	mkdir -p expected/build
	rm -rf expected/build/
	cp -r build/ expected/build/

context:
	@echo "Generating ctx.c ..."
	@$(PYTHON) ./tools/m2ctx.py $(filter-out $@, $(MAKECMDGOALS))

disasm:
	@$(RM) -r asm/$(VERSION) bin/$(VERSION)
	@echo "Unifying yamls..."
	@$(CAT) yamls/$(VERSION)/header.yaml yamls/$(VERSION)/main.yaml yamls/$(VERSION)/assets.yaml yamls/$(VERSION)/overlays.yaml > $(SPLAT_YAML)
	@echo "Extracting..."
	@$(SPLAT) $(SPLAT_YAML) --disassemble-all

#### Various Recipes ####

# Final ROM
$(ROMC): $(BASEROM_UNCOMPRESSED)
	$(call print,Compressing ROM...,$<,$@)
	@$(PYTHON) $(COMPTOOL) -c $(ROM) $(ROMC)

# Uncompressed ROM
$(ROM): $(ELF)
	$(call print,ELF->ROM:,$<,$@)
	$(V)$(OBJCOPY) -O binary $< $@

# Link
$(ELF): $(LIBULTRA_O) $(O_FILES) $(LD_SCRIPT) $(BUILD_DIR)/linker_scripts/$(VERSION)/hardware_regs.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/undefined_syms.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/pif_syms.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_syms_auto.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_funcs_auto.ld
	$(call print,Linking:,$<,$@)
	$(V)$(LD) $(LDFLAGS) -T $(LD_SCRIPT) \
		-T $(BUILD_DIR)/linker_scripts/$(VERSION)/hardware_regs.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/undefined_syms.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/pif_syms.ld \
		-T $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_syms_auto.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_funcs_auto.ld \
		-Map $(LD_MAP) -o $@

# PreProcessor
$(BUILD_DIR)/%.ld: %.ld
	$(call print,PreProcessor:,$<,$@)
	$(V)$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) $< > $@

# Binary
$(BUILD_DIR)/%.o: %.bin
	$(call print,Binary:,$<,$@)
	$(V)$(OBJCOPY) -I binary -O elf32-big $< $@

# Assembly
$(BUILD_DIR)/%.o: %.s
	$(call print,Assembling:,$<,$@)
	$(V)$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) -I $(dir $*) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(AS_DEFINES) $< | $(ICONV) $(ICONV_FLAGS) | $(AS) $(ASFLAGS) $(ENDIAN) $(IINC) -I $(dir $*) -o $@
	$(V)$(OBJDUMP_CMD)

# C
$(BUILD_DIR)/%.o: %.c
	$(call print,Compiling:,$<,$@)
	@$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) -I $(dir $*) $(CHECK_WARNINGS) $(BUILD_DEFINES) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(MIPS_BUILTIN_DEFS) -o $@ $<
	$(V)$(CC) -c $(CFLAGS) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(OPTFLAGS) -o $@ $<
	$(V)$(OBJDUMP_CMD)
	$(V)$(RM_MDEBUG)

# Patch ll.o
build/src/libultra/libc/ll.o: src/libultra/libc/ll.c
	$(call print,Patching:,$<,$@)
	@$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) -I $(dir $*) $(CHECK_WARNINGS) $(BUILD_DEFINES) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(MIPS_BUILTIN_DEFS) -o $@ $<
	$(V)$(CC) -c $(CFLAGS) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(OPTFLAGS) -o $@ $<
	$(V)$(PYTHON) tools/set_o32abi_bit.py $@
	$(V)$(OBJDUMP_CMD)
	$(V)$(RM_MDEBUG)

-include $(DEP_FILES)

# Print target for debugging
print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true

.PHONY: all uncompressed compressed clean init extract expected format checkformat decompress context disasm toolchain
