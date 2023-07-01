#include <iostream>
#include <list>

int main() {
    std::list<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);

    std::list<int>::iterator it = nums.begin();
    --it;
    
    *it = 5;

    return 0;
}
