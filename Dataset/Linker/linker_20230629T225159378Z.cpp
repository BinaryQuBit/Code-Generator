// main.cpp
#include <iostream>

class Base {
public:
    virtual void foo() {
        std::cout << "Base::foo()" << std::endl;
    }
};

class Derived : public Base {
public:
    void foo() final { // Incorrect use of final specifier
        std::cout << "Derived::foo()" << std::endl;
    }
};

int main() {
    Derived d;
    d.foo();
    return 0;
}
