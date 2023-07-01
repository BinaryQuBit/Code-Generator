#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("Custom runtime error");
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}
