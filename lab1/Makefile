sources = lab01.c lab03.c lab04.c lab05.c lab06.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))



CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
