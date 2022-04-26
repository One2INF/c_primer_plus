#include<stdio.h>

#define INIT_AMT  100
#define RATE_STMP 0.10
#define RATE_COMP 0.05

int main(void)
{
  int years = 0;
  double investment_Daphne;
  double investment_Deidre;

  investment_Daphne = INIT_AMT * RATE_STMP;
  investment_Deidre = INIT_AMT * RATE_COMP;
  while(investment_Daphne >= investment_Deidre)
  {
    ++years;
    investment_Daphne += INIT_AMT * RATE_STMP;
    investment_Deidre += investment_Deidre * RATE_COMP;
  }
  printf("Investment values after %d years: \n", years);
  printf("Daphne: $%.2lf\n", investment_Daphne);
  printf("Deidre: $%.2lf\n", investment_Deidre);

  return 0;
}