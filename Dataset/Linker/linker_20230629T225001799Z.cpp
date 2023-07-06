class MyClass {
public:
    operator int() { return 42; } // Conversion operator definition 1
    operator int() { return 24; } // Conversion operator definition 2
};

int main() {
    MyClass obj;
    int value = obj;
    return 0;
}

