#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    nums.reserve(5);

    nums.at(10) = 5;

    return 0;
}
