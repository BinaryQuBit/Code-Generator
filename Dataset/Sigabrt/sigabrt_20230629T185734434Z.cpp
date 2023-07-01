#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    int element = nums.at(10);

    return 0;
}
