#include<stdio.h>
#include<string.h>

double compute(double a, double b)
{
  return (a -b) / (a * b);
}

int main(int argc, char* argv[])
{
  double a, b;
  printf("Enter a pair of numbers: ");
  while(scanf("%lf %lf", &a, &b) == 2)
  {
    printf("(%.3g - %.3g) / (%.3g * %.3g) = %.5g\n",
           a, b, a, b, compute(a ,b));
    printf("Enter next pair of numbers: ");
  }

  return 0;
}