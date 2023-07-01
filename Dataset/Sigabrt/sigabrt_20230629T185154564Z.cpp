#include <iostream>
#include <cstdlib>

int main() {
    int* arr = new int[-1];

    delete[] arr;

    return 0;
}
