#include <stdio.h>

int main() {
    
    int var1, var2;
    printf("Enter the first variable: ");
    scanf("%d", &var1);
    printf("Enter the second variable: ");
    scanf("%d", &var2);

    printf("\nVariables before swapping the values-");
    printf("\nVariable1: %d", var1);
    printf("\nVariable 2: %d", var2);
    
    var1 = var1 + var2;
    var2 = var1 -var2;
    var1 = var1 -var2;
    printf("\nVariables after swapping the values-");
    printf("\nVariable 1: %d", var1);
    printf("\nVariable 2: %d", var2);

return 0;
}