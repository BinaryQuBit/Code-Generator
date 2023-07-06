// File.cpp
#include <iostream>

namespace MyNamespace {
    void myFunction() {
        std::cout << "Hello from MyNamespace!" << std::endl;
    }
}

int main() {
    MyNamespace::myFunction();
    return 0;
}

// Another definition of the namespace
namespace MyNamespace {
    void anotherFunction() {
        std::cout << "Another function in MyNamespace!" << std::endl;
    }
}

// When compiling and linking the above file, you will get a linker error
// indicating multiple definitions of 'MyNamespace'.
