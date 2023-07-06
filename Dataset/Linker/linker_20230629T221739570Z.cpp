// Incorrect calling convention

// In this code, we have a mismatch in the calling convention between the function declaration and definition,
// resulting in a linker error due to incompatible function signatures.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function declaration with __stdcall calling convention
extern "C" int __stdcall multiply(int a, int b);

int main()
{
    int result = multiply(5, 3); // Calling the multiply function
    std::cout << "Result: " << result << std::endl;

    return 0;
}

// Function definition with default calling convention
int multiply(int a, int b)
{
    return a * b;
}

