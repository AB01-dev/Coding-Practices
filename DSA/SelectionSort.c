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
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n");

return 0;
}