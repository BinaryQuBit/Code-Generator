// File: main.cpp
extern "C" void myFunction();  // Expected C-style name mangling

int main() {
    myFunction();  // Linker error: unresolved external symbol "void __cdecl myFunction(void)"
    return 0;
}
