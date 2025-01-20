#include <stdio.h>
#include <stdlib.h>

int main() {
  // 3 is in the stack
  int x = 3;
  printf("%i\n", x);

  // allocate memory in the heap big enough
  // to hold an int
  //intptr y = malloc(sizeof(int));
  int *y = malloc(sizeof(int));

  // Put a 7 in the heap location we point to
  *y = 7;
  // ^^^ Follow the pointer in y to the memory
  // location, and put a 7 in it
}
