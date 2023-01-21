#include <stdio.h>

int main() {
  int a;
  int b;
  int *p;

  p = &a;
  *p = 2;
  p = &b;
  *p = 4;

  printf("a: %d \n", a);
  printf("b: %d \n", b);

  return 0;
}

/*
  포인터 또한 변수이다.
  포인터에 들어간 주소값이 바뀔 수 있다는 의미이다.
*/