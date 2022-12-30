#include<stdio.h>


#define NORMAL_HOURS_PER_WEEK   40
#define OVERTIME_RATE           1.5
#define DOLLARS_PER_HOUR        1000

#define FIRST_TAX_RATE_LEVEL    300
#define FIRST_TAX_RATE          15
#define SECOND_TAX_RATE_LEVEL   450
#define SECOND_TAX_RATE         20
#define THIRD_TAX_RATE          25

int main(void)
{
  int NumberOfWorkTime = 0;
  float Salary = 0;
  float NetIncome = 0;
  float Taxes = 0;
  printf("please input hours of work times or 0 to quit:");
  while(scanf("%d", &NumberOfWorkTime) && NumberOfWorkTime != 0)
  {
    /* 加班 */
    if(NumberOfWorkTime > NORMAL_HOURS_PER_WEEK)
    {
      NumberOfWorkTime = NORMAL_HOURS_PER_WEEK + (NumberOfWorkTime - NORMAL_HOURS_PER_WEEK) * OVERTIME_RATE;
    }
    Salary = NumberOfWorkTime * DOLLARS_PER_HOUR;
    if(Salary <= FIRST_TAX_RATE_LEVEL)
    {
      Taxes = Salary * FIRST_TAX_RATE / 100;
    }
    else if(Salary <= SECOND_TAX_RATE_LEVEL)
    {
      Taxes = FIRST_TAX_RATE_LEVEL * FIRST_TAX_RATE / 100 + (Salary - FIRST_TAX_RATE_LEVEL) * SECOND_TAX_RATE / 100;
    }
    else
    {
      Taxes = FIRST_TAX_RATE_LEVEL * FIRST_TAX_RATE / 100 + (SECOND_TAX_RATE_LEVEL - FIRST_TAX_RATE_LEVEL) * SECOND_TAX_RATE / 100 + (Salary - SECOND_TAX_RATE_LEVEL) * THIRD_TAX_RATE / 100;
    }

    NetIncome = Salary - Taxes;

    printf("Salary: %.f\r\n", Salary);
    printf("Taxes: %.1f\r\n", Taxes);
    printf("net income: %.1f\r\n", NetIncome);
    printf("please input hours of work times or 0 to quit:");  
  }

  return 0;
}