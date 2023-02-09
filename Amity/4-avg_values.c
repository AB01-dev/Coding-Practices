#include <stdio.h>
int main()
{

    float weight_of_item1, weight_of_item2;
    float quantity_of_item1, quantity_of_item2;
    printf("Enter the weight of first item: ");
    scanf("%f", &weight_of_item1);
    printf("Enter the weight of second item: ");
    scanf("%f", &weight_of_item2);
    printf("Enter the quantity of first item: ");
    scanf("%f", &quantity_of_item1);
    printf("Enter the quantity of the second item: ");
    scanf("%f", &quantity_of_item2);

    float average = (weight_of_item1*quantity_of_item1 + weight_of_item2*quantity_of_item2) / 2;
    printf("Average of the items: %.2f\n", average);

return 0;
}