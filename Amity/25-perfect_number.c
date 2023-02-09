#include <stdio.h>

int  main() {

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    int temp = n, sum = 0;
    for (int i=1;i<n;i++) {
        if(n%i==0) {
            sum=sum+i;
            }
        }
    if(sum == n)
        printf("%d is a perfect number\n", temp);
    else
        printf("%d is not a perfect number\n", temp);
    printf("\n");

return 0;
}