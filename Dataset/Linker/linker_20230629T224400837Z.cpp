// main.cpp
#include <iostream>

template <typename T>
class MyClass {
public:
    void myFunction() {
        std::cout << obj.data << std::endl; // Error: Incomplete type for `MyStruct`
    }
    
    struct MyStruct {
        T data;
    };
};

int main() {
    MyClass<int> obj;
    obj.myFunction(); // Error: Incomplete type for `MyStruct`
    return 0;
}

