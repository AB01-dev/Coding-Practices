#include <stdio.h>
#include <math.h>

int main() {

   int a,b,c,d;
   float x1,x2;
 
   printf("Enter the value of first variable: ");
   scanf("%d", &a);
   printf("Enter the value of second variable: ");
   scanf("%d", &b);
   printf("Enter the value of third variable: ");
   scanf("%d", &c);

   d = b*b - 4*a*c;
   if(d == 0) {
     printf("Both roots are equal.\n");
     x1 =- b / (2.0*a);
     x2 = x1;
     printf("First root = %.2f\n",x1);
     printf("Second root = %.2f\n",x2);
   } else if(d > 0) {
	   printf("Both roots are real and different\n");
	   x1 = (-b + sqrt(d)) / (2*a);
	   x2 = (-b - sqrt(d)) / (2*a);
	   printf("First  root = %.2f\n",x1);
	   printf("Second root = %.2f\n",x2);
	} else {
	    printf("Root are iamginary;\nNo Solution. \n");
    }

return 0;
}