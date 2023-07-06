#include <iostream>

struct MyStruct {
    int value;
};

int main() {
    void* memory = malloc(sizeof(MyStruct));
    MyStruct* obj = new (memory) MyStruct;  // Error: Incorrect use of placement new operator
    obj->value = 42;
    std::cout << obj->value << std::endl;
    free(memory);
    return 0;
}
