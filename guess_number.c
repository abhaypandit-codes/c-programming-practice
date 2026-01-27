
  //PROJECT-1
  //GUESS HIDDEN NUMBER 
#include <stdio.h>
int main()
{
  int i = 0, n;
  printf("NUMBER GUESSING GAME\n");
  printf("GUESS THE HIDDEN NUMBER BETWEEN 1 TO 50\n");
  while (1)
  {
    printf("enter a number:");
    scanf("%d", &n);
    if (n == 13)
    {
      printf("you enter correct number that is %d", n);
      break;
    }
    else
    {
      if (n < 13)
      {
        printf("higher number please\n");
      }
      else
      {
        printf("Lower number please\n");
      }
    }
  }
  return 0;
}