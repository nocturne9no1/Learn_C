// 1000 이하의 3 또는 5의 배수인 자연수들의 합
#include <stdio.h>

int main() {
  int i;
  int sum;

  sum = 0;

  for (i = 1; i <= 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum = sum + i;
    }
  }

  printf("%d\n", sum);

  return 0;
}