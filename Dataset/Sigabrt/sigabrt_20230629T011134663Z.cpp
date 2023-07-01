#include <iostream>
#include <stdexcept>

int main() {
    int x = 10;
    int y = 0;
    try {
        int result = x / y;
        std::cout << result;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    return 0;
}