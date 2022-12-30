#include<stdio.h>

#define LINES 6

int main(void)
{
  int i, j;

  for(i = 1; i <= LINES; ++i)
  {
    for(j = 0; j < i; ++j)
      printf("%c", 'F' - j);
    printf("\n");
  }

  return 0;
}