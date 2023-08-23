#include <iostream>
using namespace std;

// Overloading : Aşırı yükleme

void hello()
{
	cout << "Hello world" << endl;
}

void hello(string name)
{
	cout << name << endl;
}

void hello(string name,string name1)
{
	cout << name << " , " << name1;
}

int main()
{	
	hello();
	hello("Eren");
	hello("Naber","Eren");
	return 0;
}