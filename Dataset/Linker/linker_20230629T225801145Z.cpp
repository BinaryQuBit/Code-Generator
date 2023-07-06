// File.cpp
template <typename T>
struct MyClass {
    static void myFunction();
};

template <typename T>
void MyClass<T>::myFunction() {}

template <>
void MyClass<int>::myFunction() {}

int main() {
    MyClass<int>::myFunction();
    return 0;
}
