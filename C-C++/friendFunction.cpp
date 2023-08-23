#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}

    // friend fonksiyonunu Rectangle sınıfına erişim sağlamak için tanımlıyoruz
    friend void printArea(const Rectangle& rect);
};

// Rectangle sınıfının friend fonksiyonu, sınıfın özel üyelerine erişim sağlar
void printArea(const Rectangle& rect) {
    int area = rect.width * rect.height;
    cout << "Rectangle Area: " << area << endl;
}

int main() {
    Rectangle myRect(5, 10);
    printArea(myRect);

    return 0;
}