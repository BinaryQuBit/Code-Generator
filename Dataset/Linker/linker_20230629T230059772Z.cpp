class MyClass {
public:
    friend void friendFunction(int);
};

void friendFunction(float) {  // Incompatible type declaration
    // Function implementation
}

int main() {
    friendFunction(42);  // Calling the friend function
    return 0;
}

