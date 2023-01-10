#include <stdio.h>

int main() {
  int a, b, c;
  int count;

  count = 0;

  for (a = 1; a <= 2000; a++) {
    for (b = 1; b < a; b++) {
      for (c = 1; c < b; c++) {
        if (a + b + c) {
          count++;
        }
      }
    }
  }

  printf("%d\n", count);

  return 0;
}