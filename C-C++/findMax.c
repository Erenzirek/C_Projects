#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>



int findMax(int x, int y)
{
  /*
  if (x>y)
  {
    return x;
  }
  else if (y>x)
  {
    return y; 
  }
  else
  {
    printf("There is an error!!!");
  }
  */

 // using ternary operator
    return (x > y) ? x : y;
}

int main()
{
  int x;
  int y;

  printf("\n Please enter first number: \n");
  scanf("%d", &x);

  printf("\n Please enter second number: \n");
  scanf("%d", &y);

  int max = findMax(x,y);

  printf("max number is : %d\n", max);

  return 0;
}