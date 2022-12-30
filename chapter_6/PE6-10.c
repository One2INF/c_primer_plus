#include<stdio.h>
#include<stdlib.h>

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
  int start, end;

  printf("Enter lower and upper integer limits: ");
  while(1)
  {
    scanf("%d %d", &start, &end);    
    if(start >= end)
    {
      printf("Done\n");
      return -1;
    }

    int num, sum = 0;
    for(num = start; num <= end; ++num)
    {
      sum += num * num;
    }
    printf("The sums of limits %d to %d is %d\n", start, end, sum);
    printf("Enter next set of limits: ");
  }

  return 0;
}