#include <iostream>

class Example {
public:
    static void staticFunc() { // Definition of static member function
        std::cout << "Static function" << std::endl;
    }
};

void Example::staticFunc() { // Another definition of static member function
    std::cout << "Another static function" << std::endl;
}

int main() {
    Example::staticFunc(); // Calling static member function
    return 0;
}
