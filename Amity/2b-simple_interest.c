#include <stdio.h>
int main()
{

    float principal, rate, time;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate: ");
    scanf("%f", &rate);
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    float simple_interest = (principal * rate * time) / 100;
    printf("Simple interest is: %.2f\n", simple_interest);
    

return 0;
}