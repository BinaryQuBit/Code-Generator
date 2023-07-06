// File: main.cpp
int add(int a, int b);  // Declaration

int add(int a, float b);  // Incorrect prototype with different parameter type will cause a linker error

int main() {
    int result = add(3, 4);  
    return 0;
}