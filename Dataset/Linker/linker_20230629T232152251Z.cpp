#include <iostream>

class MyClass {
public:
    MyClass(int value) : data(new int(value)) {}
    MyClass& operator=(MyClass&& other) {
        data = other.data;
        other.data = nullptr;
        return *this;
    }
    
private:
    int* data;
};

int main() {
    MyClass obj1(42);
    MyClass obj2(24);
    obj2 = std::move(obj1);  // Error: Incompatible types for move assignment operator
    return 0;
}
