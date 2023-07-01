#include <iostream>

int main() {
    int* ptr = new int[10];
    delete[] ptr;
    *ptr = 42;
    return 0;
}
