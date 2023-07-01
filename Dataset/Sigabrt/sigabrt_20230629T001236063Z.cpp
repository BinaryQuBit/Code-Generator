#include <iostream>

int main() {
    int* arr = new int[10];
    delete[] arr;
    delete[] arr;
    return 0;
}
