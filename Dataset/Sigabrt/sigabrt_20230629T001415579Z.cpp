#include <iostream>

int main() {
    int value = 10;
    int& ref = value;
    int* ptr = &ref;
    delete ptr;
    return 0;
}
