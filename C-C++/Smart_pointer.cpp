#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int value) : data(value) {}
    void print() { std::cout << "Value: " << data << std::endl; }

private:
    int data;
};

int main() {
    // std::unique_ptr örneği
    std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>(42);
    uniquePtr->print();

    // std::shared_ptr örneği
    std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>(10);
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1; // paylaşılan sahiplik
    sharedPtr1->print();
    sharedPtr2->print();

    return 0;
}