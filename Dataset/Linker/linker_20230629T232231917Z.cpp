#include <iostream>

#define MAX_VALUE 100
#define MAX_VALUE 200  // Error: Conflicting macro definitions

int main() {
    std::cout << MAX_VALUE << std::endl;
    return 0;
}
