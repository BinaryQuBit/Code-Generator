#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::logic_error("Logical error occurred");
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
