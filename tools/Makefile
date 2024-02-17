CC   = gcc
MAKE = make
N_THREADS ?= $(shell nproc)

UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
	$(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Linux)
	DETECTED_OS := linux
	MIO0_FLAGS := --gc-sections
else ifeq ($(UNAME_S),Darwin)
	DETECTED_OS := macos
	MIO0_FLAGS :=
endif

RECOMP_DIR := ido-recomp/$(DETECTED_OS)

default: all

all: recomp mio0

clean:
	$(RM) -rf $(RECOMP_DIR)
	$(RM) mio0
	$(RM) -rf Torch/build

distclean: clean

recomp:
	@echo "Fetching Recomp..."
	wget https://github.com/decompals/ido-static-recomp/releases/download/v1.0/ido-5.3-recomp-${DETECTED_OS}.tar.gz
	mkdir -p $(RECOMP_DIR)
	tar xf ido-5.3-recomp-${DETECTED_OS}.tar.gz -C $(RECOMP_DIR)
	$(RM) ido-5.3-recomp-${DETECTED_OS}.tar.gz

mio0:
	@echo "Building mio0..."
	$(CC) -Wall -Wextra -Wno-format-overflow -O2 -ffunction-sections -fdata-sections -DMIO0_STANDALONE -s -Wl,${MIO0_FLAGS} -o mio0 mio0-decompressor/libmio0.c

torch:
	@echo "Building torch..."
	$(MAKE) -C Torch type=release -j$(N_THREADS)

.PHONY: all clean distclean default torch
