// main.cpp
#include <iostream>

struct alignas(16) MyStruct { // Specifying alignment requirement
    int x;
};

int main() {
    MyStruct obj;
    obj.x = 10;
    std::cout << "x: " << obj.x << std::endl;
    return 0;
}
