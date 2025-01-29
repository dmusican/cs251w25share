#include <stdio.h>

// questionable strategy (but the right one)
// for handling multiple types with the same variable

union Thingydoo {
    int x;
    double x;
};

typedef    union Thingydoo     Thingydoo;

int main() {
    // int x = 3;
    // double x = 9.7;

    Thingdoo y.x = 3;
}
