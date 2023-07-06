class MyClass {
public:
    operator int(); // Conversion operator declaration only
};

int main() {
    MyClass obj;
    int value = obj; // Using conversion operator without definition
    return 0;
}
