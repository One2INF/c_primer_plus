#include<stdio.h>

#define LINES 5

int main(void)
{
  int i, j;

  for(i = 1; i <= LINES; ++i)
  {
    for(j = 0; j < i; ++j)
      printf("$");
    printf("\n");
  }

  return 0;
}