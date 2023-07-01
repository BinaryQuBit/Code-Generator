#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4};
    int index = -1;
    auto it = std::find(numbers.begin(), numbers.end(), index);
    return 0;
}
