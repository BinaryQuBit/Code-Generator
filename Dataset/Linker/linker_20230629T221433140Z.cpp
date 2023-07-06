// Undefined reference to a function

// In this code, we declare the function "greet" but do not provide its definition,
// resulting in an undefined reference error when linking.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function declaration
void greet();

int main()
{
    // Function call
    greet();

    return 0;
}


