class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass(MyClass&& other) noexcept : myValue(other.myValue) {}
    MyClass(MyClass&& other) noexcept : myValue(other.myValue) {} // Error: Multiple definitions of move constructor
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = std::move(obj1);
    return 0;
}
