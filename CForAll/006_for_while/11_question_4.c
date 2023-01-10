// 1000000 이하의 피보나치 수열의 짝수 항들의 합을 구하라
#include <stdio.h>

int main() {
  int a, b, c;
  int sum;

  sum = 0;
  a = 1;  // 피보나치의 N - 2항
  b = 1;  // 피보나치의 N - 1항
  c = 0;  // 피보나치의 N 항

  while (c <= 1000000) {
    c = a + b;
    printf("c: %d\n", c);
    if (c % 2 == 0) {
      sum = sum + c;
    }
    a = b;
    b = c;
  }

  printf("%d\n", sum);

  return 0;
}