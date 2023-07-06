class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass(const MyClass& other) : myValue(other.myValue) {}
    MyClass(const MyClass& other) : myValue(other.myValue) {} // Error: Multiple definitions of copy constructor
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1;
    return 0;
}
