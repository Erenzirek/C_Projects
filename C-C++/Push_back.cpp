#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers; // Bo� bir vekt�r olu�turulur

    numbers.push_back(10);    // Vekt�r�n sonuna 10 eklenir
    numbers.push_back(20);    // Vekt�r�n sonuna 20 eklenir
    numbers.push_back(30);    // Vekt�r�n sonuna 30 eklenir

    // Vekt�r�n elemanlar�n� ekrana yazd�rma
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
