#include <iostream>
using namespace std;

class employee {
private:
    string name;
    int age;
    int ID;

public:
    employee(string name, int age, int ID) {
       this->name = name;
       this->age = age;
       this->ID = ID;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return age;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setId(int ID) {
        this->ID = ID;
    }

    int getID() {
        return ID;
    }
};

int main() {
    employee employee1("Eren", 14, 12345);
    cout << "Employee Name: " << employee1.getName() << endl;
    cout << "Age is: " << employee1.getAge() << endl;
    cout << "ID is: " << employee1.getID() << endl;

    return 0;
}