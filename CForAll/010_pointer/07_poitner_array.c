#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;

  for (i=0; i < 10; i++) {
    printf("arr[%d]의 주소값: %p\n", i, &arr[i]);
    /*
      arr[0]의 주소값: 0x16b9befd0
      arr[1]의 주소값: 0x16b9befd4
      arr[2]의 주소값: 0x16b9befd8
      arr[3]의 주소값: 0x16b9befdc
      arr[4]의 주소값: 0x16b9befe0
      arr[5]의 주소값: 0x16b9befe4
      arr[6]의 주소값: 0x16b9befe8
      arr[7]의 주소값: 0x16b9befec
      arr[8]의 주소값: 0x16b9beff0
      arr[9]의 주소값: 0x16b9beff4

      4씩 늘어난다...!
    */
  }

  return 0;
}