#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int recursive(int number)
{
    if(number == 0)
    {
        return 1;
    }
    else
    {
        return (7 + recursive(number-2));
    }
}

int main()
{
    int num;
    printf("Please enter any number: \n");
    scanf("%d", &num);
  // recursive(num);

    printf("%d\n", recursive(num));
}