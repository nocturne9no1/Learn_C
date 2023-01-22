#include <stdio.h>

int main() {
  int arr[2][3];

  printf("arr[0]: %p\n", arr[0]);
  printf("arr[0][0]: %p\n", &arr[0][0]);

  printf("arr[1]: %p\n", arr[1]);
  printf("arr[1][1]: %p\n", &arr[1][0]);

  return 0;
}

/*
  arr[0]: 0x16aeaefe0
  arr[0][0]: 0x16aeaefe0
  arr[1]: 0x16aeaefec
  arr[1][1]: 0x16aeaefec
*/