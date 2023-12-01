MAKE = make
CC   = gcc
UNAME_S := $(shell uname -s)
ifeq ($(OS),Windows_NT)
    $(error Native Windows is currently unsupported for building this repository, use WSL instead c:)
else ifeq ($(UNAME_S),Darwin)
    DETECTED_OS := mac
    MAKE := gmake
endif

default: all

all: recomp mio0

clean:
	@$(MAKE) -C ido-static-recomp clean VERSION=5.3
	@rm mio0

distclean: clean

recomp:
	@echo "Building Recomp..."
	@$(MAKE) -C ido-static-recomp VERSION=5.3 RELEASE=1 setup
	@$(MAKE) -C ido-static-recomp VERSION=5.3 RELEASE=1

mio0:
	@echo "Building mio0..."
	$(CC) -Wall -Wextra -Wno-format-overflow -O2 -ffunction-sections -fdata-sections -DMIO0_STANDALONE -s -Wl,--gc-sections -o mio0 mio0-decompressor/libmio0.c

.PHONY: all clean distclean default
