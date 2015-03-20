CC=gcc
SRC=prime_factorization.c
CCFLAGS=-Wall -lm -O3
EXE=prime_factorization

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
