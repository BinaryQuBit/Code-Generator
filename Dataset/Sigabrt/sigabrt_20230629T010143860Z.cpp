#include <iostream>
#include <stdexcept>

void recursiveFunction(int n) {
    if (n == 0) {
        throw std::logic_error("Invalid input");
    }
    recursiveFunction(n - 1);
}

int main() {
    try {
        recursiveFunction(5);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
