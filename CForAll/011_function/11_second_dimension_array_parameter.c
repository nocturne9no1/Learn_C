#include <stdio.h>

// 2차원 배열의 각 원소를 1씩 더하는 함수를 만들어보자

// 인자
// (*arr)[2] -> 열의 개수가 2개인 이차원 배열을 가리키는 포인터
// row -> 함수의 행 수
// 인자들 통해 함수 행 열 개수 다 알고 있음
int add1_element(int (*arr)[2], int row);
// int add1_element(int arr[][2], int row); -> 함수의 경우만 인자를 다음과 같이도 표현 가능


int main() {
  int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int i, j;

  add1_element(arr, 3);

  for (i = 0; i < 3; i++) {
    for (j = 0; j< 2; j++) {
      printf("arr[%d][%d] : %d \n", i, j, arr[i][j]);
    }
  }

  return 0;
}

int add1_element(int (*arr)[2], int row) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < 2; j++) {
      arr[i][j]++;
    }
  }

  return 0;
}