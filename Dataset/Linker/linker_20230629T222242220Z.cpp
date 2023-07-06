#include <iostream>

class Example {
public:
    static int count; // Declaration of static member variable
};

int Example::count = 0; // Definition of static member variable

int main() {
    Example e;
    e.count = 5;
    std::cout << e.count << std::endl;
    return 0;
}
