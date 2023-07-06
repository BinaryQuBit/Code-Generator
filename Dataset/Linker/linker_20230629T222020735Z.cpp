// multiple_definitions_variable.cpp
#include <iostream>

// Definition of variable
int multipleDefinitionsVariable = 5;

// Another definition of the same variable
int multipleDefinitionsVariable = 10;

int main() {
    // Use of the variable with multiple definitions
    std::cout << multipleDefinitionsVariable << std::endl;
    return 0;
}

