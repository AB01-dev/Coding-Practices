#include <stdio.h>

int calculator(int choice, int x, int y);

int main() {

    int a, b, option;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    calculator(option, a, b);

return 0;
}

int calculator(int choice, int x, int y) {
    if (choice == 1)
        printf("%d + %d = %d\n", x, y, x+y);
    else if (choice == 2)
        printf("%d - %d = %d\n", x, y, x-y);
    else if (choice == 3)
        printf("%d * %d = %d\n", x, y, x*y);
    else if (choice == 4)
        printf("%d / %d = %d\n", x, y, x/y);
    else
        printf("Invalid option!");
return 0;
}