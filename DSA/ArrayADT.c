#include <stdio.h>
#include <stdlib.h>

struct array  
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct array *arr, int max, int used) 
{

    arr->total_size = max;
    arr->used_size = used;
    arr->ptr = (int *) malloc(max * sizeof(int));
}

void insert(struct array *arr)
{
    int n;
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("Enter: ");
        scanf("%d", &n);
        (arr->ptr)[i] = n;
    }
}

void display(struct array *arr)
{
    for (int i = 0; i < arr->used_size; i++)
    {
        printf("%d ", (arr->ptr)[i]);
    } printf("\n");
}

int main() {

    struct array myArray;
    createArray(&myArray, 100, 5);
    insert(&myArray);
    display(&myArray);

return 0;
}