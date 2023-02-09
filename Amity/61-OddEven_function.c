#include <stdio.h>

int odd_even_function(int number);

int main() {

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    odd_even_function(n);

return 0;
}

int odd_even_function(int number) {
    if (number % 2 ==0)
        printf("%d is a even number\n", number);
    else
        printf("%d is not a even number\n", number);
return 0;
}