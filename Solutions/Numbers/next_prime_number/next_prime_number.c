#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long unsigned int get_next_prime(long unsigned int current_prime);
int is_prime(long unsigned int val);

int main(int argc, char *argv[])
{

    long unsigned int current_prime = 2;
    char answer;

    while (1) {
        printf("Do you want to see the next prime? (Y/N)\n");
        if (scanf("%c%*c", &answer) == 1) {
            if (answer == 'y' || answer == 'Y') {
                printf("%lu\n", current_prime);
                current_prime = get_next_prime(current_prime);
            } else if (answer == 'n' || answer == 'N') {
                break;
            } else {
                printf("That is not an option\n");
            }
        }
    }

    return 0;
}

long unsigned int get_next_prime(long unsigned int current_prime)
{

   long unsigned int next_prime = current_prime + 1;

   while (1) {
       if (is_prime(next_prime)) {
           return next_prime;
       } else {
           next_prime++;
       }
   }
}

int is_prime(long unsigned int val)
{
    long unsigned int i = 3;

    long unsigned int max = (long unsigned int) sqrt((double) val);

    if (val % 2 == 0) {
        return 0;
    }

    while (i < max + 1) {
        if (val % i == 0) {
            return 0;
        }
        i += 1;
    }
    return 1;
}
    


