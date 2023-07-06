class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass& operator=(MyClass&& other) noexcept {
        myValue = other.myValue;
        return *this;
    }
    MyClass& operator=(MyClass&& other) noexcept {
        myValue = other.myValue;
        return *this;
    } // Error: Multiple definitions of move assignment operator
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    obj2 = std::move(obj1);
    return 0;
}
