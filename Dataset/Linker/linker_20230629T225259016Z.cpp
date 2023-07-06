// main.cpp
#include <iostream>

extern int x; // Declaration of an external variable

int main() {
    std::cout << x << std::endl; // Using the external variable
    return 0;
}

// variable.cpp
int x = 5; // Definition of the external variable

