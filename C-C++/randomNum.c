#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


int main()
{
  srand(time(0));
  
  int number1 = (rand() % 6) + 7;  //  0 < x < 5  >> 7 < x < (7 + 5) >> 7 < x < 12
  
  printf("%d", number1);
 
  return 0;
}