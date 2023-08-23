#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double getArea() const {
        // radius değişkeni const fonksiyon içinde değiştirilemez
        return 3.14159 * radius * radius;
    }
};

int main() {
    int value = 42;
    const int& ref = value;
    
    // ref ile value değiştirilemez
    // ref = 10; // Hata: Değiştirilemez
    return 0;
}