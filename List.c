//
// Created by Josean Camarena on 05/10/22.
//

#include "List.h"

typedef struct node
{
  int value;
  struct node *next;
}
Node;

struct list
{
  Node *head;
};

List* list_new()
{
  List *new = malloc(sizeof(List));
  new->head = NULL;
  return new;
}

Node* node_new(int value)
{
  Node *new = malloc(sizeof(Node));
  new->value = value;
  new->next = NULL;
  return new;
}

List* list_append(List *l, int value_to_add)
{
  if(l->head == NULL)
  {
    l->head = node_new(value_to_add);
    return l;
  }
  Node *current = l->head;
  while(current->next != NULL)
    current = current->next;

  current->next = node_new(value_to_add);
  return l;
}

void list_print(List *l)
{
  Node *current = l->head;

  while (current != NULL)
  {
    printf("[%d]-", current->value);
    current = current->next;
  }
  printf("NULL\n");
}

int list_contains(List *l, int value_to_find)
{
  Node *current = l->head;
  while(current != NULL) {
    if (current->value == value_to_find)
      return 1;
    current = current->next;
  }

  return 0;
}

