sources = obsluga_bazy.c

programs = $(basename $(sources))
objects = $(addsuffix .o, $(programs))

CFLAGS = -Wall -std=c99

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
