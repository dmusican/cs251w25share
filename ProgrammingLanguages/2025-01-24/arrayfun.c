#include <stdio.h>

int main() {
  // Make an array
  int a[3];
  for (int i=0; i < 3; i++) {
    a[i] = i;
  }
  for (int i=0; i < 3; i++) {
    printf("a[%i] = %i\n", i, a[i]);
  }
}
