#include<stdio.h>

int main(void)
{
  int SelectedType = 0;
  float SalaryLevel;
  float Salary = 0;
  float NetIncome = 0;
  float Taxes = 0;

  printf("**************************************************\r\n"
          "Enter the number corresponding to the tax category:\r\n"
          "1) single          2) householder\r\n"
          "4) married         3) divorce\r\n"
          "5) quit\r\n"
          "**************************************************\r\n");
  while(scanf("%d", &SelectedType) && SelectedType != 5)
  {
    switch(SelectedType)
    {
    case 1:
    {
      SalaryLevel = 17850;
      break;
    }
    case 2:
    {
      SalaryLevel = 23900;
      break;
    }
    case 3:
    {
      SalaryLevel = 29750;
      break;
    }
    case 4:
    {
      SalaryLevel = 14875;
      break;
    }
    default:
    {
      SalaryLevel = -1;
      break;
    }
    }

    if(SalaryLevel != -1)
    {
      printf("please input your salary: ");
      scanf("%f", &Salary);
      if(Salary <= SalaryLevel)
      {
        Taxes = Salary * 15 / 100;
      }
      else
      {
        Taxes = SalaryLevel * 15 / 100 + (Salary - SalaryLevel) * 28 / 100;
      }
      NetIncome = Salary - Taxes;
      printf("Taxes: %.2f\r\n", Taxes);
      printf("Net income: %.2f\r\n", NetIncome);
    }

    printf("**************************************************\r\n"
           "Enter the number corresponding to the tax category:\r\n"
           "1) single          2) householder\r\n"
           "4) married         3) divorce\r\n"
           "5) quit\r\n"
           "**************************************************\r\n");
  }

  return 0;
}