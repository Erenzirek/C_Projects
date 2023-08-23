#include <iostream>
using namespace std;

int main(){
    int x[] = {1, 2, 3, 4, 5};

for (int& y : x)
{
   cout << y << " ";
}

    return 0;
}