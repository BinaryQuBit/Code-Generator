// incompatible_types_function.cpp
#include <iostream>

// Declaration of function with incompatible types
void incompatibleFunction(int number);

int main() {
    // Call to the function with incompatible types
    incompatibleFunction("Hello");
    return 0;
}

// Definition of the function
void incompatibleFunction(int number) {
    std::cout << "Number: " << number << std::endl;
}

