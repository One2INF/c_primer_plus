#include<stdio.h>
#include<math.h>


int IsPrimeNumber(int n);


int main(void)
{
  int Number;
  printf("please input a positive number:");
  while(scanf("%d", &Number) && Number > 0)
  {
    for(int i = 2; i < Number; ++i)
    {
      if(IsPrimeNumber(i))
        printf("%d ", i);
    }
    printf("\r\nplease input a positive number:");
  }


  return 0;
}

int IsPrimeNumber(int n)
{
  int square = sqrt(n);
  for(int i = 2; i <= square; ++i)
  {
    if(n % i == 0)
      return 0;
  }
  return 1;
}
