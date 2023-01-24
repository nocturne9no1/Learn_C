#include <stdio.h>

// 배열을 인자로 받아보자
// 배열 인자로 받아 배열 각 원소 값 1 씩 증가시키는 함수 만들어보자

int add_number(int *parr);

int main() {
  int arr[3];
  int i;
  for (i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }

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