#include <iostream>

void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}

void updateNumber(int& num) {
    num = 10;
}

int main() {
    int number = 5;
    updateNumber(number);
    printNumber(number);
    return 0;
}

