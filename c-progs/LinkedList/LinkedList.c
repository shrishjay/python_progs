#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* next;
};

void print(struct node* Node)
{
  while(Node != NULL)
  {
    printf("%d", Node -> data);
    Node = Node -> next;
  }
}
void main()
{
  struct node* head;
  struct node* second;
  struct node* third;

  head = (struct node*)malloc(sizeof(struct node));
  second = (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));

  head -> data = 3;
  head -> next = second;

  second -> data = 11;
  second -> next = third;

  third -> data = 20;
  third -> next =NULL;

  print(head);
}void print(struct node* Node)
{
  while(Node != NULL)
  {
    printf("%d", Node -> data);
    Node = Node -> next;
  }
}

