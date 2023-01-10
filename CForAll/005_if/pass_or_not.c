#include <stdio.h>

int main() {
  int score;

  printf("당신의 수학 성적은??: ");
  scanf("%d", &score);

  // 주의사항: `=>` 는 안됨!
  if (score >= 90) {
    printf("합격입니다!\n");
  }

  if (score < 90) {
    printf("불합격이네용 ㅠㅠ\n");
  }

  return 0;
}