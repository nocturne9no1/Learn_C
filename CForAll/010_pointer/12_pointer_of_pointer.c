#include <stdio.h>

int main() {
  int a;
  int *pa;
  int **ppa;

  pa = &a;
  ppa = &pa;

  a = 3;

  printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
  // a : 3 // *pa : 3 // **ppa : 3 
  printf("&a : %p // pa : %p // ppa : %p \n", &a, pa, *ppa);
  // &a : 0x16fb4eff8 // pa : 0x16fb4eff8 // ppa : 0x16fb4eff8 
  printf("&pa : %p // ppa : %p \n", &pa, ppa);
  // &pa : 0x16fb4eff0 // ppa : 0x16fb4eff0 
  return 0;
}