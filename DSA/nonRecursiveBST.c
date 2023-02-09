#include<stdio.h>
#include<stdlib.h>

struct Node
{
struct Node* left;
int data;
struct Node* right;
};

struct Stack
{
struct Node *data;
struct Stack *next;
};

void push(struct Stack** top, struct Node *data);
struct Node *pop(struct Stack** top_ref);
int isEmpty(struct Stack *top);

void inOrder(struct Node *root)
{
    struct Node *current = root;
    struct Stack *stack = NULL;
    int done = 0;
    while (!done)
    {
        if(current != NULL)
        {
        push(&stack, current);											
        current = current->left;
        }
        else															
        {
        if (!isEmpty(stack))
        {
            current = pop(&stack);
            printf("%d ", current->data);
            current = current->right;
        }
        else
            done = 1;
        }
    }
}	

void push(struct Stack** top, struct Node *data)
{
    struct Stack* new_Node = (struct Stack *) malloc(sizeof(struct Stack));

    if(new_Node == NULL)
    {
        printf("Stack Overflow \n");
        getchar();
        exit(0);
    }			

    new_Node->data = data;
    new_Node->next = (*top);
    (*top) = new_Node;
}


int isEmpty(struct Stack *top)
{
    return (top == NULL)? 1 : 0;
}

struct Node *pop(struct Stack** top_ref)
{
    struct Node *res;
    struct Stack *top;

    if(isEmpty(*top_ref))
    {
        printf("Stack Underflow \n");
        exit(0);
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

struct Node* newNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
return(newNode);
}

int main()
{
    struct Node *root = newNode(1);
    root->left	 = newNode(2);
    root->right	 = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

inOrder(root);

return 0;
}
