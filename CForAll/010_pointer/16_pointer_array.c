#include <stdio.h>

int main() {
  int *arr[3];  // 각각의 원소를 int 포인터로 취급함
  int a = 1, b = 2, c = 3;
  arr[0] = &a;
  arr[1] = &b;
  arr[2] = &c;

  printf("a : %d, *arr[0]: %d \n", a, *arr[0]);
  printf("b : %d, *arr[1]: %d \n", b, *arr[1]);
  printf("c : %d, *arr[2]: %d \n", c, *arr[2]);

  printf("&a: %p, arr[0]: %p\n", &a, arr[0]);

  return 0;
}

/*
  a : 1, *arr[0]: 1 
  b : 2, *arr[1]: 2 
  c : 3, *arr[2]: 3 
  &a: 0x16f7bafd8, arr[0]: 0x16f7bafd8
*/