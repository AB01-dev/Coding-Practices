#include <stdio.h>
int main()
{

    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    float fact = 1;
    float sum = 0;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += 1/fact;
        printf(" 1/%d!", i);
    }
    printf(" = %.3f\n", sum);

return 0;
}
