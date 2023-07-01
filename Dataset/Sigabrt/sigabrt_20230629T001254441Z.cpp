#include <iostream>

int main() {
    int* pointer = new int;
    delete pointer;
    *pointer = 42;
    return 0;
}
