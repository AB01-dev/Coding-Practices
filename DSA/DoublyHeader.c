#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void insertAtBeg(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Warning: No memory allocated");
        return;
    }
    newNode->data = data;
    newNode->next = (*head)->next;
    (*head)->next = newNode;
    ((*head)->data)++;
}

struct Node* insertBefore(struct Node* head, int data, int bfr)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node* temp = head;
    if (temp->data == bfr)
    {
        newNode->next = temp;
        newNode->prev = NULL;
        temp->prev = newNode;
        temp = newNode;
        return temp;
    }
    while (temp->next->data != bfr) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = temp->next->prev = newNode;
    (head->data)++;
    return head;
}

struct Node* insertAfter(struct Node* head, int data, int after)
{
    struct Node* temp = head->next;
    while (temp->next != NULL) {
        if (temp->data == after)
            break;
        temp = temp->next;
    }
    // if (temp->next == NULL)
    // {
    //     return head;
    // }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = temp;
    newNode->next = temp->next;
    if (temp->next != NULL) 
    {
        temp->next->prev = newNode;
        return head;
    }
    temp->next = newNode;
    (head->data)++;
    return head;
}

struct Node *insertAtEnd(struct Node * head, int data)
{
    struct Node *temp = head->next;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = temp;
    temp->next = newNode;
    (head->data)++;
    return head;
}

void traverse(struct Node *head)
{
    printf("%d\n", head->data);
    struct Node *temp = head->next;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } printf("\n");
}

void delete (struct Node *head)
{
    if (head->next == NULL)
    {
        printf("Underflow Warning: Stack is empty\n");
        return;
    }

    int pos;
    printf("Enter the position to delete from: ");
    scanf("%d", &pos);
    if (pos > head->data || pos <= 1) {
        printf("Warning: Invalid position, list contains elements between 1 to %d\n", head->data);
        return;
    }

    (head->data)--;

    struct Node* temp = head->next;
    if (pos == 1) {
        printf("Element deleted is: %d\n", temp->data);
        head->next = temp->next;
        temp->next = NULL;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }
    struct Node* del = temp->next;
    printf("Element deleted is: %d\n", del->data);
    temp->next = del->next;
    del->next = NULL;
    free(del);
}

void traverseReversed(struct Node *head)
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    } printf("\n");
}

int main() {

    struct Node *linkedList = (struct Node *)malloc(sizeof(struct Node));
    linkedList->data = 0;
    linkedList->next = NULL;
    
    insertAtBeg(&linkedList, 1);
    traverse(linkedList);
    linkedList = insertAtEnd(linkedList, 4);
    traverse(linkedList);
    linkedList = insertAtEnd(linkedList, 5);
    traverse(linkedList);
    linkedList = insertAfter(linkedList, 2, 1);
    // linkedList = insertAfter(linkedList, 6, 5);
    linkedList = insertBefore(linkedList, 3, 4);
    traverse(linkedList);
    linkedList = insertBefore(linkedList, 0, 1);
    traverse(linkedList);
    delete(linkedList);
    traverseReversed(linkedList);

return 0;
}