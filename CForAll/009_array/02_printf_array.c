#include <stdio.h>

int main() {
  int arr[10] = {2, 1, 3, 4, 5, 1, 11, 8, 100, 2999};
  int i;

  for (i = 0; i < 10; i++) {
    printf("배열의 %d 번째 원소: %d\n", i + 1, arr[i]);
  }

  return 0;
}