#include <stdio.h>
int main()
{

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int sum = 1;
    int power = 0;
    printf("Sum of the series: ");
    printf("1^4");

    for (int i = 2; i <= n; i++) {
        power = i*i*i*i;
        printf("+ %d^4", i);
        sum += power;
    }
    printf(" = %d\n", sum);

return 0;
}