#include <stdio.h>

int main() {
  int a;
  double b;

  b = 2.4;
  a = (int) b;

  printf("%d\n", a);

  return 0;
}

// how to cast type
// (type) variable name
// b 자체가 바뀌는 것이 아님