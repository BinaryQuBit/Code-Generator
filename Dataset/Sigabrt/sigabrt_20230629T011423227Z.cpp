#include <iostream>
#include <stdexcept>

int main() {
    int* ptr = nullptr;
    try {
        int value = *ptr;
        std::cout << value;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    return 0;
}