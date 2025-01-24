#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// We are looking at how to catch these bugs
void doit() {
  int *x = malloc(sizeof(int));
  *x = 12;
  // do lots of stuff
  // free(x);
  // return answer

}

int main() {
    doit();
}
