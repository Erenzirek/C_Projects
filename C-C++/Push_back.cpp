#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers; // Boþ bir vektör oluþturulur

    numbers.push_back(10);    // Vektörün sonuna 10 eklenir
    numbers.push_back(20);    // Vektörün sonuna 20 eklenir
    numbers.push_back(30);    // Vektörün sonuna 30 eklenir

    // Vektörün elemanlarýný ekrana yazdýrma
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
