// main.cpp
#include <iostream>

extern "C" {
    void foo(); // Declaration of a function with C linkage
}

int main() {
    foo(); // Calling the function with C linkage
    return 0;
}

// library.cpp
#include <iostream>

void foo() {
    std::cout << "Hello from the library!" << std::endl;
}
