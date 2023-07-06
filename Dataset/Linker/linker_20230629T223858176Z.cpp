// File.cpp
#include <iostream>

enum MyEnum { VALUE1, VALUE2 }; // Definition of enum

int main() {
    MyEnum myValue = VALUE1;
    std::cout << myValue << std::endl;
    return 0;
}

// Another definition of the enum
enum MyEnum { VALUE3, VALUE4 };

// When compiling and linking the above file, you will get a linker error
// indicating multiple definitions of 'MyEnum'.
