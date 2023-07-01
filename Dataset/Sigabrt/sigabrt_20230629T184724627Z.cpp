#include <iostream>
#include <string>

void divideByZero(int numerator, int denominator) {
    if (denominator == 0) {
        std::string* strPtr = nullptr;
        *strPtr = "Division error";
    } else {
        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    }
}

int main() {
    int num = 10;
    int denom = 0;

    divideByZero(num, denom);

    return 0;
}
