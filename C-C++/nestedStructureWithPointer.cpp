#include <iostream>
using namespace std;

struct Employee {
	int id;
	string name;
	string department; 
};

int main()
{	
	Employee employee;

	employee.id = 12;
	employee.name = "Eren";
	employee.department = "EEM";
	Employee* ptr = &employee;

	cout << ptr->department << endl;
	cout << ptr->id << endl;
	cout << ptr->name << endl;

	return 0;
}