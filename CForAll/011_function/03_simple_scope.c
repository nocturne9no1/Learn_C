#include <stdio.h>

int magicbox() {
  i += 4;  // error: use of undeclared identifier 'i'
  return 0;
}

int main() {
  int i;
  printf("마술 상자에 집어넣을 값: %d", &i);

  magicbox();

  printf("마술 상자를 지나면??: %d", i);

  return 0;
}