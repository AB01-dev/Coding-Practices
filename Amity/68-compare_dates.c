# include<stdio.h>
# include<string.h>

int main(){
    char str1[100];
    char str2[100];
    printf("Enter 1st date: ");
    gets(str1);
    fflush(stdin);
    printf("Enter 2nd date: ");
    gets(str2);
    int value=strcmp(str1,str2);
    if(value==0){
        printf("Entered dates are similar.\n");
    }
    else{
        printf("Entered dates are not similar.\n");
    }
    return 0;
}
