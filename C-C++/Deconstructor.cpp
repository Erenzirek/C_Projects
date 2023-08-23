#include <iostream>
using namespace std;

class employee {
public:
    employee() {
       cout << "Constructor cagrildi" << endl;
    }
    ~employee(){
       cout << "Deconstructor cagrildi" << endl;
    }
};

int main() {
    employee *emp = new employee();
    delete emp;
    return 0;
}