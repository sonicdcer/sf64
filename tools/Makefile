MAKE = make
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
	@$(MAKE) -C sm64tools clean

distclean: clean

recomp:
	@echo "Building Recomp..."
	@$(MAKE) -C ido-static-recomp VERSION=5.3 RELEASE=1 setup
	@$(MAKE) -C ido-static-recomp VERSION=5.3 RELEASE=1

mio0:
	@echo "Building mio0..."
	@$(MAKE) -C sm64tools mio0
	@rm sm64tools/mio0.d
	@mv sm64tools/mio0 .

.PHONY: all clean distclean default
