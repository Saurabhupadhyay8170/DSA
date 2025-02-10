#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *createnewNode(int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode)
  {
    printf("Memory allocation failed\n");
    return NULL;
  }

  newNode->data = value;
  newNode->next = NULL;
  return newNode;
}

int main()
{
  struct Node *Head = createnewNode(10);
  Head->next = createnewNode(20);
  Head->next->next = createnewNode(30);
  Head->next->next->next = createnewNode(40);
  while (Head != NULL)
  {
    printf("Node created with value: %d\n", Head->data);
    printf("Node created at location: %d\n", Head->next);
    Head = Head->next;
  }
  return 0;
}
