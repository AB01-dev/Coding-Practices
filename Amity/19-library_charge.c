#include <stdio.h>
int main() {
    int no_of_days;
    printf("Enter the number of days: ");
    scanf("%d", &no_of_days);
    float fine;
    
    if (no_of_days > 0 && no_of_days <= 5) {
        fine = 0.50 * no_of_days;
    } else if (no_of_days >= 6 && no_of_days <= 10) {
        fine = 1 * no_of_days;
    } else if (no_of_days > 10) {
        fine = 5 * no_of_days;
    } if (no_of_days > 30) {
        printf("Your membership will be canceled.\n");
    }
    printf("You have to pay Rs. %.2f fine.", fine);
    
return 0;
}