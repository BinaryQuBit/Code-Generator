#include <iostream>

extern void someFunction();  // Declaration without definition

int main() {
    someFunction();  // Error: Linker cannot find the definition
    return 0;
}
