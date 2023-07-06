// File: main.cpp
extern int foo();  // Declaration

int main() {
    int result = foo();  // No definition for 'foo' will cause a linker error
    return 0;
}

