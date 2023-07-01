#include <iostream>
#include <cstring>

int main() {
    char str[] = "Hello, world!";
    char* ptr = new char[10];

    strcpy(ptr, str);

    delete[] ptr;

    return 0;
}
