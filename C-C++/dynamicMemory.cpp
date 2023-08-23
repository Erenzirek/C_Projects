#include <iostream>
using namespace std;


// Keywords : Memory Leak 

int main()
{	
	int *ptr;
	int size;
	
	// int *ptr = new int;
	// *ptr = 5;
	// delete ptr; // bunu yapmasanda program çalışır ancak ihtiyaç halinde kullanılıp silinmesi sızıntıyı engeller.
	cout << "How many values will you store: ";
	cin >> size;

	ptr = new int[size];  
	for (int i = 0; i < size; i++)
	{
		cout << "Deger: " << endl;
		cin >> ptr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << endl;
	}
	
	delete [] ptr; // birden fazla değeri sakladığı için köşeli parantez koyuyoruz
	return 0;
}