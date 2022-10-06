#include <stdio.h>
#include "List.h"

int main() {
  List* l = list_new();


  list_append(l, 12);
  list_append(l, 13);
  list_append(l, 14);

  list_print(l);

  if(list_contains(l, 14))
    printf("It works!");





  return 0;
}
