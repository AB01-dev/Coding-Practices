#include <stdio.h>
int main()  
{  
    int a, b, c; 

    printf("Enter the side a: ");  
    scanf("%d", &a);
    printf("Enter the side b: ");  
    scanf("%d", &b);
    printf("Enter the side c: ");  
    scanf("%d", &c);
  
    if(a == b && b == c){  
        printf("This is an equilateral triangle.\n");  
    }  else if(a == b || a == c || b == c){  
        printf("This is an isosceles triangle.\n");  
    }  else{
        printf("This is a scalene triangle.\n");  
    }  
  
return 0;  
} 