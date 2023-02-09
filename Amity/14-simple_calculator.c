#include <stdio.h>
int main()
{

    int choice;
    float num1,num2;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter the firt number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch(choice)
    {
        case 1: 
            printf("%.2f\n", num1+num2);
            break;
        case 2: 
            printf("%.2f\n", num1-num2);
            break;
        case 3: 
            printf("%.2f\n", num1*num2);
            break;
        case 4: 
            printf("%.2f\n", num1/num2);
            break;
    }

return 0;
}