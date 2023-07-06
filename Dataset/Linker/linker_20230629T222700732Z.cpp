#include <iostream>

inline int add(int a, int b); // Declaration of inline function

int main() {
    int result = add(5, 3); // Calling the inline function
    std::cout << result << std::endl;
    return 0;
}

