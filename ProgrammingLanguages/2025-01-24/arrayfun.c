#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Make an array
  int a[3];
  for (int i=0; i < 3; i++) {
    a[i] = i;
  }
  for (int i=0; i < 3; i++) {
    printf("a[%i] = %i\n", i, a[i]);
  }

  // Copy the array
  int b[3];
  memcpy(b, a, sizeof(int)*3);

  // Prove it is a copy
  a[1] = 7;
  for (int i=0; i < 3; i++) {
    printf("a[%i] = %i\n", i, a[i]);
    printf("b[%i] = %i\n", i, b[i]);
  }

  // Allocate an array in heap instead
  // Variables representing arrays
  // and pointers are interchangeable
  int *c = malloc(sizeof(int)*3);
  c[0] = 8; // same thing as *c = 8
  c[1] = 9;
  c[2] = 10;
  for (int i=0; i < 3; i++) {
    printf("c[%i] = %i\n", i, c[i]);
  }

  // Does this copy the array or not?
  int *d = c;







  
}
