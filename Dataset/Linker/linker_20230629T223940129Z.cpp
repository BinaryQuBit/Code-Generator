// File.cpp
#include <iostream>

namespace MyNamespace; // Declaration of namespace

int main() {
    MyNamespace::myFunction();
    return 0;
}

// No definition for 'MyNamespace' is provided in any source file.

// When compiling and linking the above file, you will get an undefined
// reference to 'MyNamespace' linker error.
