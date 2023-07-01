#include <iostream>

int recursiveFunc(int n) {
    if (n == 0)
        return 1;
    else
        return n * recursiveFunc(n - 1);
}

int main() {
    recursiveFunc(5);
    return 0;
}
