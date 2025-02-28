// Demonstrate passing functions around via pointers

int main() {
  printf("%i\n", doit(add, 3, 5));
  printf("%i\n", doit(multiply, 3, 5));
}
