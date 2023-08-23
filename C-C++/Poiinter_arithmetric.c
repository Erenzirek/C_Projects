#include <stdio.h>

// 68 byte 
struct Person
{
    char name[64];
    int age;
};

int main(){
    struct Person people[100];
    struct Person *p_Person = &people; // first person of people
    for (int  i = 0; i < 100; i++)
    {
        *p_Person[i] += 45; 
    }

    printf("%d", people[1]);
    
    return 0;
}