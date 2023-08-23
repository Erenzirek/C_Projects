#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department; 
};


int main()
{	
	Employee employee1 = {12,"Eren","EEM"};
	Employee* ptr = &employee1;
	cout << ptr->id << endl;  // POINTER ILE ERISIM '->' İLE OLMAKTADIR. 
	cout << employee1.id << endl;
	cout << employee1.name << endl; 
	cout << employee1.department << endl;
	
	return 0;
}