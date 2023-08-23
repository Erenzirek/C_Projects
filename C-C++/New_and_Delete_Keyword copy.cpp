#include <iostream>
using namespace std;


// Keywords : Memory Leak 

int main()
{	
	int *ptr = new int;
	*ptr = 5;
	delete ptr; // bellekte yer ayrılma işlemi ile işimiz bittikten sonra temizliyoruz
	return 0;
}