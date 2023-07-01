#include <iostream>
#include <sstream>

int main() {
    std::string str = "Hello, world!";
    std::istringstream iss(str);
    int value;
    iss >> value;
    return 0;
}