#include <stdio.h>

int main() {
  int a;
  int height, weight;

  printf("숫자 눌러바바 \n");
  scanf("%d", &a);

  if (a >= 10 && a < 20) {
    printf("%d는 10이상 20미만의 수에용\n", a);
  }

  printf("키 몸무게 몇임?: ");
  scanf("%d %d", &height, &weight);
  if (height >= 190 || weight >= 100) {
    printf("와! 크다!\n");
  }

  return 0;
}