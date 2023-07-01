#include <iostream>

int main() {
    char* str = new char[5];
    delete[] str;
    str[0] = 'H';
    std::cout << str << std::endl;
    return 0;
}
