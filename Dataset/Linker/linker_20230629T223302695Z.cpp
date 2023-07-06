// File: main.cpp
extern int myVariable;  // Declaration without definition

int main() {
    myVariable = 42;  // Linker error: unresolved external symbol myVariable
    return 0;
}

