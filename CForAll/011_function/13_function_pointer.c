#include <stdio.h>

int max(int a, int b);

int main() {
  int a, b;
  
  // 함수 포인터 정의
  // 리턴값과 인자의 개수와 타입을 명시
  // 함수 포인터로 가리키고자 할 때 반드시 해당 함수의 정의와 일치해야 함
  int (*pmax)(int, int);
  pmax = max;  // 함수 주소의 **시작값** 이기 때문에 `&` 붙지 않는다!

  scanf("%d %d", &a, &b);
  printf("max(a, b): %d \n", max(a, b));
  printf("pmax(a, b: %d \n", pmax(a, b));

  return 0;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }

  return 0;
}