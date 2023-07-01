#include <iostream>

int main() {
    int* arr = new int[100];
    delete[] arr;
    
    int element = arr[0];
    
    return 0;
}
