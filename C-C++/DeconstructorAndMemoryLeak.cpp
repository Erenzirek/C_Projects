#include <iostream>
using namespace std;

class Employee {
public:
    string *s;
    int *i;

    Employee(string str, int value) {
      s = new string;
      i = new int;
      *s = str;
      *i = value;
    }
    void show(){
        cout << "String value : " << *s << endl << "Int Deger: " << *i << endl; 
    }
    ~Employee(){
        delete s;
        delete i;
        cout << "Destructor summoned" << endl;
    }
};

int main() {
    Employee *emp = new Employee("Eren", 45);
    emp->show();
    return 0;
}