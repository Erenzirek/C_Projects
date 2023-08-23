#include <iostream>
using namespace std;

class employee{
    private: 
        string name;
    public:
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
    //cout << "Eren" << endl;
    cout << "Employee Name: " << employee1.getName() << endl;


}