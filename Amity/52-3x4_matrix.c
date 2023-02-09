#include <stdio.h>

int main() {

    int mat[10][10];
    int smallest, bigest;
    printf("\nEnter the elements of the matrix:\n");
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 4; j++)
    scanf("%d", &mat[i][j]);
    bigest = mat[0][0];
    smallest = mat[0][0];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(mat[i][j] < smallest)
            smallest = mat[i][j];
            if(mat[i][j] > bigest)
            bigest = mat[i][j];
        }
    }
    printf("\nThe smallest element in the matrix is: %d\n",smallest);
    printf("The biggest element in the matrix is: %d\n", bigest);

return 0;
}