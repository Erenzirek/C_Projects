#include <iostream>

using namespace std; // std namespace içindeki fonksiyonlar kullanılcak

int main()
{
    int x,y,z;

    cout << "Input for first number: " << endl;
    cin >> x;
    cout << x << endl;
    cout << "Input for second number: " << endl;
    cin >> y;
    cout << y << endl;
    cout << "Input for third number: " << endl;
    cin >> z;
    cout << z << endl;
    cout << "Result: " << x+y+z << endl;

    string str1 = "Bu bir stringtir!";
    string str2 = "Bu bir stringtir.!";
    string str3;
    
    str3 = str1 + str2;

    cout << str3 << endl;
    return 0;
}