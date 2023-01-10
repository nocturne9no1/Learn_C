#include <stdio.h>

int main() {
  int num;

  printf("숫자 입력해보셈: ");
  scanf("%d", &num);

  if (num == 7) {
    printf("lucky 7!\n");
  } else {
    printf("보통 숫자인 %d를 입력했군용\n", num);
  }

  return 0;
}