#include <stdio.h>

int main() {

    int n, m, i, j, size, temp;

    printf("Enter the size of array 1 and array 2: ");
    scanf("%d %d", &n, &m);

    size = n + m;
    int arr[size];

    int arr1[n];
    printf("Enter the sorted elements: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
        arr[i] = arr1[i];
    }


    int arr2[m];
    printf("Enter the sorted elemnts: ");
    for (i = 0; i < m; i++) 
    {
        scanf("%d", &arr2[i]);
        arr[i+n] = arr2[i];
    }

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    } printf("\n");

return 0;
}
