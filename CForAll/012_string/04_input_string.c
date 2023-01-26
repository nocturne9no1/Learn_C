#include <stdio.h>

int main() {
  char words[30];

  printf("30자 이내로 입력: ");
  scanf("%s", words);

  printf("문자열: %s\n", words);

  return 0;
}