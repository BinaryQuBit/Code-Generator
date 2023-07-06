// main.cpp
#include <iostream>

template <typename T>
class MyClass {
public:
    void myFunction();
};

template <typename T>
void MyClass<T>::myFunction() {
    std::cout << "MyClass::myFunction()" << std::endl;
}

int main() {
    MyClass<int> obj;
    obj.myFunction(); // Error: Undefined reference to `MyClass<int>::myFunction()`
    return 0;
}
