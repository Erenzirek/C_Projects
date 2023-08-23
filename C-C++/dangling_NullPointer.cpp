#include <iostream>
using namespace std;

// dangling referance : gösterdiği yerde geçerli bir obje bulundurmayan referanslardır.
int main()
{	
	int *ptr = nullptr;  // pointer hiçbir yeri göstermiyor
	ptr = new int;
	
	return 0;
}