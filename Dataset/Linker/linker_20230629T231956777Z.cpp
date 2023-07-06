class MyClass {
public:
    MyClass(int value) : myValue(value) {}
    MyClass(const MyClass& other) : myValue(other.myValue) {}
private:
    int myValue;
};

class DerivedClass : public MyClass {
public:
    DerivedClass(int value) : MyClass(value) {}
};

int main() {
    DerivedClass derivedObj(10);
    MyClass baseObj = derivedObj; // Error: Incompatible types for copy constructor
    return 0;
}
