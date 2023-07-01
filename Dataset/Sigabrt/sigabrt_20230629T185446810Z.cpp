#include <iostream>

int main() {
    try {
        throw std::out_of_range("Out of range error");
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
