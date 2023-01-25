#include <stdio.h>

// 배열을 인자로 받아보자
// 배열 인자로 받아 배열 각 원소 값 1 씩 증가시키는 함수 만들어보자

// 특정한 타입의 값을 변경하는 함수를 제작하려면, 반드시 그 타입을 가리키는 포인터를 인자로 가져야 한다.
int add_number(int *parr);

int main() {
  int arr[3];
  int i;
  for (i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }

  // arr은 배열의 시작 주소 값을 가지고 있음 -> arr = &arr[0]
  add_number(arr);

  printf("배열 각 원소: %d %d %d\n", arr[0], arr[1], arr[2]);
}

int add_number(int *parr) {
  int i;
  for (i = 0; i < 3; i++) {
    parr[i]++;
  }
  return 0;
}