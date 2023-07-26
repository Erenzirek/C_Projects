#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   char input;
   
  
while (1)
{
   printf("C/F \n");
   scanf("%c",&input);
   
   if(input == 'C')
   {
     printf("Celcius \n");
   }
   else if (input == 'F')
   {
     printf("Farad \n");
   }
}

    return 0;
}