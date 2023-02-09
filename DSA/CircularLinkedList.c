#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  

void insertBeg()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOverflow Warning: List is full!\n");  
    }  
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }
    }  
              
}  
void insertEnd()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOver Waening: Lise is full!\n");  
    }  
    else  
    {  
        printf("Enter the value: ");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }
    }  
  
}  
  
void deleteBeg()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUnderflow Warning: List is empty!\n");    
    }  
    else if(head->next == head)  
    {  
        printf("Popped %d\n", head->data);  
        head = NULL;  
        free(head);  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        printf("Popped %d\n", head->data);   
        free(head);  
        head = ptr->next;  
  
    }  
}  
void deleteEnd()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUnderflow Warning: List is empty!\n");  
    }  
    else if (head ->next == head)  
    {  
        printf("Popped %d\n", head->data);  
        head = NULL;  
        free(head);  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        printf("Popped %d\n", ptr->data); 
        free(ptr);
    }  
}
  
void traverse()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nWarning: The list is empty!\n");  
    }     
    else  
    {      
        while(ptr->next != head)  
        {  
          
            printf("%d ", ptr -> data);  
            ptr = ptr -> next;  
        }   
        printf("%d\n", ptr -> data);  
    }            
}  

int main ()  
{  
    int choice = 0;  
    while(choice != 6)   
    {  

        printf("Menu\n1.Insert in begining\n2.Insert at end\n3.Delete from beginning\n4.Delete from end\n5.Traverse\n6.Exit\n");        
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {
                insertBeg();      
                break;
            }  
            case 2:  
            {
                insertEnd();         
                break;
            }  
            case 3:  
            {
                deleteBeg();       
                break;
            }  
            case 4:  
            {
                deleteEnd();        
                break;
            }  
            case 5:
            {
                traverse();
                break;
            }
            case 6:  
            {
                printf("Quiting...\n");
                break;
            }  
            default:  
            {
                printf("Please enter valid choice..");
            }  
        }  
    } printf("Out of loop!\n");

return 0;
}  