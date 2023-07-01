#include <iostream>
#include <stdexcept>

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::runtime_error("Divide by zero error");
    }
    return numerator / denominator;
}

int main() {
    int result = divide(10, 0);
    std::cout << result << std::endl;
    return 0;
}
