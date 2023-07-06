// Linker error due to missing library

// In this code, we use a function from the math library without linking against it,
// resulting in a linker error due to unresolved symbols.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>
#include <cmath>

int main()
{
    double result = sqrt(25.0); // Using sqrt() function from the math library
    std::cout << "Square root: " << result << std::endl;

    return 0;
}


