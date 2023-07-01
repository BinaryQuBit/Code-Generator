#include <iostream>

int main() {
    int* ptr = new int;
    *ptr = 5;
    delete ptr;
    delete ptr;
    return 0;
}
