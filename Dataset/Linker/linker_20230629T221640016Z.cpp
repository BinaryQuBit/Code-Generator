// Multiple definitions of a function or variable

// In this code, we define the function "add" in multiple source files,
// resulting in a linker error due to conflicting symbol definitions.

// Compiler will compile the individual source files successfully, but linker will throw an error.

// main.cpp
#include <iostream>

// Function declaration
int add(int a, int b);

int main()
{
    int result = add(3, 5); // Calling the add function
    std::cout << "Result: " << result << std::endl;

    return 0;
}

// functions.cpp
int add(int a, int b)
{
    return a + b;
}

// additional_functions.cpp
int add(int a, int b)
{
    return a + b + 10;
}
