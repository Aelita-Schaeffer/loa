FILES := loa.c
CC := gcc
BIN := loa

all: $(FILES)
	$(CC) $^ -o $(BIN)

clean:
	rm -vf $(BIN)

test:
	./loa paramterer 1 2 3
