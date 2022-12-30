#include<stdio.h>

int main(void)
{
  char ch;
  int SpaceNum = 0;
  int NewlineNum = 0;
  int OtherNum = 0;
  while((ch = getchar()) != '#')
  {
    switch(ch)
    {
      case ' ':
      {
        ++SpaceNum;
        break;
      }
      case '\n':
      {
        ++NewlineNum;
        break;
      }
      default:
      {
        ++OtherNum;
        break;
      }
    }
  }

  printf("space number: %d\r\n", SpaceNum);
  printf("new line number: %d\r\n", NewlineNum);
  printf("other number: %d\r\n", OtherNum);

  return 0;
}