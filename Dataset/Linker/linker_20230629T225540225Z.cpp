// main.cpp
#include <iostream>

class MyClass {
public:
    static int staticVar; // Declaration without definition
};

int main() {
    std::cout << MyClass::staticVar << std::endl; // Using the undefined static member variable
    return 0;
}
