#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    char& ref = str[20];

    ref = 'X';

    return 0;
}
