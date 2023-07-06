// multiple_definitions.cpp
#include <iostream>

// Definition of function
void multipleDefinitions() {
    std::cout << "Hello, world!" << std::endl;
}

// Another definition of the same function
void multipleDefinitions() {
    std::cout << "Greetings!" << std::endl;
}

int main() {
    // Call to the function with multiple definitions
    multipleDefinitions();
    return 0;
}
