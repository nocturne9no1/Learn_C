#include <stdio.h>

int main() {
  int input;

  printf("뭐 할겨?\n");
  printf("1. 냠냠\n");
  printf("2. 산책\n");
  printf("3. 취침\n");
  scanf("%d", &input);

  // switch 의 기준이 되는 것은 '정수'여야 함
  // 다만 콤퓨타는 문자도 숫자로 인식한다! (by like ASCII)
  switch (input) {
    case 1:  // '값'에 위치하는 것은 상수여야함!
      printf("꿀맛!\n");
      break;  // break 없으면 계속 실행됨
    case 2:
      printf("와! 산책!\n");
      break;
    case 3:
      printf("낼 봐용~\n");
      break;
    default:
      printf("뭔 말이여;;\n");
      break;
  }

  return 0;
}

/*
  switch! 도대체 왜 필요함?
  어셈블리어에 대한 이해가 필요함
  (미리보는 한 줄 요약: 성능 vs 메모리)
  if는 각 경우 마다 값들 비교 (어셈블리어에서의 CMP 연산을 세 번 실행하는 것)
  switch의 경우 내부적으로 `jump table` 생성
  이 `jump table`의 크기 case의 값들에 따라 달라짐
  case 1: ~ case 10: 까지 있다면 jump table에는 값들이 0부터 9까지 들어가게 됨 -> case 부분에 변수가 아닌 상수가 들어가야 하는 이유
  jump table의 값들의 의미: 각 case 별로 명령들이 위치한 곳의 주소
  (개인적 감상): 파이썬에서 length: 100 짜리의 배열을 순회하여 특정 값을 찾고 싶을 때 O(n)이 걸리는 반면 해쉬 테이블(Dict || Set)을 사용하면 O(1)이 걸리는 것과 비슷한 맥락인 것처럼 느껴진다
  따라서 switch 문을 이용하면 case에 따라 CMP 연산은 1로 고정! jump table의 크기만 커질 뿐 성능에 있어서는 전혀 영향 받지 않음
  switch 문이 효과적으로 처리 되려면 case 의 '값'들의 크기가 크지 않아야 함
  '값'들이 순차적으로 정렬되어 있고, 그 '값'끼리 차이가 크지 않다면 최고로 효율적인 switch 문을 이용 할 수 있음!
  ('값'끼리의 차이가 크지 않다는 것은 메모리 주소가 가까움을 의미하기 때문인가?)
*/