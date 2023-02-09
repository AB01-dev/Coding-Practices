#include <stdio.h>

int factorial(int number);

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    factorial(n);

return 0;
}

int factorial(int number) {
    int factorial = 1;

    for (int i = 1; i<=number; i++){
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", number, factorial);
return 0;
}