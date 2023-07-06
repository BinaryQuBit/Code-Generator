#include <iostream>

class MyClass {
public:
    void foo() {}
    void bar() const {}

    void callFunctions() {
        foo();    // Error: Attempting to call a non-const member function from a const member function
        bar();
    }
};

int main() {
    const MyClass obj;
    obj.bar();   // Okay
    return 0;
}
