#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 18

unsigned int factorial(unsigned int n);

int main(int argc, char *argv[])
{
    
    if (argc != 2) {
        printf("USAGE: ./e_to_n_digit [DIGITS]\n");
        return -1;
    }


    int N = atoi(argv[1]);
    int N_real;
    if (N < 1) {
        printf("Digits should be bigger than 0\n");
        return -1;
    } else if (N > MAX) {
        N_real = MAX;
    } else if (N < 5) {
        N_real = 5;
    } else { 
        N_real = N;
    }

    int i;
    double e = 1.0;
    for (i = 1; i != N_real + 1; ++i) {
        e += 1.0 / factorial(i);
    }
    if (N < MAX) {
        printf("e = %.*f\n", N, e);
    } else {
        printf("e = %.*f\n", MAX - 1, e);
    }

    return 0;
}

unsigned int factorial(unsigned int n)
{
    unsigned int i;
    unsigned val = 1;
    for (i = 1; i != n + 1; ++i) {
        val *= i;
    }
    return val;
}
