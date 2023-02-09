#include <stdio.h>
int main() {
    
    float basic_sal;
    printf("Enter basic salary: ");
    scanf("%f", &basic_sal);
    float hra = basic_sal* (20/100);  
    float da  = basic_sal * (40/100);
    float gross_sal= basic_sal + hra + da;  
    printf("Gross Salary = %.2f", gross_sal);
    
return 0;
}