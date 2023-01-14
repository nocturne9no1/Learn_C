#include <stdio.h>

int main() {
  int a, b;
  float c, d;

  printf("두 숫자 입력: ");
  scanf("%d %d", &a, &b);

  c = a / b;  // 정수 / 정수 -> 항상 '몫' 만 계산하게 됨
  d = (float)a / b;

  printf("두 수의 비율: %f %f", c, d);

  return 0;
}