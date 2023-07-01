#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("Exception thrown");
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
