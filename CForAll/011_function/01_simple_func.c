#include <stdio.h>

int print_hello() {
  printf("Hello!\n");

  return 0;
}

int main() {
  printf("함수를 불러보장: ");
  print_hello();

  printf("호출 어겐~ ");
  print_hello();

  return 0;
}