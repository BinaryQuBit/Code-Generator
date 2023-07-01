#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    int* ptr = &numbers[5];
    std::cout << *ptr << std::endl;
    return 0;
}
