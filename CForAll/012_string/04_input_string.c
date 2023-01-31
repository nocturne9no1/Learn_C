#include <stdio.h>

int main() {
  char words[30];

  printf("30자 이내로 입력: ");  // 배열의 길이는 30이지만 NULL 자리를 위해 29까지만 가능
  scanf("%s", words);  // &통한 주소값 전달하지 않음 -> 배열 이름 자체가 배열을 가리키고 있는 포인터이기 때문

  printf("문자열: %s\n", words);

  return 0;
}

// 위와 같이 문자열을 입력 받을 수 있다.
// 하지만 띄어 쓰기를 한다면??
/*
  30자 이내로 입력: abc def
  문자열: abc
*/
// 오잉? abc 까지만 입력받는다...?