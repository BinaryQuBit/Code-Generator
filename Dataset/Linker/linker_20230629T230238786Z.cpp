class MyClass {
public:
    void nonVirtualFunction();  // Non-virtual member function declaration
};

int main() {
    MyClass obj;
    obj.nonVirtualFunction();  // Attempting to call the non-virtual function
    return 0;
}
