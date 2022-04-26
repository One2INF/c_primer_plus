#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[])
{
  double a, b;
  printf("Enter a pair of numbers: ");
  while(scanf("%lf %lf", &a, &b) == 2)
  {
    printf("(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n",
           a, b, a, b, (a - b) / a * b);
    printf("Enter next pair of numbers: ");
  }

  return 0;
}