// Linked list implementation in C

#include <stdio.h>
#include <stdlib.h>

// Creating a node
struct node
{
  int data;
  struct node *next;
};

// print the linked list data
void printLinkedlist(struct node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main()
{
    // Initialize nodes
    struct node *head, *one, *two, *three;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign value values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value
    head = one;
    printLinkedlist(head);
}