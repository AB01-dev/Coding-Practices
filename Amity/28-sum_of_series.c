#include <stdio.h>

int main() {

    int n;
    float x, a = 1, sum = 1;
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("1 ");
    for (int i = 2; i < n; i++) {
        x = i;
        if (i % 2 == 0 || i == 2) {
            a = -1/x;
            printf("- 1/%d ", i);
        } else {
            a = 1/x;
            printf("+ 1/%d ", i);
        }
        sum += a;
    }
    printf(" = %.2f", sum);
    printf("\n");

 return 0;
 }