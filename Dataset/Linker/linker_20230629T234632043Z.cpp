#include <iostream>

int main() {
    int x = 10;
    int* ptr = &x;
    *ptr = 20;
    std::cout << "Value of x: " << x << std::endl;
    return 0;
}