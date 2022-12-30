#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
  char end_ch = 'A';
  int i, j;

  if(argc == 1)
  {
    printf("use default character!\n");
  }
  else
  {
    end_ch = argv[1][0];
  }

  if(end_ch < 'A' || end_ch > 'Z')
  {
    printf("invalid character: %c\n", end_ch);
    return -1;
  }

  int lines = end_ch - 'A' + 1;
  int column = 2 * lines - 1;
  for(i = 0; i < lines; ++i)
  {
    for(j = 1; j <= column; ++j)
    {
      if(abs(lines - j) > i)
        putchar(' ');
      else
        putchar(i + 'A' - abs(j - lines));
    }
    putchar('\n');
  }

  return 0;
}