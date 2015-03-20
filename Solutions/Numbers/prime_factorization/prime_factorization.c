#include <stdio.h>
#include <stdlib.h>

int factorize(int val, int p);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "USAGE: ./prime_factorization.c NUMBER\n");
    }
    int N = atoi(argv[1]);
    
    int val = N;
    int p = 2;
    if (val < 2) {
        printf("No primes here\n");
        return -1;
    }
    printf("Primes of %d are: ", val);

    // factorize until value is 1
    do {
        int new_val = factorize(val, p);
        // if the value was indeed factorized then, it was a prime
        if (new_val != val) {
            printf("%d ", p);
        }
        // replace val with new (factorized) value
        val = new_val;

        // test with following number if its also divisible 
        p++;
    } while (val != 1);

    printf("\n");

    return 0;
}

// factorizes val by p
int factorize(int val, int p)
{
    while (val % p == 0) {
        val /= p;
    }
    return val;
}

