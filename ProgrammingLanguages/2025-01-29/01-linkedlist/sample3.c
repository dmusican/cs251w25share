#include "schemeval.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    SchemeVal *ending = malloc(sizeof(SchemeVal));
    // empty list
    ending->type = EMPTY_TYPE;

    // insert something in front
    SchemeVal *first = malloc(sizeof(SchemeVal));
    first->type = INT_TYPE;
    first->i = 3;

    SchemeVal *consCell = malloc(sizeof(SchemeVal));
    consCell->type = CONS_TYPE;
    consCell->car = first;
    consCell->cdr = ending;

  `
}
