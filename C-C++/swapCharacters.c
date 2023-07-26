#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  char x[] = "Eren";
  char y[] = "Zirekbilek";
  char temp[25];
  
  strcpy(temp,x);
  strcpy(x, y);
  strcpy(y, temp);

  printf("%s\n", x);
  printf("%s\n", y);
  /*
  char x = 'a';
  char y = 'b';
  char temp;

  temp = x;
  x = y;
  y = temp;

  printf("%c\n", x);
  printf("%c\n", y);
  */
  

  return 0;
}