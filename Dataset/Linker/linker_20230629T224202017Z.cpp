// main.cpp
#include <iostream>

struct MyStruct; // Forward declaration

void printData(MyStruct* obj);

struct MyStruct {
    int data;
};

int main() {
    MyStruct obj; // Error: Incomplete type for `MyStruct`
    obj.data = 42;
    printData(&obj);
    return 0;
}

void printData(MyStruct* obj) {
    std::cout << obj->data << std::endl;
}
