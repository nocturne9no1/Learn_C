#include <stdio.h>

int main() {
  int a;
  int* pa;
  pa = &a;

  printf("pa의 값: %p \n", pa);
  printf("(pa+1)의 값: %p \n", pa + 1);
  // 출력된 두 수의 합은 4!
  // int는 4바이트임
  // 다른 변수들도 알아보자

  char b;
  double c;
  char *pb = &b;
  double *pc = &c;

  printf("pb의 값: %p \n", pb);  // 0x16afbefef
  printf("pb + 1의 값: %p \n", pb + 1);  // 0x16afbeff0 -> 1 더해짐!
  printf("pc의 값: %p \n", pc);  // 0x16afbefe0
  printf("pc + 1의 값: %p \n", pc + 1);  // 0x16afbefe8 -> 8 더해짐!
  printf("pc + 1의 값: %p \n", pc - 1);  // 8 빠짐!

  // pc + pb; -> error C2110;
  // 포인터끼리의 덧셈은 허용되지 않음, 아무런 의미도 없다


  return 0;
}