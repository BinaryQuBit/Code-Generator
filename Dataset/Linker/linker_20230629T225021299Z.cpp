class MyClass {
public:
    operator int() { return 42; } // Conversion operator returning an integer
};

int main() {
    MyClass obj;
    double value = obj; // Assigning conversion result to a double
    return 0;
}
