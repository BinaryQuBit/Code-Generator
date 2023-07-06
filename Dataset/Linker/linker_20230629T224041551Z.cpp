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

// Another definition of the member variable
int MyClass::myVar = 20;

// When compiling and linking the above file, you will get a linker error
// indicating multiple definitions of 'MyClass::myVar'.

