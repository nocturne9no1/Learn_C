#include <stdio.h>

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  printf("a[3]: %d\n", arr[3]);
  printf("*(a+3): %d\n", *(arr+3));

  // 동일하게 4 나옴
  // 콤퓨타에서 [ ] 라는 연산자가 쓰이면 자동적으로 형태가 *()로 바뀌어 처리되는 것임
  // a[3] -> *(arr + 3)으로 바뀌는 것!
  // 아래와 같이도 가능

  printf("3[arr]: %d\n", 3[arr]);
  printf("*(3+a): %d\n", *(arr + 3));

  return 0;
}