#include<stdio.h>

#define SIZE 8

int get_int(void)
{
  char ch;
  int input;
  while(scanf("%d", &input) != 1)
  {
    while ((ch = getchar()) != '\n')
      putchar(ch);
    printf(" is not an integer.\n"
          "Please enter an integer value, such as 1, -4:");
  }

  return input;
}

int main(int argc, char* argv[])
{
  int times;
  printf("Please Enter count times: ");

  int i;
  while((times = get_int()) > 0)
  {
    double sum1 = 0.0, sum2 = 0.0;
    for(i = 1; i <= times; ++i)
    {
      sum1 += 1.0 / i;
      if(i % 2)
        sum2 += 1.0 / i;
      else
        sum2 -= 1.0 / i;
    }
    printf("sum of sequence1: %.7lf\n", sum1);
    printf("sum of sequence2: %.7lf\n", sum2);
    printf("Please enter another count times: ");
  }

  printf("Exit!\n");
  return 0;
}