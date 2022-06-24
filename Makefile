ALLEGRO_VERSION=5.2.6.0
MINGW_VERSION=9.2.0

PATH_ALLEGRO=$(CURDIR)/allegro-$(ALLEGRO_VERSION)-mingw-$(MINGW_VERSION)
LIB_ALLEGRO=/lib/liballegro_monolith.dll.a
INCLUDE_ALLEGRO=/include

all: r-type.exe


	
r-type.exe: r-type.o
	gcc -o r-type.exe r-type.o $(PATH_ALLEGRO)$(LIB_ALLEGRO)

r-type.o: r-type.c
	gcc -I $(PATH_ALLEGRO)$(INCLUDE_ALLEGRO) -c r-type.c	
	
clean:

	del r-type.o
	del r-type.exe


