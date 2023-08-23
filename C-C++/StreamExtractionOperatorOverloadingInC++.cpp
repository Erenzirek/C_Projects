#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int x = 0) : x{x} {}
};

istream& operator>>(istream& input, Test& obj) {
    input >> obj.x;
    return input;
}

int main() {
    Test t;
    cout << "Enter a value: ";
    cin >> t;
    return 0;
}