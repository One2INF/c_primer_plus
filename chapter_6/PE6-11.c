#include<stdio.h>

#define SIZE 8

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
  int a[SIZE];
  int i;

  printf("Enter %d integers: ", SIZE);
  for(i = 0; i < SIZE; ++i)
    a[i] = get_int();

  printf("print datas in reverse order.");
  for(i = SIZE; i > 0;)
    printf("%d ", a[--i]);
  putchar('\n');

  return 0;
}