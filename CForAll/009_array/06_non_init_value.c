#include <stdio.h>

// int main() {
//   int arr;

//   printf("제 값은: %d\n", arr);

//   return 0;
// }

// int main() {
//   int arr[3];

//   arr[0] = 1;

//   printf("제 값은: %d\n", arr[1]);

//   return 0;
// }

// 위 두개는 에러가 난다 했는데 
// 제 값은: 37641376 | 69435164
// 과 같은 이상한 값이 나온다
// 내가 사용한 컴파일러 - gcc -> 이 차이인가? 컴파일러의 차이

int main() {
  int arr[3] = {1};

  printf("내 값: %d\n", arr[1]);

  return 0;
}

// 오 이건 책대로 0이라고 잘 나온다.
// 0 이 나오는 이유
/*
  컴파일러는 내부적으로
  int arr[3] = {1}; 이것을
  int arr[3] = {1, 0, 0}; 과 같이 생각함
  자동으로 초기화되지 않은 원소들에게는 0이 부여됨
  그럼 JS에서는 되는 아래와 같은 코드를 실행해보자
*/

// int main() {
//   int arr[5] = {1, ,0};
//   printf("%d", arr);
// }

// 이건 아예
/*
06_non_init_value.c:44:20: error: expected expression
  int arr[5] = {1, ,0};
                   ^
06_non_init_value.c:45:16: warning: format specifies type 'int' but the argument has type 'int *' [-Wformat]
  printf("%d", arr);
          ~~   ^~~
*/
// 난리가 나는군
// JS에서는 아무것도 있지 않은 배열 원소에 'empty'가 들어가는데 말이다.
