#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Vector'un genelleştirilmiş pointer iteratorı
    std::vector<int>::iterator it;

    // Iterator ile vector'ün elemanlarına erişim ve yazdırma
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}