#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

LinkedList *insertFrontLL(LinkedList *list, int item) {
    LinkedList *cell = malloc(sizeof(LinkedList));
    (*cell).value = item;
    // shorthand (I'm doing it twice, redundant)
    cell->value = item;
    (*cell).next = list;
    return cell;
}

int main() {
    LinkedList *list = NULL;
    list = insertFrontLL(list, 1);
    list = insertFrontLL(list, 2);
}
