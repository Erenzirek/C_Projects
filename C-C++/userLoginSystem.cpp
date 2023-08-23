#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "Eren";
	string surname = "Zirekbilek";
	string loginName;
	string loginSurname;
	while (true)
	{
		cout << "Please enter name : " << endl; 
		cin >> loginName;
		cout << "Please enter surname : " << endl;
		cin >> loginSurname;

		if (loginName == name && loginSurname == surname)
		{
			cout << "login successfull" << endl;
			break; 
		}
		else if (loginName == name && loginSurname != surname)
		{
			cout << "surname is wrong check again";
		}
		else if (loginName != name && loginSurname == surname)
		{
			cout << "name is false check again";
		}
		else 
		{
			cout << "Please retry";
		}
	}
	

	return 0;
}
