#include <stdio.h>
#include <math.h>

int isPrime(int number);
int isArmstrong(int number);
int isPerfect(int number);

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    if(isPrime(n))
        printf("%d is Prime number.\n", n);
    else
        printf("%d is not Prime number.\n", n);
    if(isArmstrong(n))
        printf("%d is Armstrong number.\n", n);
    else
        printf("%d is not Armstrong number.\n", n);
    if(isPerfect(n))
        printf("%d is Perfect number.\n", n);
    else
        printf("%d is not Perfect number.\n", n);
    
    return 0;
}

int isPrime(int number) {
    int i;
    for(i=2; i<=number/2; i++) {
        if(number%i == 0)
            return 0;
    }
    return 1; 
}

int isArmstrong(int number) {
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    originalNum = number;
    digits = (int) log10(number) + 1;
    while(number > 0) {
        lastDigit = number % 10;
        sum = sum + round(pow(lastDigit, digits));
        number = number / 10;
    }
    return (originalNum == sum);
}

int isPerfect(int number) {
    int i, sum, n;
    sum = 0;
    n = number;
    for(i=1; i<n; i++) {  
        if(n%i == 0)
            sum += i; 
    } 
    return (number == sum);
}