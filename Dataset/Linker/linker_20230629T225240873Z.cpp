// main.cpp
#include <iostream>

class MyClass {
public:
    MyClass() = delete; // Deleting the default constructor
};

int main() {
    MyClass obj; // Creating an instance of MyClass
    return 0;
}
