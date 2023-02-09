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

struct Node* deleteNode(struct Node* root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL)
        {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct Node* temp = root->left;
            free(root);
            return temp;
        } struct Node* current = root->right;
        while (current && current->left != NULL)
            current = current->left;
        struct Node* temp = current;
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    } return root;
}

int main() 
{
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    printf("\n");
    
    deleteNode(root, 20);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    printf("\n");

    deleteNode(root, 30);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    printf("\n");

    deleteNode(root, 50);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    printf("\n");

return 0;
}