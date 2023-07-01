#include <iostream>

int main() {
    int* ptr = nullptr;

    try {
        int value = *ptr;
    } catch (...) {
        std::cout << "Exception occurred" << std::endl;
    }

    return 0;
}
