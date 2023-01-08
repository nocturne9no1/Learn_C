#include <stdio.h>

int main() {
  double celsius;  // 섭씨 온도

  printf("섭씨 온도를 화씨로 바꿔줍니다.\n");
  printf("섭시 온도 입력해바라: ");
  scanf("%lf", &celsius);  // 입력 받기

  printf("섭씨%f 도는 화씨로 %f 도 입니다.\n", celsius, 9 * celsius / 5 + 32);

  return 0;
}