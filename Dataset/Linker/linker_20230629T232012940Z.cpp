class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    // No explicit declaration or definition of the move constructor
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1); // Error: Undefined reference to move constructor
    return 0;
}
