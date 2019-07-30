PROG := pixels
CC = gcc
CFLAGS = `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs`
SRC := $(wildcard *.c)
DEPS:= common.h
OBJ := $(SRC:.c=.o)

all: $(OBJ)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJ)

%.o: %.c %.h $(DEPS) 
	$(CC) -c $(CFLAGS) -o $@ $<
clean:
	$(RM) $(OBJ) $(PROG)
