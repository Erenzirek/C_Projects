#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  /*
    char cars[][25] = {"Mustang","Corvette","Camaro"};
  
    for (int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
      printf("%s\n", cars[i]);
    }
  */
  int cars[] = {10, 20, 30, 40, 50};
  int size = sizeof(cars) / sizeof(cars[2]);

    printf("Number of elements in the array: %d\n", size);


  
  return 0;
}