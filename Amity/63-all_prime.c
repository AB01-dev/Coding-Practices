#include <stdio.h>

int prime_no(int start, int stop);

int main()
{

    int initial, final;
    printf("Enter start value: ");
    scanf("%d", &initial);
    printf("Enter stop value: ");
    scanf("%d", &final);

    printf("Prime numbers between %d and %d are:\n", initial, final);
    prime_no(initial, final);
    printf("\n");

return 0;
}

int prime_no(int start, int stop) {
    for (int i = start; i <= stop; i++) {
        int isprime = 1;
        for (int j = 2; j <= stop; j++) {
            if (i%j == 0)
                isprime++;
        }
        if (isprime == 2)
            printf("%d ", i);
    }
return 0;
}