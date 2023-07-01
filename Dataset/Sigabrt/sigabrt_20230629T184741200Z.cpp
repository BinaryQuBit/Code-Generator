#include <iostream>

int main() {
    int arraySize = -10;

    int* arr = new int[arraySize];

    delete[] arr;

    return 0;
}
