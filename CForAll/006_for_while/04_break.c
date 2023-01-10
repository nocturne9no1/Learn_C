#include <stdio.h>

int main () {
  int useranswer;

  printf("???: 내가 생각한 숫자를 맞춰봐라 인간 - ");

  for (;;) {  // 항상 '참'이라 인식
    scanf("%d", &useranswer);
    if (useranswer == 3) {
      printf("잘했다 인간\n");
      break;
    } else {
      printf("틀렸다 인간\n");
    }
  }

  return 0;
}