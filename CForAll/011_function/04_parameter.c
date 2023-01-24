#include <stdio.h>

int slave(int master_money) {
  master_money += 10000;

  return master_money;
}

int main() {
  int my_money = 100000;

  printf("함수 리턴 재산: $%d \n", slave(my_money));
  printf("재산: $%d", my_money);

  return 0;
}