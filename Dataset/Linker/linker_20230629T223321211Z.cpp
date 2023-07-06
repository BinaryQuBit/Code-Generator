// File: main.cpp
static int myVariable = 42;  // Internal linkage

int main() {
    extern int myVariable;  // Compilation error: declaration of 'myVariable' with 'extern' and initializer follows declaration with internal linkage
    return 0;
}
