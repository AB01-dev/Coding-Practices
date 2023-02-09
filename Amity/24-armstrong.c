#include <stdio.h>

int main(){
    int num,r, check, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(check=num; num!=0; num=num/10) {
         r=num % 10;
         sum=sum+(r*r*r);
    } if(sum == check)
         printf("%d is an Armstrong number\n", check);
    else
         printf("%d is not an Armstrong number\n", check);

return 0;
}