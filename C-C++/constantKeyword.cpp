#include <iostream>
using namespace std;

// pointer'ın gösterdiği yer değişebilir ancak gösterdiği yerin değerini değiştiremezsin.
void printArray(const int *ptr1, const int *ptr2)
{
	for (;ptr1!=ptr2;ptr1++)
	{
		cout << "Eleman: " << *ptr1 << endl;  
	}
}

int main()
{	
	int arr[] = {10,21,68,48,98,54,28,75,12};
	printArray(arr+2,arr+7);
	return 0;
}