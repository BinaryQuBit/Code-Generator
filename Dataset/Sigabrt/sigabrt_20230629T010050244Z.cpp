#include <iostream>
#include <stdexcept>

void myFunction() {
    throw std::logic_error("Custom exception");
}

int main() {
    try {
        myFunction();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
