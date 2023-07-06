#include <iostream>

class Base {
public:
    virtual void foo() {}
};

class Derived : public virtual Base {};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;
    basePtr->foo();  // Error: Ambiguous function call due to incorrect use of virtual inheritance
    return 0;
}
