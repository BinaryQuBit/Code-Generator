#include <iostream>

int main() {
    int* ptr = new int[5];
    delete[] ptr;

    int value = *ptr;

    return 0;
}
