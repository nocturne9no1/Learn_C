#include <stdio.h>

int main() {
  int a;
  double b;

  b = 2.4;
  a = b;  // warning C4244

  printf("%d\n", a);
  printf("%f\n", a);

  return 0;
}

/*
  int형 변수는 처음 정의되는 시점 부터 메모리 상에 오직 정수 데이터만 받아 들이도록 설계되어 있음
*/