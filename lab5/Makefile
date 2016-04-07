sources = obsluga_bazy.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c99
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
