class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass& operator=(const MyClass& other) {
        myValue = other.myValue;
        return *this;
    }
    MyClass& operator=(const MyClass& other) {
        myValue = other.myValue;
        return *this;
    } // Error: Multiple definitions of copy assignment operator
private:
    int myValue;
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    obj2 = obj1;
    return 0;
}
