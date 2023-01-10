#include <stdio.h>

int main() {
  int i;
  int subject, score;
  double sum_score = 0;

  printf("몇 개 과목을 입력할거임?: ");
  scanf("%d", &subject);

  printf("\n 각 과목의 점수를 입력해보셈\n");
  for (i = 1; i<= subject; i++) {
    printf("%d 번째 과목: ", i);
    scanf("%d", &score);
    sum_score = sum_score + score;
  }

  printf("전체 평균은...? %.2f!", sum_score / subject);
}