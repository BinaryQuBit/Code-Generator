#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    int index = 2;
    numbers.at(index) = 5;
    return 0;
}
