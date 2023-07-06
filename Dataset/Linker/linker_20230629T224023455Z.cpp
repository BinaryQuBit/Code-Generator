// File1.cpp
#include <iostream>

class MyClass {
public:
    int myVar; // Declaration of member variable
};

int main() {
    MyClass obj;
    obj.myVar = 10; // Accessing member variable
    std::cout << obj.myVar << std::endl;
    return 0;
}

// No definition for 'myVar' is provided.

// When compiling and linking the above file, you will get an undefined
// reference to 'MyClass::myVar' linker error.
