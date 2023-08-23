#include <iostream>
using namespace std;

void degistir(int *x)
{
	*x = 5;
	cout << *x << endl;
}

int main()
{	
	int a = 4; 
	degistir(&a);

	cout << a << endl; 

	return 0;
}