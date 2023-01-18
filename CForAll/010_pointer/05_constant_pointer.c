#include <stdio.h>

int main() {
  int a = 2;
  int b = 3;
  const int *pa = &a;

  // *pa = 3;  // not correct - error: read-only variable is not assignable
  printf("%d\n", *pa);

  pa = &b;

  printf("%d\n", *pa);
  return 0;
}