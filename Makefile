waf := python waf

all: configure build

configure:
	$(waf) configure

.PHONY: build
build:
	$(waf) build
