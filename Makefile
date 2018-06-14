CC=gcc
CFLAGS=-I.
DEPS=
OBJ= main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

c-stack: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o