#include <stdio.h>

int main() {
  // 아래 3개의 값은 동일
  char null_1 = '\0';
  char null_2 = 0;
  char null_3 = (char)NULL;

  char not_null = '0';

  printf("NULL의 아스키 값: %d %d %d \n", null_1, null_2, null_3);
  printf("'0'의 아스키 값: %d\n", not_null);

  // 문자열의 시작
  char sentence_1[4] = {'P', 's', 'i', '\0'};
  char sentence_2[4] = {'P', 's', 'i', 0};
  char sentence_3[4] = {'P', 's', 'i', (char)NULL};

  char sentence_4[4] = {"Psi"};  // NULL 종료 문자열을 위해 공간 하나 더 추가!

  // %s: 문자'열' 출력 / %c: 문자 출력
  printf("sentence_1 : %s \n", sentence_1);
  printf("sentence_2 : %s \n", sentence_2);
  printf("sentence_3 : %s \n", sentence_3);
  printf("sentence_4 : %s \n", sentence_4);

  /*
    "" vs ''
    "": 문자열(한 개 이상 문자)를 지정할 때 사용
    '': 한 개의 문자를 지정할 때 사용
  */

  return 0;
}

/*
  NULL의 아스키 값: 0 0 0 
  '0'의 아스키 값: 48

  sentence_1 : Psi 
  sentence_2 : Psi 
  sentence_3 : Psi 
  sentence_4 : Psi 
*/