// Linker error due to duplicate symbol

// In this code, we define the variable "count" twice,
// resulting in a linker error due to a duplicate symbol.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

int count = 0; // First definition of the variable "count"

int main()
{
    int count = 5; // Second definition of the variable "count"
    std::cout << "Count: " << count << std::endl;

    return 0;
}


