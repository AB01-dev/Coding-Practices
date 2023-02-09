#include <stdio.h>
#include <math.h>

int main() {

    FILE *ptr1;
    int s[10]={1, 5, 7, 8, 9, 10, 12, 19, 24, 25};
    ptr1=fopen("TenInt.txt","w");
    for(int i=0;i<10;i++){
        fprintf(ptr1,"%d ",s[i]);
    } fclose(ptr1);

    FILE *ptr2;
    ptr2=fopen("TenIntSqaure.txt","w");
    for(int j=0;j<10;j++){
        int t=pow(s[j],2);
        fprintf(ptr2,"%d ",t);
    } fclose(ptr2);

return 0;
} 
