class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass& operator=(const MyClass& other) {
        myValue = other.myValue;
        return *this;
    }
private:
    int myValue;
};

class DerivedClass : public MyClass {
public:
    DerivedClass(int value) : MyClass(value) {}
};

int main() {
    MyClass baseObj(10);
    DerivedClass derivedObj(20);
    baseObj = derivedObj; // Error: Incompatible types for copy assignment operator
    return 0;
}
