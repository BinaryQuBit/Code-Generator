// main.cpp
#include <iostream>

void globalFunc() { // Definition of global function
    std::cout << "Hello, global function!" << std::endl;
}

void globalFunc() { // Another definition of the global function
    std::cout << "Hello again, global function!" << std::endl;
}

int main() {
    globalFunc(); // Using the global function
    return 0;
}
