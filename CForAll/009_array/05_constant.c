#include <stdio.h>

int main() {
  // 상수의 선언 방법
  // const (상우의 타입) (상수 이름) = (상수 값);
  const int a = 3;
  // 아래와 같이 하면 에러가 나온다는데 이상한 값 나옴;
  // const int a;

  // 변경하려 하면 에러 -> variable 'a' declared const here;
  // a += 3;

  printf("%d", a);

  return 0;
}

// 상수는 코딩 상의 실수를 잡아 줄 수 있다!