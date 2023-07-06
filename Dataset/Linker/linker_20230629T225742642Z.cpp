// File.cpp
template <typename T>
struct MyClass {
    static void myFunction();
};

int main() {
    MyClass<int>::myFunction();
    return 0;
}
