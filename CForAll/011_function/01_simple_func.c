#include <stdio.h>

// 책에서 말하는 좋은 이름의 함수 - 함수가 무슨 작업을 처리하는지 명확히 하는 것
int print_hello() {
  printf("Hello!\n");

  return 0;
}

int main() {
  printf("함수를 불러보장: ");
  print_hello();

  printf("호출 어겐~ ");
  print_hello();

  return 0;
}