#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3};
    std::vector<int>::iterator it = std::find(numbers.begin(), numbers.end(), 4);
    if (it != numbers.end()) {
        std::cout << "Found!" << std::endl;
    }
    return 0;
}
