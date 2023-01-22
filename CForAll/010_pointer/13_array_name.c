#include <stdio.h>

int main() {
  int arr[3] = {1, 2, 3};
  int (*parr)[3] = &arr;
  /*
    &arr의 의미?
    arr은 int*로 암묵적 변환
    그렇다면 &arr = int **??
    ㄴㄴ!
    암묵적 변환은 주소값 연산자가 왔을 때에는 이뤄지지 않음

    arr이 크기가 3인 배열이기 때문에
    &arr을 보관할 포인터는 크기가 3인 배열을 가리키는 포인터가 되어야 함
  */

  printf("arr[1]: %d\n", arr[1]);
  printf("parr[1]: %d\n", (*parr)[1]);

  // 동일 값 출력!
  printf("arr: %p\n", arr);
  printf("parr: %p\n", parr);

  return 0;
}