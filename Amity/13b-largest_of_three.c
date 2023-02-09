#include <stdio.h>
int main()
{

    printf("Enter three different numbers\n");
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("num1 is the largest number\n");
        } else if (num3 > num1) {
            printf("num3 is the largest number\n");
        }
    } else if (num2 > num3) {
        printf("num2 is the largest number\n");
    }
    else {
        printf("num3 is the largest number\n");
    }

return 0;
}