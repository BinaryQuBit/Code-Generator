class MyClass {
public:
    MyClass(int) {}       // Conversion constructor declaration
};

void MyClass::MyClass(float) {  // Incompatible type in implementation
    // Conversion constructor implementation
}

int main() {
MyClass obj = 42;     // Attempting to use the conversion constructor
    return 0;
}
