// undefined_variable.cpp
#include <iostream>

// Declaration of variable
extern int undefinedVariable;

int main() {
    // Use of undefined variable
    std::cout << undefinedVariable << std::endl;
    return 0;
}
