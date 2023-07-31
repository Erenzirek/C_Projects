#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


void binarySearch(int arr[],int size,int target)
{
  int left = 0;
  int right = size - 1; 
  
  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
    {
      return mid;
    } else if (arr[mid] < target)
    {
      left = mid + 1;
    } else
    {
      right = mid - 1;
    }
  }
  
  return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Please enter target: ");
    scanf("%d",&target);
    binarySearch(arr,size,target);
   
    return 0;
}

