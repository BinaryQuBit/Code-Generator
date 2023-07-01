#include <iostream>

int main() {
    int size = -1;
    int* ptr = new int[size];
    delete[] ptr;
    return 0;
}
