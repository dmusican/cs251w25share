#include "schemeval.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    SchemeVal *value = malloc(sizeof(SchemeVal));
    value->type = INT_TYPE;
    value->i = 3;
    if (value->type == INT_TYPE) {
        printf("value is %i\n", value->i);
    } else if (value->type == DOUBLE_TYPE) {
        printf("value is %g\n", value->d);
    }

    value->car = value;
    value->cdr = value;

}
