#include <iostream>
using namespace std;
// void printArray(int *ptr, int sizeOfArray)  --> Bu şekilde ifade edebilirsin.
void printArray(int arr[], int sizeOfArray)
{
	while (1)
	{
		for (int i = 0; i < sizeOfArray; i++)
		{
			cout << arr[i] << endl;
		}
	}	
}
int main()
{	
	int arr[] = {0,1,2,3};
	int sizeOfArray = sizeof(arr) / sizeof(arr[0]) ;
	printArray(arr,sizeOfArray);
	return 0;
}