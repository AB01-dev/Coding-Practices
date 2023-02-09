#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *left;
    struct Node *right;
};

void insertLeft(struct Node **root, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    // scanf("%d", newNode->data);
    newNode->data = data;
    (*root)->left = newNode;
    newNode->left = NULL;
    newNode->right = NULL;

}

void insertRight(struct Node **root, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    // scanf("%d", newNode->data);
    newNode->data = data;
    (*root)->right = newNode;
    newNode->left = NULL;
    newNode->right = NULL;

}

void inorderTraversal(struct Node *root)
{
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

void traverse(struct Node *root)
{

}

int main() {

    struct Node *Root = (struct Node *) malloc(sizeof(struct Node));
    Root->data = 5, Root->left = NULL, Root->right = NULL;
    insertLeft(&Root, 3);
    // insertRight(&Root, 2);
    // insertRight(&Root->left, 1);
    // insertLeft(&Root->right, 4);

    inorderTraversal(Root);

return 0;
}