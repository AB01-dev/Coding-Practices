#include <stdio.h>

int main(){

    int s[10]={1, 5, 7, 8, 9, 10, 12, 19, 24, 25};

    FILE *ptr1;
    ptr1 = fopen("Ten.txt","w");
    for(int i=0; i<10; i++) {
        fprintf(ptr1,"%d ",s[i]);
    } fclose(ptr1);

    FILE *ptr2, *ptr3;
    ptr2=fopen("Ten-Odd.txt","w");
    ptr3=fopen("Ten-Even.txt","w");
    for(int j=0; j<10; j++){
        if(s[j]%2 == 0)
            fprintf(ptr3,"%d ",s[j]);
        else
            fprintf(ptr2,"%d ",s[j]);
    } fclose(ptr2);     fclose(ptr3);

return 0;
} 
