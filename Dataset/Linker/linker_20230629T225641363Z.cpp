// main.cpp
#include <iostream>

class MyClass {
public:
    static void staticFunc() { // Definition of static member function
        std::cout << "Hello, static function!" << std::endl;
    }
};

void MyClass::staticFunc() { // Another definition of the static member function
    std::cout << "Hello again, static function!" << std::endl;
}

int main() {
    MyClass::staticFunc(); // Using the static member function
    return 0;
}
