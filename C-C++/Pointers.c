#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() { 
    
   char arr[100] = "Eren";
   char *p;

   p = arr;  // arr and &arr is the same thing   !!!!!!!!!!  arr = &arr[0]       !!!!!!!!!!!
             //                                  !!!!!!!!!! int *tab = int tab[] !!!!!!!!!!!
   printf("%c", arr[0]);   
   printf("%c", *(p+1));
    return 0;
}