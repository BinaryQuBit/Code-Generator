#include <iostream>

class Example {
public:
    static void staticFunc(); // Declaration of static member function
};

int main() {
    Example::staticFunc(); // Calling static member function
    return 0;
}
