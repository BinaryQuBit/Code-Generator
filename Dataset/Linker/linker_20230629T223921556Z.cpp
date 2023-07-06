// File.cpp
#include <iostream>

enum MyEnum { VALUE1, VALUE2 }; // Definition of enum

int main() {
    int myValue = static_cast<int>(VALUE1); // Assigning enum value to incompatible type
    std::cout << myValue << std::endl;
    return 0;
}

// When compiling and linking the above file, you will get a linker error
// indicating incompatible types for the assignment of the enum value.

