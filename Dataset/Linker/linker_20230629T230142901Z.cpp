class MyClass {
public:
    MyClass(int) {}  // Conversion constructor
};

int main() {
    MyClass obj = 42;  // Attempting to use the conversion constructor
    return 0;
}
