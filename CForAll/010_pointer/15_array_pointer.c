#include <stdio.h>

int main() {
  int arr[2][3] = {{1,2,3}, {4,5,6}};
  // (array type) (*pointer_name)[col count];
  int (*parr)[3];  // 괄호 꼭 붙이기!

  parr = arr;  // parr이 arr을 가리키게 함

  printf("parr[1][2]: %d, arr[1][2]: %d\n", parr[1][2], arr[1][2]);
}