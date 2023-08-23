#include <iostream>
#include <mariadb/mysql.h>
using namespace std;


int main()
{	
	int arr[] = {0,1,2,3};
	int *a = arr; 
	
	cout << "Adress of pointer a[0]" << a << endl;
	cout << *a << endl;
	cout << "Adress of pointer a[1]" << a+1 << endl;
	cout << *(a+1) << endl;
	cout << "Adress of pointer a[2]" << a+2 << endl;
	cout << *(a+2) << endl;

	return 0;
}