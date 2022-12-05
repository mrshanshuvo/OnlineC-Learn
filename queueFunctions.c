#include <stdio.h>
#include<stdlib.h>
#define MAX 50

//functions declaration
void insert();
void delete();
void display();

//global variable declaration
int queue[MAX];
int rear = - 1;
int front = - 1;

int main()
{
    int choice;
    while (4)
    {
        printf("1.Insert \n");
        printf("2.Delete \n");
        printf("3.Display \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: printf("\n**END OF THE QUEUE**\n"); exit(4);
            break;
            default:
            printf("** Wrong choice **\n");
        }
    }
}

void insert()
{
    int add;
    if (rear == MAX - 1)
    printf(" ** QUEUE IS OVERFLOW ** \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset AN ELEMENT IN THE QUEUE : ");
        scanf("%d", &add);
        rear = rear + 1;
        queue[rear] = add;
    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("** QUEUE IS UNDERFLOW ** \n");
        return ;
    }
    else
    {
        printf("DELETED ELEMENT OF THE QUEUE : %d\n", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("** QUEUE IS EMPTY ** \n");
    else
    {
        printf(" QUEUE IS : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}
