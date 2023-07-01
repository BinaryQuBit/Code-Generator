#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 10;

    delete ptr;
    int value = *ptr;

    return 0;
}
