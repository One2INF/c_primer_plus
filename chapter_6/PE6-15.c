#include<stdio.h>
#include<string.h>

#define SIZE 256

int main(int argc, char* argv[])
{
  char str[SIZE];

  printf("Enter a word: ");
  scanf("%s", str);

  size_t index = strlen(str);
  while(index--)
  {
    putchar(str[index]);
  }

  putchar('\n');

  return 0;
}