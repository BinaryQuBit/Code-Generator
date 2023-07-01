#include <iostream>

int main() {
    int* ptr = new int;
    delete ptr;
    std::cout << *ptr << std::endl;
    return 0;
}
