#include <stdio.h>

int main() {
  int n, i, j;
  printf("별 몇개까지 출력할겨?: ");
  scanf("%d", &n);
  for (i = n; i > 0; i--) {
    for (j = 0; j < i * 2 - 1; j++) {
      printf("*");
    }
    printf(" ");
  }

  printf("\n");

  return 0;
}