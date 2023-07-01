#include <iostream>

int main() {
    int* arr = new int[5];
    delete[] arr;
    std::cout << arr[0];
    return 0;
}