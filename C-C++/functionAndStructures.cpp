#include <iostream>
using namespace std;

struct Employee{
	int id;
	string name;
	string department; 
};

void printStructPointer(Employee* employee) // Eğer structure içindeli değer değişmesini istersen pointer(call by value) kullanman gerekli 
{
	employee->id = 54;
	cout << employee -> id << endl;
	cout << employee -> department << endl;
	cout << employee -> name << endl;
}

void printStruct(Employee employee)
{
	employee.id = 54;
	cout << employee.id << endl;
	cout << employee.department << endl;
	cout << employee.name << endl;
}



int main()
{	
	Employee employee1 = {12,"Eren","EEM"};
	printStruct(employee1);
	cout << employee1.id << endl;
	cout << employee1.department << endl;
	cout << employee1.name << endl;
	//printStructPointer(&employee1);  // pointer için  adresi refer etmen lazım 
	
	return 0;
}