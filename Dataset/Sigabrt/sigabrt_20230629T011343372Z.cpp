#include <iostream>
#include <cstdlib>

int main() {
    int* arr = new int[5];
    std::cout << std::abs(arr[0]);
    delete[] arr;
    return 0;
}