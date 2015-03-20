#include <stdio.h>
#include <stdlib.h>

int fibo(int N);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "USAGE: ./fibonacci NUMBER\n");
        return -1;
    }
    int N = atoi(argv[1]);

    if (N >= 0) {
        printf("The %dth fibonacci number is: %d\n", N, fibo(N));
    } else {
        printf("A element in a sequence cannot have a negative index\n");
    }
    return 0;
}

int fibo(int N)
{
    int prev = 0;
    int current = 1;
    int sum = 1;
    if (N == 0) {
        return 0;
    }
    while (N-- > 1) {
        sum = current + prev;
        prev = current;
        current = sum;
    }
    return sum;


}
