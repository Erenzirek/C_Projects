#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() { 
    char character[20] = {'A','B','C','D','E','F','G','M','N'};
    char *p;
    
    p = character;

    printf("%c\n",*(p+1));
    return 0;
}