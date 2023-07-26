#include <iostream>

// Toplama fonksiyonu
int toplama(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main() {
    int x, y;
    
    std::cout << "Birinci sayiyi girin: ";
    std::cin >> x;
    
    std::cout << "Ikinci sayiyi girin: ";
    std::cin >> y;
    
    int sonuc = toplama(x, y);
    
    std::cout << "Sonuc: " << sonuc << std::endl;
    
    return 0;
}
