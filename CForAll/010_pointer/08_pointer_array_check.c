#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *parr;
  int i;
  parr = &arr[0];

  for (i=0; i<10; i++) {
    printf("arr[%d]의 주소값: %p\n", i, &arr[i]);
    printf("parr + %d의 값: %p\n", i, parr + i);

    if (&arr[i] == (parr + i)) {
      printf("일치!\n");
    } else {
      printf("불일치 ㅠㅠ \n");
    }
  }

  // 따라서 아래와 같이도 index대신 표현 가능!
  printf("arr[3] = %d, *(parr + 3) = %d\n", arr[3], *(parr + 3));

  return 0;
}