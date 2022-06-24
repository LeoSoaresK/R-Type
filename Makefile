ALLEGRO_VERSION=5.2.6.0
MINGW_VERSION=9.2.0

PATH_ALLEGRO=$(CURDIR)/allegro-$(ALLEGRO_VERSION)-mingw-$(MINGW_VERSION)
LIB_ALLEGRO=/lib/liballegro_monolith.dll.a
INCLUDE_ALLEGRO=/include

BUILD := $(CURDIR)/build/

CFLAGS = -I
TARGET = r-type.exe

all: r-type.exe

main.o: main.c
	gcc $(CFLAGS) $(PATH_ALLEGRO)$(INCLUDE_ALLEGRO) -c main.c	
	
r-type.exe: main.o
	gcc main.o -o r-type.exe $(PATH_ALLEGRO)$(LIB_ALLEGRO)
	
clean:

	del main.o
	del r-type.exe