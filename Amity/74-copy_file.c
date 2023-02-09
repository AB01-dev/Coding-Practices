# include<stdio.h>

int main() {
    
    FILE *ptr1;
    char s1[1000];
    ptr1 = fopen("og.txt","r");
    fscanf(ptr1,"%[^\n]s",s1);
    fclose;

    FILE *ptr2;
    ptr2=fopen("og_copied.txt","w");
    fprintf(ptr2,"%s",s1);
    fclose(ptr2);

return 0;
}