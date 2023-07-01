#include <iostream>
#include <stdexcept>

int main() {
    int* arr = nullptr;
    try {
        delete[] arr;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    return 0;
}