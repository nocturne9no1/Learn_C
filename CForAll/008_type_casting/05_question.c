#include <stdio.h>

// 실수 **.ab***** 등이 입력으로 주어질 때 ab를 구하라
// ex) input: 12.3456 | output: 34

int main() {
  float f;
  int i;

  printf("실수 입력: ");
  scanf("%f", &f);

  i = (int)(f * 100) % 100; // 여기에 알맞는 수식 작성

  printf("i=%d\n", i);

  return 0;
}