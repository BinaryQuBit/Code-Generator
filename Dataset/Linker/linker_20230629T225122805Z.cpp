// main.cpp
#include <iostream>

class Base {
public:
    void foo() {
        std::cout << "Base::foo()" << std::endl;
    }
};

class Derived : public Base {
public:
    virtual void foo() {
        std::cout << "Derived::foo()" << std::endl;
    }
};

int main() {
    Derived d;
    d.foo();
    return 0;
}
