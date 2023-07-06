// File.cpp
#include <iostream>

enum MyEnum; // Declaration of enum

int main() {
    MyEnum myValue = VALUE1;
    std::cout << myValue << std::endl;
    return 0;
}

// No definition for 'MyEnum' is provided in any source file.

// When compiling and linking the above file, you will get an undefined
// reference to 'MyEnum' linker error.

