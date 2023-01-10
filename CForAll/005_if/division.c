// #include <stdio.h>
// int main() {
//   double i, j;
//   printf("나누고 싶은 두 정수를 입력하세요: ");
//   scanf("%lf %lf", &i, &j);

//   printf("%f 를 %f 로 나눈 결과는: %f\n", i, j, i/j);

//   return 0;
// }

/*
  1과 0을 입력 했을 때 출력은 `inf`
  수학에서(컴퓨터에서) 어떠한 수를 0으로 나누는 것은 금지되어 있기 때문
  만약 int로 변수가 선언되었다면 에러를 내뿜고 종료
  그래서 분기 처리를 해보자
*/

#include <stdio.h>
int main() {
  double i, j;
  printf("나누고 싶은 두 정수를 입력하세요: ");
  scanf("%lf %lf", &i, &j);

  if (j == 0) {
    printf("0으로 나눌 수 없어용\n");

    return 0;
  }

  printf("%f 를 %f 로 나눈 결과는: %f\n", i, j, i/j);

  return 0;
}