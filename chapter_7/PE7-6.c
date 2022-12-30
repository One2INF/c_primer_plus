#include<stdio.h>

int main(void)
{
  char ch;
  char PreCh = '#';
  int MatchNum = 0;
  while((ch = getchar()) != '#')
  {
    if(ch == 'i' && PreCh == 'e')
    {
      ++MatchNum;
    }

    PreCh = ch;
  }

  printf("\r\n ei apears time(s): %d\r\n", MatchNum);

  return 0;
}