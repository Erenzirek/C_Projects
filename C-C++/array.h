#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  double prices[] = {5.0, 7.0, 5.4, 8.6, 7.5};

  for (int i = 0; i < 5; i++)
  {
      printf("%.2lf\n", prices[i]);
  }
    
 

  return 0;
}