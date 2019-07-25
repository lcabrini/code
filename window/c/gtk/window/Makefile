CC = gcc
CFLAGS := `pkg-config --cflags gtk+-3.0`
LIBS := `pkg-config --libs gtk+-3.0`
PROG = window

all: main.o
	$(CC) $(LIBS) -o $(PROG) main.o

main.o: main.c
	$(CC) -c $(CFLAGS) -o main.o main.c

clean:
	$(RM) $(PROG) *.o
