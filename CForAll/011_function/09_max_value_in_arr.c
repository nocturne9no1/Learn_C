#include <stdio.h>

int max_number(int *parr);

int main() {
  int arr[10] = {1, 3, 4, 5, 6, 1, 99, 101, 5};;
  int i;

  printf("배열 중 가장 큰 수: %d \n", max_number(arr));

  return 0;
}

int max_number(int *parr) {
  int i;
  int max = parr[0];

  for (i = 1; i < 10; i++) {
    if (parr[i] > max) {
      max = parr[i];
    }
  }

  return max;
}