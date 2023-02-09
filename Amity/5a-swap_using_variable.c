#include <stdio.h>
int main()
{

    int var1, var2;
    var1 = 10;
    var2 = 20;
    printf("\nBefore Swapping:\n");
    printf("Variable 1: %d\n", var1);
    printf("Variable 2: %d\n", var2);
    
    int temp_var;
    temp_var = var1;
    var1 = var2;
    var2 = temp_var;
    printf("\nAfter Swapping:\n");
    printf("Variable 1: %d\n", var1);
    printf("Variable 2: %d\n", var2);
     

return 0;
}