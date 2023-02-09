#include <stdio.h> 
int main() 
{
    int specified_days, days, years, weeks;
    printf("Enter the specified number of days: "); 
    scanf("%d", &specified_days);

    years = specified_days / 365; 
    weeks = (specified_days % 365)/7;
    days = specified_days - ((years*365) + (weeks*7));
    printf("%d years, %d weeks and %d days\n", years, weeks, days);

return 0;
}