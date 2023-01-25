#include <stdio.h>

int pswap(int **pa, int **pb);

int main() {
  int a, b;
  int *pa, *pb;

  pa = &a;
  pb = &b;

  printf("pa가 가리키는 변수의 주소값: %p\n", pa);
  printf("pa의 주소값: %p\n\n", &pa);
  printf("pb가 가리키는 변수의 주소값: %p\n", pb);
  printf("pb의 주소값: %p\n\n", &pb);
  /*
  pa가 가리키는 변수의 주소값: 0x16ae52ff8
  pa의 주소값: 0x16ae52fe8

  pb가 가리키는 변수의 주소값: 0x16ae52ff4
  pb의 주소값: 0x16ae52fe0
  */
  
  printf("------호출------\n");
  pswap(&pa, &pb);
  printf("----호출 종료---\n");

  printf("pa가 가리키는 변수의 주소값: %p\n", pa);
  printf("pa의 주소값: %p\n\n", &pa);
  printf("pb가 가리키는 변수의 주소값: %p\n", pb);
  printf("pb의 주소값: %p\n\n", &pb);
  /*
    pa가 가리키는 변수의 주소값: 0x16ae52ff4
    pa의 주소값: 0x16ae52fe8

    pb가 가리키는 변수의 주소값: 0x16ae52ff8
    pb의 주소값: 0x16ae52fe0
  */

  return 0;
}

int pswap(int **ppa, int **ppb) {
  int *temp = *ppa;

  printf("ppa가 가리키는 변수의 주소값: %p\n", ppa);
  printf("ppb가 가리키는 변수의 주소값: %p\n", ppb);
  /*
    ppa가 가리키는 변수의 주소값: 0x16ae52fe8
    ppb가 가리키는 변수의 주소값: 0x16ae52fe0
  */
  *ppa = *ppb;
  *ppb = temp;

  return 0;
}