#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size - i - 1; j++)
      {
        if (array[j] > array[j+1])
        {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
        } 
      }
    }
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d",array[i]);
  }
  
}

int main()
{
  int array[] = {9,5,6,4,2,3,7,8,1};
  int size = sizeof(array)/sizeof(array[0]); // size = 9 

  sort(array,size);
  printArray(array,size);
  
  return 0;
}