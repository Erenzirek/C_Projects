#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() { 
    
    int x = 5; // 0000 0101
    int y = 4; // 0000 0100
    int z;

   // z = x & y;
   // z = x | y;
    z = x ^ y;
   // z = x << 2;

    printf("%d\n",z);

    return 0;
}