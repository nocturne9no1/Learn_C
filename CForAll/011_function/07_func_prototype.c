#include <stdio.h>

int swap(int *a, int *b);  // 함수의 원형(prototype)
/*
  사실 함수의 정의부를 한 번 더 써준 것 뿐
  주의할 점은 함수의 원형에는 정의와 달리 뒤에 세미콜론`;`을 붙인다는 것

  이런거 왜 씀?

  main() 함수를 젤 위에 쓰고 밑에 함수 정의해서 호출해서 써도 상관 없음 컴파일러에서 경고를 하긴 하지만...
  대신 함수 호출 시 인자에 대한 휴먼 에러(인자 수가 적거나, 인자의 타입이 올바르지 않은 경우)를 잡아 줄 수 있다. 컴파일 시에!
  error / warning 통해 인자에 대한 에러를 알려줌

  따라서 함수의 원형을 집어넣는 일은 **반드시** 해야 하는 일

  물론 main 함수 위해 함수를 정의하면 상관 ㄴㄴ
  하지만 대부분의 프로그래머들은 함수를 main 함수의 뒤에 정의하고 원형을 앞에 추가하는 것 선호
*/

int main() {
  int i, j;

  i = 3;
  j = 5;

  printf("before swap - i: %d, j: %d\n", i, j);
  swap(&i, &j);
  printf("after swap - i: %d, j: %d\n", i, j);

  return 0;
}

int swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;

  return 0;
}