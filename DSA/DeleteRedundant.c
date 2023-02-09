#include <stdio.h>

int main() {

    int n; printf("Enter the size of the array: "); scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the value: "); scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                } n--; j--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } printf("\n");


return 0;
}