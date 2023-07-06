// File: main.cpp
class MyClass {
public:
    MyClass operator+(const MyClass& other);
};

int main() {
    MyClass obj1, obj2;
    MyClass result = obj1 + obj2;  // Compilation error: no match for 'operator+' (operand types are 'MyClass' and 'MyClass')
    return 0;
}
