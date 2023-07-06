// File.cpp
template <typename T>
struct MyClass {
    static void myFunction();
};

int main() {
    typename MyClass<int>::MySubClass obj;
    return 0;
}
