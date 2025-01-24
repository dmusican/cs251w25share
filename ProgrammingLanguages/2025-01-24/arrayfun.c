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
  for (int i=0; i < 3; i++) {
    printf("b[%i] = %i\n", i, b[i]);
  }
}
