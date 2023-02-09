#include <stdio.h>
int main()
{

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 0;
    int cube = 0;
    printf("Sum of the series:");

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0){
            printf(" - %d^3", i);
            cube = -(i*i*i);
        }
        else{
            printf(" + %d^3", i);
            cube = i*i*i;
        }
        sum += cube;
        
    }
    printf(" = %d\n", sum);

return 0;
}