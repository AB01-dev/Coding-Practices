#include <stdio.h>
int main()
{

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int fact = 1, sum = 0;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += fact;
        printf(" %d !", i);
    }
    printf(" = %d\n", sum);
return 0;
}