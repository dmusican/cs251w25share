#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void doit() {
  int *x = malloc(sizeof(int));
  *x = 12;
  // do lots of stuff
  free(x);
  // return answer

}

int main() {
  while (true) {
    doit();
  }
}
