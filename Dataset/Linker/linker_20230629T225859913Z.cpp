// File.cpp
template <typename T>
struct MyClass {
    static void myFunction();
};

template <>
struct MyClass<int>;

int main() {
    MyClass<int>::myFunction();
    return 0;
}
