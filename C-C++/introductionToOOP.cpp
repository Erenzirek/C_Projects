#include <iostream>
using namespace std;

class Student{
// classlara ilk olarak public, private veya protected özelliği veriyoruz.
public: // Her taraftan erişilebilir.
	
	string name; 

};
// bu class ile istediğimiz kadar obje üretebiliriz.

int main()
{	
	Student student;
	Student student2;

	student.name = "Eren";
	student2.name = "Mehmet";

	cout << "Student1 name : " << student.name << endl;
	cout << "Student2 name : " << student2.name << endl;


	return 0;
}