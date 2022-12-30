#include<stdio.h>

#define INIT_DEPOSIT   100
#define RATE_INTEREST 0.08
#define WITHDRAWAL      10

int main(void)
{
  int years = 0;
  double money = INIT_DEPOSIT;

  while(money > 0)
  {
    money += money * RATE_INTEREST - WITHDRAWAL;
    ++years;
  }
  printf("There was no money after %d years.\n", years);

  return 0;
}