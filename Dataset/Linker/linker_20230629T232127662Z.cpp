#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(new int(value)) {}
    MyClass(MyClass&& other) : data(other.data) {
        other.data = nullptr;
    }
    
private:
    int* data;
};

int main() {
    MyClass obj1(42);
    MyClass obj2(std::move(obj1));  // Error: Incompatible types for move constructor
    return 0;
}
