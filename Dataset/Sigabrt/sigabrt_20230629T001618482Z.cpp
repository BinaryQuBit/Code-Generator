#include <iostream>

int main() {
    int* arr = new int[10];
    delete[] arr;
    arr[0] = 42;
    return 0;
}
