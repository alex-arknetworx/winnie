PREFIX=/usr/local
src = $(wildcard src/*.cc) $(wildcard src/fbdev/*.cc) $(wildcard src/sdl/*.cc)
obj = $(src:.cc=.o)
dep = $(obj:.o=.d)
lib_so = libwinnie.so

dbg = -g
opt = -O3 -ffast-math -march=native
inc = -Isrc

include ../backend.mk

ifeq ($(backend), SDL)
	libs = -lSDL
endif

CXX = g++
CXXFLAGS = -pedantic -Wall -fPIC $(dbg) $(opt) $(inc) $(def) `pkg-config --cflags freetype2`
LDFLAGS = $(libs) `pkg-config --libs freetype2` -lrt

$(lib_so): $(obj)
	$(CXX) -o $@ -shared $(obj) $(LDFLAGS)

-include $(dep)

%.d: %.cc
	@$(CPP) $(CXXFLAGS) $< -MM -MT $(@:.d=.o) >$@

.PHONY: clean
clean:
	rm -f $(obj) $(lib_so) $(dep)

.PHONY: install
install: $(lib_so)
	mkdir -p $(PREFIX)/lib
	mkdir -p $(PREFIX)/bin
	cp $(lib_so) $(PREFIX)/lib/$(lib_so)
	ldconfig

.PHONY: uninstall
uninstall:
	rm -f $(PREFIX)/lib/$(lib_so)
