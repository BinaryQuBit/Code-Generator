#include <iostream>
#include <cstring>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char* result = strcat(str1, str2);
    std::cout << result << std::endl;
    return 0;
}
