#include <stdio.h>
int main()
{

    //01    1    2     3     5     8    13...... N term
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int first = 0, second = 1, sum = 0;
    for (int i=0; i<n; i++) {
        sum += first;
        first = second;
        second = sum;
        printf("%d ", sum);
    }
printf("\n");

return 0;
}