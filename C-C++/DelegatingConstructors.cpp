#include <iostream>
#include <string>

class Car {
public:
    Car() : Car("Unknown", 0) {
        // Default constructor, parametre alan constructor'ı çağırıyor
    }

    Car(const std::string& brand, int year) : brand(brand), year(year) {
        // Parametre alan constructor
    }

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }

private:
    std::string brand;
    int year;
};

int main() {
    Car defaultCar;
    Car customCar("Toyota", 2022);

    defaultCar.displayInfo(); // Çıktı: Brand: Unknown, Year: 0
    customCar.displayInfo();  // Çıktı: Brand: Toyota, Year: 2022

    return 0;
}