#include <stdio.h>
int main()  
{  
    int arr[100];
    int num, n, sum = 0, temp;  
    float avg;  

    int max = arr[0];
    int min = arr[0];
  
    printf("Enter the size: ");  
    scanf("%d", &n);  
  
  
    printf("Enter the elements:\n");  
    for (int i = 1; i <= n; i++) {
        scanf("%d",&arr[i]);
        sum += arr[i];
    } avg = sum / (float)n;
    printf("Sum = %d\n", sum);  
    printf("Average = %.2f\n", avg); 

    min=max=arr[1];
    for(int j=1; j<=n; j++) {
        if(min>arr[j])
		    min=arr[j];   
		if(max<arr[j])
		    max=arr[j];       
    }
    printf("minimum of array is: %d\n",min);
    printf("maximum of array is: %d\n",max);

printf("\n");
return 0;  
}  