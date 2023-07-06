class MyClass {
public:
    void nonVirtualFunction(int);  // Function declaration

};

void MyClass::nonVirtualFunction(float) {  // Incompatible type in implementation
    // Function implementation
}

int main() {
    MyClass obj;
    obj.nonVirtualFunction(42);  // Calling the non-virtual function
    return 0;
}
