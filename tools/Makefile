default: all

all: recomp

clean:
	@make -C ido-static-recomp clean VERSION=5.3

distclean: clean

recomp:
	@make -C ido-static-recomp VERSION=5.3 RELEASE=1 setup
	@make -C ido-static-recomp VERSION=5.3 RELEASE=1

.PHONY: all clean distclean default
