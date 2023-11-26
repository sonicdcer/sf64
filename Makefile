# Build options can be changed by modifying the makefile or by building with 'make SETTING=value'.
# It is also possible to override the settings in Defaults in a file called .make_options as 'SETTING=value'.

-include .make_options

MAKEFLAGS += --no-builtin-rules --no-print-directory

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

# Set prefix to mips binutils binaries (mips-linux-gnu-ld => 'mips-linux-gnu-') - Change at your own risk!
# In nearly all cases, not having 'mips-linux-gnu-*' binaries on the PATH is indicative of missing dependencies
MIPS_BINUTILS_PREFIX ?= mips-linux-gnu-

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
ifeq ($(OS),Windows_NT)
$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Linux)
    DETECTED_OS := linux
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := mac
    MAKE := gmake
    CPPFLAGS += -xc++
endif

#### Tools ####
ifneq ($(shell type $(MIPS_BINUTILS_PREFIX)ld >/dev/null 2>/dev/null; echo $$?), 0)
$(error Unable to find $(MIPS_BINUTILS_PREFIX)ld. Please install or build MIPS binutils, commonly mips-linux-gnu. (or set MIPS_BINUTILS_PREFIX if your MIPS binutils install uses another prefix))
endif


### Compiler ###

IDO              := $(TOOLS)/ido_recomp/$(DETECTED_OS)/5.3/cc
AS              := $(MIPS_BINUTILS_PREFIX)as
LD              := $(MIPS_BINUTILS_PREFIX)ld
OBJCOPY         := $(MIPS_BINUTILS_PREFIX)objcopy
OBJDUMP         := $(MIPS_BINUTILS_PREFIX)objdump
CPP             := cpp
ICONV           := iconv
ASM_PROC        := $(PYTHON) $(TOOLS)/asm-processor/build.py
CAT             := cat

ASM_PROC_FLAGS  := --input-enc=utf-8 --output-enc=euc-jp --convert-statics=global-with-filename

SPLAT           ?= $(TOOLS)/splat/split.py
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
    CHECK_WARNINGS 	  := -Wno-unused-variable
    CC_CHECK          := $(CC_CHECK_COMP)
    CC_CHECK_FLAGS    := -MMD -MP -fno-builtin -fsyntax-only -funsigned-char -fdiagnostics-color -std=gnu89 -m32 -DNON_MATCHING -DAVOID_UB -DCC_CHECK=1
    ifneq ($(WERROR), 0)
        CHECK_WARNINGS += -Werror
    endif
else
    CC_CHECK          := @:
endif


CFLAGS          += -G 0 -non_shared -Xcpluscomm -nostdinc -Wab,-r4300_mul

WARNINGS        := -fullwarn -verbose -woff 624,649,838,712,516,513,596,564,594
ASFLAGS         := -march=vr4300 -32 -G0
COMMON_DEFINES  := -D_MIPS_SZLONG=32
GBI_DEFINES     := -DF3DEX_GBI
RELEASE_DEFINES := -DNDEBUG -D_FINALROM
AS_DEFINES      := -DMIPSEB -D_LANGUAGE_ASSEMBLY -D_ULTRA64
C_DEFINES       := -DLANGUAGE_C -D_LANGUAGE_C
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
build/src/main/1EB50.o: OPTFLAGS := -O1 -g0
build/src/main/sprintf.o: OPTFLAGS := -O2 -g0
build/src/main/math64.o: OPTFLAGS := -O2 -g0

build/src/libultra/gu/sqrtf.o: OPTFLAGS := -O3 -g0
build/src/libultra/gu/ortho.o: OPTFLAGS := -O3 -g0
build/src/libultra/gu/lookat.o: OPTFLAGS := -O3 -g0

build/src/libultra/io/pidma.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aisetnextbuf.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/pimgr.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/motor.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/controller.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/ai.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aigetlen.o: OPTFLAGS := -O1 -g0
build/src/libultra/io/aisetfreq.o: OPTFLAGS := -O1 -g0

build/src/libultra/libc/ldiv.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/string.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/xlitob.o: OPTFLAGS := -O2 -g0
build/src/libultra/libc/ll.o: OPTFLAGS := -O1 -g0
build/src/libultra/libc/ll.o: MIPS_VERSION := -mips3 -32

build/src/libultra/os/getactivequeue.o: OPTFLAGS := -O1 -g0
build/src/libultra/os/stopthread.o: OPTFLAGS := -O1 -g0

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

#build/src/%.o: CC := $(ASM_PROC) $(ASM_PROC_FLAGS) $(IDO) -- $(AS) $(ASFLAGS) --

all: uncompressed

init:
	@$(MAKE) clean
	@$(MAKE) decompress
	@$(MAKE) extract -j $(N_THREADS)
	@$(MAKE) all -j $(N_THREADS)
	@$(MAKE) compressed

uncompressed: $(ROM)
ifneq ($(COMPARE),0)
	@echo MD5 CHECK:
	@md5sum $(ROM)
	@md5sum -c $(TARGET).$(VERSION).uncompressed.md5
endif

compressed: $(ROMC)
ifeq ($(COMPARE),1)
	@md5sum $(ROMC)
	@md5sum -c $(TARGET).$(VERSION).md5
endif

#### Main Targets ###

decompress: $(BASEROM)
	@echo "Decompressing ROM..."
	@$(PYTHON) $(COMPTOOL) -de $(COMPTOOL_DIR) -m $(MIO0) $(BASEROM) $(BASEROM_UNCOMPRESSED)

extract:
	@$(RM) -r asm/$(VERSION) bin/$(VERSION)
	@echo "Unifying yamls..."
	@$(CAT) yamls/$(VERSION)/header.yaml yamls/$(VERSION)/makerom.yaml yamls/$(VERSION)/main.yaml yamls/$(VERSION)/overlays.yaml > $(SPLAT_YAML)
	@echo "Extracting..."
	@$(SPLAT) $(SPLAT_YAML)

clean:
	@git clean -fdx asm/
	@git clean -fdx assets/
	@git clean -fdx bin/
	@git clean -fdx build/
	@git clean -fdx linker_scripts/*.ld

format:
	@$(TOOLS)/format.py -j $(N_THREADS)

checkformat:
	@$(TOOLS)/check_format.sh -j $(N_THREADS)

# asm-differ expected object files
expected:
	mkdir -p expected/build
	rm -rf expected/build/
	cp -r build/ expected/build/

context:
	 python3 ./tools/m2ctx.py $(filter-out $@, $(MAKECMDGOALS))


#### Various Recipes ####

# Final ROM
$(ROMC): $(BASEROM_UNCOMPRESSED)
	@echo "Compressing ROM..."
	@$(PYTHON) $(COMPTOOL) -c $(ROM) $(ROMC)

# Uncompressed ROM
$(ROM): $(ELF)
	@echo "ELF->ROM:"
	$(OBJCOPY) -O binary $< $@

# Link
$(ELF): $(LIBULTRA_O) $(O_FILES) $(LD_SCRIPT) $(BUILD_DIR)/linker_scripts/$(VERSION)/hardware_regs.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/undefined_syms.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/pif_syms.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_syms_auto.ld $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_funcs_auto.ld
	@echo "Linking..."
	$(LD) $(LDFLAGS) -T $(LD_SCRIPT) \
		-T $(BUILD_DIR)/linker_scripts/$(VERSION)/hardware_regs.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/undefined_syms.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/pif_syms.ld \
		-T $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_syms_auto.ld -T $(BUILD_DIR)/linker_scripts/$(VERSION)/auto/undefined_funcs_auto.ld \
		-Map $(LD_MAP) -o $@

# PreProcessor
$(BUILD_DIR)/%.ld: %.ld
	$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) $< > $@

# Binary
$(BUILD_DIR)/%.o: %.bin
	$(OBJCOPY) -I binary -O elf32-big $< $@

# Assembly
$(BUILD_DIR)/%.o: %.s
	$(CPP) $(CPPFLAGS) $(BUILD_DEFINES) $(IINC) -I $(dir $*) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(AS_DEFINES) $< | $(ICONV) $(ICONV_FLAGS) | $(AS) $(ASFLAGS) $(ENDIAN) $(IINC) -I $(dir $*) -o $@
	$(OBJDUMP_CMD)

# C
$(BUILD_DIR)/%.o: %.c
	$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) -I $(dir $*) $(CHECK_WARNINGS) $(BUILD_DEFINES) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(MIPS_BUILTIN_DEFS) -o $@ $<
	$(CC) -c $(CFLAGS) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(OPTFLAGS) -o $@ $<
	$(OBJDUMP_CMD)
	$(RM_MDEBUG)

# Patch ll.o
build/src/libultra/libc/ll.o: src/libultra/libc/ll.c
	$(CC_CHECK) $(CC_CHECK_FLAGS) $(IINC) -I $(dir $*) $(CHECK_WARNINGS) $(BUILD_DEFINES) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(MIPS_BUILTIN_DEFS) -o $@ $<
	$(CC) -c $(CFLAGS) $(BUILD_DEFINES) $(IINC) $(WARNINGS) $(MIPS_VERSION) $(ENDIAN) $(COMMON_DEFINES) $(RELEASE_DEFINES) $(GBI_DEFINES) $(C_DEFINES) $(OPTFLAGS) -o $@ $<
	$(PYTHON) tools/set_o32abi_bit.py $@
	$(OBJDUMP_CMD)
	$(RM_MDEBUG)

-include $(DEP_FILES)

# Print target for debugging
print-% : ; $(info $* is a $(flavor $*) variable set to [$($*)]) @true

.PHONY: all uncompressed compressed clean init extract expected format checkformat decompress

.PHONY: context