#include <iostream>

int main() {
    int* ptr = new int[5];
    
    delete[] ptr;
    
    int value = ptr[0];
    
    return 0;
}
