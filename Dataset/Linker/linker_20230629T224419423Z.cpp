// main.cpp
#include <iostream>

template <typename T>
class MyClassB; // Forward declaration

template <typename T>
class MyClassA {
public:
    MyClassB<T> b;
};

template <typename T>
class MyClassB {
public:
    MyClassA<T> a;
};
// Error: Circular dependency between `MyClassA` and `MyClassB`
int main() {
    MyClassA<int> obj;
    return 0;
}
