#include "schemeval.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    SchemeVal *value = malloc(sizeof(SchemeVal));
    value->i = 3;
    printf("value is %i\n", value->i);

}
