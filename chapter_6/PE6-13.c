#include<stdio.h>

#define SIZE 8

int main(int argc, char* argv[])
{
  int a[SIZE];
  int i;
  int pow = 2;
  for(i = 0; i < SIZE; ++i)
  {
    a[i] = pow;
    pow *= 2;
  }

  printf("print array:");
  i = 0;
  do
  {
    printf(" %d", a[i++]);
  }while (i < SIZE);
  putchar('\n');
  
  return 0;
}