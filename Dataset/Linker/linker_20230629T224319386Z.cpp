// main.cpp
#include <iostream>

template <typename T>
class MyClass {
public:
    class InnerClass; // Declared but not defined
};

template <typename T>
class MyClass<T>::InnerClass {
    // ...
};

int main() {
    MyClass<int>::InnerClass obj; // Error: Undefined reference to `MyClass<int>::InnerClass`
    return 0;
}

