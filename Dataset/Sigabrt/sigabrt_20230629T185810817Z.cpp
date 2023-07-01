#include <iostream>

int main() {
    int size = 5;

    int* arr = new int[size];

    for (int i = 0; i <= size; i++) {
        arr[i] = i;
    }

    delete[] arr;

    return 0;
}
