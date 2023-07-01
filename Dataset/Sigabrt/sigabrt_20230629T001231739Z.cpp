#include <iostream>
#include <string>

int main() {
    std::string str = "hello";
    char& invalidRef = str[10];
    invalidRef = '!';
    std::cout << str << std::endl;
    return 0;
}
