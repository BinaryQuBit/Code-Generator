#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(5, 10);
    numbers.resize(-10);
    return 0;
}
