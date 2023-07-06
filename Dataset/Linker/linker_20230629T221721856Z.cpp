// Typo in function or variable name

// In this code, we have a typo in the function name "printMessage",
// resulting in a linker error because the function cannot be found.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function declaration
void printMesage(); // Typo: should be "printMessage"

int main()
{
    printMessage(); // Calling the printMessage function
    return 0;
}

// Function definition
void printMessage()
{
    std::cout << "Hello, world!" << std::endl;
}
