CC=gcc
SRC=pi_to_n_digit.c
CCFLAGS=-Wall -lm -O3
EXE=pi_to_n_digit

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
