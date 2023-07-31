#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main()
{
  int num[] = {2, 7, 8, 9, 15, 47, 96, 41, 98, 12};
  int answer;
  
    printf("---|||| Welcome Linear Search Algorithm ||||---");

 
    printf("Please any number for search (1~10) in array: ");
    scanf("%d", &answer);

    for (int i = 0; i < 10; i++)
    {
      printf("%d\t",num[i]);
      if (num[i] == answer)
      {
        printf("Your answer is found in %d\n", i);
        i = 10;
      }
      else if(num[i] != answer){
        printf("The number is not found !!!\n");
      }
    }  
  return 0;
}