#include<stdio.h>

int main(void)
{
  char ch;
  int ChangeNum = 0;
  while((ch = getchar()) != '#')
  {
    switch(ch)
    {
    case '.':
    {
      ++ChangeNum;
      printf("!");
      break;
    }
    case '!':
    {
      ++ChangeNum;
      printf("!!");
      break;
    }
    default:
    {

      printf("%c", ch);
      break;
    }
    }
  }

  printf("\r\ntotal changed times: %d\r\n", ChangeNum);

  return 0;
}