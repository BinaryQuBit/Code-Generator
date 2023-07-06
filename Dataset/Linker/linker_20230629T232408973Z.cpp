#include <iostream>

class MyClass {
public:
    void operator()() { std::cout << "Function call operator" << std::endl; }
};

int main() {
    MyClass obj;
    obj();  // Error: Missing function call operator overload
    return 0;
}
