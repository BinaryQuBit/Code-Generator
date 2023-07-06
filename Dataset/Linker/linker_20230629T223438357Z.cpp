// File: main.cpp
namespace MyNamespace {
    int myVariable = 42;
}

int main() {
    int myVariable = MyNamespace::myVariable;  // Compilation error: 'myVariable' was not declared in this scope
    return 0;
}
