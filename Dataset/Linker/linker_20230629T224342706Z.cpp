// main.cpp
#include <iostream>

template <typename T>
class MyClass {
public:
    class InnerClass {
        // ...
    };
};

template <typename T>
class MyClass<T>::InnerClass { // Duplicate definition
    // ...
};

int main() {
    MyClass<int>::InnerClass obj; // Error: Multiple definitions of `MyClass<int>::InnerClass`
    return 0;
}

