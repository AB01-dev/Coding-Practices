#include <stdio.h>

int swap(int a, int b);

int main() {
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    swap(x, y);

return 0;
}

int swap(int a, int b) {
    printf("a: %d, b: %d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("a: %d, b: %d\n", a,b);
    return 0;
}