#include <iostream>
using namespace std;

class employee {
private:
    string name;
    int age;
    int ID;

public:
    employee() {
        this->name = "Bilgi yok";
        this->age = 0;
        this->ID = 0;
    }
    employee(string name, int age) {
        this -> name = name;
        this -> age = age;
        this -> ID = 0;
    }
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

    void showInfos()
    {
        cout << "Employee Name: " << this->name << endl;
        cout << "Age is: " << this->age << endl;
        cout << "ID is: " << this->ID << endl;
    }

};

void deneme(employee* ptr)
{
    ptr->showInfos();
}

int main() {
    employee employee1("Eren", 14, 12345);
    employee employee2("Eren", 87);
    employee employee3;

    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();

    deneme(&employee1);
/*
    cout << "Employee Name: " << employee1.getName() << endl;
    cout << "Age is: " << employee1.getAge() << endl;
    cout << "ID is: " << employee1.getID() << endl;

    cout << "Employee Name: " << employee2.getName() << endl;
    cout << "Age is: " << employee2.getAge() << endl;

*/
    
    return 0;
}