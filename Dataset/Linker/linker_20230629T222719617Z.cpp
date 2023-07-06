#include <iostream>

template <typename T>
class Example { // Definition of template class
public:
    T value;
};

template <typename T>
class Example; // Another definition of template class

int main() {
    Example<int> ex;
    ex.value = 5;
    std::cout << ex.value << std::endl;
    return 0;
}
