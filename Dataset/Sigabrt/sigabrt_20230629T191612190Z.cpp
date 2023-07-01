#include <iostream>

int main() {
    int* ptr = new int;
    delete ptr;

    int value = *ptr;

    return 0;
}
