#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() { 
    int arr[] = {1,2,3,4};
    int *pt;

    pt = arr;

    for (pt = arr; pt < arr + 4; pt++)
    {
        *pt = 0;
    }
    for (pt = arr; pt < arr + 4; pt++)
    {
        printf("%d\t", *pt);
    }
    
    
    // int MAX_SIZE = sİzeof(arr)/sizeof(arr[0])

    // printf("%d\t",MAX_SIZE);
    
    // The first way 
    /*
        for (int i = 0; i < 4; i++)
        {
            arr[i] = 0;
        }
         for (int i = 0; i < 4; i++)
        {
            printf("%d\t", arr[i]);
        }
    */
        

    return 0;
}