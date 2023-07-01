#include <iostream>
#include <stdexcept>

void divideByZero() {
    int x = 10;
    int y = 0;
    if (y == 0) {
        throw std::logic_error("Divide by zero error");
    }
    int result = x / y;
}

int main() {
    try {
        divideByZero();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
