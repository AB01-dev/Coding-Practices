#include <stdio.h>

int main() {

    for (int i = 0; i <= 5; i++) {
        for (int z = 0; z <= 5-i; z++) {
            printf("\t");
        } int k=5;
        for (int j = 1; j <= i; j++) {
            printf("%d\t", k);
            k--;
            } int m = k+2;
        for (int l = 0; l <i-1; l++) {
            printf("%d\t", m);
            m++;
        } printf("\n");
    }

return 0;
}