#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int n1, n2;
    float m1, m2;
    scanf("%d %d", &n1, &n2);
    scanf("%f %f", &m1, &m2);
    
    printf("%d %d\n%.1f %.1f", n1+n2, n1-n2, m1+m2, m1-m2);
    
    return 0;
}