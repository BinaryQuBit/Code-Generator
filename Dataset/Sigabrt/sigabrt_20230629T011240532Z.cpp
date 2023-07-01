#include <iostream>
#include <cstring>

int main() {
    char* str = new char[5];
    std::strcpy(str, "Hello, world!");
    delete[] str;
    return 0;
}