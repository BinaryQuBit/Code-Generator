#include <iostream>
#include <cassert>

int main() {
    int* ptr = new int(10);
    delete ptr;
    assert(*ptr == 10);
    return 0;
}