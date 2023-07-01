#include <iostream>

int main() {
    int* ptr = new int[10];
    delete[] ptr;
    delete[] ptr;
    return 0;
}
