#include <iostream>
using namespace std;

struct Adress {
	string cityName;
	int No;
};

struct Employee {
	int id;
	string name;
	string department; 
	Adress address;
};

int main()
{	
	Employee employee1 = {44, "Eren", "EEM", {"Ankara", 16}};

	cout << employee1.id << endl;
	cout << employee1.name << endl;
	cout << employee1.department << endl;
	cout << employee1.address.cityName << endl;
	cout << employee1.address.No << endl;
	
	return 0;
}