CC=gcc
SRC=e_to_n_digit.c
CCFLAGS=-Wall -lm -O3
EXE=e_to_n_digit

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $^ $(CCFLAGS) -o $@

.phony: clean

clean:
	rm -rf $(EXE)
