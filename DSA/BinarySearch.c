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

    int val;
    scanf("%d", &val);

    int low = 0;
    int high = n;
    int mid = (high+low)/2;

    while (high != low)
    {
        if (val == arr[low])
        {
            printf("%d found at %d position", val, low);
            break;
        }
        else if (val == arr[mid])
        {
            printf("%d found at %d position", val, mid);
            break;
        }
        else if (val == arr[high]) 
        {
            printf("%d found at %d position", val, high);
            break;
        }
        else if (val < arr[mid])
        {
            high = mid;
            mid = (high+low)/2;
        }
        else if (val > arr[mid])
        {
            low = mid;
            mid = (low+high)/2;
        }
    }

return 0;
}