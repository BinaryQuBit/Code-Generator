// main.cpp
#include <iostream>

__declspec(dllexport) void foo(); // Export the function

int main() {
    foo(); // Function call
    return 0;
}

// dll.cpp
#include <iostream>

void foo() {
    std::cout << "Hello from the DLL!" << std::endl;
}
