#include <stdio.h>

int main() {
  int num;
  char c;

  printf("숫자 입력: ");
  scanf("%d", &num);

  fflush(stdin);

  printf("문자 입력: ");
  scanf("%c", &c);

  return 0;
}

/*
  %c를 사용할 일은 결국 생기기 마련
  그러면 그 때 마다 일일이 버퍼에 '\n' 남아있는 지 고려해야 할까?

  8번 줄 scanf 까지 실행 했을 때에는 이전처럼 stdin에 '\n'이 남아있다.
  그런데 다음줄에
  `fflush(stdin);`
  이 코드가 등장한다.
  코드의 의미는 stdin을 비워버리라는 뜻 -> 버퍼가 완전히 비어지게 된다.
  즉, 버퍼에 남아있던 '\n'이 사라짐!
  따라서 다음 scanf에서도 ''\n' 이 있네? 끝내야징' 안하고 입력을 받게 되는 것

  하지만 fflush 함수는 비표준이다!
  사용을 지양해야한다...
*/