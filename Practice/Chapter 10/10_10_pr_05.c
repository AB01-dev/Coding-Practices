#include <stdio.h>

int main() {

    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("prev.txt", "r");
    ptr2 = fopen("new.txt", "w");

    int num;
    fscanf(ptr1, "%d", &num);
    printf("%d\n", num);
    fprintf(ptr2, "%d", num*2);

    fclose(ptr1);
    fclose(ptr2);

return 0;
}