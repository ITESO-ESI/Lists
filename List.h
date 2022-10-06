//
// Created by Josean Camarena on 05/10/22.
//

#ifndef MI_APP_LIST_H
#define MI_APP_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct list List;

List *list_new();
List *list_append(List* l, int value_to_add);

void list_print(List *l);
int list_contains(List *l, int value_to_find);

#endif //MI_APP_LIST_H
