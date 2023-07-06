// File.cpp
#include <iostream>

const int myVar = 10; // Definition of static const variable

int main() {
    std::cout << myVar << std::endl;
    return 0;
}

// Another definition of the static const variable
const int myVar = 20;

// When compiling and linking the above file, you will get a linker error
// indicating multiple definitions of 'myVar'.

