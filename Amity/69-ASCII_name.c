# include<stdio.h>

int main() {

    char n1[25];   
    printf("Enter your name: ");
    scanf("%[^\n]s",n1);
    
    char *ptr=n1;
    while((*ptr)!='\0'){
        printf("%d ",*ptr);
        ptr++;
    } printf("\n");
    
return 0;
}
