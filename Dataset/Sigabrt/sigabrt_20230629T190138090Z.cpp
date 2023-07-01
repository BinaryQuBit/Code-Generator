#include <iostream>
#include <stdexcept>

int recursiveFunction(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + recursiveFunction(n + 1);
}

int main() {
    int result = recursiveFunction(1);

    return 0;
}
