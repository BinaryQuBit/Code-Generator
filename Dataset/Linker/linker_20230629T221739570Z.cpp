#include <iostream>

class MyClass {
public:
    void displayMessage() {
        std::cout << "Hello, world!" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.displayMessage();
    return 0;
}
