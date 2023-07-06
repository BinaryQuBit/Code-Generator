// File.cpp
#include <iostream>

extern const int myVar; // Declaration of static const variable

int main() {
    std::cout << myVar << std::endl;
    return 0;
}

// No definition for 'myVar' is provided in any source file.

// When compiling and linking the above file, you will get an undefined
// reference to 'myVar' linker error.
