#include <stdio.h>
int main()
{

    int num, i, count, check;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
        {
            check = num % i;
            count = 0;
            if (check == 0)
                {
                    count++;
                    break;
                }
        }
    
        if (count > 0)
            printf("The entered number isnt a prime number");
        else
            printf("The entered number is a prime number");



return 0;
}