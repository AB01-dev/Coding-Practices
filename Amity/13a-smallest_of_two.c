#include <stdio.h>
int main()
{

    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("num2 is the smallest number\n");
    } else if (num1 < num2) {
        printf("num1 is the smallest number\n");
    }
    else {
        printf("num1 and num2 are equal\n");
    }

return 0;
}