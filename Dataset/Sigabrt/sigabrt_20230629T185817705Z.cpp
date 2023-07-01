#include <iostream>

int main() {
    int value = 10;
    int* ptr = &value;

    delete ptr;

    return 0;
}
