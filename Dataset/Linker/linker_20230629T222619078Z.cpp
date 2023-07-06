#include <iostream>

template <typename T>
void printValue(T value) { // Definition of template function
    std::cout << value << std::endl;
}

template <typename T>
void printValue(T value); // Another definition of template function

int main() {
    printValue(5); // Calling the template function
    return 0;
}
