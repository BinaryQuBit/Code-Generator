#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

void throwCustomException() {
    throw CustomException();
}

int main() {
    try {
        throwCustomException();
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
