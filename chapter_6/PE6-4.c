#include<stdio.h>

#define LINES 6

int main(void)
{
  int i, j, k;

  for(i = 1; i <= LINES; ++i)
  {
    for(j = 0; j < i; ++j)
      putchar('A' + k++);
    putchar('\n');
  }

  return 0;
}