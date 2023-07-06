class MyClass {
public:
    MyClass(int value) {} // Constructor expecting an integer
};

int main() {
    MyClass obj("string"); // Passing a string instead of an integer
    return 0;
}
