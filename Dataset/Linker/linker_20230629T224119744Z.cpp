// main.cpp
#include <iostream>

class MyClass {
public:
    void myFunction(); // Declared but not defined
};

int main() {
    MyClass obj;
    obj.myFunction(); // Error: Undefined reference to `MyClass::myFunction()`
    return 0;
}

void MyClass::myFunction() {
    std::cout << "MyClass::myFunction()" << std::endl;
}
