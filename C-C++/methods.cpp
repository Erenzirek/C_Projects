#include <iostream>
using namespace std;

class Student{
// classlara ilk olarak public, private veya protected özelliği veriyoruz.
public: // Her taraftan erişilebilir.
	
	string name; 

	void tellName()
	{
		cout << "My name is:  " << name << endl;
	}

};
// bu class ile istediğimiz kadar obje üretebiliriz.

int main()
{	
	Student student;
	Student student2;
	
	student.name = "Eren";
	student2.name = "Mehmet";
	
	student.tellName();
	student2.tellName();
	
	return 0;
}