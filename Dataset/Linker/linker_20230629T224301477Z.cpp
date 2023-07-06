// main.cpp
#include <iostream>

template <typename T>
class MyClass {
public:
    void myFunction();
};

template <typename T>
void MyClass<T>::myFunction() {
    std::cout << "Function definition 1\n";
}

template <typename T>
void MyClass<T>::myFunction() { // Duplicate definition
    std::cout << "Function definition 2\n";
}

int main() {
    MyClass<int> obj;
    obj.myFunction(); // Error: Multiple definitions of `MyClass<int>::myFunction()`
    return 0;
}

