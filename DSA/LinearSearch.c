#include <stdio.h>

int main() {

    int n, i = 0;
    printf("Enter the size of the array: "); scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter value of element at %d position: ", i+1);
        scanf("%d", &arr[i]);
    }
    int val;
    printf("Enter the element to search for: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++) {
        if (arr[i] == val) {
            printf("%d found at position %d\n", val, i+1);
            break;
        }
    } if (i == n)
        printf("Not Found\n");

return 0;
}