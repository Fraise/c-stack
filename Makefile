CC=gcc
CFLAGS=-I. -Wall
DEPS=stack.h
OBJ= main.o stack.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

c-stack: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o