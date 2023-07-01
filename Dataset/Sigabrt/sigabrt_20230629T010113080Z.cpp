#include <iostream>
#include <cassert>

void divideByZero() {
    int x = 10;
    int y = 0;
    assert(y != 0);
    int result = x / y;
}

int main() {
    divideByZero();
    return 0;
}
