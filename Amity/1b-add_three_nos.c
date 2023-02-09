#include <stdio.h>
int main()
{

    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    int sum = num1 + num2 + num3;
    printf("%d + %d + %d = %d\n", num1, num2, num3, sum);

return 0;
}