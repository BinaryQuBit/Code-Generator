#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 42;
    delete ptr;
    std::cout << *ptr << std::endl;
    return 0;
}
