#include <iostream>
using namespace std;

// dangling referance : gösterdiği yerde geçerli bir obje bulundurmayan referanslardır.
int main()
{	
	int arr[] = {10,20,30,40};
	for(int item:arr){
	//	cout << item << endl; 
	//	cout << 2*item << endl; 

	}
	return 0;
}