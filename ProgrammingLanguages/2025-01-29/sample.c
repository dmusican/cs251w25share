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

    y.d = 9;
    printf("The double was %g\n", y.d);
    printf("The int now is %g\n", y.i);
}
