// main.cpp
#include <iostream>

extern void globalFunc(); // Declaration without definition

int main() {
    globalFunc(); // Using the undefined global function
    return 0;
}

