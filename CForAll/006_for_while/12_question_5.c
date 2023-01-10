// 사용자로부터 N 값 입력 받아 1 ~ N 까지의 곱 구하기
#include <stdio.h>
int main() {
  int N;
  int total;
  int i;
  total = 1;

  printf("N: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    total = total * i;
  }

  printf("%d\n", total);

  return 0;
}