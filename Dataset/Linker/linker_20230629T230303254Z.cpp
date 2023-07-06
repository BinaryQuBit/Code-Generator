class MyClass {
public:
    void nonVirtualFunction() {}   // First definition
    void nonVirtualFunction() {}   // Second definition
};

int main() {
    MyClass obj;
    obj.nonVirtualFunction();  // Calling the non-virtual function
    return 0;
}
