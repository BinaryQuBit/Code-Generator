// Undefined reference to function

// In this code, we declare a function called "multiply" but do not provide its definition,
// resulting in an undefined reference error when linking.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function declaration
int multiply(int a, int b);

int main()
{
    int result = multiply(5, 3); // Calling the multiply function
    std::cout << "Result: " << result << std::endl;

    return 0;
}
