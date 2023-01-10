#include <stdio.h>

int main() {
  float ave_score;
  float math, english, science, programming;

  printf("수학 영어 과학 플밍 점수 입력해보셈: ");
  scanf(" %f %f %f %f", &math, &english, &science, &programming);

  ave_score = (math + english + science + programming) / 4;
  printf("평균 점수는 %f 임\n", ave_score);
  if (ave_score >= 90) {
    printf("좀 치네?\n");
  } else if (ave_score >= 60) {
    printf("holy 턱걸이;;\n");
  } else {
    printf("ㅋㅋㅋ총 맞았네\n");
  }

  return 0;
}