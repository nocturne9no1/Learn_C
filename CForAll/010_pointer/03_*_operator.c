#include <stdio.h>

// int main() {
//   int *p;
//   int a;

//   p = &a;
//   a = 2;

//   printf("a의 값: %d\n", a);
//   printf("p의 값: %d\n", *p);

//   return 0;
// }

int main() {
  int *p;
  int a;

  p = &a;
  *p = 3;

  printf("a의 값: %d\n", a);
  printf("p의 값: %d\n", *p);

  return 0;
}

/*
  포인터 변수에 타입이 들어가는 이유?
  포인터에 저장되어있는 주소값은 '시작 주소'이다.
  따라서 변수를 호출했을 때 시작 주소로부터 얼마나 메모리를 읽어야할 지 알 수 있는 방법이 있어야 한다.
  따라서 포인터 변수도 타입이 있어야 한다.
  예를 들어 위의 포인터 변수 타입은 int 이다.
  int는 메모리 상에 4바이트의 길이로 저장되어 있음을 알 수 있다.
*/