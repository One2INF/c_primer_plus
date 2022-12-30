#include<stdio.h>


#define NORMAL_HOURS_PER_WEEK   40
#define OVERTIME_RATE           1.5

#define FIRST_TAX_RATE_LEVEL    300
#define FIRST_TAX_RATE          15
#define SECOND_TAX_RATE_LEVEL   450
#define SECOND_TAX_RATE         20
#define THIRD_TAX_RATE          25

int main(void)
{
  int NumberOfWorkTime = 0;
  int SelectedLevel = 0;
  float SalaryLevel;
  float Salary = 0;
  float NetIncome = 0;
  float Taxes = 0;

  printf("**************************************************\r\n"
          "Enter the number corresponding to the desired pay rate or action:\r\n"
          "1) $8.75/hr          2) $9.33/hr\r\n"
          "4) $11.20/hr         3) $10.00/hr\r\n"
          "5) quit\r\n"
          "**************************************************\r\n");
  scanf("%d", &SelectedLevel);
  switch(SelectedLevel)
  {
  case 1:
  {
    SalaryLevel = 8.75;
    break;
  }
  case 2:
  {
    SalaryLevel = 9.33;
    break;
  }
  case 3:
  {
    SalaryLevel = 11.2;
    break;
  }
  case 4:
  {
    SalaryLevel = 10;
    break;
  }
  default:
  {
    return 0;
  }
  }

  printf("please input hours of work times or 0 to quit:");
  while(scanf("%d", &NumberOfWorkTime) && NumberOfWorkTime != 0)
  {
    /* 加班 */
    if(NumberOfWorkTime > NORMAL_HOURS_PER_WEEK)
    {
      NumberOfWorkTime = NORMAL_HOURS_PER_WEEK + (NumberOfWorkTime - NORMAL_HOURS_PER_WEEK) * OVERTIME_RATE;
    }
    Salary = NumberOfWorkTime * SalaryLevel;
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

    printf("Salary: %.2f\r\n", Salary);
    printf("Taxes: %.2f\r\n", Taxes);
    printf("net income: %.2f\r\n", NetIncome);
    printf("please input hours of work times or 0 to quit:");  
  }

  return 0;
}