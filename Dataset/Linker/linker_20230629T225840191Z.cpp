// File.cpp
template <typename T>
struct MyClass {
    static void myFunction();
};

template <typename T>
struct MyClass<T>::MySubClass {};

template <>
struct MyClass<int>::MySubClass {};

int main() {
    typename MyClass<int>::MySubClass obj;
    return 0;
}
