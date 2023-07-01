#include <iostream>

int main() {
    int* ptr = new int[5];
    delete ptr;
    ptr[0] = 10;
    return 0;
}
