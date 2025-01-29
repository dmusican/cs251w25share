#include <stdio.h>

// questionable strategy (but the right one)
// for handling multiple types with the same variable

union Thingydoo {
    int i;
    double d;
};

typedef    union Thingydoo     Thingydoo;

int main() {
    // int x = 3;
    // double x = 9.7;

    Thingydoo y.x = 3;
}
