// Unresolved external symbol

// In this code, we reference a function called "divide" that is not defined anywhere,
// resulting in an unresolved external symbol error when linking.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function declaration
int divide(int a, int b);

int main()
{
    int result = divide(10, 2); // Calling the divide function
    std::cout << "Result: " << result << std::endl;

    return 0;
}
