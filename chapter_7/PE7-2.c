#include<stdio.h>

int main(void)
{
  char ch;
  int CharNum = 0;
  while((ch = getchar()) != '#')
  {
    printf("%c: %d, ", ch, ch);
    if(++CharNum % 8 == 0)
    {
      printf("\r\n");
    }
  }

  return 0;
}