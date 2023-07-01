#include <iostream>
#include <cstdlib>

class MyException : public std::exception {
public:
    virtual const char* what() const noexcept {
        return "Custom exception occurred";
    }
};

void throwError() {
    throw MyException();
}

int main() {
    try {
        throwError();
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
