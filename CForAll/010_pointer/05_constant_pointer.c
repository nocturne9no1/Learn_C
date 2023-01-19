#include <stdio.h>

int main() {
  int a = 2;
  int b = 3;
  const int *pa = &a;  // a 에 저장된 값이 바뀌면 안되는 것!
  int* const pb = &b;  // pb 에 저장된 포인터 값(주소값)이 바뀌면 안되는 것!

  // *pa = 3;  // not correct - error: read-only variable is not assignable
  printf("%d\n", *pa);

  pa = &b;

  printf("%d\n", *pa);
  return 0;
}