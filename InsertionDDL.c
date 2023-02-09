#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *insertAtBeg(struct Node * head)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    newNode->data = data;
    newNode->next = head; 
    newNode->prev=NULL;
    if (head != NULL){
        head->prev = newNode;
    }
    head = newNode;
    return head;
}

struct Node* insertBefore(struct Node* head)
{
    int data, bfr;
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter before: ");
    scanf("%d", &data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    while (temp->next->data != bfr) {
        temp = temp->next;
    }
    newNode->data = data;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = temp->next->prev = newNode;
    return head;
}

struct Node* insertAfter(struct Node* head)
{
    int data, bfr;
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter after: ");
    scanf("%d", &data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    while (temp->data != bfr) {
        temp = temp->next;
    }
    newNode->data = data;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = temp->next->prev = newNode;
    return head;
}

struct Node *insertAtEnd(struct Node * head)
{
    int data;
    printf("Enter data: ");
    scanf("%d", &data);
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = temp;
    temp->next = newNode;
    return head;
}

void traverse(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    } printf("\n");
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

    struct Node *linkedList = NULL;
    int choice = 0;
    while (choice != 7)
    {
        printf("Select Operation:\n1. Insert at Beginning \n2. Insert Before a Node\n3. Insert After a Node\n4. Insert at End\n5. Traverse\n6. Reversed Traversing\n7. Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                linkedList = insertAtBeg(linkedList);
                break;
            }
            case 2:
            {
                linkedList = insertBefore(linkedList);
                break;
            }
            case 3:
            {
                linkedList = insertAfter(linkedList);
                break;
            }
            case 4: 
            {
                linkedList = insertAtEnd(linkedList);
                break;
            }
            case 5:
            {
                traverse(linkedList);
                break;
            }
            case 6:
            {
                traverseReversed(linkedList);
                break;
            }
            case 7: 
            {
                printf("Quiting...\n");
                break;
            }
            default:
            {
                printf("Invalid Operation!\n");
                break;
            }
        } printf("\n");
    } printf("End of loop\n");

return 0;
}