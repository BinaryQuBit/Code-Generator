// Missing main() function

// This program does not have a main() function,
// which is the entry point for a C++ program.
// As a result, the linker will throw an error.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

void foo()
{
    std::cout << "Hello, World!" << std::endl;
}

