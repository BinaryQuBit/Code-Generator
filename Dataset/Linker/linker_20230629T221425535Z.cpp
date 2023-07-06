// Redefinition of a function

// In this code, we define the function "multiply" twice,
// which results in a redefinition error when linking.

// Compiler will throw an error during the compilation process.

#include <iostream>

int multiply(int a, int b)
{
    return a * b;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int result = multiply(5, 3);
    std::cout << "Result: " << result << std::endl;

    return 0;
}


