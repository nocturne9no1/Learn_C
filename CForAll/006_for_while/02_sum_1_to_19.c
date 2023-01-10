#include <stdio.h>

int main() {
  int i, sum = 0;

  for (i = 0; i < 20; ++i) {
    sum += i;
  }

  printf("총 합: %d\n", sum);

  return 0;
}