// main.cpp
#include <iostream>

class MyClass {
public:
    void myFunction() {
        std::cout << "Function definition 1\n";
    }
};

void MyClass::myFunction() { // Duplicate definition
    std::cout << "Function definition 2\n";
}

int main() {
    MyClass obj;
    obj.myFunction(); // Error: Multiple definitions of `MyClass::myFunction()`
    return 0;
}
