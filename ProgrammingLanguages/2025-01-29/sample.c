#include <stdio.h>

// questionable strategy (but the right one)
// for handling multiple types with the same variable

// i and d share the same memory
union Thingydoo {
    int i;
    double d;
};

typedef    union Thingydoo     Thingydoo;

int main() {
    // int x = 3;
    // double x = 9.7;

    Thingydoo y;
    y.i= 3;

    printf("The int was %i\n", y.i);

    y.d = 9999999.99999999;
    printf("The double was %10.20f\n", y.d);
    printf("The int now is %i\n", y.i);
}
