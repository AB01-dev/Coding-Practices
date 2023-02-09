#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    struct Node* next;
    int data;
    struct Node* prev;
};


void insertBeg(struct Node** head) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value to insert in the beginning: ");
    scanf("%d", &newNode->data);
    newNode->next = (*head);
    newNode->prev = NULL;

    if ((*head) != NULL)
        (*head)->prev = newNode;
    (*head) = newNode;
}

void insertAfter(struct Node* head, int value) 
{
    if (head == NULL) 
    {
        printf("The list is empty\n");
        return;
    } struct Node* temp = head->next;
    while (temp->data != value)
    {
        temp = temp->next;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d", &newNode->data);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;

    if (newNode->next != NULL)
        newNode->next->prev = newNode;
}

void insertEnd(struct Node** head) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value to insert it at the end: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
    return;
    } struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void traverse(struct Node* node) 
{
    while (node != NULL) {
    printf("%d ", node->data);
        node = node->next;
    } printf("\n");
}

int main() 
{
    struct Node* head = NULL;

    int choice = 0, value;

    while (choice != 6)
    {
        printf("Menu:\n1. Insert in Begining\n2. Insert After a Node\n3. Insert at End\n4. Traverse\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                insertBeg(&head);
                break;
            }
            case 2:
            {
                printf("Enter the value at node to insert after: ");
                scanf("%d", &value);
                insertAfter(head, value);
                break;
            }
            case 3:
            {
                insertEnd(&head);
                break;
            }
            case 4:
            {
                traverse(head);
                break;
            }
            case 5:
            {
                printf("Quiting...\n");
                break;
            }
            default:
            {
                printf("Invalid Operation!\n");
                break;
            }
        }
    } printf("Out of loop.\n");

return 0;
}