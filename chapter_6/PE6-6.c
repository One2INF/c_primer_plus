#include<stdio.h>
#include<stdlib.h>

int get_int(void)
{
  char ch;
  int input;
  while(scanf("%d", &input) != 1)
  {
    while ((ch = getchar()) != '\n')
      putchar(ch);
    printf(" is not an integer.\n"
          "Please enter an integer value, such as 1, -4:");
  }

  return input;
}

int main(int argc, char* argv[])
{
  int start, end;

  printf("Enter starting integer: ");
  start = get_int();
  printf("Enter end integer: ");
  end = get_int();
  if(start > end)
  {
    printf("Error: start integer > end integer!\n");
    printf("Exit!");
    return -1;
  }

  int num, square, cube;
  printf("%5s %10s %15s\n", "num", "square", "cude");
  for(num = start; num <= end; ++num)
  {
    square = num * num;
    cube = square * num;
    printf("%5d %10d %15d\n", num, square, cube);
  }

  return 0;
}