sources = zad1.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

a.out: glowny.c funkcje.c
	gcc -Wall glowny.c funkcje.c -std=gnu99

CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
