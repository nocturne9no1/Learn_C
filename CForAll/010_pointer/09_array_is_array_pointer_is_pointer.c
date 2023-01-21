#include <stdio.h>

int main() {
  int arr[6] = { 1, 2, 3, 4, 5, 6};
  int* parr = arr;

  printf("Sizeof(arr): %d\n", sizeof(arr));  // 24 -> 원소 6개 , 4 * 6
  printf("Sizeof(parr): %d\n", sizeof(parr));  // 그저 포인트의 크기를 알려줄 뿐, 64bit 콤퓨타 -> 8

  return 0;
}