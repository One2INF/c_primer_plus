#include<stdio.h>

#define STR_SIZE 26

int main(void)
{
  char str[STR_SIZE];
  int i;

  for(i = 0; i < STR_SIZE; ++i)
    str[i] = 'a' + i;

  for(i = 0; i < STR_SIZE; ++i)
    printf("%c ", str[i]);
  printf("\n");
  
  return 0;
}