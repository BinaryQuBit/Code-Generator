// File: main.cpp
int add(int a, int b);  // Declaration

int main() {
    int result = add(3, 4);  // Missing function definition will cause a linker error
    return 0;
}

