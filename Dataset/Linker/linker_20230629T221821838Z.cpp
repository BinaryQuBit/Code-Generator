#include <iostream>

namespace MyNamespace {
    int x = 5;
}

int main() {
    std::cout << MyNamespace::x << std::endl;
    return 0;
}
