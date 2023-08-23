#include <iostream>
using namespace std;
enum actions{

};


class Bank{
private: 
    string bankName;
public: 
// Bank constructor is created
    Bank(string bankName){              
        this -> bankName = bankName;
    }
    void setBank(string bankName)
    {
        this -> bankName = bankName;
    }
    string getBank()
    {
        return bankName;
    }
};

class Employee{


};

class Account{
private:
    string name;
    string surname;
    int password;
public:
    Account(string name, string surname, int password)
    {
        this -> name = name;
        this -> surname = surname;
        this -> password = password;
    }

    void setAccount(string name, string surname, int password)
    {
        this -> name = name;
        this -> surname = surname;
        this -> password = password;
    }

    void getAccount()
    {
        cout << "Name is: "<< name << endl;
        cout << "Surname is:" << surname << endl;
        cout << "Password is:" << password << endl;
    }
};

class Process{

};

void menu(){
    cout << "||---            Welcome to Bank Management System         --||" << endl;
    cout << "||---            Please select the action to take          --||" << endl;
    cout << endl;
    cout << endl;
    cout << "||---  1. Add Customer                    --||" << endl;
    cout << "||---  2. Viewing Customer Information    --||" << endl;
    cout << "||---  3. Updating Customer Information   --||" << endl;
    cout << "||---  4. Customer Deletion               --||" << endl;
    cout << "||---  5. Create An Account               --||" << endl;
    cout << "||---  6. Account Closure                 --||" << endl;
    cout << "||---  7. Viewing Account Information     --||" << endl;
    cout << "||---  8. Deposit                         --||" << endl;
    cout << "||---  9. Adding Staff                    --||" << endl;
    cout << "||---  10. Viewing Account Information    --||" << endl;
    cout << "||---  11. Viewing Staff Information      --||" << endl;
    cout << "||---  12. Add Employee                   --||" << endl;
    cout << "||---  13. View Employee Information      --||" << endl;
    cout << "||---  14. Viewing Staff Information      --||" << endl;
    cout << "||---  14. Remove Employee                --||" << endl;
    cout << "||---  14. Exit                           --||" << endl;
} 

int main() {
    int action;
    string bank;
    string name;
    string surname;
    int password;

    cout << "Please choose your bank: ";
    cin >> bank;

    Bank bank1(bank);

    cout << "Bank Name is: " << bank1.getBank() << endl;
    cout << "Welcome to " << bank << endl;
    cout << endl;
    cout << endl;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Please enter your surname: ";
    cin >> surname;
    cout << "Please enter your password: ";
    cin >> password;
    Account account1(name, surname, password);
    account1.getAccount();
    cout << "Your account is created successfully" << endl;


    return 0;
}