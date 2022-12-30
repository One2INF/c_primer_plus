#include<stdio.h>

#define SIZE 8

double get_double(void)
{
  char ch;
  double input;
  while(scanf("%lf", &input) != 1)
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
  double a[SIZE], b[SIZE];
  int i;

  printf("Enter %d numbers:\n", SIZE);
  for(i = 0; i < SIZE; ++i)
  {
    printf("value #%d: ", i);
    a[i] = get_double();
  }

  b[0] = a[0];
  for(i = 1; i < SIZE; ++i)
    b[i] = b[i - 1] + a[i];

  printf("print two array:\n");
  for(i = 0; i < SIZE; ++i)
    printf("%-8g ", a[i]);
  putchar('\n');

  for(i = 0; i < SIZE; ++i)
    printf("%-8g ", b[i]);
  putchar('\n');

  return 0;
}