#include <stdio.h>

int strong_numbers(int start, int finish);

int main() {

    int fn, ln;
    printf("Enter the first number: ");
    scanf("%d", &fn);
    printf("Enter the second number: ");
    scanf("%d", &ln);
    strong_numbers(fn, ln);
    printf("\n");

return 0;
}

int strong_numbers(int start, int finish) {

    int fact, sum, num; 
    
    for(int k=start; k<=finish; k++) {
        num = k;
        sum = 0;  
        for(int j=k;j>0;j=j/10) {  
            fact = 1;  
            for(int i=1; i<=j % 10; i++) {
                fact = fact * i;  
            }
            sum = sum + fact;  
        }
        if(sum == num)  
            printf("%d  ", num); 
        }

return 0;
}