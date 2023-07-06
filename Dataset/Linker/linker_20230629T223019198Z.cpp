// File: main.cpp
int add(int a, int b);  // Declaration

int add(int a, int b, int c) {  // Incorrect signature with additional parameter will cause a linker error
    return a + b + c;
}

int main() {
    int result = add(3, 4);  
    return 0;
}
