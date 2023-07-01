#include <iostream>

int recursiveFunction(int n) {
    if (n == 0) {
        return 1;
    }
    return n * recursiveFunction(n - 1);
}

int main() {
    recursiveFunction(10000);
    return 0;
}
