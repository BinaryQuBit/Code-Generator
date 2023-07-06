// main.cpp
#include <iostream>

extern int globalVar; // Declaration without definition

int main() {
    std::cout << globalVar << std::endl; // Using the undefined global variable
    return 0;
}
