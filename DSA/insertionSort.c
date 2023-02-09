#include <stdio.h>
#include <limits.h>

int main() {

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter value of element at %d position: ", i+1);
        scanf("%d", &arr[i]);
    }
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

return 0;
}
