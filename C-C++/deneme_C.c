#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main()
{
 int x = 5;
 int *p;

 *p = &x;

 printf("%d\n", p);

  return 0;
}