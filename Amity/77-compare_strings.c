#include <stdio.h>
#include <string.h>

int main() {

    char str1[100];
    char str2[100];
    printf("Enter first string: ");
    gets(str1);
    fflush(stdin);
    printf("Enter second string: ");
    gets(str2);

    int value=strcmp(str1,str2);
    if(value==0)
        printf("Entered strings are the same\n");
    else
        printf("Entered strings are different\n");

return 0;
}
