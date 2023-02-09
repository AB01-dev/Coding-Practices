#include <stdio.h>
int main()  
{  
    int arr[10];
    int num, n = 10, sum = 0, temp;  
    float avg;  

    int max = arr[0];
    int min = arr[0]; 
  
  
    printf("Enter the elements:\n");  
    for (int i = 1; i <= n; i++) {
        scanf("%d",&arr[i]);
    } 

    min=max=arr[1];
    for(int j=1; j<=n; j++) {
        if(min>arr[j])
		    min=j;   
		if(max<arr[j])
		    max=j;       
    }
    printf("minimum of array is: %d\n",min);
    printf("maximum of array is: %d\n",max);

printf("\n");
return 0;  
}  