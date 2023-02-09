#include <stdio.h>
int main()
{

    int n, isprime;
    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        isprime = 1;
        for (int j = 2; j <= n; j++) {
            if (i%j == 0)
                isprime++;
        }
        if (isprime == 2)
            printf("%d ", i);
        
    }


return 0;
}