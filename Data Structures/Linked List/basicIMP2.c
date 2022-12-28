#include<stdio.h>
#include<stdlib.h>

struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;

void main()
{
    head = NULL;
    int choice;

    while(choice)
    {
    newnode = (struct node*)malloc(sizeof(struct node));
    
    printf("Enter Data: ");
    scanf("%d",&newnode->data);

    newnode->next = NULL;
    if(head == NULL)
    {
    head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    
    printf("Do you want to continue(0/1): ");
    scanf("%d",&choice);
    }

    while(head != NULL)
    {
        printf("%d\t",head->data);
        head = head ->next;
    }

}
