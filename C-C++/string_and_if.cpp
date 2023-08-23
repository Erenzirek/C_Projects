#include <iostream>
using namespace std;

int main()
{
    string Password = "Eren";
    string input;
    cout << "Please enter your password: " << endl;
    cin >> input;

    if (input == Password)
    {
        cout << " Entry successfull " << endl;
    }
    else
    {
        cout << "Password is wrong";
    }
}