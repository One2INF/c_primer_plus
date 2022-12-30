#include<stdio.h>

int main(void)
{
  char ch;
  int ChangeNum = 0;
  while((ch = getchar()) != '#')
  {
    if(ch == '.')
    {
      ++ChangeNum;
      printf("!");
    }
    else if(ch == '!')
    {
      ++ChangeNum;
      printf("!!");
    }
    else
    {
      printf("%c", ch);
    }
  }

  printf("\r\ntotal changed times: %d\r\n", ChangeNum);

  return 0;
}