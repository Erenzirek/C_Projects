#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main()
{

char unit;

printf("\n Please enter unit of temperature: in (F) or (C)");
scanf("%c", &unit);

if (unit == 'c')
{
    printf("Celcius is selected. ");
}
else if(unit == 's')
{
    printf("Fahrendeit is selected. ");
}
else
{
    printf("Error");
}



return 0;

}