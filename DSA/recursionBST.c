#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    struct Node* left;
    int data;
    struct Node* right;
};

struct Node* newNode(int data)
{
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    temp->left = NULL;
    temp->data = data;
    temp->right = NULL;
    return temp;
}

struct Node* insertNode(struct Node* node, int data)
{
    if (node == NULL)
    {
        return newNode(data);
    }
    if (data < node->data)
        node->left = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);
    return node;
}

void preOrder(struct Node* root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct Node* root) 
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct Node* root) 
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main() 
{
    struct Node* root = NULL;
    root = insertNode(root, 8);
    insertNode(root, 10);
    insertNode(root, 14);
    insertNode(root, 13);
    insertNode(root, 3);
    insertNode(root, 6);
    insertNode(root, 7);
    insertNode(root, 4);
    insertNode(root, 1);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");

return 0;
}