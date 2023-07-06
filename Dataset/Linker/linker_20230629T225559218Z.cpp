// main.cpp
#include <iostream>

class MyClass {
public:
    static int staticVar; // Declaration of static member variable
};

int MyClass::staticVar = 10; // Definition of static member variable

int main() {
    std::cout << MyClass::staticVar << std::endl; // Using the static member variable
    return 0;
}
