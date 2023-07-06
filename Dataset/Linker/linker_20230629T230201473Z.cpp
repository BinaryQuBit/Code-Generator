class MyClass {
public:
    MyClass(int) {}       // Conversion constructor
    MyClass(float) {}     // Second conversion constructor
};

int main() {
    MyClass obj = 42;     // Ambiguity between the conversion constructors
    return 0;
}

