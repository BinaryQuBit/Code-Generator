// main.cpp
#include <iostream>

class MyClass {
public:
    void foo(int x = 0); // Declaration with default argument
};

void MyClass::foo(int x) {
    std::cout << "x: " << x << std::endl;
}

int main() {
    MyClass obj;
    obj.foo(); // Calling the function without an argument
    return 0;
}
