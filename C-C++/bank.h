#ifndef BANK_H
#define BANK_H
#include <iostream>
using namespace std;

class Bank{
    private:
        int employeeNo;
        int ID;
        string Name;
    public:
        Bank(int employeeNo, int ID, string Name);
        void showInfos();
        ~Bank();
};

#endif // BANK_H
