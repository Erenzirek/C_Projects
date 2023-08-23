#include <iostream>
using namespace std;

// Encapsullation : Class detaylarının kullanıcıdan soyutlanmasıdır gizlenmesidir.

class employee{
    private: 
        string name;
        int age;
    public:
        void setAge(int ages)
        {
            age = ages;
        }

        int getAge()
        {
            return age;
        }

        void setName(string isim)
        {
            name = isim;
        }
        string getName()
        {
            return name;
        }
};

int main()
{
    employee employee1;
    employee1.setName("Eren");
    employee1.setAge(14);
    //cout << "Eren" << endl;
    cout << "Employee Name: " << employee1.getName() << endl;
    cout << "Age is:  " << employee1.getAge() << endl;  

}