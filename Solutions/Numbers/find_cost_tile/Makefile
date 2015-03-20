CC=gcc
SRC=find_cost_tile.c
CCFLAGS=-Wall -lm -g -std=c99
EXE=find_cost_tile

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
