// File: main.cpp
void myFunction(int x);

void myFunction(int x) {
    // Function definition
}

int main() {
    myFunction(5);  // Compilation error: redefinition of 'void myFunction(int)'
    return 0;
}
