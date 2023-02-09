#include <stdio.h>
#include <string.h>
 
int main() {

    char s[1000], c;  
    int i, count=0;
 
    printf("Enter a string: ");
    gets(s);
    printf("Enter any character to count its occurrence: ");
    c = getchar();
    
    for(i=0; s[i]; i++) {
    	if(s[i]==c)
          count++;
 	} printf("character '%c' occurs %d times\n",c,count);
 
return 0;
}