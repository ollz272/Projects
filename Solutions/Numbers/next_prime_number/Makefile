CC=gcc
SRC=next_prime_number.c
CCFLAGS=-Wall -lm -O3
EXE=next_prime_number

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
