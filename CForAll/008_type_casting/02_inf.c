#include <stdio.h>

// 부호 비트 덕분에 IEEE 754 방식으로 음/양 무한대 표현 가능
// 무한대는 연산 과정에서 표현할 수 있는 가장 큰 수 보다 더 큰 값이 들어간다면 자동으로 발생칟
int main() {
  float a = 1. / 0.f;
  printf("a: %f\n", a);

  return 0;
}