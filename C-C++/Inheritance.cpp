#include <iostream>
#include <string>

class Vehicle {
public:
    Vehicle(const std::string& brand, const std::string& model)   // brand and model varibles (const)
        : brand(brand), model(model) {}

    void displayInfo() {
        std::cout << "This is a " << brand << " " << model << "." << std::endl;
    }

protected:
    std::string brand; // protected veya public olabilir
    std::string model; // protected veya public olabilir
};

class Car : public Vehicle {  // brand and model has taken Vehicle Class
public:
    Car(const std::string& brand, const std::string& model, const std::string& fuelType)
        : Vehicle(brand, model), fuelType(fuelType) {}

    void displayInfo() {
        std::cout << "This is a " << brand << " " << model << " car running on " << fuelType << "." << std::endl;
    }

private:
    std::string fuelType;
};

class Bike : public Vehicle {
public:
    Bike(const std::string& brand, const std::string& model, const std::string& bikeType)
        : Vehicle(brand, model), bikeType(bikeType) {}

    void displayInfo() {
        std::cout << "This is a " << brand << " " << model << " bike of type " << bikeType << "." << std::endl;
    }

private:
    std::string bikeType;
};

int main() {
    Car car("Toyota", "Camry", "gasoline");
    Bike bike("Trek", "Mountain 300", "mountain");

    car.displayInfo();
    bike.displayInfo();

    return 0;
}