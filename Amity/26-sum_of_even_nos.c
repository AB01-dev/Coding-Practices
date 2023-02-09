#include <stdio.h>
int main()
{
 
    int n, s;
    printf("Enter the range: ");
    scanf("%d", &n);
    int sum = 0;

    for (s=2; s < n; s=s+2) {
            sum += s;
        } printf("Sum of the series: %d\n", sum);

return 0;
}