#include <stdio.h>

int main() {
  int i = 1, sum = 0;

  do {
    sum += i;
    i++;
  } while (i < 1);

  printf("sum: %d\n", sum);

  return 0;
}

/*
  while과의 차이점
  * while 문은 명령을 실행하기 전에 조건식이 참 인지 검사
  * 따라서 조건식이 참이 아니라면 while 문 내 실행 명령은 실행되지 않음
  * do-while 문은 우선 명령을 실행 한 뒤에 조건식 검사
  * 따라서 처음부터 조건식이 참이 아니라도 명령을 먼저 실행한 다음 조건식을 검사하기에 **최소 한번**은 실행하게 돼있음
*/