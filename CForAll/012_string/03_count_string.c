#include <stdio.h>

int str_length(char *str);

int main() {
  char str[] = {"What is your name?"};

  printf("이 문자열의 길이는: %d\n", str_length(str));

  return 0;
}

int str_length(char *str) {
  int i = 0;
  while (str[i]) {  // str[i]가 0이 되는 순간 -> 즉, NULL이 되는 순간
    i++;
  }

  return i;
}