// Unresolved external symbol error

// In this code, we define a function "add" but forget to include its declaration,
// resulting in an unresolved external symbol error when linking.

// Compiler will compile this code successfully, but linker will throw an error.

#include <iostream>

// Function definition
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;

    return 0;
}


