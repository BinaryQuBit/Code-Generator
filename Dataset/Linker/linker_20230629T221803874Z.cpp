// Incompatible library version

// In this code, we are linking against a library with an incompatible version,
// resulting in a linker error due to mismatched symbols or dependencies.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

extern "C" void libraryFunction(); // Declaration of library function

int main()
{
    libraryFunction(); // Calling the library function
    return 0;
}
