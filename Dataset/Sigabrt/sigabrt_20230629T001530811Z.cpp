#include <iostream>

int main() {
    int* ptr = new int;
    delete ptr;
    *ptr = 42;
    return 0;
}
