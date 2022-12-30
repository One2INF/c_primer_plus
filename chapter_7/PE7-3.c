#include<stdio.h>

int main(void)
{
  char ch;
  int number = 0;
  unsigned int EvenNumber = 0, OddNumber = 0;
  int SumOfEven = 0, SumOfOdd = 0;
  while((scanf("%d", &number)) && number != 0)
  {
    if(number % 2 == 0)
    {
      ++EvenNumber;
      SumOfEven += number;
    }
    else
    {
      ++OddNumber;
      SumOfOdd += number;
    }
  }

  printf("Even number: %d, average: %d\r\n", EvenNumber, SumOfEven / EvenNumber);
  printf("Odd number: %d, average: %d\r\n", OddNumber, SumOfOdd / OddNumber);

  return 0;
}