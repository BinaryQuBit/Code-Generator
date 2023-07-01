#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> numbers;
    try {
        numbers.at(10);
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    return 0;
}