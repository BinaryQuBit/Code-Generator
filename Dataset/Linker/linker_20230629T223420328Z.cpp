// File: main.cpp
extern void myFunction();  // Declaration without import/export attribute

int main() {
    myFunction();  // Linker error: unresolved external symbol myFunction
    return 0;
}

