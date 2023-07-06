// Linker error due to typo in function or variable name

// In this code, we have a typo in the function name "printMessage",
// resulting in a linker error due to an unresolved external symbol.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

void printMessage()
{
    std::cout << "Hello, World!" << std::endl;
}

int main()
{
    printMesage(); // Typo: should be printMessage()

    return 0;
}
