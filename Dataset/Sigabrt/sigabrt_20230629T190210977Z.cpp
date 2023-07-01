#include <iostream>

int main() {
    int size = -5;

    int* arr = new int[size];

    delete[] arr;

    return 0;
}
