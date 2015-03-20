CC=gcc
SRC=fibonacci.c
CCFLAGS=-Wall -lm -O3
EXE=fibonacci

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
