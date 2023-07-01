#include <iostream>

void divide(int a, int b) {
    int result = a / b;
    std::cout << "Result: " << result << std::endl;
}

int main() {
    divide(10, 0);
    return 0;
}

