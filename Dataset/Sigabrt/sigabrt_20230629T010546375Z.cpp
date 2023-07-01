#include <iostream>
#include <cstdlib>

int main() {
    char* buffer = new char[5];
    delete[] buffer;
    delete[] buffer;
    return 0;
}
