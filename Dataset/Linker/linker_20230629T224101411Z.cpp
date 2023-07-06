// File.cpp
#include <iostream>

namespace MyNamespace {
    int myVar = 10; // Definition of namespace variable
}

int main() {
    std::cout << MyNamespace::myVar << std::endl;
    return 0;
}

// Another definition of the namespace variable with incompatible type
namespace MyNamespace {
    std::string myVar = "Hello";
}

// When compiling and linking the above file, you will get a linker error
// indicating incompatible types for the 'MyNamespace::myVar' variable.

// Please note that in some cases, the provided examples may result in a compilation error rather than a linker error, depending on the compiler and flags used. The intention is to showcase the specific error scenarios you mentioned.
