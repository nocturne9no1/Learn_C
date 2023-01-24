#include <stdio.h>

// pi 라는 이름의 int 포인터 변수를 인자로 받고 있음
int change_val(int *pi) {
  printf("---- change_val 함수 안에서 ----\n");
  printf("pi 의 값: %p \n", pi);
  printf("pi 가 가리키는 것의 값: %d \n", *pi);

  // * 연산자를 통해 pi 가 가리키고 있는 변수의 값을 3으로 변경
  *pi = 3;

  printf("---- change_val 함수 종료 ---- \n");

  return 0;
}

int main() {
  int i = 0;

  printf("i 변수 주소값: %p \n", &i);
  printf("호출 이전 i 의 값: %d \n", i);
  // 호출 시 주소값을 인자로 전달
  change_val(&i);
  printf("호출 이후 i 의 값: %d \n", i);

  return 0;
}