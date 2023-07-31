#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

// enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

enum LEDstate{OPEN,CLOSED,FAST,SLOW};

void setLedState(enum LEDstate state)
{
  switch (state)
  {
  case OPEN:
      printf("Led is open!!\n");
    break;
  case CLOSED:
      printf("Led is closed\n");
    break;
  case FAST:
      printf("Led is fast\n");
    break;
  case SLOW:
      printf("Led is slow\n");
    break;
  default:
    break;
  }
}

int main()
{
 
 /*
 enum Day today = Sat;

 if (today == Sun || today == Sat){
    printf("Its weekend!");
 }
 else{
    printf("Its work day!");
 }
 */
 
  enum LEDstate state1 = OPEN;
  enum LEDstate state2 = SLOW; 
  
  setLedState(state1);
  setLedState(state2);

  return 0;
}