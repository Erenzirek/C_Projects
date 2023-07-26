#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void birthday(int x, int y)
{
  int z = x + y;
  printf("z: %d\n", z);
}


int main()
{

  bool state = true;
  int x = 1;
  int y = 4;
  birthday(x,y);
  if (!state)
  {
    printf("false!!");
  }
  else if (state)
  {
    printf("true!!");
  }
  
  


    return 0;
}