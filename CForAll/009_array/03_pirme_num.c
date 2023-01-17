#include <stdio.h>

int main() {
  int guess = 5;  // 현재 소수인지 판별하는 수 5부터 시작
  int prime[1000];  // 소수 담는 배열

  int index = 1;  // 현재까지 찾은 소수개수 - 1, 아래에서 0, 1 인덱스 미리 초기화 해둠
  int i;
  int ok;  // 소수 판별하는 변수
  
  // 배열 0, 1 초기화
  prime[0] = 2;
  prime[1] = 3;

  for (;;) {
    ok = 0;
    for (i = 0; i<= index; i++) {
      if (guess % prime[i] != 0) {  // 판별하는 수와 이미 소수인 것 나눠서 나누어 떨어지지 않는다면 ok++;
        ok++;
      } else {
        break;  // 나누어 떨어지는 것이 있다면 소수가 아니므로 더 이상 보지 않고 멈춤
      }
    }
    if (ok == (index + 1)) {  // 현재까지 저장된 prime 배열에 대해 모두 통과 했으므로(나누어 떨어지지 않았으므로) 소수임!
      index++;
      prime[index] = guess;  // 소수 배열에 현재 판별 완료한 수 저장
      printf("소수: %d\n", prime[index]);
      if (index == 999) break;  // 1000개의 소수 모두 찾았다면 종료!
    }
    guess += 2;  // 짝수는 보지 않기로 했으므로 2씩 건너뛰기
  }

  return 0;
}