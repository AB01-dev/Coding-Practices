# include <stdio.h>

int main() {

    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];

    printf("Enter the values for first array: \n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("Enter the integral value for %d,%d: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    } printf("Enter the values for second array : \n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("Enter the integral value for %d,%d: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            arr3[i][j]=0;
            for(int k=0;k<n;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ",arr3[i][j]);
            } printf("\n");
        }
return 0;
}
