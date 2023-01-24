#include <stdio.h>

int ret() {
  return 1000;
}

int main() {
  int a = ret();
  printf("ret function return value: %d", a);

  return 0;
}