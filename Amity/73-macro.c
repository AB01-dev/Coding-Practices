#include <stdio.h>
#include "SIHeader.h"

int main(){
    float p,r,t;
    printf("Enter the principal: ");
	scanf("%f", &p);
    printf("Enter the rate of interest: ");
	scanf("%f", &r);
    printf("Enter the time in year: ");
	scanf("%f", &t);

	//float si = 
	printf("Simple Interest: %.2f\n", SI(p, r, t));
    
    return 0;
}
