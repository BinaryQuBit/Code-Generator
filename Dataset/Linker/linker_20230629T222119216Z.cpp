// incompatible_types_variable.cpp
#include <iostream>

// Declaration of variable with incompatible types
extern int incompatibleVariable;

int main() {
    // Use of the variable with incompatible types
    std::cout << incompatibleVariable << std::endl;
    return 0;
}

// Definition of the variable
int incompatibleVariable = "Hello";
