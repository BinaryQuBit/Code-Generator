// main.cpp
#include <iostream>

void globalFunc(int x) { // Definition of global function with int argument
    std::cout << "Integer argument: " << x << std::endl;
}

int main() {
    double num = 3.14;
    globalFunc(num); // Using the global function with a double argument
    return 0;
}
