#include <stdio.h>

int main() {
  int total;
  printf("전체 학생수?: ");
  scanf("%d", &total);
  // 배열의 크기는 변수로 지정할 수 없다!
  // 향후 동적 할당이라는 방법으로 가능하긴 함
  // 컴파일러가 배열을 처리할 때 메모리 상에 공간을 잡아야 함
  // 이때 잡는 공간의 크기는 반드시 '상수'로 주어져야 함
  int arr[total];
  int i;
  for (i = 0; i < total; i++) {
    printf("%d 학생의 성적?: ", i + 1);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < total; i++) {
    printf("%d 학생의 성적: ", arr[i]);
  }

  return 0;
}