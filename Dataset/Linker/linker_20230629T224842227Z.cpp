class MyClass {
public:
    ~MyClass() {} // Destructor definition 1
    ~MyClass() {} // Destructor definition 2
};

int main() {
    MyClass obj;
    return 0;
}
