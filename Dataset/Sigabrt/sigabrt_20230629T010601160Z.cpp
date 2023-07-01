#include <iostream>
#include <memory>

void deleteNullptr() {
    int* ptr = nullptr;
    delete ptr;
}

int main() {
    deleteNullptr();
    return 0;
}
