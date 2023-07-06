// main.cpp
#include <iostream>

class MyClass {
public:
    static void staticFunc(); // Declaration without definition
};

int main() {
    MyClass::staticFunc(); // Using the undefined static member function
    return 0;
}
