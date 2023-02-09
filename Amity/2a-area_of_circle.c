#include <stdio.h>

#define pi 3.14

int main()
{
    float radius;
    printf("Enter the radius of the cirlce: ");
    scanf("%f", &radius);

    float area_of_circle;
    area_of_circle = pi * radius * radius;
    printf("Area of cirlce is %.2f\n", area_of_circle);

return 0;
}