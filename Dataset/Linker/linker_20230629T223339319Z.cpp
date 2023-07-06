// File: main.cpp
const int myVariable = 42;  // Definition

int main() {
    extern const int myVariable;  // Compilation error: redeclaration of 'const int myVariable' differs in 'extern'
    return 0;
}

