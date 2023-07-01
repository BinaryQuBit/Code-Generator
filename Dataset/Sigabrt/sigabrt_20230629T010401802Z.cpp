#include <iostream>
#include <stdexcept>
#include <vector>

void printVector(const std::vector<int>& numbers, int index) {
    try {
        std::cout << numbers.at(index) << std::endl;
    } catch (std::exception& e) {
        throw std::logic_error("Invalid index");
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    try {
        printVector(numbers, 5);
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
