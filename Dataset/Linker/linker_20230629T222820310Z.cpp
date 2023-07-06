// File: inline.cpp
inline int add(int a, int b) {
    return a + b;
}

// File: main.cpp
inline int add(int a, int b);  // Declaration

int main() {
    int result = add(3, 4);  // Multiple definitions of 'add' will cause a linker error
    return 0;
}
