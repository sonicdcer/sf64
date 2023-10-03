VERSION ?= us

BASEROM              := baserom.$(VERSION).z64
TARGET               := starfox64

SPLAT           ?= tools/splat/split.py
SPLAT_YAML      ?= $(TARGET).$(VERSION).yaml



extract:
#   $(RM) -r asm/$(VERSION) bin/$(VERSION)
#	$(CAT) yamls/$(VERSION)/header.yaml yamls/$(VERSION)/makerom.yaml yamls/$(VERSION)/main.yaml > $(SPLAT_YAML)
	$(SPLAT) yamls/$(SPLAT_YAML)