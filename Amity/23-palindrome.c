#include<stdio.h>  
int main() {

    int n, r;    
    printf("Enter any number: ");    
    scanf("%d",&n);

    int check = n, sum =0;    
    while(n>0) {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    } if(check==sum)
        printf("%d is a palindrome number\n", check);
    else    
        printf("%d is not a palindrome number\n", check); 
return 0;  
}   