// File: main.cpp
class Base {
public:
    virtual void myFunction() = 0;  // Pure virtual function
};

int main() {
    Base obj;  // Compilation error: cannot instantiate abstract class 'Base'
    return 0;
}
