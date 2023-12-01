CC   = gcc

UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
    $(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Linux)
	DETECTED_OS := linux
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := mac
endif

RECOMP_DIR := ido-recomp/$(DETECTED_OS)

default: all

all: recomp mio0

clean:
	$(RM) -rf $(RECOMP_DIR)
	$(RM) mio0

distclean: clean

recomp:
	@echo "Fetching Recomp..."
	wget https://github.com/decompals/ido-static-recomp/releases/download/v1.0/ido-5.3-recomp-${DETECTED_OS}.tar.gz
	mkdir -p $(RECOMP_DIR)
	tar xf ido-5.3-recomp-${DETECTED_OS}.tar.gz -C $(RECOMP_DIR)
	$(RM) ido-5.3-recomp-${DETECTED_OS}.tar.gz

mio0:
	@echo "Building mio0..."
	$(CC) -Wall -Wextra -Wno-format-overflow -O2 -ffunction-sections -fdata-sections -DMIO0_STANDALONE -s -Wl,--gc-sections -o mio0 mio0-decompressor/libmio0.c

.PHONY: all clean distclean default
