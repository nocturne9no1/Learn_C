#include <stdio.h>

int main() {
  int i;

  for (i = 0; i < 100; i++) {
    if (i % 2 == 0) continue;

    printf("%d ", i);  // 홀수만 출력
  }

  return 0;
}