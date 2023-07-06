#include <iostream>

class Example {
public:
    static int count; // Declaration of static member variable
};

int Example::count = 10; // Another definition of static member variable

int main() {
    Example e;
    e.count = 7;
    std::cout << e.count << std::endl;
    return 0;
}
