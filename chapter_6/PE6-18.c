#include<stdio.h>

#define INIT_FRIENDS       5
#define DUNBAR_NUMBER    150

int main(void)
{
  int week = 0;
  int friends = INIT_FRIENDS;
  int decrease = 1;

  while(friends <= DUNBAR_NUMBER)
  {
    friends -= decrease;
    friends *= 2;
    ++week;
    printf("week %d: %d\n", week, friends);
  }

  return 0;
}